// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Components/WeaponComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "DataAsset/WeaponDataAsset.h"
#include "Manager/WidgetManager.h"
#include "Widget/GamePlayWidget.h"
#include "Game/FPSProjectGameState.h"
#include "Character/FPSProjectCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Base/BulletBase.h"
#include "Manager/BulletManager.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"
#include "Kismet/KismetStringLibrary.h"


UWeaponComponent::UWeaponComponent()
{
	// DataAsset 불러오기 //
	static ConstructorHelpers::FObjectFinder<UDataAsset> DA_Rifle(TEXT("/Game/Blueprint/DataAsset/DA_Rifle"));
	if (DA_Rifle.Succeeded())
	{
		UDataAsset* dataAsset = DA_Rifle.Object;
		UWeaponDataAsset* data = Cast<UWeaponDataAsset>(dataAsset);

		Weapons.Add(data);
	}

	SK_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SK_Gun"));

	SM_Magazine = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_Magazine"));
	SM_Magazine->SetupAttachment(SK_Gun);

	S_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	S_MuzzleLocation->SetupAttachment(SK_Gun);

	P_FirePlash = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FirePlash"));
	P_FirePlash->SetupAttachment(SK_Gun);
}

// Called when the game starts
void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	GamePlayWidget = UWidgetManager::Get()->GetWidget<UGamePlayWidget>(EWidget::GamePlay);
	Player = AFPSProjectGameState::Get()->GetPlayer();
	mBulletManager = Cast<ABulletManager>(UGameplayStatics::GetActorOfClass(GetWorld(), ABulletManager::StaticClass()));

	Player->Dele_OnFire.AddUObject(this, &UWeaponComponent::OnFire);
	Player->Dele_OnFireReleased.AddUObject(this, &UWeaponComponent::OnFireReleased);
	Player->Dele_Reload.AddUObject(this, &UWeaponComponent::Reload);
}

void UWeaponComponent::SetAttachToComponent(USkeletalMeshComponent* Parent, FName SocketName)
{
	SK_Gun->AttachToComponent(Parent, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), SocketName);

	SetChangeWeapon(EWeaponType::Pistol);
}

// Init Weapon //
void UWeaponComponent::SetChangeWeapon(EWeaponType WeaponType)
{
	if (!IsValid(Weapons[(int32)WeaponType]))
	{
		UE_LOG(LogTemp, Warning, TEXT("WeaponDataAsset is Null"));
		return;
	}

	CurrentWeapon = Weapons[(int32)WeaponType];

	SK_Gun->SetSkeletalMesh(CurrentWeapon->SK_Gun);
	SK_Gun->SetRelativeLocationAndRotation(CurrentWeapon->GunOffset, CurrentWeapon->GunRotator);// y, z, x
	SK_Gun->SetWorldScale3D(CurrentWeapon->GunScale);
	SK_Gun->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	SK_Gun->SetAnimInstanceClass(CurrentWeapon->WeaponAnimInstance->GetAnimBlueprintGeneratedClass());

	WeaponAnimInstance = SK_Gun->GetAnimInstance();

	SM_Magazine->SetStaticMesh(CurrentWeapon->SM_Magazine);
	SM_Magazine->AttachToComponent(SK_Gun, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("SOCKET_Magazine"));

	P_FirePlash->SetTemplate(CurrentWeapon->P_FirePlash);
	P_FirePlash->AttachToComponent(SK_Gun, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("SOCKET_Muzzle"));
	P_FirePlash->SetRelativeTransform(CurrentWeapon->ParticleTransform);

	S_MuzzleLocation->AttachToComponent(SK_Gun, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("SOCKET_Muzzle"));
	S_MuzzleLocation->SetRelativeTransform(CurrentWeapon->MuzzleTransform);

	Damage = CurrentWeapon->Damage;
	MaxAmmo = CurrentWeapon->MaxAmmo;
	CurrentAmmo = CurrentWeapon->CurrentAmmo;
}

