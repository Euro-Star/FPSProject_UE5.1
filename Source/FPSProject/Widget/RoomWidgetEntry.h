// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Base/WidgetBase.h"
#include "RoomWidgetEntry.generated.h"

/**
 * 
 */
class UTextBlock;

UCLASS()
class FPSPROJECT_API URoomWidgetEntry : public UWidgetBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY()
	FString Id;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Id;

public:
	void SetTextId(FString _Id);
};
