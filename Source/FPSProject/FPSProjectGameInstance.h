// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include <SocketClientPluginUDPClient.h>
#include <PacketExecutor.h>
#include <JsonObjectConverter.h>
#include "FPSProjectGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class FPSPROJECT_API UFPSProjectGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	virtual void Init() override;
	/* Server Code */
	UFUNCTION()
	void ConnectServer();

	void DisConnectServer();
	void ReConnectServer(FString ip, int32 tcpPort, int32 udpPort, int32 sessonid);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Debug)
	FString IP = "43.201.129.34";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Debug)
	int32 TCPPort = 1998;	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Debug)
	int32 UDPPort = 1999;


	UPROPERTY()
	FString ServerConnectID = "1";

	void RecvPacket(FString packetName, TSharedPtr<FJsonObject> jsonData, FString connectID);

	TQueue<TSharedPtr<FRecvPacket_Wrapper>, EQueueMode::Mpsc> JsonQueue;

	/* Server Code End */

	UPROPERTY()
	class AFPSProjectCharacter* Player;

	UPROPERTY()
	FString Id;

	UPROPERTY()
	int32 CurrentRoomNumber;

public:
	template<typename T>
	void SendData(T data)
	{
		FString JSONPayload;
		FString PacketName;
		if (FJsonObjectConverter::UStructToJsonObjectString(data, JSONPayload, 0, 0, 0, nullptr, false))
		{
			if (data.isTCP)
			{
				PacketName = data.packetname;
				USocketClientBPLibrary::GetSocketClientTarget()->SocketClientSendTCP(ServerConnectID, PacketName, JSONPayload);
			}
			else
			{
				PacketName = data.packetname;
				USocketClientBPLibrary::GetSocketClientTarget()->SocketClientSendUDP(ServerConnectID, PacketName, JSONPayload);
			}
		}
	}

public:

	UFUNCTION(BlueprintCallable)
	void EnterGame();

	void SetId(FString _Id);
	FString GetId();
};