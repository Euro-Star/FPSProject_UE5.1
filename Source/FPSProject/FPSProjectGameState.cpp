// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSProjectGameState.h"
#include "Manager/SpawnPoint.h"
#include <FPSGameplayStatics.h>
#include "Character/OtherCharacter.h"
#include "Character/FPSProjectCharacter.h"

AFPSProjectGameState::AFPSProjectGameState() : Super()
{
	static ConstructorHelpers::FClassFinder<APawn> OtherCharacterClassFinder(TEXT("/Game/Blueprint/Character/BP_OtherCharacter"));
	OtherCharacter = OtherCharacterClassFinder.Class;
}

void AFPSProjectGameState::BeginPlay()
{
	Super::BeginPlay();

	GameColorArray.Init(true, 6);
	Player = Cast<AFPSProjectCharacter>(UFPSGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	OtherCharaterArray.Init(nullptr, 7);
}

int32 AFPSProjectGameState::GetEnemyTarget(int32 CurrentColor)
{
	for (int i = 1; i < 7; ++i)
	{
		if (GameColorArray[(CurrentColor + i) % 7])
		{										
			return (CurrentColor + i) % 7;
		}	
	}

	return -1;
}

void AFPSProjectGameState::SetNotExistPlayerColor(int32 Color)
{
	GameColorArray[Color] = false;
}

void AFPSProjectGameState::SetSpawnPoint(TArray<ASpawnPoint*> _SpawnPoint)
{
	SpawnPoint = _SpawnPoint;
}

TArray<ASpawnPoint*> AFPSProjectGameState::GetSpawnPoint()
{
	return SpawnPoint;
}

void AFPSProjectGameState::SetPlayerId(int32 _PlayerId)
{
	PlayerId = _PlayerId;
}

int32 AFPSProjectGameState::GetPlayerId()
{
	return PlayerId;
}

UClass* AFPSProjectGameState::GetOtherCharacterClass()
{
	return OtherCharacter;
}

TObjectPtr<AFPSProjectCharacter> AFPSProjectGameState::GetPlayer()
{
	return Player;
}

void AFPSProjectGameState::AddOtherCharacter(AOtherCharacter* _OtherCharacter, int32 Index)
{
	OtherCharaterArray[Index] = _OtherCharacter;
}

inline TObjectPtr<AOtherCharacter> AFPSProjectGameState::GetOtherCharacter(int32 Index)
{
	return OtherCharaterArray[Index];
}
