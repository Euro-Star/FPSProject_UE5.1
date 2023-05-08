// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FPSProject : ModuleRules
{
	public FPSProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "Sockets", "Networking",
		"Json"});

        PrivateIncludePaths.Add(ModuleDirectory);
        PublicIncludePaths.Add(ModuleDirectory);
    }
}
