// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSProjectCharacter.h"
#include "FPSProject/FPSProjectProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId
#include "Base/BulletBase.h"
#include "Manager/BulletManager.h"
#include "DrawDebugHelpers.h"
#include "Game/FPSProjectHUD.h"
#include "Widget/GamePlayWidget.h"
#include "Enum/GameEnum.h"
#include <Server/Packets.h>
#include <Game/FPSProjectGameState.h>
#include "Kismet/GameplayStatics.h"
#include "Math/UnrealMathUtility.h"
#include "Manager/WidgetManager.h"
#include "Game/FPSProjectGameInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetStringLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/PlayerController.h"
#include "Particles/ParticleSystemComponent.h"


DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AFPSProjectCharacter

AFPSProjectCharacter::AFPSProjectCharacter()
{
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f));
	FirstPersonCameraComponent->bUsePawnControlRotation = true;
	FirstPersonCameraComponent->bAutoActivate = true;

	// FPS Init //
	FPS_CharacterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FPSMesh"));
	FPS_CharacterMesh->SetOnlyOwnerSee(true);
	FPS_CharacterMesh->SetupAttachment(FirstPersonCameraComponent);
	FPS_CharacterMesh->bCastDynamicShadow = false;
	FPS_CharacterMesh->CastShadow = false;
	FPS_CharacterMesh->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	FPS_CharacterMesh->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	SocketHandLeft = CreateDefaultSubobject<USceneComponent>(TEXT("SocketHandLeft"));
	SocketHandLeft->SetupAttachment(FPS_CharacterMesh);

	SocketHandRight = CreateDefaultSubobject<USceneComponent>(TEXT("SocketHandRight"));
	SocketHandRight->SetupAttachment(FPS_CharacterMesh);

	MeshKnife = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh_Knife"));
	MeshKnife->SetupAttachment(SocketHandRight);

	// TPS Init //
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f;
	CameraBoom->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f));
	CameraBoom->bUsePawnControlRotation = true;

	TPS_Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMeshTPS"));
	TPS_Mesh->SetOnlyOwnerSee(true);
	TPS_Mesh->SetupAttachment(RootComponent);
	TPS_Mesh->bCastDynamicShadow = false;
	TPS_Mesh->CastShadow = false;
	TPS_Mesh->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	TPS_Mesh->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	ThirdPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPersonCamera"));
	ThirdPersonCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	ThirdPersonCameraComponent->bUsePawnControlRotation = false;
	ThirdPersonCameraComponent->bAutoActivate = false;

	RootCosmetics = CreateDefaultSubobject<USceneComponent>(TEXT("RootCosmetics"));
	RootCosmetics->SetupAttachment(TPS_Mesh);

	MeshGoggles = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh_Goggles"));
	MeshGoggles->SetupAttachment(RootCosmetics);

	MeshHelmet = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh_Helmet"));
	MeshHelmet->SetupAttachment(RootCosmetics);

	MeshHeadset = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh_Headset"));
	MeshHeadset->SetupAttachment(RootCosmetics);

	// Default Init //
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(RootComponent);

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	//FP_MuzzleLocation->SetRelativeLocation(FVector(0.0f, 49.4f, 6.6f));

	GunOffset = FVector(75.0f, 0.0f, -5.0f);

	Scope = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Scope"));
	Scope->SetupAttachment(RootComponent);

	Magazine = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Magazine"));
	Magazine->SetupAttachment(RootComponent);

	P_FirePlash = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FirePlash"));
	P_FirePlash->SetupAttachment(FP_Gun);
}

void AFPSProjectCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	SetTPSCharacter();

	HUD = Cast<AFPSProjectHUD>(UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetHUD());
	GamePlayWidget = UWidgetManager::Get()->GetWidget<UGamePlayWidget>(EWidget::GamePlay);
	GameState = Cast<AFPSProjectGameState>(UGameplayStatics::GetGameState(GetWorld()));

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	FP_Gun->AttachToComponent(TPS_Mesh, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("J_Bip_R_Hand"));
	FP_Gun->SetRelativeLocationAndRotation(FVector(-8.11f, 0.84f, -2.13f), FRotator(-78.2f, -68.1f, 161.9f));// y, z, x
	FP_Gun->SetWorldScale3D(FVector(0.75f, 0.75f, 0.75f));
	Scope->AttachToComponent(FP_Gun, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("SOCKET_Scope"));
	Magazine->AttachToComponent(FP_Gun, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("SOCKET_Magazine"));

	AnimInstance = TPS_Mesh->GetAnimInstance();
	MagazineAnimInstance = FP_Gun->GetAnimInstance();

	// Show or hide the two versions of the gun based on whether or not we're using motion controllers.
	if (bUsingMotionControllers)
	{
		FPS_CharacterMesh->SetHiddenInGame(true, true);
	}
	else
	{
		FPS_CharacterMesh->SetHiddenInGame(false, true);
	}
}

void AFPSProjectCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	Timer += DeltaTime;

	if (Timer >= Interval)
	{
		PlayerRotation_Y = GetActorRotation().Yaw;

		if (!(FMath::RoundToZero(PlayerRotation_Y) == FMath::RoundToZero(PrevRotation_Y)))
		{
			PrevRotation_Y = SendPlayerRotation();
		}

		Timer = 0.0f;
	}	
}

float AFPSProjectCharacter::SendPlayerRotation()
{
	FSendPacket_PlayerRotation S_PlayerRotation;

	S_PlayerRotation.isTCP = true;
	S_PlayerRotation.PlayerIndex = GameState->GetPlayerIndex();
	S_PlayerRotation.RotationY = PlayerRotation_Y;
	S_PlayerRotation.RoomNumber = UFPSProjectGameInstance::Getinstance()->GetRoomNumber();

	UFPSProjectGameInstance::Getinstance()->SendData(S_PlayerRotation);

	return PlayerRotation_Y;
}

/* 키 입력 서버 코드 */
void AFPSProjectCharacter::SendPressPlayerMoveUp()
{
	SendPlayerMove(EInputKey::Up);
}

void AFPSProjectCharacter::SendPressPlayerMoveDown()
{
	SendPlayerMove(EInputKey::Down);
}

void AFPSProjectCharacter::SendPressPlayerMoveLeft()
{
	SendPlayerMove(EInputKey::Left);
}

void AFPSProjectCharacter::SendPressPlayerMoveRight()
{
	SendPlayerMove(EInputKey::Right);
}

void AFPSProjectCharacter::SendPressPlayerJump()
{
	SendPlayerMove(EInputKey::Jump);
}

void AFPSProjectCharacter::SendPressPlayerRun()
{
	SendPlayerMove(EInputKey::Run);
}

void AFPSProjectCharacter::SendPressPlayerZoomIn()
{
	SendPlayerMove(EInputKey::ZoomIn);
}

void AFPSProjectCharacter::Jump()
{
	Super::Jump();

	SendPressPlayerJump();
}

void AFPSProjectCharacter::StopJumping()
{
	Super::StopJumping();

	SendReleasePlayerJump();
}

void AFPSProjectCharacter::SendReleasePlayerMoveUp()
{
	SendPlayerMove(EInputKey::Up, false);
}

void AFPSProjectCharacter::SendReleasePlayerMoveDown()
{
	SendPlayerMove(EInputKey::Down, false);
}

void AFPSProjectCharacter::SendReleasePlayerMoveLeft()
{
	SendPlayerMove(EInputKey::Left, false);
}

void AFPSProjectCharacter::SendReleasePlayerMoveRight()
{
	SendPlayerMove(EInputKey::Right, false);
}

void AFPSProjectCharacter::SendReleasePlayerJump()
{
	SendPlayerMove(EInputKey::Jump, false);
}

void AFPSProjectCharacter::SendReleasePlayerRun()
{
	SendPlayerMove(EInputKey::Run, false);
}

void AFPSProjectCharacter::SendReleasePlayerZoomOut()
{
	SendPlayerMove(EInputKey::ZoomIn, false);
}

void AFPSProjectCharacter::SendPlayerMove(EInputKey Key, bool bPressd, bool bTcp)
{
	FSendPacket_PlayerMove S_PlayerMove;

	S_PlayerMove.isTCP = bTcp;
	S_PlayerMove.InputKey = (int32)Key;
	S_PlayerMove.IsPress = bPressd;
	S_PlayerMove.PlayerIndex = GameState->GetPlayerIndex();
	S_PlayerMove.CurrentLocation = GetActorLocation();
	S_PlayerMove.RoomNumber = UFPSProjectGameInstance::Getinstance()->GetRoomNumber();

	UFPSProjectGameInstance::Getinstance()->SendData(S_PlayerMove);
}
////////////////////////////////////////////////////////////////////////////////////////

