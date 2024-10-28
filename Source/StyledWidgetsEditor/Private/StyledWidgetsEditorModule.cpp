#include "StyledWidgetsEditorModule.h"

#include <AssetToolsModule.h>
#include <IAssetTools.h>
#include <PropertyEditorModule.h>
#include "AssetTypeActions_WidgetStyleSheet.h"

void FStyledWidgetsEditorModule::StartupModule()
{
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

	WidgetStyleSheetActions = MakeShareable(new FAssetTypeActions_WidgetStyleSheet(EAssetTypeCategories::UI));
	AssetTools.RegisterAssetTypeActions(WidgetStyleSheetActions.ToSharedRef());

	ToolBarExtensibilityManager = MakeShareable(new FExtensibilityManager);
	MenuExtensibilityManager = MakeShareable(new FExtensibilityManager);

	//FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
	//PropertyModule.RegisterCustomPropertyTypeLayout("WidgetStylePath", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FWidgetStylePathCustomization::MakeInstance));
}

void FStyledWidgetsEditorModule::ShutdownModule()
{
	if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
		AssetTools.UnregisterAssetTypeActions(WidgetStyleSheetActions.ToSharedRef());
	}

	if (FModuleManager::Get().IsModuleLoaded("PropertyEditor"))
	{
		FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
		PropertyModule.UnregisterCustomPropertyTypeLayout("WidgetStylePath");
	}

	WidgetStyleSheetActions.Reset();
	ToolBarExtensibilityManager.Reset();
	MenuExtensibilityManager.Reset();
}

IMPLEMENT_MODULE(FStyledWidgetsEditorModule, StyledWidgetsEditor)
