#pragma once

#include "WidgetStyleBase.h"

#include "StyledBorderStyle.generated.h"

UCLASS(BlueprintType, meta=(DisplayName="Border"))
class STYLEDWIDGETS_API UStyledBorderStyle : public UWidgetStyleBase
{
	GENERATED_BODY()

public:
	UStyledBorderStyle();

	UPROPERTY(EditAnywhere, Category="Border")
	FBrushStyle BorderBrush;

	UPROPERTY(EditAnywhere, Category="Border")
	FLinearColor BorderColor;

	UPROPERTY(EditAnywhere, Category="Border")
	FMargin Padding;
};
