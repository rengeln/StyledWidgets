using UnrealBuildTool;

public class StyledWidgetsEditor : ModuleRules
{
	public StyledWidgetsEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"StyledWidgets",
				"UMG"
			});

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"InputCore",
				"Slate",
				"SlateCore",
				"EditorStyle",
				"UnrealEd",
				"PropertyEditor",
				"GraphEditor",
				"DetailCustomizations",
				"AppFramework",
				"ApplicationCore"
			});
	}
}
