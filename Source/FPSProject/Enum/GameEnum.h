// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EGameColor : uint8
{
	Red,
	Orange,
	Yellow,
	Green,
	Blue,
	DarkBlue,
	Purple
};

UENUM(BlueprintType)
enum class EInputKey : uint8
{
	Up,
	Down,
	Left,
	Right,
	Jump,
	Run,
	ZoomIn,
	Reload
};

UENUM(BlueprintType)
enum class EMatchingWidget : uint8
{
	Login,
	CreateRoom,
	WaitingRoom,
	Room,
};

UENUM(BlueprintType)
enum class EBulletType : uint8
{
	Pistol,
	Rifle,
	Sniper
};
