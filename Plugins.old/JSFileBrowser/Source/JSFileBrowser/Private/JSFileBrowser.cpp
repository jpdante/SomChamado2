// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "JSFileBrowserPrivatePCH.h"
#include "CoreMinimal.h"

class FJSFileBrowser : public IJSFileBrowser
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE( FJSFileBrowser, JSFileBrowser )

void FJSFileBrowser::StartupModule() {
	UE_LOG(LogTemp, Warning, TEXT("[JSFileBrowser] Starting the plugin..."));
	//Formats.Add(TEXT("js;JavaScript File"));
}


void FJSFileBrowser::ShutdownModule() {
	UE_LOG(LogTemp, Warning, TEXT("[JSFileBrowser] Shutting down the plugin..."));
	/*if (FModuleManager::Get().IsModuleLoaded("AssetTools")) {

	}*/
}



