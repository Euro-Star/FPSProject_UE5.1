// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/LoginWidget.h"
#include <Server/Packets.h>
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Widget/WaitingRoomWidget.h"
#include "Manager/WidgetManager.h"

void ULoginWidget::NativeConstruct()
{
	Super::NativeConstruct();

	Btn_Login->OnClicked.AddUniqueDynamic(this, &ULoginWidget::OnclickedLogin);
}

void ULoginWidget::OnclickedLogin()
{
	if (Edit_Id->GetText().ToString() != "")
	{
		FSendPacket_Login S_Login;
		
		S_Login.Id = Edit_Id->GetText().ToString();;
		
		UFPSProjectGameInstance::Getinstance()->SendData(S_Login);
		UFPSProjectGameInstance::Getinstance()->SetId(Edit_Id->GetText().ToString());

		UWidgetManager::Get()->AddWidget(EWidget::WaitingRoom);
		UWidgetManager::Get()->RemoveWidget(EWidget::Login);
	}
}
