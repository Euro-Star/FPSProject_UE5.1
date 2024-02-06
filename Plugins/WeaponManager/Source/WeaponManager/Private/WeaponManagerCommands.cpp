// Copyright Epic Games, Inc. All Rights Reserved.

#include "WeaponManagerCommands.h"

#define LOCTEXT_NAMESPACE "FWeaponManagerModule"

void FWeaponManagerCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "WeaponManager", "Execute WeaponManager action", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
