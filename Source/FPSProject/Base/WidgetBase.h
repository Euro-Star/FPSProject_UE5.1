// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <FPSProjectGameInstance.h>
#include <GameMode/MatchingHUD.h>
#include "WidgetBase.generated.h"

/**
 * 
 */

UCLASS()
class FPSPROJECT_API UWidgetBase : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

public:
	UPROPERTY()
	UFPSProjectGameInstance* Inst;

	UPROPERTY()
	AMatchingHUD* Hud;
};
