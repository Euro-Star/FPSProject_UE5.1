// Fill out your copyright notice in the Description page of Project Settings.


#include "Base/WidgetBase.h"
#include "Kismet/GameplayStatics.h"

void UWidgetBase::NativeConstruct()
{
	Super::NativeConstruct();

	Inst = Cast<UFPSProjectGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	Hud = Cast<AMatchingHUD>(UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetHUD());
}
