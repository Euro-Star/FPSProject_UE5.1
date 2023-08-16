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
	INIT_FUNCTION(TestPacket) // 함수 이름과 동일

	if (ptr)
	{
		FString msg = ptr->msg;
		//이곳에서 실행 함수를 작성한다.
	}
}

void AServerController::EnterGame(FRecvPacket_Wrapper& packetWrapper)
{
	INIT_FUNCTION(EnterGame)

	if (ptr)
	{
		GameState->SetPlayerId(ptr->PlayerId);
		GameState->bTest = true;
	}
}

void AServerController::PlayerSpawn(FRecvPacket_Wrapper& packetWrapper)
{
	INIT_FUNCTION(PlayerSpawn)

	if (ptr)
	{
		TArray<ASpawnPoint*> SpawnPoint = GameState->GetSpawnPoint();

		for (int32 i = 0; i < SpawnPoint.Num(); ++i)
		{
			if (i == GameState->GetPlayerId())
			{
				GameState->GetPlayer()->SetActorLocation(SpawnPoint[ptr->SpawnIndex[i]]->GetActorLocation());
			}
			else
			{
				GameState->AddOtherCharacter(GetWorld()->SpawnActor<AOtherCharacter>(GameState->GetOtherCharacterClass(), SpawnPoint[ptr->SpawnIndex[i]]->GetActorLocation(), FRotator(0.0f, 0.0f, 0.0f)), i);
			}
		}
	}
}

void AServerController::PlayerMove(FRecvPacket_Wrapper& packetWrapper)
{
	INIT_FUNCTION(PlayerMove)

	if(ptr)
	{
		GameState->GetOtherCharacter(ptr->PlayerId)->SetActorLocation(ptr->CurrentLocation);
		GameState->GetOtherCharacter(ptr->PlayerId)->SetKeyDown(ptr->InputKey, ptr->IsPress);
	}
}

void AServerController::PlayerRotation(FRecvPacket_Wrapper& packetWrapper)
{
	INIT_FUNCTION(PlayerRotation)

	if(ptr)
	{
		GameState->GetOtherCharacter(ptr->PlayerId)->SetActorRotation(FRotator(0.0f, 0.0f, ptr->RotationY));
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
			UWidgetManager::Get()->AddWidget(EWidget::Room);
			UWidgetManager::Get()->RemoveWidget(EWidget::WaitingRoom);
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

void AServerController::InRoomUser(FRecvPacket_Wrapper& packetWrapper)
{
	INIT_FUNCTION(InRoomUser)

	if (ptr)
	{
		UWidgetManager::Get()->GetWidget<URoomWidget>(EWidget::Room)->AddRoomUser(ptr->Id);
	}
}

void AServerController::GameStart(FRecvPacket_Wrapper& packetWrapper)
{
	INIT_FUNCTION(GameStart)

	if (ptr)
	{
		UGameplayStatics::OpenLevel(this, "PersistentMap", true);
	}
}
