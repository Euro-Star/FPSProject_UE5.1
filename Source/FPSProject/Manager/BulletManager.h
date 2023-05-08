// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BulletManager.generated.h"

UCLASS()
class FPSPROJECT_API ABulletManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABulletManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY()
	class TSubclassOf<class ABulletBase> BP_bulletbase;

	TQueue<ABulletBase*> BulletPulling;

public:
	ABulletBase* UseBullet(ABulletBase* Bullet);
	void UsedBullet(ABulletBase* Bullet);	
};
