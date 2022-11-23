#pragma once

#include "StyledWidget.h"

#include "StyledProgressBarWidget.generated.h"

class SStyledProgressBar;
class UStyledProgressBarStyle;

UCLASS(BlueprintType, meta=(DisplayName="Progress Bar (Styled)"))
class STYLEDWIDGETS_API UStyledProgressBarWidget : public UStyledWidget
{
	GENERATED_BODY()

public:
	UStyledProgressBarWidget(FObjectInitializer const& Initializer);

	UFUNCTION(BlueprintCallable, Category="Widgets|Progress Bar")
	void SetPercent(float InPercent);
	
	UFUNCTION(BlueprintPure, Category="Widgets|Progress Bar")
	inline float GetPercent() const {  return Percent; }

protected:
	friend class SStyledProgressBar;

	UPROPERTY(EditAnywhere, Category="Content", meta=(ClampMin="0", ClampMax="1"))
	float Percent;

	virtual TSharedRef<SWidget> RebuildWidget() override;
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	virtual void SynchronizeProperties() override;
	virtual void ApplyStyle(UWidgetStyleBase* Style) override;

	TSharedPtr<SStyledProgressBar> SlateWidget;
	FSlateBrush BackgroundBrush;
	FSlateBrush FillBrush;
};
