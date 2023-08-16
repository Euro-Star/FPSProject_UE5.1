// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Enum/GameEnum.h"
#include "MatchingHUD.generated.h"

/**
 * 
 */

UCLASS()
class FPSPROJECT_API AMatchingHUD : public AHUD
{
	GENERATED_BODY()

	AMatchingHUD();

public:

	virtual void DrawHUD() override;
	virtual void BeginPlay() override;
};
