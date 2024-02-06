// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponComponent.generated.h"

class UWeaponDataAsset;
class UGamePlayWidget;
class AFPSProjectCharacter;
class ABulletManager;

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	Pistol,
	Rifle,
	Shotgun,
	Sniper
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPSPROJECT_API UWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UWeaponComponent();

protected:
	virtual void BeginPlay() override;

public:	
	// Mesh, Effect //
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Mesh)
	USkeletalMeshComponent* SK_Gun;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Mesh)
	UStaticMeshComponent* SM_Magazine;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Mesh)
	USceneComponent* S_MuzzleLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UParticleSystemComponent* P_FirePlash;

	// Anim //
	UPROPERTY(EditAnywhere)
	UAnimInstance* WeaponAnimInstance;

	// Weapons //
	UPROPERTY()
	TArray<UWeaponDataAsset*> Weapons;

	UPROPERTY()
	UWeaponDataAsset* CurrentWeapon;

protected:
	// Instance //
	UPROPERTY()
	UGamePlayWidget* GamePlayWidget;

	// Gun Info //
	UPROPERTY()
	int32 Damage;

	UPROPERTY()
	int32 MaxAmmo;

	UPROPERTY()
	int32 CurrentAmmo;

	// Need Info //
	UPROPERTY()
	AFPSProjectCharacter* Player;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere)
	ABulletManager* mBulletManager;
	
	// Fire Info //
	float RecognitionDistance = 100000.0f;
	float SpreadOffset = RecognitionDistance / 50.0f;
	float BulletSpread = 0.0f;

	UPROPERTY()
	FTimerHandle OnFireTimer;

public:
	void SetAttachToComponent(USkeletalMeshComponent* Parent, FName SocketName);
	void SetChangeWeapon(EWeaponType WeaponType);
	void SaveCurrentAmmo();

	UFUNCTION()
	void OnFire();
	UFUNCTION()
	void OnFireReleased();
	void FireBullet(FVector CameraLocation, FVector CameraForwardVector);
	UFUNCTION()
	void Reload();

	int32 GetCurrentAmmo() { return CurrentAmmo; };
	int32 GetDamage() { return Damage; };
	int32 GetMaxAmmo() { return MaxAmmo; };

protected:
	void ReloadMontageComplete(UAnimMontage* AnimMontage, bool);
};
