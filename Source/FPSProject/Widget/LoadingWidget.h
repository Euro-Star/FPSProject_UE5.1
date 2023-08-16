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

public:
	UFUNCTION()
	void UpdateLoadingBar(float Percent);
};
