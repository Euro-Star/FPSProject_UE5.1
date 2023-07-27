// Fill out your copyright notice in the Description page of Project Settings.


#include "TestServerPacket.h"
#include "Kismet/GameplayStatics.h"
#include <FPSProjectGameInstance.h>
#include <Server/Packets.h>
#include <JsonObjectConverter.h>
#include <FPSProjectGameState.h>
#include <FPSGameplayStatics.h>
#include <GameMode/MatchingHUD.h>
#include <Character/FPSProjectCharacter.h>
#include <Character/OtherCharacter.h>
#include <Manager/SpawnPoint.h>
#include <Widget/RoomWidget.h>

// Sets default values
ATestServerPacket::ATestServerPacket()
{

}

void ATestServerPacket::BeginPlay()
{
	Super::BeginPlay();

	GameState = Cast<AFPSProjectGameState>(UGameplayStatics::GetGameState(GetWorld()));
	Inst = Cast<UFPSProjectGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
}

void ATestServerPacket::TestRoomCreate()
{
	if (!MatchingHud)
	{
		MatchingHud = Cast<AMatchingHUD>(UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetHUD());
	}

	MatchingHud->W_Room->SetRoomStatus(true, 1);
	MatchingHud->AddScreen(EMatchingWidget::Room);
	MatchingHud->RemoveScreen(EMatchingWidget::WaitingRoom);
}



