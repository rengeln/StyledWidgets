#pragma once

#include "StyledContentWidget.h"
#include "WidgetStyleBase.h"

#include "StyledBorderWidget.generated.h"

class SStyledBorder;
class UStyledBorderStyle;

UCLASS(BlueprintType, meta=(DisplayName="Border (Styled)"))
class STYLEDWIDGETS_API UStyledBorderWidget : public UStyledContentWidget
{
	GENERATED_BODY()

public:
	UStyledBorderWidget(FObjectInitializer const& Initializer);
	
	UFUNCTION(BlueprintCallable, Category="Widget|Layout")
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);

	UFUNCTION(BlueprintCallable, Category="Widget|Layout")
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);

protected:
	friend class SStyledBorder;

	UPROPERTY(EditAnywhere, Category="Content")
	TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;

	UPROPERTY(EditAnywhere, Category="Content")
	TEnumAsByte<EVerticalAlignment> VerticalAlignment;

	virtual UClass* GetSlotClass() const override;
	virtual TSharedRef<SWidget> RebuildWidget() override;
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	virtual void SynchronizeProperties() override;
	virtual void ApplyStyle(UWidgetStyleBase* Style) override;
	virtual void OnSlotAdded(UPanelSlot* InSlot) override;
	virtual void OnSlotRemoved(UPanelSlot* InSlot) override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif // WITH_EDITOR

	UPROPERTY(Transient)
	FSlateBrush BorderBrush;
	
	TSharedPtr<SStyledBorder> SlateWidget;
};
