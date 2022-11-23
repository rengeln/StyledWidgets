#include "Widgets/StyledProgressBarWidget.h"

#include "Slate/SStyledProgressBar.h"
#include "Styles/StyledProgressBarStyle.h"

UStyledProgressBarWidget::UStyledProgressBarWidget(FObjectInitializer const& Initializer) :
	Super(Initializer.SetDefaultSubobjectClass<UStyledProgressBarStyle>("StyleInstance"))
{
	Percent = 0.5f;
	bSupportsHoverable = true;
	bSupportsFocusable = true;
	bSupportsClickable = true;

	BackgroundBrush = FSlateBrush();
	FillBrush = FSlateBrush();
}

void UStyledProgressBarWidget::SetPercent(float InPercent)
{
	Percent = FMath::Clamp(InPercent, 0.f, 1.f);
	if (SlateWidget.IsValid())
	{
		SlateWidget->SetPercent(Percent);
	}
}

TSharedRef<SWidget> UStyledProgressBarWidget::RebuildWidget()
{
	FProgressBarStyle SlateStyle;
	SlateStyle.SetEnableFillAnimation(false);

	SlateWidget = SNew(SStyledProgressBar, this)
		.Style(&SlateStyle);
	return SlateWidget.ToSharedRef();
}

void UStyledProgressBarWidget::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	SlateWidget.Reset();
}

void UStyledProgressBarWidget::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	if (SlateWidget.IsValid())
	{
		SlateWidget->SetPercent(Percent);
	}
}

void UStyledProgressBarWidget::ApplyStyle(UWidgetStyleBase* Style)
{
	Super::ApplyStyle(Style);

	if (auto* ProgressBarStyle = Cast<UStyledProgressBarStyle>(Style))
	{
		if (SlateWidget.IsValid())
		{
			ProgressBarStyle->BackgroundBrush.MakeSlateBrush(ProgressBarStyle->BackgroundColor, &BackgroundBrush);
			SlateWidget->SetBackgroundImage(&BackgroundBrush);
	
			ProgressBarStyle->FillBrush.MakeSlateBrush(ProgressBarStyle->FillColor, &FillBrush);
			SlateWidget->SetFillImage(&FillBrush);

			SlateWidget->SetBarFillType(ProgressBarStyle->FillType);
			SlateWidget->SetBarFillStyle(ProgressBarStyle->FillStyle);
			SlateWidget->SetBorderPadding(ProgressBarStyle->FillPadding);
		}
	}
}
