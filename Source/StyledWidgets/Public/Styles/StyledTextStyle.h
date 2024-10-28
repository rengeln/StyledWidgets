#pragma once

#include "WidgetStyleBase.h"

#include "StyledTextStyle.generated.h"

UCLASS(BlueprintType, meta=(DisplayName="Text"))
class STYLEDWIDGETS_API UStyledTextStyle : public UWidgetStyleBase
{
	GENERATED_BODY()

public:
	UStyledTextStyle();

	UPROPERTY(EditAnywhere, Category="Font")
	TObjectPtr<UFont> Font;

	UPROPERTY(EditAnywhere, Category="Font")
	FName Typeface;

	/** The uniform spacing (or tracking) between all characters in the text. */
	UPROPERTY(EditAnywhere, Category="Font", meta=(ClampMin=-1000, ClampMax=10000))
	int32 LetterSpacing = 0;

	UPROPERTY(EditAnywhere, Category="Font", meta=(ClampMin=1, ClampMax=1000))
	int32 Size = 24;

	UPROPERTY(EditAnywhere, Category="Font")
	FLinearColor Color = FLinearColor::White;

	UPROPERTY(EditAnywhere, Category="Font")
	float LineHeightPercentage = 1.0f;

	UPROPERTY(EditAnywhere, Category="Rendering")
	TObjectPtr<UMaterialInterface> Material;

	UPROPERTY(EditAnywhere, Category="Outline")
	int OutlineSize = 0;

	UPROPERTY(EditAnywhere, Category="Outline")
	FLinearColor OutlineColor = FLinearColor::Black;

	UPROPERTY(EditAnywhere, Category="Shadow")
	FVector2D ShadowOffset;

	UPROPERTY(EditAnywhere, Category="Shadow")
	FLinearColor ShadowColor = FLinearColor::Transparent;

	UPROPERTY(EditAnywhere, Category="Strike")
	FBrushStyle StrikeBrush;

	UPROPERTY(EditAnywhere, Category="Strike")
	FLinearColor StrikeColor = FLinearColor::White;
};
