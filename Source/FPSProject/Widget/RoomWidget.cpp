// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/RoomWidget.h"
#include "Components/Button.h"
#include "Components/ScrollBox.h"
#include "Server/Packets.h"
#include "Widget/RoomWidgetEntry.h"

URoomWidget::URoomWidget()
{
	static ConstructorHelpers::FClassFinder<UUserWidget> RoomWidgetEntry(TEXT("/Game/Blueprint/Widget/W_RoomEntry"));
	if (RoomWidgetEntry.Class != NULL)
	{
		W_RoomEntry = RoomWidgetEntry.Class;
	}
}

void URoomWidget::NativeConstruct()
{
	Super::NativeConstruct();

	Btn_GameStart->OnClicked.AddUniqueDynamic(this, &URoomWidget::OnclickedGameStart);

	//URoomWidgetEntry* test1 = Cast<URoomWidgetEntry>(CreateWidget(GetWorld(), W_RoomEntry));
	//
	//test1->SetTextId("asd");
	//
	//UserList->AddChild(test1);
}

void URoomWidget::OnclickedGameStart()
{
	FSendPacket_GameStart S_GameStart;

	// 게임 시작 필요한거 상의 하기

	Inst->SendData(S_GameStart);
}

void URoomWidget::SetRoomStatus(bool _bRoomMaster, int32 _RoomNumber)
{
	bRoomMaster = _bRoomMaster;
	RoomNumber = _RoomNumber;
}

void URoomWidget::InitRoomUser(TArray<FString> _IdList)
{
	IdList = _IdList;

	for (auto it : IdList)
	{
		URoomWidgetEntry* Entry = Cast<URoomWidgetEntry>(CreateWidget(GetWorld(), W_RoomEntry));

		Entry->SetTextId(it);
		UserList->AddChild(Entry);
	}
}

void URoomWidget::AddRoomUser(FString Id)
{
	IdList.Add(Id);

	URoomWidgetEntry* Entry = Cast<URoomWidgetEntry>(CreateWidget(GetWorld(), W_RoomEntry));

	Entry->SetTextId(Id);
	UserList->AddChild(Entry);
}

