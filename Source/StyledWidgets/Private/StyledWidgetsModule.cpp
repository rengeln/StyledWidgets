#include "StyledWidgetsModule.h"

#if WITH_EDITOR
#include "ISettingsModule.h"
#include "ISettingsSection.h"
#endif // WITH_EDITOR

#include "WidgetStyleSettings.h"

void FStyledWidgetsModule::StartupModule()
{
#if WITH_EDITOR
	ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>(TEXT("Settings"));
	if (SettingsModule)
	{
		SettingsModule->RegisterSettings(TEXT("Project"), TEXT("Plugins"), TEXT("StyledWidgets"),
			NSLOCTEXT("StyledWidgets", "StyledWidgetsName", "Styled Widgets"),
			NSLOCTEXT("StyledWidgets", "StyledWidgetsDescription", "Configure settings for the Styled Widgets plugin."),
			GetMutableDefault<UWidgetStyleSettings>());
	}
#endif // WITH_EDITOR
}

void FStyledWidgetsModule::ShutdownModule()
{
#if WITH_EDITOR
	ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>(TEXT("Settings"));
	if (SettingsModule)
	{
		SettingsModule->UnregisterSettings(TEXT("Project"), TEXT("Plugins"), TEXT("StyledWidgets"));
	}
#endif // WITH_EDITOR
}

IMPLEMENT_MODULE(FStyledWidgetsModule, StyledWidgets)
