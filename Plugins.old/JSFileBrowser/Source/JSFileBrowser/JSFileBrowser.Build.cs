// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class JSFileBrowser : ModuleRules
{
	public JSFileBrowser(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Json",
			"Slate",
			"SlateCore",
			"Engine",
			"UnrealEd",
			"AssetTools",
			"ContentBrowser",
			"EditorStyle"
		});

		PrivateIncludePathModuleNames.AddRange(new string[] {
			"AssetTools",
			"AssetRegistry"
		});

		DynamicallyLoadedModuleNames.AddRange(new string[] {
			"AssetRegistry"
		});
	}
}