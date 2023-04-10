#pragma once

#include "StyledWidget.h"
#include "WidgetStyleBase.h"

#include "StyledImageWidget.generated.h"

class SStyledImage;
class UStyledImageStyle;

UCLASS(BlueprintType, meta = (DisplayName = "Image (Styled)"))
class STYLEDWIDGETS_API UStyledImageWidget : public UStyledWidget
{
	GENERATED_BODY()

public:
	UStyledImageWidget(FObjectInitializer const& Initializer);

	UFUNCTION(BlueprintCallable, Category="Widgets|Image")
	void SetSizeOverride(FVector2D InSizeOverride);

	UFUNCTION(BlueprintCallable, Category="Widgets|Image")
	void ClearSizeOverride();

protected:
	friend class SStyledImage;

	virtual TSharedRef<SWidget> RebuildWidget() override;
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	virtual void SynchronizeProperties() override;
	virtual void ApplyStyle(UWidgetStyleBase* Style) override;

	// If true, uses the size override instead of the image size from the widget style.
	UPROPERTY(EditAnywhere, Category = "Appearance")
	bool bUseSizeOverride;

	UPROPERTY(EditAnywhere, Category = "Appearance", meta=(EditCondition="bUseSizeOverride"))
	FVector2D SizeOverride;

	UPROPERTY(Transient)
	FSlateBrush Brush;

	TSharedPtr<SStyledImage> SlateWidget;
};
