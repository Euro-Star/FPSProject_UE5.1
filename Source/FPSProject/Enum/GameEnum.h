// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class FPSPROJECT_API GameEnum
{
public:
	GameEnum();
	~GameEnum();

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
};
