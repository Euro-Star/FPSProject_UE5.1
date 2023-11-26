// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/DyingWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Game/FPSProjectGameInstance.h"
#include "Kismet/GameplayStatics.h" 
#include "Server/Packets.h"
#include "Game/FPSProjectGameState.h"

void UDyingWidget::NativeConstruct()
{
	Super::NativeConstruct();

	Btn_ToLobby->OnClicked.AddUniqueDynamic(this, &UDyingWidget::OnclickedToLobby);
}

void UDyingWidget::OnclickedToLobby()
{
	FSendPacket_BackToLobby S_BackToLobby;

	S_BackToLobby.PlayerIndex = AFPSProjectGameState::Get()->GetPlayerIndex();
	S_BackToLobby.RoomNumber = UFPSProjectGameInstance::Getinstance()->GetRoomNumber();

	UFPSProjectGameInstance::Getinstance()->SendData(S_BackToLobby);
}

void UDyingWidget::SetTextRank(int32 PlayerNum, int32 Rank)
{
	Text_Rank->SetText(FText::FromString(FString::FromInt(Rank) + "/" + FString::FromInt(PlayerNum)));
}

