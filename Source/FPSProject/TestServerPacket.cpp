// Fill out your copyright notice in the Description page of Project Settings.


#include "TestServerPacket.h"
#include "Kismet/GameplayStatics.h"
#include <Game/FPSProjectGameInstance.h>
#include <Server/Packets.h>
#include <JsonObjectConverter.h>
#include <Game/FPSProjectGameState.h>
#include <Game/FPSGameplayStatics.h>
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
}

void ATestServerPacket::TestRoomCreate()
{
	//if (!MatchingHud)
	//{
	//	MatchingHud = Cast<AMatchingHUD>(UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetHUD());
	//}
	//
	//MatchingHud->W_Room->SetRoomStatus(true);
	//MatchingHud->AddScreen(EMatchingWidget::Room);
	//MatchingHud->RemoveScreen(EMatchingWidget::WaitingRoom);
}



