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
	USkeletalMeshComponent* Gun;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Mesh)
	USceneComponent* MuzzleLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UParticleSystemComponent* P_FirePlash;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Mesh)
	UStaticMeshComponent* Magazine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	UAnimMontage* ReloadAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	UAnimMontage* MagazineAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	UAnimMontage* HitAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	UAnimMontage* HipFireAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	UAnimMontage* ZoomFireAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	USoundBase* FireSound;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	//UAnimMontage* HipFireAnimation;
	//
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	//UAnimMontage* ZoomFireAnimation;

	UPROPERTY()
	UAnimInstance* AnimInstance;

	UPROPERTY()
	UAnimInstance* MagazineAnimInstance;

protected:
	bool bUp = false;
	bool bDown = false;
	bool bLeft = false;
	bool bRight = false;
	bool bRun = false;
	bool bJump = false;
	bool bZoomIn = false;
	bool bDie = false;
	bool bReload = false;
	bool bOnFire = false;

	int32 PlayerIndex;
	int32 Hp = 100;
	FTimerHandle DieTimer;
	FTimerHandle OnFireTimer;

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
	void Reload();
	void OnFire();
	void OnFireReleased();
	void Fire();

	void SetKeyDown(int32 KeyValue, bool Pressed);

	int32 GetPlayerIndex();
	void UpdateHp(int32 _Hp);
	void SetPlayerIndex(int32 _PlayerIndex);

	UFUNCTION(BlueprintCallable)
	float GetForward();

	UFUNCTION(BlueprintCallable)
	float GetRight();

	UFUNCTION(BlueprintCallable)
	bool IsRun() { return bRun; };

	UFUNCTION(BlueprintCallable)
	bool IsJump() { return bJump; };

	UFUNCTION(BlueprintCallable)
	bool IsZoomIn() { return bZoomIn; };

	UFUNCTION(BlueprintCallable)
	bool IsDie() { return bDie; };
};
