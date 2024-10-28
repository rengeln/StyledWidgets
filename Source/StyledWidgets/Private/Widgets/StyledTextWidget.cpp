#include "Widgets/StyledTextWidget.h"

#include "Slate/SStyledTextBlock.h"
#include "Styles/StyledTextSTyle.h"

UStyledTextWidget::UStyledTextWidget(FObjectInitializer const& Initializer) :
	Super(Initializer.SetDefaultSubobjectClass<UStyledTextStyle>("StyleInstance"))
{
	Text = NSLOCTEXT("StyledWidgets", "DefaultText", "Text");
	bSupportsHoverable = true;
	bSupportsFocusable = true;
	bSupportsClickable = true;

	StrikeBrush = FSlateBrush();
}

void UStyledTextWidget::SetText(FText const& InText)
{
	Text = InText;
	if (SlateWidget.IsValid())
	{
		SlateWidget->SetText(InText);
	}
}

void UStyledTextWidget::SetColorOverride(FLinearColor const& InColor, FLinearColor const& InShadowColor, FLinearColor const& InOutlineColor)
{
	bUseColorOverride = true;
	ColorOverride = InColor;
	ShadowColorOverride = InShadowColor;
	OutlineColorOverride = InOutlineColor;
	UpdateColors();
}

void UStyledTextWidget::ClearColorOverride()
{
	bUseColorOverride = false;
	UpdateColors();
}

TSharedRef<SWidget> UStyledTextWidget::RebuildWidget()
{
	SlateWidget = SNew(SStyledTextBlock, this);
	return SlateWidget.ToSharedRef();
}

void UStyledTextWidget::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	SlateWidget.Reset();
}

void UStyledTextWidget::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	if (SlateWidget.IsValid())
	{
		SlateWidget->SetText(Text);
		SlateWidget->SetJustification(Justification);
		SlateWidget->SetTransformPolicy(TransformPolicy);
		SlateWidget->SetOverflowPolicy(OverflowPolicy);
		SlateWidget->SetMinDesiredWidth(MinDesiredWidth);
		SlateWidget->SetMargin(Margin);
		SlateWidget->SetAutoWrapText(bAutoWrap);
		SlateWidget->SetWrapTextAt(WrapAt != 0 ? WrapAt : TAttribute<float>());
	}
}

void UStyledTextWidget::ApplyStyle(UWidgetStyleBase* Style)
{
	Super::ApplyStyle(Style);

	if (auto* TextStyle = Cast<UStyledTextStyle>(Style))
	{
		if (SlateWidget.IsValid())
		{
			SlateFont = FSlateFontInfo((UObject const*)TextStyle->Font, TextStyle->Size, TextStyle->Typeface);
			SlateFont.FontMaterial = TextStyle->Material;
			SlateFont.LetterSpacing = TextStyle->LetterSpacing;
			SlateFont.OutlineSettings.OutlineSize = TextStyle->OutlineSize;

			SlateWidget->SetShadowOffset(TextStyle->ShadowOffset);
			SlateWidget->SetLineHeightPercentage(TextStyle->LineHeightPercentage);

			TextStyle->StrikeBrush.MakeSlateBrush(TextStyle->StrikeColor, &StrikeBrush);
			SlateWidget->SetStrikeBrush(&StrikeBrush);

			StyleColor = TextStyle->Color;
			StyleShadowColor = TextStyle->ShadowColor;
			StyleOutlineColor = TextStyle->OutlineColor;
			UpdateColors();
		}
	}
}

void UStyledTextWidget::UpdateColors()
{
	if (SlateWidget.IsValid())
	{
		SlateFont.OutlineSettings.OutlineColor = bUseColorOverride ? OutlineColorOverride : StyleOutlineColor;
		SlateWidget->SetFont(SlateFont);
		SlateWidget->SetColorAndOpacity(bUseColorOverride ? ColorOverride : StyleColor);
		SlateWidget->SetShadowColorAndOpacity(bUseColorOverride ? ShadowColorOverride : StyleShadowColor);
	}
}
