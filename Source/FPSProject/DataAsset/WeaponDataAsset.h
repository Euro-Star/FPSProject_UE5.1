// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WeaponDataAsset.generated.h"

UCLASS()
class FPSPROJECT_API UWeaponDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	// Mesh, Effect //
	UPROPERTY(EditAnyWhere)
	USkeletalMesh* SK_Gun;

	UPROPERTY(EditAnyWhere)
	UStaticMesh* SM_Magazine;

	UPROPERTY(EditAnywhere)
	UParticleSystem* P_FirePlash;

	// Gun Info //
	UPROPERTY(EditAnywhere)
	int32 Damage;

	UPROPERTY(EditAnywhere)
	int32 MaxAmmo;

	UPROPERTY(EditAnywhere)
	int32 CurrentAmmo;

	// GunOffset //
	UPROPERTY(EditAnywhere)
	FVector GunOffset;

	UPROPERTY(EditAnywhere)
	FVector GunScale;

	UPROPERTY(EditAnywhere)
	FRotator GunRotator;

	UPROPERTY(EditAnywhere)
	FVector MuzzleLocation;

	UPROPERTY(EditAnywhere)
	FVector ParticleLocation;

	// Anim //
	UPROPERTY(EditAnywhere)
	UAnimBlueprint* WeaponAnimInstance;

	UPROPERTY(EditAnywhere)
	UAnimMontage* ReloadAnimation;
	
	// Sound //
	UPROPERTY(EditAnywhere)
	USoundBase* FireSound;
};
