// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlayWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Character/FPSProjectCharacter.h"
#include "Components/TextBlock.h"

void UGamePlayWidget::NativeConstruct()
{
	Player = Cast<AFPSProjectCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
}

void UGamePlayWidget::UpdateAmmoText(FString CurrentAmmo)
{
	Text_Ammo->SetText(FText::FromString(CurrentAmmo));
}
