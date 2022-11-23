#pragma once

#include <Widgets/Notifications/SProgressBar.h>
#include "WidgetStyleBase.h"

#include "StyledProgressBarStyle.generated.h"

UCLASS(BlueprintType, meta=(DisplayName="Progress Bar"))
class STYLEDWIDGETS_API UStyledProgressBarStyle : public UWidgetStyleBase
{
	GENERATED_BODY()

public:
	UStyledProgressBarStyle();

	UPROPERTY(EditAnywhere, Category="Background")
	FBrushStyle BackgroundBrush;

	UPROPERTY(EditAnywhere, Category="Background")
	FLinearColor BackgroundColor;

	UPROPERTY(EditAnywhere, Category="Fill")
	FBrushStyle FillBrush;

	UPROPERTY(EditAnywhere, Category="Fill")
	FLinearColor FillColor = FLinearColor::White;

	UPROPERTY(EditAnywhere, Category="Fill")
	TEnumAsByte<EProgressBarFillType::Type> FillType = EProgressBarFillType::LeftToRight;

	UPROPERTY(EditAnywhere, Category="Fill")
	TEnumAsByte<EProgressBarFillStyle::Type> FillStyle = EProgressBarFillStyle::Mask;

	UPROPERTY(EditAnywhere, Category="Fill")
	FVector2D FillPadding;
};
