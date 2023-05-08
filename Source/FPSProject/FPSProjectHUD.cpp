// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSProjectHUD.h"
#include "Engine/Canvas.h"
#include "Engine/Texture2D.h"
#include "TextureResource.h"
#include "CanvasItem.h"
#include "UObject/ConstructorHelpers.h"
#include "Base/WidgetBase.h"
#include "Widget/GamePlayWidget.h"

AFPSProjectHUD::AFPSProjectHUD()
{
	// Set the crosshair texture
	static ConstructorHelpers::FClassFinder<UUserWidget> GamePlayWidget(TEXT("/Game/Blueprint/Widget/W_GamePlay"));
	if (GamePlayWidget.Class != NULL)
	{
		TSubclassOf<UGamePlayWidget> W_GamePlayClass = GamePlayWidget.Class;
		W_GamePlay = CreateWidget<UGamePlayWidget>(GetWorld(), W_GamePlayClass);
	}
}


void AFPSProjectHUD::DrawHUD()
{
	Super::DrawHUD();
	
	//const FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);
	//
	//const FVector2D CrosshairDrawPosition( (Center.X - 6.0f),
	//									   (Center.Y - 5.0f));

	// draw the crosshair
	//FCanvasTileItem TileItem( CrosshairDrawPosition, CrosshairTex->Resource, FLinearColor::White);
	//TileItem.BlendMode = SE_BLEND_Translucent;
	//Canvas->DrawItem( TileItem );
}

void AFPSProjectHUD::BeginPlay()
{
	Super::BeginPlay();

	W_GamePlay->AddToViewport();
}
