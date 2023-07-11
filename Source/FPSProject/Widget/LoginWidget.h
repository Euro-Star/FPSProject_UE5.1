// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Base/WidgetBase.h"
#include "LoginWidget.generated.h"

/**
 * 
 */

class UFPSProjectGameInstance;
class UEditableTextBox;
class UButton;

UCLASS()
class FPSPROJECT_API ULoginWidget : public UWidgetBase
{
	GENERATED_BODY()
	
	virtual void NativeConstruct() override;
public:

	UPROPERTY(meta = (BindWidget))
	UEditableTextBox* Edit_Id;

	UPROPERTY(meta = (BindWidget))
	UButton* Btn_Login;

	UPROPERTY()
	UFPSProjectGameInstance* Inst;


private:

	void OnclickedLogin();
};
