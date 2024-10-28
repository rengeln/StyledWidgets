#pragma once

#include <Engine/DataAsset.h>
#include "WidgetStyleBase.h"

#include "WidgetStyleSheet.generated.h"

USTRUCT()
struct FWidgetStyleSheetColor
{
	GENERATED_BODY()

	UPROPERTY()
	FLinearColor Color = FLinearColor::White;

	UPROPERTY()
	FName Name;
};

UCLASS(BlueprintType)
class STYLEDWIDGETS_API UWidgetStyleSheet : public UObject
{
	GENERATED_BODY()

public:
	UWidgetStyleSheet(FObjectInitializer const& Initializer);

	inline TArray<UWidgetStyleBase*> const& GetStyles() const { return Styles; }

	void BuildStyle(FName const& InIdentifier, TArray<FName> const& InStyleTags, UWidgetStyleBase* StyleInstance);

	FLinearColor TryToGetColor(FName const& InColor, FLinearColor const& InFallbackColor);

private:
	friend class FWidgetStyleSheetEditor;

	UPROPERTY(Instanced)
	TArray<UWidgetStyleBase*> Styles;

	UPROPERTY()
	TArray<FWidgetStyleSheetColor> ColorPalette;
};
