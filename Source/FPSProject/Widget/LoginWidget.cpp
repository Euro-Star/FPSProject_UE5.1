// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/LoginWidget.h"
#include <Server/Packets.h>
#include <FPSProjectGameInstance.h>
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"

void ULoginWidget::NativeConstruct()
{
	Super::NativeConstruct();

	Inst = Cast<UFPSProjectGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	Btn_Login->OnClicked.AddUniqueDynamic(this, &ULoginWidget::OnclickedLogin);
}

void ULoginWidget::OnclickedLogin()
{
	//FSendPacket_Login S_Login;
	//
	//S_Login.Id = Edit_Id->GetText().ToString();;
	//
	//Inst->SendData(S_Login);

	Inst->SetId(Edit_Id->GetText().ToString());
}
