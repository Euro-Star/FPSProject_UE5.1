// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MatchingGameMode.generated.h"

/**
 * 
 */
UCLASS()
class FPSPROJECT_API AMatchingGameMode : public AGameModeBase
{
	GENERATED_BODY()

	AMatchingGameMode();

public:
	virtual void BeginPlay() override;
};
