// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPSProjectCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UMotionControllerComponent;
class UAnimMontage;
class USoundBase;

UCLASS(config=Game)
class AFPSProjectCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// FPSCharacter //
	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	USkeletalMeshComponent* FPS_CharacterMesh;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	UCameraComponent* FirstPersonCameraComponent;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	USceneComponent* SocketHandLeft;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	UStaticMeshComponent* MeshKnife;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	USceneComponent* SocketHandRight;

	// TPSCharacter //
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Mesh)
	USkeletalMeshComponent* TPS_Mesh;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* ThirdPersonCameraComponent;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	USceneComponent* RootCosmetics;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	UStaticMeshComponent* MeshGoggles;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	UStaticMeshComponent* MeshHelmet;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	UStaticMeshComponent* MeshHeadset;
	
	// Default Character //
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Mesh)
	USkeletalMeshComponent* FP_Gun;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Mesh)
	USceneComponent* FP_MuzzleLocation;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Mesh)
	UStaticMeshComponent* Scope;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Mesh)
	UStaticMeshComponent* Magazine;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere)
	class ABulletManager* mBulletManager;

	UPROPERTY()
	class AFPSProjectHUD* HUD;

	UPROPERTY()
	class UGamePlayWidget* GamePlayWidget;

protected:
	UPROPERTY()
	bool bFps = true;

	UPROPERTY()
	bool IsZoomIn = false;

	UPROPERTY()
	bool IsReload = false;

	UPROPERTY()
	FTimerHandle ZoominTimer;

	UPROPERTY()
	FTimerHandle ReloadinTimer;

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
	int32 CurrentColor;

	UPROPERTY()
	class UFPSProjectGameInstance* Inst;
public:
	AFPSProjectCharacter();

protected:
	virtual void BeginPlay();
	virtual void Tick(float DeltaTime) override;

	void SendPlayerRotation();

	void SendPressPlayerMoveUp();
	void SendPressPlayerMoveDown();
	void SendPressPlayerMoveLeft();
	void SendPressPlayerMoveRight();

	void SendReleasePlayerMoveUp();
	void SendReleasePlayerMoveDown();
	void SendReleasePlayerMoveLeft();
	void SendReleasePlayerMoveRight();

protected:
	UFUNCTION()
	void ZoomIn();
	UFUNCTION()
	void ZoomOut();
	UFUNCTION()
	void Reload();

public:
	UFUNCTION(BlueprintCallable)
	bool GetIsZoomin();

	UFUNCTION(BlueprintCallable)
	int32 GetCurrentAmmo();

	UFUNCTION(BlueprintCallable)
	bool GetIsReload();
public:
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	FVector GunOffset;

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category=Projectile)
	TSubclassOf<class AFPSProjectProjectile> ProjectileClass;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	USoundBase* FireSound;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	UAnimMontage* FireAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	UAnimMontage* ReloadAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	UAnimMontage* MagazineAnimation;

	/** Whether to use motion controller location for aiming. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	uint8 bUsingMotionControllers : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector BulletOffset;

protected:
	
	/** Fires a projectile. */
	void OnFire();
	void OnFireReleased();
	void FireBullet();

	/** Resets HMD orientation and position in VR. */
	void OnResetVR();
	
	void ChangeView();

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles stafing movement, left and right */
	void MoveRight(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	void SetFPSCharacter();
	void SetTPSCharacter();

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	struct TouchData
	{
		TouchData() { bIsPressed = false;Location=FVector::ZeroVector;}
		bool bIsPressed;
		ETouchIndex::Type FingerIndex;
		FVector Location;
		bool bMoved;
	};
	void BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location);
	TouchData	TouchItem;
	
protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

	/* 
	 * Configures input for touchscreen devices if there is a valid touch interface for doing so 
	 *
	 * @param	InputComponent	The input component pointer to bind controls to
	 * @returns true if touch controls were enabled.
	 */
	bool EnableTouchscreenMovement(UInputComponent* InputComponent);

public:
	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMeshFPS() const { return FPS_CharacterMesh; }
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

};

