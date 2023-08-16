// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FPSProjectHUD.generated.h"

UCLASS()
class AFPSProjectHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFPSProjectHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

	virtual void BeginPlay() override;

};

