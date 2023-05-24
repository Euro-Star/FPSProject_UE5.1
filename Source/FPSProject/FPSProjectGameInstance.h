// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include <SocketClientPluginUDPClient.h>
#include <PacketExecutor.h>
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

	UFUNCTION()
	void ConnectServer();

	void DisConnectServer();
	void ReConnectServer(FString ip, int32 tcpPort, int32 udpPort, int32 sessonid);


	UPROPERTY()
	class AFPSProjectCharacter* Player;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Debug)
	FString IP = "127.0.0.1";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Debug)
	int32 TCPPort = 1998;	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Debug)
	int32 UDPPort = 1999;


	UPROPERTY()
	FString ServerConnectID;

	void RecvPacket(FString packetName, TSharedPtr<FJsonObject> jsonData, FString connectID);

	TQueue<TSharedPtr<FRecvPacket_Wrapper>, EQueueMode::Mpsc> JsonQueue;

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
};