// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Base/WidgetBase.h"
#include "GamePlayWidget.generated.h"

class UImage;
class UProgressBar;
class UTextBlock;
class AFPSProjectCharacter;

UCLASS()
class FPSPROJECT_API UGamePlayWidget : public UWidgetBase
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;
public:

	UPROPERTY(meta = (BindWidget))
	UImage* GunType;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Ammo;

	UPROPERTY()
	AFPSProjectCharacter* Player;

	UPROPERTY(meta = (BindWidget))
	UProgressBar* HpBar;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Hp;

public:
	UFUNCTION()
	void UpdateAmmoText(FString CurrnetAmmo);

	UFUNCTION()
	void UpdateHp(int32 Hp);
};
