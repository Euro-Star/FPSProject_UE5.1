// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/MatchingHUD.h"
#include "Widget/LoginWidget.h"
#include "Widget/WaitingRoomWidget.h"
#include "Widget/CreateRoomWidget.h"
#include "Widget/RoomWidget.h"
#include "Server/Packets.h"
#include "Manager/WidgetManager.h"

AMatchingHUD::AMatchingHUD()
{
	
}

void AMatchingHUD::DrawHUD()
{
	Super::DrawHUD();
}

void AMatchingHUD::BeginPlay()
{
	Super::BeginPlay();

	UWidgetManager::Get()->AddWidget(EWidget::Login);
}


