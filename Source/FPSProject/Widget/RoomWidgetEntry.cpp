// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/RoomWidgetEntry.h"
#include "Components/TextBlock.h"

void URoomWidgetEntry::SetTextId(FString _Id)
{
	Id = _Id;
	Text_Id->SetText(FText::FromString(Id));
}
