// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/LoginWidget.h"
#include <Server/Packets.h>
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Widget/WaitingRoomWidget.h"

void ULoginWidget::NativeConstruct()
{
	Super::NativeConstruct();

	Btn_Login->OnClicked.AddUniqueDynamic(this, &ULoginWidget::OnclickedLogin);
}

void ULoginWidget::OnclickedLogin()
{
	if (Edit_Id->GetText().ToString() != "")
	{
		//FSendPacket_Login S_Login;
		//
		//S_Login.Id = Edit_Id->GetText().ToString();;
		//
		//Inst->SendData(S_Login);

		Inst->SetId(Edit_Id->GetText().ToString());

		MatchingHud->AddScreen(EMatchingWidget::WaitingRoom);
		MatchingHud->RemoveScreen(EMatchingWidget::Login);
	}	
}
