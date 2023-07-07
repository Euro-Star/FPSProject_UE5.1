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
	bool bUp = false;
	bool bDown = false;
	bool bLeft = false;
	bool bRight = false;

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void Move();

public:	
	void Attacked();
	void MoveForward(float Value);
	void MoveRight(float Value);

	void SetKeyDown(int32 KeyValue, bool Pressed);
};
