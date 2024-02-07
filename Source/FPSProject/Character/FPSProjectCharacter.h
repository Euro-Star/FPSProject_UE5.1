// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enum/GameEnum.h"
#include "FPSProjectCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UMotionControllerComponent;
class UAnimMontage;
class USoundBase;
class UParticleSystemComponent;
class UWeaponComponent;

DECLARE_MULTICAST_DELEGATE(FDele_OnFire);
DECLARE_MULTICAST_DELEGATE(FDele_OnFireRelease);
DECLARE_MULTICAST_DELEGATE(FDele_Reload);

UCLASS(config=Game)
class AFPSProjectCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// TPSCharacter //
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Mesh)
	USkeletalMeshComponent* TPS_Mesh;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* ThirdPersonCameraComponent;
	
	//UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Mesh)
	//USkeletalMeshComponent* FP_Gun;
	//
	//UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Mesh)
	//USceneComponent* FP_MuzzleLocation;

	//UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Mesh)
	//UStaticMeshComponent* Scope;
	//
	//UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Mesh)
	//UStaticMeshComponent* Magazine;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere)
	class ABulletManager* mBulletManager;

	UPROPERTY()
	class AFPSProjectHUD* HUD;

	UPROPERTY()
	class UGamePlayWidget* GamePlayWidget;

	UPROPERTY()
	class AFPSProjectGameState* GameState;

	UPROPERTY()
	UWeaponComponent* WeaponComponent;

	FDele_OnFire Dele_OnFire;
	FDele_OnFireRelease Dele_OnFireReleased;
	FDele_Reload Dele_Reload;

protected:
	bool bFps = true;
	bool bZoomIn = false;
	bool bReload = false;
	bool bRun = false;
	bool bDie = false;
	bool bFire = false;

	float MoveForwardValue = 0.0f;
	float MoveRightValue = 0.0f;
	float CharacterOffset = -90.0f;
	float RecognitionDistance = 100000.0f;
	float SpreadOffset = RecognitionDistance / 50.0f;

	UPROPERTY()
	FTimerHandle ZoominTimer;

	UPROPERTY()
	FTimerHandle OnFireTimer;

	UPROPERTY()
	float ZoominFrame = 0.0f;

	UPROPERTY()
	float ZoomInValue = 69.0f;

	UPROPERTY()
	float ZoomOutValue = 93.0f;

	UPROPERTY()
	int32 CurrentAmmo = 30;

	UPROPERTY()
	int32 Hp = 100;

	UPROPERTY()
	int32 CurrentColor;

	UPROPERTY()
	float PlayerRotation_Y = 0.0f;

	UPROPERTY()
	float PrevRotation_Y = 0.0f;

	UPROPERTY()
	float Timer = 0.0f;

	UPROPERTY()
	float Interval = 0.1f;

	UPROPERTY()
	float BulletSpread = 0.0f;

	UPROPERTY()
	UAnimInstance* AnimInstance;

	UPROPERTY()
	UAnimInstance* MagazineAnimInstance;
public:
	AFPSProjectCharacter();

protected:
	virtual void BeginPlay();
	virtual void Tick(float DeltaTime) override;
	virtual void Jump() override;
	virtual void StopJumping() override;

	float SendPlayerRotation();

	void SendPressPlayerMoveUp();
	void SendPressPlayerMoveDown();
	void SendPressPlayerMoveLeft();
	void SendPressPlayerMoveRight();
	void SendPressPlayerJump();
	void SendPressPlayerRun();
	void SendPressPlayerZoomIn();

	void SendReleasePlayerMoveUp();
	void SendReleasePlayerMoveDown();
	void SendReleasePlayerMoveLeft();
	void SendReleasePlayerMoveRight();
	void SendReleasePlayerJump();
	void SendReleasePlayerRun();
	void SendReleasePlayerZoomOut();

	void SendPlayerMove(EInputKey Key, bool bPressd = true, bool bTcp = true);

	void ReloadMontageComplete(UAnimMontage* AnimMontage, bool);

	void ThirdPersonMotionCompensate(float _DeltaTime);

protected:
	UFUNCTION()
	void ZoomIn();
	UFUNCTION()
	void ZoomOut();
	UFUNCTION()
	void Reload();
	UFUNCTION()
	void RunStart();
	UFUNCTION()
	void RunEnd();
	UFUNCTION()
	void HipFire();
	UFUNCTION()
	void ReleaseHipFire();

public:
	UFUNCTION(BlueprintCallable)
	bool IsZoomin() { return bZoomIn; };

	UFUNCTION(BlueprintCallable)
	int32 GetCurrentAmmo() { return CurrentAmmo; };

	UFUNCTION(BlueprintCallable)
	float GetMoveForward() { return MoveForwardValue; };

	UFUNCTION(BlueprintCallable)
	float GetMoveRight() { return MoveRightValue; };

	UFUNCTION(BlueprintCallable)
	bool IsReload() { return bReload; };

	UFUNCTION(BlueprintCallable)
	bool IsRun() { return bRun; };

	UFUNCTION(BlueprintCallable)
	bool IsDie() { return bDie; };

	UFUNCTION(BlueprintCallable)
	bool IsFire() { return bFire; };

	UFUNCTION()
	void Die(int32 Rank);

	UFUNCTION()
	void UpdateHp(int32 _Hp);


public:
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	FVector GunOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	USoundBase* FireSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	UAnimMontage* FireAnimation;

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector BulletOffset;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//UParticleSystemComponent* P_FirePlash;

protected:
	
	void OnFire();
	void OnFireReleased();
	void FireBullet();
	
	void ChangeView();

	void MoveForward(float Val);
	void MoveRight(float Val);

	void SetFPSCharacter();
	void SetTPSCharacter();

	
protected:
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
};

