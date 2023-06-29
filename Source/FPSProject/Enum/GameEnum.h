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
	Right
};
