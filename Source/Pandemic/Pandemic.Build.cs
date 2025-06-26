using UnrealBuildTool;

public class Pandemic : ModuleRules {
    public Pandemic(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AISentience",
            "AIUtils",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "DialogueSystem",
            "Dismemberment",
            "Electronics",
            "Engine",
            "FMODStudio",
            "FPSController",
            "GameActions",
            "GameUtilities",
            "GameplayObjectives",
            "GameplayTags",
            "GameplayTasks",
            "Interaction",
            "LevelSequence",
            "LightSensing",
            "LoadingScreen",
            "MediaAssets",
            "ModularAssets",
            "NavigationSystem",
            "Niagara",
            "OnlineSubsystemUtils",
            "RandomScenarios",
            "OnlineSubsystem",
            "SignificanceBase",
            "SignificanceManager",
            "Slate",
            "SlateCore",
            "UMG",
            "UserInterface",
        });
    }
}
