#include "WidgetStyleManager.h"

#include "WidgetStyleSettings.h"

void UWidgetStyleManager::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	auto* Settings = GetDefault<UWidgetStyleSettings>();
	if (!Settings->DefaultStyleSheet.IsNull())
	{
		DefaultStyleSheet = Settings->DefaultStyleSheet.LoadSynchronous();
	}
}

UWidgetStyleSheet* UWidgetStyleManager::GetDefaultStyleSheet() const
{
	return DefaultStyleSheet ? DefaultStyleSheet : GetMutableDefault<UWidgetStyleSheet>();
}
