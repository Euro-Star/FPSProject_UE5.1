// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/DyingWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Game/FPSProjectGameInstance.h"
#include "Kismet/GameplayStatics.h" 

void UDyingWidget::NativeConstruct()
{
	Super::NativeConstruct();

	Btn_ToLobby->OnClicked.AddUniqueDynamic(this, &UDyingWidget::OnclickedToLobby);
}

void UDyingWidget::OnclickedToLobby()
{
	UFPSProjectGameInstance::Getinstance()->InitGameInfo();

	UGameplayStatics::OpenLevel(this, "Map_Matching", true);
}

void UDyingWidget::SetTextRank(int32 PlayerNum, int32 Rank)
{
	Text_Rank->SetText(FText::FromString(FString::FromInt(Rank) + "/" + FString::FromInt(PlayerNum)));
}

