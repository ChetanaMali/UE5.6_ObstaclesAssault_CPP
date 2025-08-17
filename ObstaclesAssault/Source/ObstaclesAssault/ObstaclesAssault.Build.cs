// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ObstaclesAssault : ModuleRules
{
	public ObstaclesAssault(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"ObstaclesAssault",
			"ObstaclesAssault/Variant_Platforming",
			"ObstaclesAssault/Variant_Platforming/Animation",
			"ObstaclesAssault/Variant_Combat",
			"ObstaclesAssault/Variant_Combat/AI",
			"ObstaclesAssault/Variant_Combat/Animation",
			"ObstaclesAssault/Variant_Combat/Gameplay",
			"ObstaclesAssault/Variant_Combat/Interfaces",
			"ObstaclesAssault/Variant_Combat/UI",
			"ObstaclesAssault/Variant_SideScrolling",
			"ObstaclesAssault/Variant_SideScrolling/AI",
			"ObstaclesAssault/Variant_SideScrolling/Gameplay",
			"ObstaclesAssault/Variant_SideScrolling/Interfaces",
			"ObstaclesAssault/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
