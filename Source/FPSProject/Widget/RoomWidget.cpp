// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/RoomWidget.h"
#include "Components/Button.h"
#include "Components/ScaleBox.h"
#include "Server/Packets.h"

void URoomWidget::NativeConstruct()
{
	Super::NativeConstruct();

	Btn_GameStart->OnClicked.AddUniqueDynamic(this, &URoomWidget::OnclickedGameStart);
}

void URoomWidget::OnclickedGameStart()
{
	FSendPacket_GameStart S_GameStart;

	// 게임 시작 필요한거 상의 하기

	Inst->SendData(S_GameStart);
}
