#pragma once

#include "Modules/ModuleManager.h"

class FAssetTypeActions_WidgetStyleSheet;
class FExtensibilityManager;
class IPropertyTypeCustomization;

class FStyledWidgetsEditorModule : 
	public IModuleInterface,
	public IHasToolBarExtensibility,
	public IHasMenuExtensibility
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	virtual TSharedPtr<FExtensibilityManager> GetMenuExtensibilityManager() override {return MenuExtensibilityManager; }
	virtual TSharedPtr<FExtensibilityManager> GetToolBarExtensibilityManager() override { return ToolBarExtensibilityManager; }

private:
	TSharedPtr<FAssetTypeActions_WidgetStyleSheet> WidgetStyleSheetActions;
	TSharedPtr<FExtensibilityManager> MenuExtensibilityManager;
	TSharedPtr<FExtensibilityManager> ToolBarExtensibilityManager;
};
