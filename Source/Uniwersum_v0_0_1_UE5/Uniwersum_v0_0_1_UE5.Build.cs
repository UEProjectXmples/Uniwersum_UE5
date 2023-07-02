// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Uniwersum_v0_0_1_UE5 : ModuleRules
{
	public Uniwersum_v0_0_1_UE5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
