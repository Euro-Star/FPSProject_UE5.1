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

USTRUCT()
struct FRecvPacket_PlayerRotation
{
	GENERATED_BODY()

	UPROPERTY()
	int32 PlayerId;

	UPROPERTY()
	float RotationY;
};

USTRUCT()
struct FSendPacket_PlayerRotation
{
	GENERATED_BODY()

	PACKET_CONSTRUCT(PlayerRotation)

	UPROPERTY()
	int32 PlayerId;

	UPROPERTY()
	float RotationY;
};

USTRUCT()
struct FSendPacket_PlayerMove
{
	GENERATED_BODY()

	PACKET_CONSTRUCT(PlayerMove)

	UPROPERTY()
	int32 PlayerId;

	// 0: Up, 1: Down, 2: Left, 3: Right
	UPROPERTY() 
	int32 InputKey;

	// Press 인지 Release 인지 구분
	UPROPERTY()
	bool IsPress;

	UPROPERTY()
	FVector CurrentLocation;
};

USTRUCT()
struct FRecvPacket_PlayerMove
{
	GENERATED_BODY()

	UPROPERTY()
	int32 PlayerId;

	// 0: Up, 1: Down, 2: Left, 3: Right
	UPROPERTY() 
	int32 InputKey;

	// Press 인지 Release 인지 구분
	UPROPERTY()
	bool IsPress;

	UPROPERTY()
	FVector CurrentLocation;
};

USTRUCT()
struct FSendPacket_PlayerSpawn
{
	GENERATED_BODY()

	PACKET_CONSTRUCT(PlayerSpawn)

	UPROPERTY()
	TArray<int32> SpawnIndex;
};

USTRUCT()
struct FRecvPacket_PlayerSpawn
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<int32> SpawnIndex;
};

USTRUCT()
struct FSendPacket_EnterGame
{
	GENERATED_BODY()

	PACKET_CONSTRUCT(EnterGame)
};

USTRUCT()
struct FRecvPacket_EnterGame
{
	GENERATED_BODY()

	UPROPERTY()
	int32 PlayerId;
};

USTRUCT()
struct FSendPacket_GameStart
{
	GENERATED_BODY()

	PACKET_CONSTRUCT(GameStart)
};

USTRUCT()
struct FSendPacket_Login
{
	GENERATED_BODY()

	PACKET_CONSTRUCT(Login)

	FString Id;
};