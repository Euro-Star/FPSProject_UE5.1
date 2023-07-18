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

UCLASS()
class FPSPROJECT_API URoomWidget : public UWidgetBase
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;

public:
	UPROPERTY(meta = (BindWidget))
	UScrollBox* UserList;

	UPROPERTY(meta = (BindWidget))
	UButton* Btn_GameStart;

	UPROPERTY()
	TArray<FString> IdList;

	UPROPERTY()
	bool bRoomMaster = false;

public:
	UFUNCTION()
	void OnclickedGameStart();
	
};
