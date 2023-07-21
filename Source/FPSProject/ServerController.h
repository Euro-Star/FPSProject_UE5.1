// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PacketExecutor.h"
#include "ServerController.generated.h"

/**
 * 
 */

class AFPSProjectGameState;
class UFPSProjectGameInstance;
class AMatchingHUD;

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
	void TestPacket(FRecvPacket_Wrapper& packetWrapper); //FPacketHandlerFunc�� �Լ�

	UFUNCTION()
	void EnterGame(FRecvPacket_Wrapper& packetWrapper);

	UFUNCTION()
	void PlayerSpawn(FRecvPacket_Wrapper& packetWrapper);

	UFUNCTION()
	void PlayerMove(FRecvPacket_Wrapper& packetWrapper);
	
	UFUNCTION()
	void PlayerRotation(FRecvPacket_Wrapper& packetWrapper);

	UFUNCTION()
	void RoomCreate(FRecvPacket_Wrapper& packetWrapper);

private:
	UPROPERTY()
	TMap<FString, FPacketHandlerFunc> HandleFunc;

	UPROPERTY()
	TObjectPtr<AFPSProjectGameState> GameState;

	UPROPERTY()
	TObjectPtr<UFPSProjectGameInstance> Inst;

	UPROPERTY()
	TObjectPtr<AMatchingHUD> MatchingHud;
	
};
