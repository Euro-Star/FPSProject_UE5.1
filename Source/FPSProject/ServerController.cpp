// Fill out your copyright notice in the Description page of Project Settings.


#include "ServerController.h"
#include "Kismet/GameplayStatics.h"
#include <FPSProjectGameInstance.h>
#include <Server/Packets.h>
#include <JsonObjectConverter.h>
#include <FPSProjectGameState.h>
#include <FPSGameplayStatics.h>
#include <Character/FPSProjectCharacter.h>
#include <Character/OtherCharacter.h>
#include <Manager/SpawnPoint.h>

void AServerController::BeginPlay()
{
	Super::BeginPlay();

	GameState = Cast<AFPSProjectGameState>(UGameplayStatics::GetGameState(GetWorld()));
}

void AServerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto inst = Cast<UFPSProjectGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	RecvPacketQueueExcute(inst->JsonQueue, HandleFunc);
}

void AServerController::TestSendMSG(FString msg)
{
	auto inst = Cast<UFPSProjectGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	FSendPacket_TestPacket packet;
	packet.msg = msg;
	inst->SendData(packet);
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
