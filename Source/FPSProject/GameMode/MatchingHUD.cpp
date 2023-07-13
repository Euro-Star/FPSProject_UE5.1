// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/MatchingHUD.h"
#include "Widget/LoginWidget.h"
#include "Widget/WaitingRoomWidget.h"
#include "Widget/CreateRoomWidget.h"

AMatchingHUD::AMatchingHUD()
{
	static ConstructorHelpers::FClassFinder<UUserWidget> LoginWidget(TEXT("/Game/Blueprint/Widget/W_Login"));
	if (LoginWidget.Class != NULL)
	{
		TSubclassOf<ULoginWidget> W_LoginClass = LoginWidget.Class;
		W_Login = CreateWidget<ULoginWidget>(GetWorld(), W_LoginClass);
	}

	static ConstructorHelpers::FClassFinder<UUserWidget> WaitingRoomWidget(TEXT("/Game/Blueprint/Widget/W_WaitingRoom"));
	if (LoginWidget.Class != NULL)
	{
		TSubclassOf<UWaitingRoomWidget> W_WaitingRoomClass = WaitingRoomWidget.Class;
		W_WaitingRoom = CreateWidget<UWaitingRoomWidget>(GetWorld(), W_WaitingRoomClass);
	}

	static ConstructorHelpers::FClassFinder<UUserWidget> CreateRoomWidget(TEXT("/Game/Blueprint/Widget/W_CreateRoom"));
	if (CreateRoomWidget.Class != NULL)
	{
		TSubclassOf<UCreateRoomWidget> W_CreateRoomClass = CreateRoomWidget.Class;
		W_CreateRoom = CreateWidget<UCreateRoomWidget>(GetWorld(), W_CreateRoomClass);
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