// Input
void AFPSProjectCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("ZoomIn", IE_Pressed, this, &AFPSProjectCharacter::ZoomIn);
	PlayerInputComponent->BindAction("ZoomIn", IE_Released, this, &AFPSProjectCharacter::ZoomOut);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AFPSProjectCharacter::Reload);
	PlayerInputComponent->BindAction("Run", IE_Pressed, this, &AFPSProjectCharacter::RunStart);
	PlayerInputComponent->BindAction("Run", IE_Released, this, &AFPSProjectCharacter::RunEnd);

	//PlayerInputComponent->BindAction("ChangeView", IE_Pressed, this, &AFPSProjectCharacter::ChangeView);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFPSProjectCharacter::OnFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &AFPSProjectCharacter::OnFireReleased);


	// Enable touchscreen input
	//EnableTouchscreenMovement(PlayerInputComponent);

	//PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AFPSProjectCharacter::OnResetVR);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSProjectCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSProjectCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	//PlayerInputComponent->BindAxis("TurnRate", this, &AFPSProjectCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AFPSProjectCharacter::LookUpAtRate);

	// 키 인식 서버로 보냄(이동 동기화)

	if (Cast<AFPSProjectGameState>(UGameplayStatics::GetGameState(GetWorld())))
	{
		PlayerInputComponent->BindAction("Up", IE_Pressed, this, &AFPSProjectCharacter::SendPressPlayerMoveUp);
		PlayerInputComponent->BindAction("Up", IE_Released, this, &AFPSProjectCharacter::SendReleasePlayerMoveUp);

		PlayerInputComponent->BindAction("Down", IE_Pressed, this, &AFPSProjectCharacter::SendPressPlayerMoveDown);
		PlayerInputComponent->BindAction("Down", IE_Released, this, &AFPSProjectCharacter::SendReleasePlayerMoveDown);

		PlayerInputComponent->BindAction("Left", IE_Pressed, this, &AFPSProjectCharacter::SendPressPlayerMoveLeft);
		PlayerInputComponent->BindAction("Left", IE_Released, this, &AFPSProjectCharacter::SendReleasePlayerMoveLeft);

		PlayerInputComponent->BindAction("Right", IE_Pressed, this, &AFPSProjectCharacter::SendPressPlayerMoveRight);
		PlayerInputComponent->BindAction("Right", IE_Released, this, &AFPSProjectCharacter::SendReleasePlayerMoveRight);
	}
}

void AFPSProjectCharacter::OnFire()
{
	if (bReload)
	{
		return;
	}
	if (CurrentAmmo > 0)
	{		
		FireBullet();
	}
	else
	{
		return;
	}

	GetWorld()->GetTimerManager().SetTimer(OnFireTimer, FTimerDelegate::CreateLambda([&]() {
		{
			if (bReload)
			{
				GetWorld()->GetTimerManager().ClearTimer(OnFireTimer);
				return;
			}

			if (CurrentAmmo > 0)
			{
				FireBullet();
			}
			else
			{
				GetWorld()->GetTimerManager().ClearTimer(OnFireTimer);
				return;
			}
		}
		}), 0.12f, true);
}

void AFPSProjectCharacter::OnFireReleased()
{
	GetWorld()->GetTimerManager().ClearTimer(OnFireTimer);
}

void AFPSProjectCharacter::FireBullet()
{
	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		const FRotator SpawnRotation = ThirdPersonCameraComponent->GetComponentRotation();
		//const FVector SpawnLocation = ThirdPersonCameraComponent->GetComponentLocation();
		const FVector SpawnLocation = FP_MuzzleLocation->GetComponentLocation();

		const FVector LineTraceStart = ThirdPersonCameraComponent->GetComponentLocation();
		const FVector LineTraceEnd = ThirdPersonCameraComponent->GetComponentLocation() + ThirdPersonCameraComponent->GetForwardVector() * 2000.0f;

		FHitResult LineTraceResult;
		FCollisionQueryParams DefaltParams;

		GetWorld()->LineTraceSingleByChannel(LineTraceResult, LineTraceStart, LineTraceEnd, ECC_Visibility, DefaltParams);
		DrawDebugLine(GetWorld(), LineTraceStart, LineTraceEnd, FColor(0, 255, 0, 0), true, 1.0f, 0, 2);

		const FVector TargetPoint = FVector(LineTraceResult.ImpactPoint - SpawnLocation).GetSafeNormal();

		ABulletBase* Bullet = nullptr;
		Bullet = mBulletManager->UseBullet(Bullet, EBulletType::Rifle);
		if (Bullet)
		{
			//Bullet->UseBullet(SpawnLocation, SpawnRotation, ThirdPersonCameraComponent->GetForwardVector());
			Bullet->UseBullet(SpawnLocation, SpawnRotation, TargetPoint);

			CurrentAmmo -= 1;

			GamePlayWidget->UpdateAmmoText(FString::FromInt(GetCurrentAmmo()));
			P_FirePlash->Activate(true);
		}
	}

	if (FireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	if (AnimInstance)
	{
		if (IsZoomin())
		{
			AnimInstance->Montage_Play(ZoomFireAnimation, 1.0f);
		}
		else
		{
			AnimInstance->Montage_Play(HipFireAnimation, 1.0f);
		}
	}
}

