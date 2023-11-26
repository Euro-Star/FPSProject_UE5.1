// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSProjectGameState.h"
#include "Manager/SpawnPoint.h"
#include <Game/FPSGameplayStatics.h>
#include "Character/OtherCharacter.h"
#include "Character/FPSProjectCharacter.h"

AFPSProjectGameState* AFPSProjectGameState::State;
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

void AFPSProjectGameState::PreInitializeComponents()
{
	Super::PreInitializeComponents();

	State = this;
}

AFPSProjectGameState* AFPSProjectGameState::Get()
{
	return State;
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

void AFPSProjectGameState::SetPlayerIndex(int32 _PlayerIndex)
{
	PlayerIndex = _PlayerIndex;
}

int32 AFPSProjectGameState::GetPlayerIndex()
{
	return PlayerIndex;
}

UClass* AFPSProjectGameState::GetOtherCharacterClass()
{
	return OtherCharacter;
}

AFPSProjectCharacter* AFPSProjectGameState::GetPlayer()
{
	return Player;
}

void AFPSProjectGameState::AddOtherCharacter(AOtherCharacter* _OtherCharacter, int32 Index)
{
	OtherCharaterArray[Index] = _OtherCharacter;
}

void AFPSProjectGameState::RemoveOtherCharacter(int32 Index)
{
	OtherCharaterArray[Index]->Destroy();
	OtherCharaterArray[Index] = nullptr;
}

AOtherCharacter* AFPSProjectGameState::GetOtherCharacter(int32 Index)
{
	if (OtherCharaterArray[Index])
	{
		return OtherCharaterArray[Index];
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("OtherCharacter Null"));
		return nullptr;
	}
}

void AFPSProjectGameState::SetGameState(bool _bGameState)
{
	bGameState = _bGameState;
}

void AFPSProjectGameState::SetPlayerNum(int32 _PlayerNum)
{
	PlayerNum = _PlayerNum;
}
