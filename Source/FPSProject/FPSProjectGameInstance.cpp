// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSProjectGameInstance.h"
#include <SocketClient/Public/PacketExecutor.h>
#include "Server/Packets.h"

void UFPSProjectGameInstance::Init()
{
	Super::Init();

	ConnectServer();

	USocketClientBPLibrary::GetSocketClientTarget()->OnReceiveTCPMessageEventDelegate.AddUObject(this, &UFPSProjectGameInstance::RecvPacket);
	USocketClientBPLibrary::GetSocketClientTarget()->OnReceiveUDPMessageEventDelegate.AddUObject(this, &UFPSProjectGameInstance::RecvPacket);
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

void UFPSProjectGameInstance::EnterGame()
{
	FSendPacket_EnterGame S_EnterGame;

	SendData(S_EnterGame);
}
