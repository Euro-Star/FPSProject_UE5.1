// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/MatchingHUD.h"
#include "Widget/LoginWidget.h"
#include "Widget/WaitingRoomWidget.h"
#include "Widget/CreateRoomWidget.h"
#include "Widget/RoomWidget.h"
#include "Base/WidgetBase.h"

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

	static ConstructorHelpers::FClassFinder<UUserWidget> RoomWidget(TEXT("/Game/Blueprint/Widget/W_Room"));
	if (RoomWidget.Class != NULL)
	{
		TSubclassOf<URoomWidget> W_RoomClass = RoomWidget.Class;
		W_Room = CreateWidget<URoomWidget>(GetWorld(), W_RoomClass);
	}
}

void AMatchingHUD::DrawHUD()
{
	Super::DrawHUD();
}

void AMatchingHUD::BeginPlay()
{
	Super::BeginPlay();

	AddScreen(EMatchingWidget::Login);
}

void AMatchingHUD::AddScreen(EMatchingWidget _Widget)
{
	switch (_Widget)
	{
	case EMatchingWidget::Login:
	{
		W_Login->AddToViewport();
		break;
	}
	case EMatchingWidget::CreateRoom:
	{
		W_CreateRoom->AddToViewport();
		break;
	}
	case EMatchingWidget::WaitingRoom:
	{
		W_WaitingRoom->AddToViewport();
		break;
	}
	case EMatchingWidget::Room:
	{
		W_Room->AddToViewport();
		break;
	}
	default:
		break;
	}
}

void AMatchingHUD::RemoveScreen(EMatchingWidget _Widget)
{
	switch (_Widget)
	{
	case EMatchingWidget::Login:
	{
		W_Login->RemoveFromViewport();
		break;
	}
	case EMatchingWidget::CreateRoom:
	{
		W_CreateRoom->RemoveFromViewport();
		break;
	}
	case EMatchingWidget::WaitingRoom:
	{
		W_WaitingRoom->RemoveFromViewport();
		break;
	}
	case EMatchingWidget::Room:
	{
		W_Room->RemoveFromViewport();
		break;
	}
	default:
		break;
	}
}



