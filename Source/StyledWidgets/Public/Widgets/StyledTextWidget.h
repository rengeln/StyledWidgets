#pragma once

#include "StyledWidget.h"
#include "WidgetStyleBase.h"

#include "StyledTextWidget.generated.h"

class SStyledTextBlock;
class UStyledTextStyle;

UCLASS(BlueprintType, meta=(DisplayName="Text (Styled)"))
class STYLEDWIDGETS_API UStyledTextWidget : public UStyledWidget
{
	GENERATED_BODY()

public:
	UStyledTextWidget(FObjectInitializer const& Initializer);

	UFUNCTION(BlueprintCallable, Category="Widgets|Text")
	void SetText(FText const& InText);

	UFUNCTION(BlueprintPure, Category="Widgets|Text")
	inline FText GetText() const { return Text; }
	
	UFUNCTION(BlueprintCallable, Category = "Widgets|Text")
	void SetColorOverride(FLinearColor const& InColor, FLinearColor const& InShadowColor = FLinearColor::Transparent, FLinearColor const& InOutlineColor = FLinearColor::Transparent);

	UFUNCTION(BlueprintCallable, Category = "Widgets|Text")
	void ClearColorOverride();

protected:
	friend class SStyledTextBlock;

	UPROPERTY(EditAnywhere, Category="Content", meta=(MultiLine="true"))
	FText Text;

	UPROPERTY(EditAnywhere, Category="Arrangement")
	TEnumAsByte<ETextJustify::Type> Justification;

	// The amount of blank space left around the edges of the text.
	UPROPERTY(EditAnywhere, Category="Arrangement")
	FMargin Margin;

	// If true, text will be wrapped automatically based on the widget's width.
	UPROPERTY(EditAnywhere, Category="Arrangement|Wrapping")
	bool bAutoWrap;

	// If greater than zero, text will wrap onto a new line when it exceeds this length.
	UPROPERTY(EditAnywhere, Category="Arrangement|Wrapping")
	float WrapAt;

	// Controls how text is transformed for display.
	UPROPERTY(EditAnywhere, Category="Arrangement")
	ETextTransformPolicy TransformPolicy;

	// Controls how text that cannot fit in this widget's space behaves.
	UPROPERTY(EditAnywhere, Category="Arrangement")
	ETextOverflowPolicy OverflowPolicy;

	// Minimum size the widget reports for its desired with, regardless of content.
	UPROPERTY(EditAnywhere, Category="Arrangement")
	float MinDesiredWidth;

	UPROPERTY(EditAnywhere, Category="Appearance")
	bool bUseColorOverride;

	UPROPERTY(EditAnywhere, Category="Appearance", meta=(EditCondition="bUseColorOverride"))
	FLinearColor ColorOverride;

	UPROPERTY(EditAnywhere, Category="Appearance", meta=(EditCondition="bUseColorOverride"))
	FLinearColor ShadowColorOverride;

	UPROPERTY(EditAnywhere, Category = "Appearance", meta = (EditCondition = "bUseColorOverride"))
	FLinearColor OutlineColorOverride;

	virtual TSharedRef<SWidget> RebuildWidget() override;
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	virtual void SynchronizeProperties() override;
	virtual void ApplyStyle(UWidgetStyleBase* Style) override;
	void UpdateColors();

	FLinearColor StyleColor;
	FLinearColor StyleShadowColor;
	FLinearColor StyleOutlineColor;
	TSharedPtr<SStyledTextBlock> SlateWidget;
	FSlateBrush StrikeBrush;
	FSlateFontInfo SlateFont;
};
