// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Uniwersum : ModuleRules
{
	public Uniwersum(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine",
			"InputCore", "HeadMountedDisplay", "EnhancedInput", "AIModule" });
	}
}
