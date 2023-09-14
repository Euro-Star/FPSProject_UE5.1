// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Base/WidgetBase.h"
#include "LoadingWidget.generated.h"

/**
 * 
 */
class UProgressBar;

UCLASS()
class FPSPROJECT_API ULoadingWidget : public UWidgetBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(meta = (BindWidget))
	UProgressBar* LoadingBar;

	UPROPERTY()
	float Percent = 0.0f;

	UPROPERTY()
	FTimerHandle LoadingTimer;

public:
	UFUNCTION()
	void UpdateLoadingBar(float _Percent, bool bComplete = false);

	UFUNCTION()
	void FakeLoading();
};
