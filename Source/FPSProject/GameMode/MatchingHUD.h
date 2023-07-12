// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MatchingHUD.generated.h"

/**
 * 
 */
class ULoginWidget;
class UWaitingRoomWidget;

UCLASS()
class FPSPROJECT_API AMatchingHUD : public AHUD
{
	GENERATED_BODY()

	AMatchingHUD();

public:

	virtual void DrawHUD() override;
	virtual void BeginPlay() override;

public:
	ULoginWidget* W_Login;
	UWaitingRoomWidget* W_WaitingRoom;
};
