// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enum/GameEnum.h"
#include "BulletBase.generated.h"

UCLASS()
class FPSPROJECT_API ABulletBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABulletBase();

protected:
	UPROPERTY()
	float mDeltaTime;

	UPROPERTY()
	float LifeTime = 10.0f;

	UPROPERTY()
	FVector InitSpawnPoint = FVector(9999.0f, 9999.0f, 9999.0f);

	UPROPERTY()
	EBulletType BulletType;

	UPROPERTY()
	FVector TargetVector;

	UPROPERTY()
	float Speed = 2000.0f;

	UPROPERTY()
	int32 Damage = 10;

public:
	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Mesh")
	UStaticMeshComponent* BulletMesh;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere)
	TArray<UMaterial*> M_BulletHoleArray;

public:
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	UFUNCTION()
	void UseBullet(FVector Location, FRotator Rotation, FVector ForwardVector);
	UFUNCTION()
	void WaitBullet();
	UFUNCTION()
	void SetBulletType(EBulletType _BulletType);
	UFUNCTION()
	FVector GetInitSpawnPoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
