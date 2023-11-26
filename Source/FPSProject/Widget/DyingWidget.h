// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Base/WidgetBase.h"
#include "DyingWidget.generated.h"

class UButton;
class UTextBlock;

UCLASS()
class FPSPROJECT_API UDyingWidget : public UWidgetBase
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;

public:
	UPROPERTY(meta = (BindWidget))
	UButton* Btn_ToLobby;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Rank;

public:

	UFUNCTION()
	void OnclickedToLobby();

};
