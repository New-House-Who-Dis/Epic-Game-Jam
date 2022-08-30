// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EpicGameJam22 : ModuleRules
{
	public EpicGameJam22(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
