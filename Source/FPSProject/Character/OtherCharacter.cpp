// Fill out your copyright notice in the Description page of Project Settings.


#include "OtherCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

#pragma optimize("", off)

// Sets default values
AOtherCharacter::AOtherCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gun"));
	Gun->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AOtherCharacter::BeginPlay()
{
	Super::BeginPlay();

	Gun->AttachToComponent(GetMesh(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("J_Bip_R_Hand"));
	Gun->SetRelativeLocationAndRotation(FVector(-7.4f, 1.6f, -0.27f), FRotator(-83.0f, 156.0f, -64.8f));// x -64 y -83 z 156
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
	UAnimInstance* HitAnimInstance = GetMesh()->GetAnimInstance();

	if (HitAnimInstance != nullptr)
	{
		HitAnimInstance->Montage_Play(HitAnim, 1.f);
	}
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
	GetCharacterMovement()->MaxWalkSpeed = 900.0f;
}

void AOtherCharacter::RunEnd()
{
	bRun = false;
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
}

void AOtherCharacter::SetKeyDown(int32 KeyValue, bool Pressed)
{
	switch (KeyValue)
	{
		case 0:
		{
			bUp = Pressed;
			break;
		}
		case 1:
		{
			bDown = Pressed;
			break;
		}
		case 2:
		{
			bLeft = Pressed;
			break;
		}
		case 3:
		{
			bRight = Pressed;
			break;
		}
		case 4:
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
		case 5:
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

		default:
		{
			break;
		}
	}
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

bool AOtherCharacter::IsRun()
{
	return bRun;
}

bool AOtherCharacter::IsJump()
{
	return bJump;
}

#pragma optimize("",on)

