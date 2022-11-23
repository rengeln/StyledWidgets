#pragma once

#include "WidgetStyleSheet.h"

#include "WidgetStyleSettings.generated.h"

UCLASS(config = Game, defaultconfig)
class STYLEDWIDGETS_API UWidgetStyleSettings : public UObject
{
	GENERATED_BODY()

public:
	UWidgetStyleSettings(FObjectInitializer const& Initializer);

	// The global style sheet used by all widgets that don't specify a custom style sheet.
	UPROPERTY(config, EditAnywhere, Category="Widget Styles")
	TSoftObjectPtr<UWidgetStyleSheet> DefaultStyleSheet;
};
