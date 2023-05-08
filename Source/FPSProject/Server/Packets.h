#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Packets.generated.h"


#define PACKET_CONSTRUCT(packetId)\
UPROPERTY()\
FString packetname = #packetId;\
UPROPERTY()\
bool isTCP = true; \

#define PACKET_CONSTRUCT_UDP(packetId)\
UPROPERTY()\
FString packetname = #packetId;\
UPROPERTY()\
bool isTCP = false; \

/////////////////////////////////////////////////////////////
USTRUCT()
struct FRecvPacket_Wrapper
{
	GENERATED_BODY()

	UPROPERTY()
	FString packetname;

	TSharedPtr<FJsonObject> Packet;
};
/////////////////////////////////////////////////////////////


USTRUCT()
struct FSendPacket_Login
{
	GENERATED_BODY()
	
	PACKET_CONSTRUCT(Login)

	UPROPERTY()
	FString				packetid;
};

USTRUCT()
struct FRecvPacket_Login
{
	GENERATED_BODY()

	UPROPERTY()
	FString					Playerid;
};

USTRUCT()
struct FSendPacket_NickNameSet
{
	GENERATED_BODY()

	PACKET_CONSTRUCT(NickNameSet)

	UPROPERTY()
	FString				packetid;
};