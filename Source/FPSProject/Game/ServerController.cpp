// Fill out your copyright notice in the Description page of Project Settings.


#include "ServerController.h"
#include "Kismet/GameplayStatics.h"
#include <Game/FPSProjectGameInstance.h>
#include <Server/Packets.h>
#include <JsonObjectConverter.h>
#include <Game/FPSProjectGameState.h>
#include <Game/FPSGameplayStatics.h>
#include <Character/FPSProjectCharacter.h>
#include <Character/OtherCharacter.h>
#include <Manager/SpawnPoint.h>
#include <Widget/RoomWidget.h>
#include <Widget/WaitingRoomWidget.h>
#include "Manager/WidgetManager.h"
#include "Kismet/KismetStringLibrary.h"

AServerController::AServerController()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
}

void AServerController::BeginPlay()
{
	Super::BeginPlay();

	GameState = Cast<AFPSProjectGameState>(UGameplayStatics::GetGameState(GetWorld()));
}

void AServerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RecvPacketQueueExcute(UFPSProjectGameInstance::Getinstance()->JsonQueue, HandleFunc);
}

void AServerController::TestSendMSG(FString msg)
{
	FSendPacket_TestPacket packet;
	packet.msg = msg;
	UFPSProjectGameInstance::Getinstance()->SendData(packet);
}

void AServerController::TestPacket(FRecvPacket_Wrapper& packetWrapper)
{
	INIT_FUNCTION(TestPacket) // �Լ� �̸��� ����

	if (ptr)
	{
		FString msg = ptr->msg;
		//�̰����� ���� �Լ��� �ۼ��Ѵ�.
	}
}

void AServerController::PlayerSpawn(FRecvPacket_Wrapper& packetWrapper)
{
	INIT_FUNCTION(PlayerSpawn)

	if (ptr)
	{
		if (GameState == nullptr)
		{
			GameState = Cast<AFPSProjectGameState>(UGameplayStatics::GetGameState(GetWorld()));
		}

		TArray<ASpawnPoint*> SpawnPoint = GameState->GetSpawnPoint();
		GameState->SetPlayerIndex(ptr->PlayerIndex);

		for (int32 i = 0; i < SpawnPoint.Num(); ++i)
		{
			if (i == GameState->GetPlayerIndex())
			{
				GameState->GetPlayer()->SetActorLocation(SpawnPoint[ptr->SpawnIndex[i]]->GetActorLocation());
			}
			else
			{
				GameState->AddOtherCharacter(GetWorld()->SpawnActor<AOtherCharacter>(GameState->GetOtherCharacterClass(), SpawnPoint[ptr->SpawnIndex[i]]->GetActorLocation(), FRotator(0.0f, 0.0f, 0.0f)), i);
			}
		}

		UWidgetManager::Get()->RemoveWidget(EWidget::Loading);
	}
}

void AServerController::PlayerMove(FRecvPacket_Wrapper& packetWrapper)
{
	INIT_FUNCTION(PlayerMove)

	if(ptr)
	{
		if (GameState == nullptr)
		{
			GameState = Cast<AFPSProjectGameState>(UGameplayStatics::GetGameState(GetWorld()));
		}

		GameState->GetOtherCharacter(ptr->PlayerIndex)->SetActorLocation(ptr->CurrentLocation);
		GameState->GetOtherCharacter(ptr->PlayerIndex)->SetKeyDown(ptr->InputKey, ptr->IsPress);
	}
}

void AServerController::PlayerRotation(FRecvPacket_Wrapper& packetWrapper)
{
	INIT_FUNCTION(PlayerRotation)

	if(ptr)
	{
		GameState->GetOtherCharacter(ptr->PlayerIndex)->SetActorRotation(FRotator(0.0f, ptr->RotationY, 0.0f));
	}
}

void AServerController::RoomCreate(FRecvPacket_Wrapper& packetWrapper)
{
	INIT_FUNCTION(RoomCreate)
		
	if (ptr)
	{
		if (ptr->bCreate)
		{
			UFPSProjectGameInstance::Getinstance()->SetRoomNumber(ptr->RoomNumber);

			UWidgetManager::Get()->GetWidget<URoomWidget>(EWidget::Room)->SetRoomStatus(ptr->bCreate);
			UWidgetManager::Get()->GetWidget<URoomWidget>(EWidget::Room)->AddRoomUser(UFPSProjectGameInstance::Getinstance()->GetId());
			UWidgetManager::Get()->AddWidget(EWidget::Room);
			UWidgetManager::Get()->RemoveWidget(EWidget::WaitingRoom);

			FSendPacket_RoomEnter S_RoomEnter;

			S_RoomEnter.PlayerId = UFPSProjectGameInstance::Getinstance()->GetId();
			S_RoomEnter.RoomNumber = UFPSProjectGameInstance::Getinstance()->GetRoomNumber();

			UFPSProjectGameInstance::Getinstance()->SendData(S_RoomEnter);
		}
	}
}

void AServerController::RoomList(FRecvPacket_Wrapper& packetWrapper)
{
	INIT_FUNCTION(RoomList)

	if(ptr)
	{
		if (ptr->RoomList.GetData())
		{
			UWidgetManager::Get()->GetWidget<UWaitingRoomWidget>(EWidget::WaitingRoom)->InitRoomList(ptr->RoomList);
		}
	}
}

void AServerController::RoomEnter(FRecvPacket_Wrapper& packetWrapper)
{
	INIT_FUNCTION(RoomEnter)

	if(ptr)
	{
		UFPSProjectGameInstance::Getinstance()->SetRoomNumber(ptr->RoomNumber);

		UWidgetManager::Get()->AddWidget(EWidget::Room);
		UWidgetManager::Get()->RemoveWidget(EWidget::WaitingRoom);

		UWidgetManager::Get()->GetWidget<URoomWidget>(EWidget::Room)->InitRoomUser(ptr->PlayerId);
	}
}

void AServerController::RoomInUser(FRecvPacket_Wrapper& packetWrapper)
{
	INIT_FUNCTION(RoomInUser)

	if (ptr)
	{
		UWidgetManager::Get()->GetWidget<URoomWidget>(EWidget::Room)->AddRoomUser(ptr->PlayerId);
	}
}

void AServerController::GameStartButton(FRecvPacket_Wrapper& packetWrapper)
{
	INIT_FUNCTION(GameStartButton)

	if (ptr)
	{
		UGameplayStatics::OpenLevel(this, "PersistentMap", true);
	}
}
