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
class UWaitingRoomWidgetEntry;

struct FRoomInfo;

UCLASS()
class FPSPROJECT_API UWaitingRoomWidget : public UWidgetBase
{
	GENERATED_BODY()

	UWaitingRoomWidget();

	virtual void NativeConstruct() override;
	
public:
	//UPROPERTY()
	//TArray<FRoomInfo> RoomInfoArray;

	UPROPERTY(meta = (BindWidget))
	UScrollBox* RoomList;

	UPROPERTY(meta = (BindWidget))
	UButton* Btn_CreateRoom;

	UPROPERTY(meta = (BindWidget))
	UButton* Btn_RefreshRoom;

private:
	UPROPERTY()
	TSubclassOf<UWaitingRoomWidgetEntry> W_WaitingRoomEntry;

	//UPROPERTY()
	//TArray<UWaitingRoomWidgetEntry> RoomEntryList;

	UPROPERTY()
	TArray<FRoomInfo> RoomInfoArray;
public:
	UFUNCTION()
	void OnclickedCreateRoom();

	UFUNCTION()
	void OnclickedRefreshRoom();

	UFUNCTION()
	void InitRoomList(TArray<FRoomInfo> _RoomInfo);

	UFUNCTION()
	void RefreshRoomList();
};
