// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/WaitingRoomWidgetEntry.h"
#include "Server/Packets.h"
#include "Components/TextBlock.h"

void UWaitingRoomWidgetEntry::NativeConstruct()
{
	Super::NativeConstruct();
}

void UWaitingRoomWidgetEntry::SetRoomInfo(FRoomInfo RoomInfo)
{
	RoomNumber = RoomInfo.RoomNumber;

	Text_Title->SetText(FText::FromString(RoomInfo.Title));
	Text_NumberOfPeople->SetText(FText::FromString(FString::FromInt(RoomInfo.NumberOfPeople)));
	Text_RoomNumber->SetText(FText::FromString(FString::FromInt(RoomInfo.RoomNumber)));
}

void UWaitingRoomWidgetEntry::OnclickedRoomEnter()
{
	FSendPacket_RoomEnter S_RoomEnter;

	S_RoomEnter.Id = UFPSProjectGameInstance::Getinstance()->GetId();
	S_RoomEnter.RoomNumber = RoomNumber;

	UFPSProjectGameInstance::Getinstance()->SendData(S_RoomEnter);
}
