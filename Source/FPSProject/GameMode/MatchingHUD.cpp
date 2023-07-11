// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/MatchingHUD.h"
#include "Widget/LoginWidget.h"

AMatchingHUD::AMatchingHUD()
{
	static ConstructorHelpers::FClassFinder<UUserWidget> LoginWidget(TEXT("/Game/Blueprint/Widget/W_Login"));
	if (LoginWidget.Class != NULL)
	{
		TSubclassOf<ULoginWidget> W_LoginClass = LoginWidget.Class;
		W_Login = CreateWidget<ULoginWidget>(GetWorld(), W_LoginClass);
	}
}

void AMatchingHUD::DrawHUD()
{
	Super::DrawHUD();
}

void AMatchingHUD::BeginPlay()
{
	Super::BeginPlay();

	W_Login->AddToViewport();
}
