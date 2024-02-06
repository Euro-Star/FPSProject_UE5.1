// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "WeaponManagerStyle.h"

class FWeaponManagerCommands : public TCommands<FWeaponManagerCommands>
{
public:

	FWeaponManagerCommands()
		: TCommands<FWeaponManagerCommands>(TEXT("WeaponManager"), NSLOCTEXT("Contexts", "WeaponManager", "WeaponManager Plugin"), NAME_None, FWeaponManagerStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
