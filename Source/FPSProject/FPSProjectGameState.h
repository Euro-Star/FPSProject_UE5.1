// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "FPSProjectGameState.generated.h"

/**
 * 
 */

class ASpawnPoint;
class AOtherCharacter;
class AFPSProjectCharacter;

UCLASS()
class FPSPROJECT_API AFPSProjectGameState : public AGameStateBase
{
	GENERATED_BODY()

	AFPSProjectGameState();
	virtual void BeginPlay() override;
private:

	UPROPERTY()
	TArray<bool> GameColorArray;

	UPROPERTY()
	TArray<ASpawnPoint*> SpawnPoint;

	UPROPERTY()
	int32 PlayerId;

	UPROPERTY()
	TSubclassOf<AOtherCharacter> OtherCharacter;

	UPROPERTY()
	TObjectPtr<AFPSProjectCharacter> Player;

	UPROPERTY()
	TArray<AOtherCharacter*> OtherCharaterArray;

public:
	UFUNCTION()
	int32 GetEnemyTarget(int32 CurrentColor);

	UFUNCTION()
	void SetNotExistPlayerColor(int32 Color);

	UFUNCTION(BlueprintCallable)
	void SetSpawnPoint(TArray<ASpawnPoint*> _SpawnPoint);
	TArray<ASpawnPoint*> GetSpawnPoint();

	void SetPlayerId(int32 _PlayerId);
	int32 GetPlayerId();

	UClass* GetOtherCharacterClass();
	TObjectPtr<AFPSProjectCharacter> GetPlayer();

	void AddOtherCharacter(AOtherCharacter* _OtherCharacter, int32 Index);
	inline TObjectPtr<AOtherCharacter> GetOtherCharacter(int32 Index);
};
