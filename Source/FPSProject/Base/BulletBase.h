// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
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
	float mLifeTime = 10.0f;

	UPROPERTY()
	FVector InitSpawnPoint = FVector(9999.0f, 9999.0f, 9999.0f);

	UPROPERTY()
	float mDamage = 0;

	UPROPERTY()
	FVector TargetVector;

	UPROPERTY()
	float mSpeed = 2000.0f;

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
	void SetBulletInfo(int32 Damage);
	UFUNCTION()
	FVector GetInitSpawnPoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
