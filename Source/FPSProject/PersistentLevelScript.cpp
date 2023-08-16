// Fill out your copyright notice in the Description page of Project Settings.


#include "PersistentLevelScript.h"
#include "Game/FPSGameplayStatics.h"
#include "Engine/LevelStreaming.h"
#include "Kismet/KismetStringLibrary.h"
#include "Engine/StreamableManager.h"
#include "Engine/AssetManager.h"
#include "Serialization/AsyncPackageLoader.h"

void APersistentLevelScript::BeginPlay()
{
	Super::BeginPlay();


}

void APersistentLevelScript::TestFuc()
{
	UPackage* PersistentPackage = FindObjectFast<UPackage>(NULL, "/Game/Maps/PersistentMap");
	if (PersistentPackage)
	{
		UWorld* World = UWorld::FindWorldInPackage(PersistentPackage);
		ULevelStreaming* LevelStream = World->GetStreamingLevels()[0];
		PackageName = LevelStream->GetWorldAssetPackageFName();
		
		UGameplayStatics::LoadStreamLevel(this, PackageName, true, true, FLatentActionInfo());
	}

	
	//GEngine->AddOnScreenDebugMessage(-1, 20.0f, FColor::Red, UKismetStringLibrary::Conv_FloatToString(GetAsyncLoadPercentage(*LevelPath)));
	//if (!(GetAsyncLoadPercentage(pathTest.GetAssetFName()) < 0.0f))
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 20.0f, FColor::Red, UKismetStringLibrary::Conv_FloatToString(GetAsyncLoadPercentage(pathTest.GetAssetFName())));
	//}
}

void APersistentLevelScript::TestFuc2(FName name)
{	
	GEngine->AddOnScreenDebugMessage(-1, 20.0f, FColor::Red, UKismetStringLibrary::Conv_FloatToString(GetAsyncLoadPercentage(name)));
}
