// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Base/WidgetBase.h"
#include "RoomWidget.generated.h"

/**
 * 
 */

class UScrollBox;
class UButton;

class URoomWidgetEntry;

UCLASS()
class FPSPROJECT_API URoomWidget : public UWidgetBase
{
	GENERATED_BODY()

	URoomWidget();

	virtual void NativeConstruct() override;

protected:
	UPROPERTY()
	bool bRoomMaster = false;

	UPROPERTY()
	int32 RoomNumber;

public:
	UPROPERTY(meta = (BindWidget))
	UScrollBox* UserList;

	UPROPERTY(meta = (BindWidget))
	UButton* Btn_GameStart;

	UPROPERTY()
	TArray<FString> IdList;

	UPROPERTY()
	TSubclassOf<URoomWidgetEntry> W_RoomEntry;

public:
	UFUNCTION()
	void OnclickedGameStart();

	void SetRoomStatus(bool _bRoomMaster, int32 _RoomNumber);
	void InitRoomUser(TArray<FString> Id);
	void AddRoomUser(FString Id);
};
