// Fill out your copyright notice in the Description page of Project Settings.


#include "ServerController.h"
#include "Kismet/GameplayStatics.h"
#include <FPSProjectGameInstance.h>
#include <Server/Packets.h>
#include <JsonObjectConverter.h>

void AServerController::BeginPlay()
{
	Super::BeginPlay();
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
	INIT_FUNCTION(TestPacket) // �Լ� �̸��� ����

	if (ptr)
	{
		FString msg = ptr->msg;
		//�̰����� ���� �Լ��� �ۼ��Ѵ�.
	}
}
