// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSProjectGameState.h"

AFPSProjectGameState::AFPSProjectGameState() : Super()
{

}

void AFPSProjectGameState::BeginPlay()
{
	Super::BeginPlay();

	GameColorArray.Init(true, 6);
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
