// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/MatchingGameMode.h"
#include "GameMode/MatchingHUD.h"
#include "Kismet/GameplayStatics.h"
#include "ServerController.h"

AMatchingGameMode::AMatchingGameMode() : Super()
{
	HUDClass = AMatchingHUD::StaticClass();
	PlayerControllerClass = AServerController::StaticClass();
}

void AMatchingGameMode::BeginPlay()
{
	UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetShowMouseCursor(true);
}
