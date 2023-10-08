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
	bool bRun = false;
	bool bJump = false;
	bool bZoomIn = false;
	bool bDie = false;

	int32 PlayerIndex;
	int32 Hp = 100;
	FTimerHandle DieTimer;

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void Landed(const FHitResult& Hit) override;
	virtual void BeginDestroy() override;

	void Move();

public:	
	void Attacked();
	void Die(bool _bDie);
	void MoveForward(float Value);
	void MoveRight(float Value);
	void RunStart();
	void RunEnd();

	void SetKeyDown(int32 KeyValue, bool Pressed);

	int32 GetPlayerIndex();
	void ChangeHp(int32 _Hp);
	void SetPlayerIndex(int32 _PlayerIndex);

	UFUNCTION(BlueprintCallable)
	float GetForward();

	UFUNCTION(BlueprintCallable)
	float GetRight();

	UFUNCTION(BlueprintCallable)
	bool IsRun();

	UFUNCTION(BlueprintCallable)
	bool IsJump();

	UFUNCTION(BlueprintCallable)
	bool IsZoomIn();

	UFUNCTION(BlueprintCallable)
	bool IsDie();

};
