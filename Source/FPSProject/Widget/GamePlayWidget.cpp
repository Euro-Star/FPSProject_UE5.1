// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlayWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Character/FPSProjectCharacter.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"

void UGamePlayWidget::NativeConstruct()
{
	Player = Cast<AFPSProjectCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	Text_Hp->SetText(FText::FromString(FString::FromInt(100) + FString(" / ") + FString("100")));
}

void UGamePlayWidget::UpdateAmmoText(FString CurrentAmmo)
{
	Text_Ammo->SetText(FText::FromString(CurrentAmmo));
}

void UGamePlayWidget::UpdateHp(int32 Hp)
{
	Text_Hp->SetText(FText::FromString(FString::FromInt(Hp) + FString(" / ") + FString("100")));
	HpBar->SetPercent(float(Hp) / 100.0f);
}
