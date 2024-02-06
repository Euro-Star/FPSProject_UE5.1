// Copyright Epic Games, Inc. All Rights Reserved.

#include "WeaponManager.h"
#include "WeaponManagerStyle.h"
#include "WeaponManagerCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"
#include "EditorAssetLibrary.h"
#include "Editor/Blutility/Public/EditorUtilitySubsystem.h"
#include "Editor/Blutility/Classes/EditorUtilityWidgetBlueprint.h"
#include "Editor/Blutility/Classes/EditorUtilityWidget.h"

static const FName WeaponManagerTabName("WeaponManager");

#define LOCTEXT_NAMESPACE "FWeaponManagerModule"

void FWeaponManagerModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FWeaponManagerStyle::Initialize();
	FWeaponManagerStyle::ReloadTextures();

	FWeaponManagerCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FWeaponManagerCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FWeaponManagerModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FWeaponManagerModule::RegisterMenus));
}

void FWeaponManagerModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FWeaponManagerStyle::Shutdown();

	FWeaponManagerCommands::Unregister();
}

void FWeaponManagerModule::PluginButtonClicked()
{
	RunEditorUtilityWidget();
}

void FWeaponManagerModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FWeaponManagerCommands::Get().PluginAction, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("PluginTools");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FWeaponManagerCommands::Get().PluginAction));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

void FWeaponManagerModule::RunEditorUtilityWidget()
{
	UObject* Blueprint = UEditorAssetLibrary::LoadAsset(FString(TEXT("/Game/Blueprint/Editor/WeaponManager")));
	if (Blueprint)
	{
		UEditorUtilityWidgetBlueprint* EditorWidget =
			Cast<UEditorUtilityWidgetBlueprint>(Blueprint);

		if (EditorWidget)
		{
			UEditorUtilitySubsystem* EditorUtilitySubsystem =
				GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();

			EditorUtilitySubsystem->SpawnAndRegisterTab(EditorWidget);
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FWeaponManagerModule, WeaponManager)