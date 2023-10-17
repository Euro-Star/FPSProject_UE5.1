// Fill out your copyright notice in the Description page of Project Settings.


#include "Manager/WidgetManager.h"
#include "Widget/LoginWidget.h"
#include "Widget/WaitingRoomWidget.h"
#include "Widget/CreateRoomWidget.h"
#include "Widget/RoomWidget.h"
#include "Widget/GamePlayWidget.h"
#include "Widget/LoadingWidget.h"
#include "Widget/DyingWidget.h"

UWidgetManager* UWidgetManager::WidgetManager;
UWidgetManager::UWidgetManager()
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

	static ConstructorHelpers::FClassFinder<UUserWidget> GamePlayWidget(TEXT("/Game/Blueprint/Widget/W_GamePlay"));
	if (GamePlayWidget.Class != NULL)
	{
		TSubclassOf<UGamePlayWidget> W_GamePlayClass = GamePlayWidget.Class;
		W_GamePlay = CreateWidget<UGamePlayWidget>(GetWorld(), W_GamePlayClass);
	}

	static ConstructorHelpers::FClassFinder<UUserWidget> LoadingWidget(TEXT("/Game/Blueprint/Widget/W_Loading"));
	if (LoadingWidget.Class != NULL)
	{
		TSubclassOf<ULoadingWidget> W_LoadingClass = LoadingWidget.Class;
		W_Loading = CreateWidget<ULoadingWidget>(GetWorld(), W_LoadingClass);
	}

	static ConstructorHelpers::FClassFinder<UUserWidget> DyingWidget(TEXT("/Game/Blueprint/Widget/W_Dying"));
	if (DyingWidget.Class != NULL)
	{
		TSubclassOf<UDyingWidget> W_DyingClass = DyingWidget.Class;
		W_Dying = CreateWidget<UDyingWidget>(GetWorld(), W_DyingClass);
	}
}

void UWidgetManager::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	WidgetManager = this;
}

UWidgetManager* UWidgetManager::Get()
{
	return WidgetManager;
}

void UWidgetManager::AddWidget(EWidget WidgetEnum, int32 ZOrder)
{
	switch (WidgetEnum)
	{
	case EWidget::Login:		{	W_Login->AddToViewport(ZOrder); break; }
	case EWidget::CreateRoom:	{	W_CreateRoom->AddToViewport(ZOrder); break; }
	case EWidget::WaitingRoom:	{	W_WaitingRoom->AddToViewport(ZOrder); break; }
	case EWidget::Room:			{	W_Room->AddToViewport(ZOrder); break; }
	case EWidget::GamePlay:		{	W_GamePlay->AddToViewport(ZOrder); break; }
	case EWidget::Loading:		{	W_Loading->AddToViewport(ZOrder); break; }
	case EWidget::Dying:		{	W_Dying->AddToViewport(ZOrder); break; }

	default: 
		break;
	}
}

void UWidgetManager::RemoveWidget(EWidget WidgetEnum)
{
	switch (WidgetEnum)
	{
	case EWidget::Login:		{	W_Login->RemoveFromViewport(); break; }
	case EWidget::CreateRoom:	{	W_CreateRoom->RemoveFromViewport(); break; }
	case EWidget::WaitingRoom:	{	W_WaitingRoom->RemoveFromViewport(); break; }
	case EWidget::Room:			{	W_Room->RemoveFromViewport(); break; }
	case EWidget::GamePlay:		{	W_GamePlay->RemoveFromViewport(); break; }
	case EWidget::Loading:		{	W_Loading->RemoveFromViewport(); break; }
	case EWidget::Dying:		{	W_Dying->RemoveFromViewport(); break; }

	default:
		break;
	}
}
