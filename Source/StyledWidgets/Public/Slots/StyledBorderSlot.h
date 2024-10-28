#pragma once

#include "Widgets/StyledBorderWidget.h"

#include "StyledBorderSlot.generated.h"

class SStyledBorder;
class UStyledBorderWidget;

UCLASS(BlueprintType)
class STYLEDWIDGETS_API UStyledBorderSlot : public UPanelSlot
{
	GENERATED_BODY()

public:
	UStyledBorderSlot(FObjectInitializer const& Initializer);

	UFUNCTION(BlueprintCallable, Category="Widget|Slot")
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);

	UFUNCTION(BlueprintCallable, Category="Widget|Slot")
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);

protected:
	UPROPERTY(EditAnywhere, Category="Layout|Border Slot")
	TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;

	UPROPERTY(EditAnywhere, Category="Layout|Border Slot")
	TEnumAsByte<EVerticalAlignment> VerticalAlignment;

protected:
	virtual void SynchronizeProperties() override;
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	void BuildSlot(TSharedRef<SStyledBorder> InBorder);


#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	TWeakPtr<SStyledBorder> ParentSlateWidget;

	friend class UStyledBorderWidget;
};
