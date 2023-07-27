// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/WaitingRoomWidget.h"
#include "Widget/CreateRoomWidget.h"
#include "Components/ScrollBox.h"
#include "Server/Packets.h"
#include "Components/Button.h"
#include "Widget/WaitingRoomWidgetEntry.h"

UWaitingRoomWidget::UWaitingRoomWidget()
{
	static ConstructorHelpers::FClassFinder<UUserWidget> WaitingRoomWidgetEntry(TEXT("/Game/Blueprint/Widget/W_WaitingRoomEntry"));
	if (WaitingRoomWidgetEntry.Class != NULL)
	{
		W_WaitingRoomEntry = WaitingRoomWidgetEntry.Class;
	}
}

void UWaitingRoomWidget::NativeConstruct()
{
	Super::NativeConstruct();

	Btn_CreateRoom->OnClicked.AddUniqueDynamic(this, &UWaitingRoomWidget::OnclickedCreateRoom);

	FRoomInfo test;
	test.NumberOfPeople = 0;
	test.Title = "test";
	test.RoomNumber = 1;

	//UWaitingRoomWidgetEntry* test1 = Cast<UWaitingRoomWidgetEntry>(CreateWidget(GetWorld(), W_WaitingRoomEntry));
	//
	//test1->SetRoomInfo(test);
	//
	//RoomList->AddChild(test1);
}

void UWaitingRoomWidget::OnclickedCreateRoom()
{
	MatchingHud->AddScreen(EMatchingWidget::CreateRoom);
}