void AFPSProjectCharacter::ZoomIn()
{
	if (!bZoomIn)
	{
		if (bRun)
		{
			RunEnd();
		}

		bZoomIn = true;
		bUseControllerRotationYaw = true;
		SendPressPlayerZoomIn();
		GetWorld()->GetTimerManager().SetTimer(ZoominTimer, FTimerDelegate::CreateLambda([&]() {
			{
				ZoominFrame += 0.1f;
				ThirdPersonCameraComponent->SetFieldOfView(FMath::Lerp(ZoomOutValue, ZoomInValue, ZoominFrame));
				if (ZoominFrame >= 1.0f)
				{
					GetWorld()->GetTimerManager().ClearTimer(ZoominTimer);
				}
			}
			}), 0.01f, true);
	}
}

void AFPSProjectCharacter::ZoomOut()
{
	if (bZoomIn)
	{
		bZoomIn = false;
		bUseControllerRotationYaw = false;
		SendReleasePlayerZoomOut();
		GetWorld()->GetTimerManager().SetTimer(ZoominTimer, FTimerDelegate::CreateLambda([&]() {
			{
				ZoominFrame -= 0.1f;
				ThirdPersonCameraComponent->SetFieldOfView(FMath::Lerp(ZoomOutValue, ZoomInValue, ZoominFrame));
				if (ZoominFrame <= 0.0f)
				{
					GetWorld()->GetTimerManager().ClearTimer(ZoominTimer);
				}
			}
			}), 0.01f, true);
	}
}

void AFPSProjectCharacter::Reload()
{
	if (bReload || bPressedJump || GetCharacterMovement()->IsFalling() || CurrentAmmo == 30)
	{
		return;
	}

	if (bZoomIn)
	{
		ZoomOut();
	}

	if (bRun)
	{
		RunEnd();
	}

	if (ReloadAnimation != nullptr)
	{
		if (AnimInstance != nullptr)
		{
			SendPlayerMove(EInputKey::Reload);

			FOnMontageBlendingOutStarted CompleteDelegate;

			CompleteDelegate.BindUObject(this, &AFPSProjectCharacter::ReloadMontageComplete);

			AnimInstance->Montage_Play(ReloadAnimation, 1.0f);
			MagazineAnimInstance->Montage_Play(MagazineAnimation, 0.7f);
			MagazineAnimInstance->Montage_SetEndDelegate(CompleteDelegate, MagazineAnimation);

			bReload = true;
		}
	}
}

void AFPSProjectCharacter::ReloadMontageComplete(UAnimMontage* AnimMontage, bool)
{
	CurrentAmmo = 30;
	bReload = false;
	GamePlayWidget->UpdateAmmoText(FString::FromInt(GetCurrentAmmo()));
}

void AFPSProjectCharacter::RunEnd()
{
	bRun = false;
	GetCharacterMovement()->MaxWalkSpeed = 400.0f;

	SendReleasePlayerRun();
}

void AFPSProjectCharacter::RunStart()
{
	if (IsReload())
	{
		return;
	}

	bRun = true;
	ZoomOut();
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;

	SendPressPlayerRun();
}

void AFPSProjectCharacter::Die()
{
	bDie = true;
	UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetInputMode(FInputModeUIOnly());
	UWidgetManager::Get()->AddWidget(EWidget::Dying);
}

void AFPSProjectCharacter::UpdateHp(int32 _Hp)
{
	if (Hp > _Hp)
	{
		if (AnimInstance)
		{
			AnimInstance->Montage_Play(HitAnimation, 1.0f);
		}
	}

	Hp = _Hp;

	UWidgetManager::Get()->GetWidget<UGamePlayWidget>(EWidget::GamePlay)->UpdateHp(Hp);
}

void AFPSProjectCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AFPSProjectCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AFPSProjectCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AFPSProjectCharacter::ChangeView()
{
	if (bFps)
	{
		SetTPSCharacter();
	}
	else
	{
		SetFPSCharacter();
	}
}

void AFPSProjectCharacter::SetFPSCharacter()
{
	FirstPersonCameraComponent->SetActive(true);
	ThirdPersonCameraComponent->SetActive(false);

	CameraBoom->SetActive(false);

	FPS_CharacterMesh->SetVisibility(true, true);
	TPS_Mesh->SetVisibility(false, true);

	FP_Gun->AttachToComponent(FPS_CharacterMesh, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

	bFps = true;
}

void AFPSProjectCharacter::SetTPSCharacter()
{
	FirstPersonCameraComponent->SetActive(false);
	ThirdPersonCameraComponent->SetActive(true);

	CameraBoom->SetActive(true);

	FPS_CharacterMesh->SetVisibility(false, true);
	TPS_Mesh->SetVisibility(true, true);

	FP_Gun->AttachToComponent(TPS_Mesh, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

	bFps = false;
}
