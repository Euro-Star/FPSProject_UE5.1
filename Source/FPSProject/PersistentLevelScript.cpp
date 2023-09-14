// Fill out your copyright notice in the Description page of Project Settings.


#include "PersistentLevelScript.h"
#include "Game/FPSGameplayStatics.h"
#include "Widget/LoadingWidget.h"
#include "Manager/WidgetManager.h"
#include "Server/Packets.h"
#include "Game/FPSProjectGameInstance.h"

void APersistentLevelScript::BeginPlay()
{
	Super::BeginPlay();

	Info.CallbackTarget = this;
	Info.ExecutionFunction = "CompleteLevelLoaded";
	Info.UUID = 1;
	Info.Linkage = 0;

	UWidgetManager::Get()->AddWidget(EWidget::Loading);
	UWidgetManager::Get()->GetWidget<ULoadingWidget>(EWidget::Loading)->FakeLoading();

	UGameplayStatics::LoadStreamLevel(this, "Map_1_Night", true, true, Info);
}

void APersistentLevelScript::CompleteLevelLoaded()
{
	UWidgetManager::Get()->GetWidget<ULoadingWidget>(EWidget::Loading)->UpdateLoadingBar(1.0f, true);

	FSendPacket_LoadingComplete S_LoadingComplete;

	S_LoadingComplete.PlayerId = UFPSProjectGameInstance::Getinstance()->GetId();
	S_LoadingComplete.RoomNumber = UFPSProjectGameInstance::Getinstance()->GetRoomNumber();

	UFPSProjectGameInstance::Getinstance()->SendData(S_LoadingComplete);
	//UPackage* PersistentPackage = FindObjectFast<UPackage>(NULL, "/Game/Maps/PersistentMap");
	//if (PersistentPackage)
	//{
	//	UWorld* World = UWorld::FindWorldInPackage(PersistentPackage);
	//	ULevelStreaming* LevelStream = World->GetStreamingLevels()[0];
	//	PackageName = LevelStream->GetWorldAssetPackageFName();
	//	
	//	UGameplayStatics::LoadStreamLevel(this, PackageName, true, true, FLatentActionInfo());
	//}

	
	//GEngine->AddOnScreenDebugMessage(-1, 20.0f, FColor::Red, UKismetStringLibrary::Conv_FloatToString(GetAsyncLoadPercentage(*LevelPath)));
	//if (!(GetAsyncLoadPercentage(pathTest.GetAssetFName()) < 0.0f))
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 20.0f, FColor::Red, UKismetStringLibrary::Conv_FloatToString(GetAsyncLoadPercentage(pathTest.GetAssetFName())));
	//}
}
