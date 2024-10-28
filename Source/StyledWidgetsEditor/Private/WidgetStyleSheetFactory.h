#pragma once

#include <Factories/Factory.h>

#include "WidgetStyleSheetFactory.generated.h"

UCLASS()
class UWidgetStyleSheetFactory : public UFactory
{
	GENERATED_BODY()

public:
	UWidgetStyleSheetFactory(const FObjectInitializer& Initializer);

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	virtual bool ShouldShowInNewMenu() const override;
};
