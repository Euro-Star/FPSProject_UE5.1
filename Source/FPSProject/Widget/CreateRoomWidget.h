// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Base/WidgetBase.h"
#include "CreateRoomWidget.generated.h"

/**
 * 
 */

class UButton;
class UEditableTextBox;

UCLASS()
class FPSPROJECT_API UCreateRoomWidget : public UWidgetBase
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;
	
public:

	UPROPERTY(meta = (BindWidget))
	UButton* Btn_Create;

	UPROPERTY(meta = (BindWidget))
	UButton* Btn_Close;

	UPROPERTY(meta = (BindWidget))
	UEditableTextBox* Edit_Title;

public:
	UFUNCTION()
	void OnclickedCreate();

	UFUNCTION()
	void OnclickedClose();

};
