// Fill out your copyright notice in the Description page of Project Settings.


#include "BulletManager.h"
#include "Base/BulletBase.h"

#pragma optimize("",off)
// Sets default values
ABulletManager::ABulletManager()
{
	static ConstructorHelpers::FClassFinder<ABulletBase> bulletBaseClassFinder(TEXT("/Game/Blueprint/Game/Bullet/BP_Bullet"));
	BP_bulletbase = bulletBaseClassFinder.Class;
}

// Called when the game starts or when spawned
void ABulletManager::BeginPlay()
{
	Super::BeginPlay();

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		FActorSpawnParameters ActorSpawnParams;
		ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		for (int32 i = 0; i < 60; i++)
		{
			ABulletBase* Bullet = World->SpawnActor<ABulletBase>(BP_bulletbase, FVector(9999.0f, 9999.0f, 9999.0f), FRotator(0.0f, 0.0f, 0.0f), ActorSpawnParams);
			BulletPulling.Enqueue(Bullet);
		}
	}
}

ABulletBase* ABulletManager::UseBullet(ABulletBase* Bullet)
{
	BulletPulling.Dequeue(Bullet);
	return Bullet;
}

void ABulletManager::UsedBullet(ABulletBase* Bullet)
{
	BulletPulling.Enqueue(Bullet);
}
#pragma optimize("",on)

