// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestServerPacket.generated.h"

class AFPSProjectGameState;
class UFPSProjectGameInstance;
class AMatchingHUD;

/* 패킷 미리 테스트 하는 클래스 */
UCLASS()
class FPSPROJECT_API ATestServerPacket : public AActor
{
	GENERATED_BODY()
		
	ATestServerPacket();

	virtual void BeginPlay() override;

private:

	UPROPERTY()
	TObjectPtr<AFPSProjectGameState> GameState;

	UPROPERTY()
	TObjectPtr<UFPSProjectGameInstance> Inst;

	UPROPERTY()
	TObjectPtr<AMatchingHUD> MatchingHud;

public:	
	void TestRoomCreate();
};
