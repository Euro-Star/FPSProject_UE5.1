// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/MatchingGameMode.h"
#include "GameMode/MatchingHUD.h"

AMatchingGameMode::AMatchingGameMode() : Super()
{
	HUDClass = AMatchingHUD::StaticClass();
}
