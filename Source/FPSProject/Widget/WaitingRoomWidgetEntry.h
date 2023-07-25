// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Base/WidgetBase.h"
#include "WaitingRoomWidgetEntry.generated.h"

/**
 * 
 */
class UTextBlock;
class UButton;
struct FRoomInfo;

UCLASS()
class FPSPROJECT_API UWaitingRoomWidgetEntry : public UWidgetBase
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;
public:
	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Title;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_NumberOfPeople;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_RoomNumber;

	UPROPERTY(meta = (BindWidget))
	UButton* Btn_RoomEnter;

	UPROPERTY()
	int32 RoomNumber;

public:
	UFUNCTION()
	void SetRoomInfo(FRoomInfo RoomInfo);

	UFUNCTION()
	void OnclickedRoomEnter();
};
