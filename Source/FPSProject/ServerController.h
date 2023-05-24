// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PacketExecutor.h"
#include "ServerController.generated.h"

/**
 * 
 */
UCLASS()
class FPSPROJECT_API AServerController : public APlayerController, public IPacketExecutor
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;


	UFUNCTION(BlueprintCallable)
	void TestSendMSG(FString msg);

	UFUNCTION()
	void TestPacket(FRecvPacket_Wrapper& packetWrapper); //FPacketHandlerFuncÀÇ ÇÔ¼ö

private:
	UPROPERTY()
	TMap<FString, FPacketHandlerFunc> HandleFunc;
	
};
