// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "OtherCharacter.generated.h"

UCLASS()
class FPSPROJECT_API AOtherCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AOtherCharacter();

public:
	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	UAnimMontage* HitAnim;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	USkeletalMeshComponent* Gun;

protected:
	virtual void BeginPlay() override;

public:	
	void Attacked();

};
