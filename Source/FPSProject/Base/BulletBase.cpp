// Fill out your copyright notice in the Description page of Project Settings.


#include "BulletBase.h"
#include "Manager/BulletManager.h"
#include "Character/FPSProjectCharacter.h"
#include "Character/OtherCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABulletBase::ABulletBase()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = false;

	BulletMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bullet"));
	RootComponent = BulletMesh;

	BulletMesh->OnComponentHit.AddUniqueDynamic(this, &ABulletBase::OnHit);
}

// Called when the game starts or when spawned
void ABulletBase::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABulletBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	mDeltaTime += DeltaTime;

	if (mDeltaTime > mLifeTime)
	{
		WaitBullet();
		Cast<AFPSProjectCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0))->mBulletManager->UsedBullet(this);
		mDeltaTime = 0;
	}
}

void ABulletBase::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	UGameplayStatics::SpawnDecalAttached(M_BulletHoleArray[FMath::RandRange(0, 2)], FVector(10.0f, 10.0f, 10.0f), OtherComp, NAME_None, Hit.Location, FRotationMatrix::MakeFromX(Hit.Normal).Rotator(), EAttachLocation::KeepWorldPosition, 10.0f);
	WaitBullet();

	if (Cast<AOtherCharacter>(OtherActor) != nullptr)
	{
		Cast<AOtherCharacter>(OtherActor)->Attacked();
	}

	Cast<AFPSProjectCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0))->mBulletManager->UsedBullet(this);
}

void ABulletBase::UseBullet(FVector Location, FRotator Rotation, FVector ForwardVector)
{
	SetActorLocation(Location);
	TargetVector = ForwardVector;
	SetActorTickEnabled(true);
	BulletMesh->AddForce(TargetVector * mSpeed);
}

void ABulletBase::WaitBullet()
{
	BulletMesh->SetPhysicsLinearVelocity(FVector::ZeroVector);
	SetActorTickEnabled(false);
	SetActorLocation(InitSpawnPoint);
}

void ABulletBase::SetBulletInfo(int32 Damage)
{
	mDamage = Damage;
}

FVector ABulletBase::GetInitSpawnPoint()
{
	return InitSpawnPoint;
}

