// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/WaitingRoomWidget.h"
#include "Widget/CreateRoomWidget.h"
#include "Components/ScrollBox.h"
#include "Server/Packets.h"
#include "Components/Button.h"

void UWaitingRoomWidget::NativeConstruct()
{
	Super::NativeConstruct();

	Btn_CreateRoom->OnClicked.AddUniqueDynamic(this, &UWaitingRoomWidget::OnclickedCreateRoom);
}

void UWaitingRoomWidget::OnclickedCreateRoom()
{
	Hud->W_CreateRoom->AddToViewport();
}
