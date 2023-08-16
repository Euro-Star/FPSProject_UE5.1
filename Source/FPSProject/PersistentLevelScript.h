// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "PersistentLevelScript.generated.h"

/**
 * 
 */
UCLASS()
class FPSPROJECT_API APersistentLevelScript : public ALevelScriptActor
{
	GENERATED_BODY()

	virtual void BeginPlay() override;

private:
	UPROPERTY()
	FName LevelName_1 = "Map_1_Night";

	UPROPERTY()
	FName PackageName;

public:
	UFUNCTION(BlueprintCallable)
	void TestFuc();

	UFUNCTION(BlueprintCallable)
	void TestFuc2(FName name);


	
};
