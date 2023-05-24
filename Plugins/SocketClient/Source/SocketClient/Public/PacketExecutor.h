// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include <Templates/SharedPointer.h>
#include "PacketExecutor.generated.h"

USTRUCT()
struct FRecvPacket_Wrapper
{
	GENERATED_BODY()

	UPROPERTY()
	FString packetname;

	TSharedPtr<FJsonObject> Packet;
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FPacketHandlerFunc, FRecvPacket_Wrapper&, packetWrapper);

UINTERFACE(MinimalAPI)
class UPacketExecutor : public UInterface
{
	GENERATED_BODY()
};

class SOCKETCLIENT_API IPacketExecutor
{
	GENERATED_BODY()
public:
	void RecvPacketQueueExcute(TQueue<TSharedPtr<FRecvPacket_Wrapper>, EQueueMode::Mpsc>& JsonQueue, TMap<FString, FPacketHandlerFunc>& FuncDele);

public:
	UFUNCTION()
	virtual void PacketFunction(FRecvPacket_Wrapper& packetWrapper) {}
};

#define INIT_FUNCTION(FuncName)\
TSharedPtr<FRecvPacket_##FuncName, ESPMode::ThreadSafe> ptr = MakeShareable(new FRecvPacket_##FuncName());\
FJsonObjectConverter::JsonObjectToUStruct<FRecvPacket_##FuncName>(packetWrapper.Packet.ToSharedRef(), ptr.Get(), 0, 0);
