// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Packets.generated.h"

#define PACKET_CONSTRUCT(packetId)\
FSendPacket_##packetId()\
{\
packetname = #packetId;\
}\
UPROPERTY()\
FString packetname;\
UPROPERTY()\
bool isTCP = true; \

#define PACKET_CONSTRUCT_UDP(packetId)\
FSendPacket_##packetId()\
{\
packetname = #packetId;\
}\
UPROPERTY()\
FString packetname;\
UPROPERTY()\
bool isTCP = false; \


USTRUCT()
struct FSendPacket_TestPacket
{
	GENERATED_BODY()

	PACKET_CONSTRUCT(TestPacket)

	UPROPERTY()
	FString					msg;
};

USTRUCT()
struct FRecvPacket_TestPacket
{
	GENERATED_BODY()

	UPROPERTY()
	FString		msg;
};