// Fill out your copyright notice in the Description page of Project Settings.


#include "OtherCharacter.h"

#pragma optimize("", off)

// Sets default values
AOtherCharacter::AOtherCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

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


void AOtherCharacter::Attacked()
{
	UAnimInstance* HitAnimInstance = GetMesh()->GetAnimInstance();

	if (HitAnimInstance != nullptr)
	{
		HitAnimInstance->Montage_Play(HitAnim, 1.f);
	}
}

#pragma optimize("",on)

