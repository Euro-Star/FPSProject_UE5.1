// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "WidgetManager.generated.h"

/**
 * 
 */
class ULoginWidget;
class UWaitingRoomWidget;
class UCreateRoomWidget;
class URoomWidget;
class UGamePlayWidget;
class ULoadingWidget;

UENUM(BlueprintType)
enum class EWidget : uint8
{
	Login,
	CreateRoom,
	WaitingRoom,
	Room,
	GamePlay,
	Loading,
};

UCLASS()
class FPSPROJECT_API UWidgetManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	UWidgetManager();

	virtual void Initialize(FSubsystemCollectionBase& Collection)  override;

	
public:
	static UWidgetManager* WidgetManager;
	static UWidgetManager* Get();

	void AddWidget(EWidget WidgetEnum);
	void RemoveWidget(EWidget WidgetEnum);

	template<class T>
	T* GetWidget(EWidget WidgetEnum)
	{
		switch (WidgetEnum)
		{
		case EWidget::Login:		{ 	return (T*)W_Login; }
		case EWidget::CreateRoom:	{	return (T*)W_CreateRoom;  }
		case EWidget::WaitingRoom:	{	return (T*)W_WaitingRoom; }
		case EWidget::Room:			{	return (T*)W_Room; }
		case EWidget::GamePlay:		{	return (T*)W_GamePlay; }
		case EWidget::Loading:		{	return (T*)W_Loading; }

		default:
			return nullptr;
		}
	}

public:
	UPROPERTY()
	ULoginWidget*			W_Login;
	UPROPERTY()
	UWaitingRoomWidget*		W_WaitingRoom;
	UPROPERTY()
	UCreateRoomWidget*		W_CreateRoom;
	UPROPERTY()
	URoomWidget*			W_Room;
	UPROPERTY()
	UGamePlayWidget*		W_GamePlay;
	UPROPERTY()
	ULoadingWidget*			W_Loading;
};
