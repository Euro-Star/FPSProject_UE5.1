// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSProjectCharacter.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "Kismet/GameplayStatics.h"
#include "Base/BulletBase.h"
#include "Manager/BulletManager.h"
#include "Game/FPSProjectHUD.h"
#include "Widget/GamePlayWidget.h"
#include "Enum/GameEnum.h"
#include <Server/Packets.h>
#include <Game/FPSProjectGameState.h>
#include "Kismet/GameplayStatics.h"
#include "Manager/WidgetManager.h"
#include "Game/FPSProjectGameInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetStringLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/PlayerController.h"
#include "Particles/ParticleSystemComponent.h"
#include "Widget/DyingWidget.h"
#include "Character/Components/WeaponComponent.h"
#include "Character/Components/StatusComponent.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

AFPSProjectCharacter::AFPSProjectCharacter()
{
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

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

	WeaponComponent = CreateDefaultSubobject<UWeaponComponent>(TEXT("Weapon"));
	StatusComponent = CreateDefaultSubobject<UStatusComponent>(TEXT("Status"));
}

void AFPSProjectCharacter::BeginPlay()
{
	Super::BeginPlay();

	SetTPSCharacter();

	HUD = Cast<AFPSProjectHUD>(UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetHUD());
	GamePlayWidget = UWidgetManager::Get()->GetWidget<UGamePlayWidget>(EWidget::GamePlay);
	GameState = Cast<AFPSProjectGameState>(UGameplayStatics::GetGameState(GetWorld()));

	AnimInstance = TPS_Mesh->GetAnimInstance();
	WeaponComponent->SetAttachToComponent(TPS_Mesh, TEXT("J_Bip_R_Hand"));
}

void AFPSProjectCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	ThirdPersonMotionCompensate(DeltaTime);

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

	if (AFPSProjectGameState::Get()->GetGameState())
	{
		UFPSProjectGameInstance::Getinstance()->SendData(S_PlayerRotation);
	}

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

	if (AFPSProjectGameState::Get()->GetGameState())
	{
		UFPSProjectGameInstance::Getinstance()->SendData(S_PlayerMove);
	}
}

// Input
void AFPSProjectCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("ZoomIn", IE_Pressed, this, &AFPSProjectCharacter::ZoomIn);
	PlayerInputComponent->BindAction("ZoomIn", IE_Released, this, &AFPSProjectCharacter::ZoomOut);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AFPSProjectCharacter::Reload);
	PlayerInputComponent->BindAction("Run", IE_Pressed, this, &AFPSProjectCharacter::RunStart);
	PlayerInputComponent->BindAction("Run", IE_Released, this, &AFPSProjectCharacter::RunEnd);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFPSProjectCharacter::OnFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &AFPSProjectCharacter::OnFireReleased);

	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSProjectCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSProjectCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

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
	if (StatusComponent->IsReload()) { return; }

	if (WeaponComponent->GetCurrentAmmo() > 0)
	{	
		bUseControllerRotationYaw = true;

		if (!StatusComponent->IsZoomin())
		{
			HipFire();
		}

		StatusComponent->SetFire(true);
		SendPlayerMove(EInputKey::OnFire);
		Dele_OnFire.Broadcast();
		FireBullet();
	}
	else
	{
		return;
	}

	GetWorld()->GetTimerManager().SetTimer(OnFireTimer, FTimerDelegate::CreateLambda([&]() {
		{
			if (StatusComponent->IsReload())
			{
				OnFireReleased();
				return;
			}

			if (WeaponComponent->GetCurrentAmmo() > 0)
			{
				FireBullet();
			}
			else
			{
				OnFireReleased();
				return;
			}
		}
		}), 0.12f, true);
}

void AFPSProjectCharacter::OnFireReleased()
{
	if (!StatusComponent->IsZoomin())
	{
		ReleaseHipFire();
	}

	Dele_OnFireReleased.Broadcast();

	StatusComponent->SetFire(false);
	BulletSpread = 0.0f;
	SendPlayerMove(EInputKey::OnFire, false);
	GetWorld()->GetTimerManager().ClearTimer(OnFireTimer);
}

