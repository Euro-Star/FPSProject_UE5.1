// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSProjectGameMode.h"
#include "FPSProjectHUD.h"
#include "Character/FPSProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "FPSProjectGameState.h"
#include <Server/ServerController.h>

AFPSProjectGameMode::AFPSProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprint/Character/BP_Player"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSProjectHUD::StaticClass();
	GameStateClass = AFPSProjectGameState::StaticClass();
	PlayerControllerClass = AServerController::StaticClass();
}