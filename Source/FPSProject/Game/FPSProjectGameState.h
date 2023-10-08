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
	virtual void PreInitializeComponents() override;

public:
	static AFPSProjectGameState* Get();
	static AFPSProjectGameState* State;

private:

	UPROPERTY()
	TArray<bool> GameColorArray;

	UPROPERTY()
	TArray<ASpawnPoint*> SpawnPoint;

	UPROPERTY()
	int32 PlayerIndex;

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

	void SetPlayerIndex(int32 _PlayerIndex);
	int32 GetPlayerIndex();

	UClass* GetOtherCharacterClass();
	TObjectPtr<AFPSProjectCharacter> GetPlayer();

	void AddOtherCharacter(AOtherCharacter* _OtherCharacter, int32 Index);
	void RemoveOtherCharacter(int32 Index);
	inline TObjectPtr<AOtherCharacter> GetOtherCharacter(int32 Index);

	UPROPERTY()
	bool bTest = false;
};
