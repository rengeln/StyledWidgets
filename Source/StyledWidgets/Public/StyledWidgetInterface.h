#pragma once

#include <UObject/Interface.h>

#include "StyledWidgetInterface.generated.h"

UINTERFACE(BlueprintType, NotBlueprintable)
class UStyledWidgetInterface : public UInterface
{
	GENERATED_BODY()
};

/// <summary>
/// Interface for operations common to StyledWidget, StyledUserWidget, and StyledContentWidget.
/// </summary>
class IStyledWidgetInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "Widget")
	virtual FName GetIdentifier() const = 0;

	UFUNCTION(BlueprintCallable, Category = "Widget")
	virtual void SetIdentifier(FName const& InIdentifier) = 0;

	UFUNCTION(BlueprintCallable, Category = "Widget|Style")
	virtual void AddStyleTag(FName const& StyleTag) = 0;

	UFUNCTION(BlueprintCallable, Category = "Widget|Style")
	virtual void RemoveStyleTag(FName const& StyleTag) = 0;

	UFUNCTION(BlueprintCallable, Category = "Widget|Style")
	virtual void ToggleStyleTag(FName const& StyleTag, bool bToggle) = 0;
};
