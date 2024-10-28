#include "Widgets/StyledImageWidget.h"

#include "Slate/SStyledImage.h"
#include "Styles/StyledImageStyle.h"

UStyledImageWidget::UStyledImageWidget(FObjectInitializer const& Initializer) :
	Super(Initializer.SetDefaultSubobjectClass<UStyledImageStyle>("StyleInstance"))
{
	bSupportsHoverable = true;
	bSupportsFocusable = true;
	bSupportsClickable = true;

	Brush = FSlateBrush();

	bUseSizeOverride = false;
	SizeOverride = FVector2D(32.0f, 32.0f);
}

void UStyledImageWidget::SetSizeOverride(FVector2D InSizeOverride)
{
	bUseSizeOverride = true;
	SizeOverride = InSizeOverride;
	SynchronizeProperties();
}

void UStyledImageWidget::ClearSizeOverride()
{
	bUseSizeOverride = false;
	SynchronizeProperties();
}

TSharedRef<SWidget> UStyledImageWidget::RebuildWidget()
{
	SlateWidget = SNew(SStyledImage, this);
	return SlateWidget.ToSharedRef();
}

void UStyledImageWidget::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	SlateWidget.Reset();
}

void UStyledImageWidget::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	if (SlateWidget.IsValid())
	{
		if (bUseSizeOverride)
		{
			SlateWidget->SetDesiredSizeOverride(SizeOverride);
		}
		else
		{
			SlateWidget->SetDesiredSizeOverride(TOptional<FVector2D>());
		}
	}
}

void UStyledImageWidget::ApplyStyle(UWidgetStyleBase* Style)
{
	Super::ApplyStyle(Style);

	if (auto* ImageStyle = Cast<UStyledImageStyle>(Style))
	{
		if (SlateWidget.IsValid())
		{
			ImageStyle->Brush.MakeSlateBrush(ImageStyle->Color, &Brush);
			SlateWidget->SetImage(&Brush);
		}
	}
}
