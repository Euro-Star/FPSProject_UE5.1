// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Base/WidgetBase.h"
#include "GamePlayWidget.generated.h"

/**
 * 
 */
UCLASS()
class FPSPROJECT_API UGamePlayWidget : public UWidgetBase
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;
public:

	UPROPERTY(meta = (BindWidget))
	class UImage* GunType;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* Text_Ammo;

	UPROPERTY()
	class AFPSProjectCharacter* Player;

public:
	UFUNCTION()
	void UpdateAmmoText(FString CurrnetAmmo);
};