void UWeaponComponent::SaveCurrentAmmo()
{
	CurrentWeapon->CurrentAmmo = CurrentAmmo;
}

void UWeaponComponent::OnFire()
{
	FireBullet(Player->ThirdPersonCameraComponent->GetComponentLocation(), Player->ThirdPersonCameraComponent->GetForwardVector());

	GetWorld()->GetTimerManager().SetTimer(OnFireTimer, FTimerDelegate::CreateLambda([&]() {
		{
			if (Player->IsReload())
			{
				OnFireReleased();
				return;
			}
	
			if (CurrentAmmo > 0)
			{
				if (BulletSpread >= 1.0f)
				{
					BulletSpread = 1.0f;
				}
				else
				{
					BulletSpread += 0.1f;
				}
	
				FireBullet(Player->ThirdPersonCameraComponent->GetComponentLocation(), Player->ThirdPersonCameraComponent->GetForwardVector());
			}
			else
			{
				OnFireReleased();
				return;
			}
		}
		}), 0.12f, true);
}

void UWeaponComponent::OnFireReleased()
{
	BulletSpread = 0.0f;
	GetWorld()->GetTimerManager().ClearTimer(OnFireTimer);
}

void UWeaponComponent::FireBullet(FVector CameraLocation, FVector CameraForwardVector)
{
	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		float RandAngle = FMath::RandRange(0.0f, 2.0f) * PI;
		float RandFloat = FMath::RandRange(0.0f, SpreadOffset * BulletSpread);
		FVector RandomPoint = FVector(0.0f, FMath::Cos(RandAngle) * RandFloat, FMath::Sin(RandAngle) * RandFloat);

		FRotator SpawnRotation = S_MuzzleLocation->GetComponentRotation();
		FVector SpawnLocation = S_MuzzleLocation->GetComponentLocation();

		FVector LineTraceStart = CameraLocation;
		FVector LineTraceEnd = (CameraLocation + RandomPoint)
			+ CameraForwardVector * RecognitionDistance;

		FHitResult LineTraceResult;
		FCollisionQueryParams DefaltParams;

		GetWorld()->LineTraceSingleByChannel(LineTraceResult, LineTraceStart, LineTraceEnd, ECC_Visibility, DefaltParams);
		//DrawDebugLine(GetWorld(), LineTraceStart, LineTraceEnd, FColor(0, 255, 0, 0), true, 1.0f, 0, 2);

		const FVector TargetPoint = FVector(LineTraceResult.ImpactPoint - SpawnLocation).GetSafeNormal();

		ABulletBase* Bullet = nullptr;
		Bullet = mBulletManager->UseBullet(Bullet, EBulletType::Rifle);
		if (Bullet)
		{
			Bullet->UseBullet(SpawnLocation, SpawnRotation, TargetPoint);

			CurrentAmmo -= 1;

			GamePlayWidget->UpdateAmmoText(FString::FromInt(GetCurrentAmmo()));
			P_FirePlash->Activate(true);
		}
	}

	if (CurrentWeapon->FireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, CurrentWeapon->FireSound, S_MuzzleLocation->GetComponentLocation());
	}
}

void UWeaponComponent::Reload()
{
	if (WeaponAnimInstance != nullptr)
	{
		FOnMontageBlendingOutStarted CompleteDelegate;

		CompleteDelegate.BindUObject(this, &UWeaponComponent::ReloadMontageComplete);

		WeaponAnimInstance->Montage_Play(CurrentWeapon->ReloadAnimation, 0.7f);
		WeaponAnimInstance->Montage_SetEndDelegate(CompleteDelegate, CurrentWeapon->ReloadAnimation);
	}	
}

void UWeaponComponent::ReloadMontageComplete(UAnimMontage* AnimMontage, bool)
{
	CurrentAmmo = 30;
	GamePlayWidget->UpdateAmmoText(FString::FromInt(CurrentAmmo));
	//Player->
}



