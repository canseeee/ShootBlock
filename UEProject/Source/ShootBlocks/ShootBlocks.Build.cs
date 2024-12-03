// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ShootBlocks : ModuleRules
{
	public ShootBlocks(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PublicIncludePaths.AddRange(
			new string[]
			{
				"ShootBlocks"
			}
		);

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
