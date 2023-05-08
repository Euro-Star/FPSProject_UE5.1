// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TCPSocketClient.h"
#include "Packets.h"
#include "ServerController.generated.h"

// Dynamic = 블루프린트 , Multicast = 함수하나에 여러개 넣게,
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPacketHandlerFunc, FRecvPacket_Wrapper&, Packet);

UCLASS()
class FPSPROJECT_API AServerController : public APlayerController
{
    GENERATED_BODY()

private:
    TCPSocketClient* TcpClient;

public:
    AServerController();

    virtual void BeginPlay() override;

    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;


    UPROPERTY()
    TMap<FString, FPacketHandlerFunc> HandleFunc;

    virtual void Tick(float DeltaTime) override;

    void SendDataToServer(const TArray<uint8>& Data);

    FString FBytesToString(const TArray<uint8>& InArray);

	UFUNCTION()
	void PacketFunction(FRecvPacket_Wrapper& packetWrapper) {}
};

#define INIT_FUNCTION(FuncName)\
TSharedPtr<FRecvPacket_##FuncName, ESPMode::ThreadSafe> ptr = MakeShareable(new FRecvPacket_##FuncName());\
FJsonObjectConverter::JsonObjectToUStruct<FRecvPacket_##FuncName>(packetWrapper.Packet.ToSharedRef(), ptr.Get(), 0, 0);

#define INIT_RECVPACKET(ThisClass, FuncName)\
{\
	FPacketHandlerFunc tempFunc;\
	tempFunc.AddDynamic(this, &ThisClass::FuncName);\
	HandleFunc.Add(#FuncName, tempFunc);\
}

#define INIT_PACKETS(ThisClass)\
for (uint32 i = 0; i < (uint32)EPacketID::MAX; i++)\
{\
	FString temp = "ThisClass::" + Helper::EnumToString("EPacketID", i);\
	FName FunctionName = STATIC_FUNCTION_FNAME(*temp);\
	\
	if (FindFunction(FunctionName))\
	{\
		FPacketHandlerFunc tempFunc;\
		tempFunc.__Internal_AddDynamic(this, &ThisClass::PacketFunction, FunctionName);\
		HandleFunc[i] = tempFunc;\
	}\
}