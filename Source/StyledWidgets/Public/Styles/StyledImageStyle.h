#pragma once

#include "WidgetStyleBase.h"

#include "StyledImageStyle.generated.h"

UCLASS(BlueprintType, meta=(DisplayName="Image"))
class STYLEDWIDGETS_API UStyledImageStyle : public UWidgetStyleBase
{
	GENERATED_BODY()

public:
	UStyledImageStyle();

	UPROPERTY(EditAnywhere, Category="Image")
	FBrushStyle Brush;

	UPROPERTY(EditAnywhere, Category="Image")
	FLinearColor Color;
};
