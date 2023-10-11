// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSProjectGameInstance.h"
#include <SocketClient/Public/PacketExecutor.h>
#include "Server/Packets.h"
#include "TestServerPacket.h"

UFPSProjectGameInstance* UFPSProjectGameInstance::Inst;
UFPSProjectGameInstance::UFPSProjectGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}
UFPSProjectGameInstance* UFPSProjectGameInstance::Getinstance()
{
	return IsValid(Inst) ? Inst : nullptr;
}

void UFPSProjectGameInstance::Init()
{
	Super::Init();

	Inst = this;

	ConnectServer();

	USocketClientBPLibrary::GetSocketClientTarget()->OnReceiveTCPMessageEventDelegate.AddUObject(this, &UFPSProjectGameInstance::RecvPacket);
	USocketClientBPLibrary::GetSocketClientTarget()->OnReceiveUDPMessageEventDelegate.AddUObject(this, &UFPSProjectGameInstance::RecvPacket);

	TestServerPack = GetWorld()->SpawnActor<ATestServerPacket>(ATestServerPacket::StaticClass());
}

void UFPSProjectGameInstance::ConnectServer()
{
	USocketClientBPLibrary::GetSocketClientTarget()->ConnectTCPAndUDP(IP, TCPPort, UDPPort, ServerConnectID);

}

void UFPSProjectGameInstance::DisConnectServer()
{
}

void UFPSProjectGameInstance::ReConnectServer(FString ip, int32 tcpPort, int32 udpPort, int32 sessonid)
{
}

void UFPSProjectGameInstance::RecvPacket(FString packetName, TSharedPtr<FJsonObject> jsonData, FString connectID)
{
	if (connectID == ServerConnectID)
	{
		TSharedPtr<FRecvPacket_Wrapper> jsonWrap = MakeShareable(new FRecvPacket_Wrapper());
		jsonWrap->Packet = jsonData;
		jsonWrap->packetname = packetName;

		if (!JsonQueue.Enqueue(jsonWrap))
		{
			UE_LOG(LogTemp, Error, TEXT("ERROR Failed to Packet Enqueue"));
		}
	}
}

ATestServerPacket* UFPSProjectGameInstance::GetTest()
{
	return TestServerPack;
}

void UFPSProjectGameInstance::SetId(FString _Id)
{
	Id = _Id;
}

FString UFPSProjectGameInstance::GetId()
{
	return Id;
}

void UFPSProjectGameInstance::SetRoomNumber(int32 RoomNumber)
{
	CurrentRoomNumber = RoomNumber;
}

int32 UFPSProjectGameInstance::GetRoomNumber()
{
	return CurrentRoomNumber;
}

void UFPSProjectGameInstance::InitGameInfo()
{
	CurrentRoomNumber = -1;
}
