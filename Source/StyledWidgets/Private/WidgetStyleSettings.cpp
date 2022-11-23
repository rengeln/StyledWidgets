#include "WidgetStyleSettings.h"

UWidgetStyleSettings::UWidgetStyleSettings(FObjectInitializer const& Initializer) :
	Super(Initializer)
{
	DefaultStyleSheet = FSoftObjectPath(TEXT("/StyledWidgets/ExampleStyleSheet.ExampleStyleSheet"));
}

