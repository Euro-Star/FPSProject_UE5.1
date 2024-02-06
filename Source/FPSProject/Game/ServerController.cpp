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
#include "Widget/DyingWidget.h"

AServerController::AServerController()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
}

void AServerController::BeginPlay()
{
	Super::BeginPlay();
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
	INIT_FUNCTION(TestPacket) // 함수 이름과 동일

	if (ptr)
	{
		FString msg = ptr->msg;
		//이곳에서 실행 함수를 작성한다.
	}
}

void AServerController::PlayerSpawn(FRecvPacket_Wrapper& packetWrapper)
{
	INIT_FUNCTION(PlayerSpawn)

	if (ptr)
	{
		TArray<ASpawnPoint*> SpawnPoint = AFPSProjectGameState::Get()->GetSpawnPoint();
		AFPSProjectGameState::Get()->SetPlayerIndex(ptr->PlayerIndex);
		AFPSProjectGameState::Get()->SetPlayerNum(ptr->PlayerNum);

		for (int32 i = 0; i < ptr->PlayerNum; ++i)
		{
			if (i == AFPSProjectGameState::Get()->GetPlayerIndex())
			{
				AFPSProjectGameState::Get()->GetPlayer()->SetActorLocation(SpawnPoint[ptr->SpawnIndex[i]]->GetActorLocation());
				AFPSProjectGameState::Get()->SetGameState(true);
			}
			else
			{
				AFPSProjectGameState::Get()->AddOtherCharacter(GetWorld()->SpawnActor<AOtherCharacter>(AFPSProjectGameState::Get()->GetOtherCharacterClass(), SpawnPoint[ptr->SpawnIndex[i]]->GetActorLocation(), FRotator(0.0f, 0.0f, 0.0f)), i);
				AFPSProjectGameState::Get()->GetOtherCharacter(i)->SetPlayerIndex(i);
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
		if (IsValid(AFPSProjectGameState::Get()->GetOtherCharacter(ptr->PlayerIndex)))
		{
			AFPSProjectGameState::Get()->GetOtherCharacter(ptr->PlayerIndex)->SetActorLocation(ptr->CurrentLocation);
			AFPSProjectGameState::Get()->GetOtherCharacter(ptr->PlayerIndex)->SetKeyDown(ptr->InputKey, ptr->IsPress);
		}
	}
}

void AServerController::PlayerRotation(FRecvPacket_Wrapper& packetWrapper)
{
	INIT_FUNCTION(PlayerRotation)

	if(ptr)
	{
		if (IsValid(AFPSProjectGameState::Get()->GetOtherCharacter(ptr->PlayerIndex)))
		{
			AFPSProjectGameState::Get()->GetOtherCharacter(ptr->PlayerIndex)->SetActorRotation(FRotator(0.0f, ptr->RotationY, 0.0f));
		}
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
		FString LevelPath = L"/Game/Maps/PersistentMap";
		UGameplayStatics::OpenLevel(this, *LevelPath, true);
	}
}

void AServerController::Die(FRecvPacket_Wrapper& packetWrapper)
{
	INIT_FUNCTION(Die)

	if (ptr)
	{
		if (ptr->PlayerIndex == AFPSProjectGameState::Get()->GetPlayerIndex())
		{
			AFPSProjectGameState::Get()->GetPlayer()->UpdateHp(0);
			AFPSProjectGameState::Get()->GetPlayer()->Die(ptr->Rank);
		}
		else
		{
			AFPSProjectGameState::Get()->GetOtherCharacter(ptr->PlayerIndex)->Die(true);
		}
	}
}

void AServerController::ChangeHealth(FRecvPacket_Wrapper& packetWrapper)
{
	INIT_FUNCTION(ChangeHealth)

	if (ptr)
	{
		if (ptr->PlayerIndex == AFPSProjectGameState::Get()->GetPlayerIndex())
		{
			AFPSProjectGameState::Get()->GetPlayer()->UpdateHp(ptr->CurrentHealth);
		}
		else
		{
			AFPSProjectGameState::Get()->GetOtherCharacter(ptr->PlayerIndex)->UpdateHp(ptr->CurrentHealth);
		}
	}
}

void AServerController::GameEnd(FRecvPacket_Wrapper& packetWrapper)
{
	INIT_FUNCTION(GameEnd)

	if(ptr)
	{
		UWidgetManager::Get()->GetWidget<UDyingWidget>(EWidget::Dying)->SetTextRank(AFPSProjectGameState::Get()->GetPlayerNum(), 1);
		UWidgetManager::Get()->AddWidget(EWidget::Dying);
		AFPSProjectGameState::Get()->SetGameState(false);
	}
}

void AServerController::BackToLobby(FRecvPacket_Wrapper& packetWrapper)
{
	INIT_FUNCTION(BackToLobby)

	if(ptr)
	{
		UFPSProjectGameInstance::Getinstance()->InitGameInfo();
		UGameplayStatics::OpenLevel(this, "Map_Matching", true);
	}
}
