// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Base/WidgetBase.h"
#include "WaitingRoomWidget.generated.h"

/**
 * 
 */
class UButton;
class UScrollBox;

struct FRoomInfo;

UCLASS()
class FPSPROJECT_API UWaitingRoomWidget : public UWidgetBase
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;
	
public:
	//UPROPERTY()
	//TArray<FRoomInfo> RoomInfoArray;

	UPROPERTY(meta = (BindWidget))
	UScrollBox* RoomList;

	UPROPERTY(meta = (BindWidget))
	UButton* Btn_CreateRoom;

public:
	UFUNCTION()
	void ClickedCreateRoom();
};
