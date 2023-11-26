// Fill out your copyright notice in the Description page of Project Settings.


#include "OtherCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Game/FPSProjectGameState.h"
#include "Server/Packets.h"
#include "Game/FPSProjectGameInstance.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Enum/GameEnum.h"

#pragma optimize("", off)

// Sets default values
AOtherCharacter::AOtherCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gun"));
	Gun->SetupAttachment(RootComponent);

	Magazine = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Magazine"));
	Magazine->SetupAttachment(RootComponent);

	MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	MuzzleLocation->SetupAttachment(Gun);

	P_FirePlash = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FirePlash"));
	P_FirePlash->SetupAttachment(Gun);
}

// Called when the game starts or when spawned
void AOtherCharacter::BeginPlay()
{
	Super::BeginPlay();

	//Gun->AttachToComponent(GetMesh(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("J_Bip_R_Hand"));
	//Gun->SetRelativeLocationAndRotation(FVector(-7.4f, 1.6f, -0.27f), FRotator(-83.0f, 156.0f, -64.8f));// x -64 y -83 z 156

	Gun->AttachToComponent(GetMesh(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("J_Bip_R_Hand"));
	Gun->SetRelativeLocationAndRotation(FVector(-8.11f, 0.84f, -2.13f), FRotator(-78.2f, -68.1f, 161.9f));// y, z, x
	Gun->SetWorldScale3D(FVector(0.75f, 0.75f, 0.75f));

	Magazine->AttachToComponent(Gun, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("SOCKET_Magazine"));

	AnimInstance = GetMesh()->GetAnimInstance();
	MagazineAnimInstance = Gun->GetAnimInstance();
}

void AOtherCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bPressedJump)
	{
		GEngine->AddOnScreenDebugMessage(-1, 20.0f, FColor::Red, "jump true");
	}

	Move();
}

void AOtherCharacter::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);

	bJump = false;
}

void AOtherCharacter::BeginDestroy()
{
	Super::BeginDestroy();

	if (GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(DieTimer);
		GetWorld()->GetTimerManager().ClearTimer(OnFireTimer);
	}
}

void AOtherCharacter::Move()
{
	if (bUp)
	{
		MoveForward(1.0f);
	}
	
	if (bDown)
	{
		MoveForward(-1.0f);
	}

	if (bLeft)
	{
		MoveRight(-1.0f);
	}

	if (bRight)
	{
		MoveRight(1.0f);
	}
}

void AOtherCharacter::Attacked()
{
	if (AnimInstance != nullptr)
	{
		AnimInstance->Montage_Play(HitAnimation, 1.f);
	}
}

void AOtherCharacter::Die(bool _bDie)
{
	bDie = _bDie;
	
	GetWorld()->GetTimerManager().SetTimer(DieTimer, FTimerDelegate::CreateLambda([&]() {
		{
			AFPSProjectGameState::Get()->RemoveOtherCharacter(PlayerIndex);
			GetWorld()->GetTimerManager().ClearTimer(DieTimer);
		}
		}), 5.0f, false);
}

void AOtherCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "MoveFoward");
	}
}

void AOtherCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AOtherCharacter::RunStart()
{
	bRun = true;
	//ZoomOut();
	GetCharacterMovement()->MaxWalkSpeed = 700.0f;
}

void AOtherCharacter::RunEnd()
{
	bRun = false;
	GetCharacterMovement()->MaxWalkSpeed = 400.0f;
}

void AOtherCharacter::Reload()
{
	if (AnimInstance)
	{
		AnimInstance->Montage_Play(ReloadAnimation, 1.0f);
		MagazineAnimInstance->Montage_Play(MagazineAnimation, 0.7f);;
	}
}

void AOtherCharacter::OnFire()
{
	Fire();

	GetWorld()->GetTimerManager().SetTimer(OnFireTimer, FTimerDelegate::CreateLambda([&]() {
		{
			Fire();
		}
		}), 0.12f, true);
}

void AOtherCharacter::OnFireReleased()
{
	GetWorld()->GetTimerManager().ClearTimer(OnFireTimer);
}

void AOtherCharacter::Fire()
{
	P_FirePlash->Activate(true);

	if (FireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	if (AnimInstance)
	{
		if (IsZoomIn())
		{
			AnimInstance->Montage_Play(ZoomFireAnimation, 1.0f);
		}
		else
		{
			AnimInstance->Montage_Play(HipFireAnimation, 1.0f);
		}
	}
}

void AOtherCharacter::SetKeyDown(int32 KeyValue, bool Pressed)
{
	switch (KeyValue)
	{
		case (int32)EInputKey::Up:
		{
			bUp = Pressed;
			break;
		}
		case (int32)EInputKey::Down:
		{
			bDown = Pressed;
			break;
		}
		case (int32)EInputKey::Left:
		{
			bLeft = Pressed;
			break;
		}
		case (int32)EInputKey::Right:
		{
			bRight = Pressed;
			break;
		}
		case (int32)EInputKey::Jump:
		{
			if (Pressed)
			{
				Jump();
				bJump = true;
			}
			else
			{
				StopJumping();
				bJump = false;
			}
			break;
		}
		case (int32)EInputKey::Run:
		{	
			if (Pressed)
			{
				RunStart();
			}
			else
			{
				RunEnd();
			}
			break;
		}
		case (int32)EInputKey::ZoomIn:
		{
			if (Pressed)
			{
				bZoomIn = true;
			}
			else
			{
				bZoomIn = false;
			}
			break;
		}
		case (int32)EInputKey::Reload:
		{
			Reload();
			break;
		}
		case (int32)EInputKey::OnFire:
		{
			if (Pressed)
			{
				OnFire();
			}
			else
			{
				OnFireReleased();
			}
			break;
		}

		default:
		{
			break;
		}
	}
}

int32 AOtherCharacter::GetPlayerIndex()
{
	return PlayerIndex;
}

void AOtherCharacter::UpdateHp(int32 _Hp)
{
	Hp = _Hp;
}

void AOtherCharacter::SetPlayerIndex(int32 _PlayerIndex)
{
	PlayerIndex = _PlayerIndex;
}

float AOtherCharacter::GetForward()
{
	if (bUp && bDown)
	{
		return 0.0f;
	}
	else if (bUp)
	{
		return 1.0f;
	}
	else if (bDown)
	{
		return -1.0f;
	}
	else
	{
		return 0.0f;
	}
}

float AOtherCharacter::GetRight()
{
	if (bRight && bLeft)
	{
		return 0.0f;
	}
	else if (bRight)
	{
		return 1.0f;
	}
	else if (bLeft)
	{
		return -1.0f;
	}
	else
	{
		return 0.0f;
	}
}

#pragma optimize("",on)