void AFPSProjectCharacter::FireBullet()
{
	if (AnimInstance)
	{
		if (StatusComponent->IsZoomin())
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
	if (!StatusComponent->IsZoomin())
	{
		if (StatusComponent->IsRun())
		{
			RunEnd();
		}

		StatusComponent->SetZoomin(true);
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
	if (StatusComponent->IsZoomin())
	{
		StatusComponent->SetZoomin(false);
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
	if (StatusComponent->IsReload() || bPressedJump || GetCharacterMovement()->IsFalling() || WeaponComponent->GetCurrentAmmo() == WeaponComponent->GetMaxAmmo()) { return; }

	if (StatusComponent->IsRun()) { RunEnd(); }
	if (StatusComponent->IsZoomin()) { ZoomOut(); } else { ReleaseHipFire(); }

	Dele_Reload.Broadcast();

	if (ReloadAnimation != nullptr)
	{
		if (AnimInstance != nullptr)
		{
			SendPlayerMove(EInputKey::Reload);

			AnimInstance->Montage_Play(ReloadAnimation, 1.0f);

			StatusComponent->SetReload(true);
		}
	}
}

void AFPSProjectCharacter::ThirdPersonMotionCompensate(float _DeltaTime)
{
	if (StatusComponent->IsFire() || StatusComponent->IsZoomin())
	{
		const FTransform CurrentTransform = TPS_Mesh->GetRelativeTransform();
		const FTransform TargetTransform = FTransform(FRotator(0.0f, CharacterOffset, 0.0f), FVector(0.0f, 0.0f, 0.0f), FVector(1.0f, 1.0f, 1.0f));
		const FTransform ResultTransform = UKismetMathLibrary::TInterpTo(CurrentTransform, TargetTransform, _DeltaTime, 22.5f);
		
		TPS_Mesh->SetRelativeRotation(FRotator(0.0f, ResultTransform.Rotator().Yaw, 0.0f));
	}
	else
	{
		if (GetMoveForward() != 0.0f || GetMoveRight() != 0.0f)
		{
			const FTransform CurrentTransform = TPS_Mesh->GetRelativeTransform();
			const FRotator TargetRotator = UKismetMathLibrary::Conv_VectorToRotator(FVector(GetMoveForward(), GetMoveRight(), 1.0f));
			const FTransform TargetTransform = FTransform(FRotator(0.0f, TargetRotator.Yaw + CharacterOffset, 0.0f), FVector(0.0f, 0.0f, 0.0f), FVector(1.0f, 1.0f, 1.0f));
			
			const FTransform ResultTransform = UKismetMathLibrary::TInterpTo(CurrentTransform, TargetTransform, _DeltaTime, 11.25f);
			
			TPS_Mesh->SetRelativeRotation(FRotator(0.0f, ResultTransform.Rotator().Yaw, 0.0f));

			const FRotator ResultRotator = UKismetMathLibrary::Conv_VectorToRotator(ThirdPersonCameraComponent->GetForwardVector());
			SetActorRotation(FRotator(0.0f, ResultRotator.Yaw, 0.0f));
		}	
	}
}

void AFPSProjectCharacter::RunEnd()
{
	StatusComponent->SetRun(false);
	GetCharacterMovement()->MaxWalkSpeed = 400.0f;

	SendReleasePlayerRun();
}

void AFPSProjectCharacter::HipFire()
{
	if (StatusComponent->IsRun())
	{
		RunEnd();
	}

	bUseControllerRotationYaw = true;
	GetWorld()->GetTimerManager().SetTimer(ZoominTimer, FTimerDelegate::CreateLambda([&]() {
		{
			ZoominFrame += 0.1f;
			ThirdPersonCameraComponent->SetFieldOfView(FMath::Lerp(ZoomOutValue, ZoomInValue, ZoominFrame));
			if (ZoominFrame >= 0.5f)
			{
				GetWorld()->GetTimerManager().ClearTimer(ZoominTimer);
			}
		}
		}), 0.01f, true);
}

void AFPSProjectCharacter::ReleaseHipFire()
{
	if (StatusComponent->IsFire())
	{
		bUseControllerRotationYaw = false;
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

void AFPSProjectCharacter::RunStart()
{
	if (StatusComponent->IsReload())
	{
		return;
	}

	StatusComponent->SetRun(true);
	ZoomOut();
	OnFireReleased();
	GetCharacterMovement()->MaxWalkSpeed = 700.0f;

	SendPressPlayerRun();
}

void AFPSProjectCharacter::Die(int32 Rank)
{
	StatusComponent->SetDie(true);
	UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetInputMode(FInputModeUIOnly());
	UWidgetManager::Get()->GetWidget<UDyingWidget>(EWidget::Dying)->SetTextRank(AFPSProjectGameState::Get()->GetPlayerNum(), Rank);
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
	MoveForwardValue = Value;

	if (Value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AFPSProjectCharacter::MoveRight(float Value)
{
	MoveRightValue = Value;

	if (Value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
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
	//FirstPersonCameraComponent->SetActive(true);
	ThirdPersonCameraComponent->SetActive(false);

	CameraBoom->SetActive(false);

	//FPS_CharacterMesh->SetVisibility(true, true);
	TPS_Mesh->SetVisibility(false, true);

	bFps = true;
}

void AFPSProjectCharacter::SetTPSCharacter()
{
	ThirdPersonCameraComponent->SetActive(true);
	CameraBoom->SetActive(true);
	TPS_Mesh->SetVisibility(true, true);

	bFps = false;
}
