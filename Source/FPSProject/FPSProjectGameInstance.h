// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
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

	void ConnectServer();
	void DisConnectServer();
	void ReConnectServer(FString ip, int32 tcpPort, int32 udpPort, int32 sessonid);


	UPROPERTY()
	class AFPSProjectCharacter* Player;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Debug)
	FString IP = "127.0.0.1";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Debug)
	int32 Port = 1998;

	// Sockets
	class TCPSocketClient* TCPSocketComp = nullptr;
	class UDPSocketClient* UDPSocketComp = nullptr;

	// SendData
	template<typename T>
	void SendData(T data)
	{
		if (data.isTCP)
		{
			if (TCPSocketComp)
				TCPSocketComp->SendData(data);
		}
		else
		{
			if (UDPSocketComp)
				UDPSocketComp->SendData(data);
		}
	}
};
