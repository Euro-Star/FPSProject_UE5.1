// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "FPSProjectGameState.generated.h"

/**
 * 
 */
UCLASS()
class FPSPROJECT_API AFPSProjectGameState : public AGameStateBase
{
	GENERATED_BODY()

	AFPSProjectGameState();
	virtual void BeginPlay() override;
private:

	UPROPERTY()
	TArray<bool> GameColorArray;

public:
	UFUNCTION()
	int32 GetEnemyTarget(int32 CurrentColor);

	UFUNCTION()
	void SetNotExistPlayerColor(int32 Color);

};
