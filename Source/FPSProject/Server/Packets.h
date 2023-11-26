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
	int32 PlayerIndex;

	UPROPERTY()
	float RotationY;
};

USTRUCT()
struct FSendPacket_PlayerRotation
{
	GENERATED_BODY()

	PACKET_CONSTRUCT(PlayerRotation)

	UPROPERTY()
	int32 RoomNumber;

	UPROPERTY()
	int32 PlayerIndex;

	UPROPERTY()
	float RotationY;
};

USTRUCT()
struct FSendPacket_PlayerMove
{
	GENERATED_BODY()

	PACKET_CONSTRUCT(PlayerMove)

	UPROPERTY()
	int32 RoomNumber;

	UPROPERTY()
	int32 PlayerIndex;

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
	int32 PlayerIndex;

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
struct FRecvPacket_PlayerSpawn
{
	GENERATED_BODY()

	UPROPERTY()
	int32 PlayerIndex;

	UPROPERTY()
	TArray<FString> PlayerIds;

	UPROPERTY()
	TArray<int32> SpawnIndex;

	UPROPERTY()
	int32 PlayerNum;
};


USTRUCT()
struct FSendPacket_Login
{
	GENERATED_BODY()

	PACKET_CONSTRUCT(Login)

	UPROPERTY()
	FString Id;
};

USTRUCT()
struct FSendPacket_RoomCreate
{
	GENERATED_BODY()

	PACKET_CONSTRUCT(RoomCreate)

	UPROPERTY()
	FString Title;

	UPROPERTY()
	FString Id;
};

USTRUCT()
struct FRecvPacket_RoomCreate
{
	GENERATED_BODY()

	UPROPERTY()
	bool bCreate;

	UPROPERTY()
	int32 RoomNumber;
};

USTRUCT()
struct FSendPacket_RequestRoomList
{
	GENERATED_BODY()

	PACKET_CONSTRUCT(RequestRoomList)
};

USTRUCT()
struct FRoomInfo
{
	GENERATED_BODY()

	UPROPERTY()
	FString Title;

	UPROPERTY()
	FString Id;

	UPROPERTY()
	int32 RoomNumber;

	UPROPERTY()
	int32 NumberOfPeople;
};

USTRUCT()
struct FRecvPacket_RoomList
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<FRoomInfo> RoomList;
};

USTRUCT()
struct FSendPacket_GameStartButton
{
	GENERATED_BODY()

	PACKET_CONSTRUCT(GameStartButton)
	
	UPROPERTY()
	int32 RoomNumber;
};

USTRUCT()
struct FRecvPacket_GameStartButton
{
	GENERATED_BODY()

};

USTRUCT()
struct FSendPacket_RoomEnter
{
	GENERATED_BODY()

	PACKET_CONSTRUCT(RoomEnter)

	UPROPERTY()
	FString PlayerId;

	UPROPERTY()
	int32 RoomNumber;
};

USTRUCT()
struct FRecvPacket_RoomEnter
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<FString> PlayerId;

	UPROPERTY()
	int32 RoomNumber;
};

USTRUCT()
struct FRecvPacket_RoomInUser
{
	GENERATED_BODY()

	UPROPERTY()
	FString PlayerId;
};

USTRUCT()
struct FSendPacket_LoadingComplete
{
	GENERATED_BODY()

	PACKET_CONSTRUCT(LoadingComplete)

	UPROPERTY()
	FString PlayerId;

	UPROPERTY()
	int32	RoomNumber;
};

USTRUCT()
struct FSendPacket_ChangeHealth
{
	GENERATED_BODY()

	PACKET_CONSTRUCT(ChangeHealth)

	UPROPERTY()
	int32 PlayerIndex;

	UPROPERTY()
	int32 RoomNumber;

	// 체력회복 및 데이지 값
	UPROPERTY()
	int32 Value;
};

USTRUCT()
struct FRecvPacket_ChangeHealth
{
	GENERATED_BODY()

	UPROPERTY()
	int32 PlayerIndex;

	UPROPERTY()
	int32 CurrentHealth;
};

USTRUCT()
struct FRecvPacket_Die
{
	GENERATED_BODY()

	UPROPERTY()
	int32 PlayerIndex;

	UPROPERTY()
	int32 Rank;
};

USTRUCT()
struct FRecvPacket_GameEnd
{
	GENERATED_BODY()

};