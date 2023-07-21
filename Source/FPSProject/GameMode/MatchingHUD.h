// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Enum/GameEnum.h"
#include "MatchingHUD.generated.h"

/**
 * 
 */
class UWidgetBase;
class ULoginWidget;
class UWaitingRoomWidget;
class UCreateRoomWidget;
class URoomWidget;

UCLASS()
class FPSPROJECT_API AMatchingHUD : public AHUD
{
	GENERATED_BODY()

	AMatchingHUD();

public:

	virtual void DrawHUD() override;
	virtual void BeginPlay() override;

	UFUNCTION()
	void AddScreen(EMatchingWidget _Widget);

	UFUNCTION()
	void RemoveScreen(EMatchingWidget _Widget);

public:
	UPROPERTY()
	ULoginWidget* W_Login;

	UPROPERTY()
	UWaitingRoomWidget* W_WaitingRoom;

	UPROPERTY()
	UCreateRoomWidget* W_CreateRoom;

	UPROPERTY()
	URoomWidget* W_Room;

};
