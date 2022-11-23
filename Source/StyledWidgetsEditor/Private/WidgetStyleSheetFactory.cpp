#include "WidgetStyleSheetFactory.h"

#include "WidgetStyleSheet.h"

UWidgetStyleSheetFactory::UWidgetStyleSheetFactory(const FObjectInitializer& Initializer) :
	Super(Initializer)
{
	SupportedClass = UWidgetStyleSheet::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
}

UObject* UWidgetStyleSheetFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UWidgetStyleSheet>(InParent, InClass, InName, Flags);
}

bool UWidgetStyleSheetFactory::ShouldShowInNewMenu() const
{
	return true;
}
