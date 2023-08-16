// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/CreateRoomWidget.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Server/Packets.h"
#include "TestServerPacket.h"


void UCreateRoomWidget::NativeConstruct()
{
	Super::NativeConstruct();

	Btn_Create->OnClicked.AddUniqueDynamic(this, &UCreateRoomWidget::OnclickedCreate);
	Btn_Close->OnClicked.AddUniqueDynamic(this, &UCreateRoomWidget::OnclickedClose);
}

void UCreateRoomWidget::OnclickedCreate()
{
	if (Edit_Title->Text.ToString() != "")
	{
		FSendPacket_RoomCreate S_RoomCreate;

		S_RoomCreate.Id = UFPSProjectGameInstance::Getinstance()->GetId();
		S_RoomCreate.Title = Edit_Title->Text.ToString();

		UFPSProjectGameInstance::Getinstance()->SendData(S_RoomCreate);
		/* Test */
		//Inst->GetTest()->TestRoomCreate();
		/********/
		this->RemoveFromViewport();
	}
}

void UCreateRoomWidget::OnclickedClose()
{
	this->RemoveFromViewport();
}
