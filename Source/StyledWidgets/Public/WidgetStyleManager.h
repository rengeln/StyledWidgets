#pragma once

#include <Subsystems/GameInstanceSubsystem.h>

#include "WidgetStyleManager.generated.h"

UCLASS(BlueprintType)
class STYLEDWIDGETS_API UWidgetStyleManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	UWidgetStyleSheet* GetDefaultStyleSheet() const;

private:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	UPROPERTY(Transient)
	UWidgetStyleSheet* DefaultStyleSheet;
};
