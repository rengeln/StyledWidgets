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
			FSlateFontInfo SlateFontInfo((UObject const*)TextStyle->Font, TextStyle->Size, TextStyle->Typeface);
			SlateFontInfo.FontMaterial = TextStyle->Material;
			SlateFontInfo.LetterSpacing = TextStyle->LetterSpacing;
			SlateFontInfo.OutlineSettings.OutlineSize = TextStyle->OutlineSize;
			SlateFontInfo.OutlineSettings.OutlineColor = TextStyle->OutlineColor;

			SlateWidget->SetColorAndOpacity(TextStyle->Color);
			SlateWidget->SetFont(SlateFontInfo);
			SlateWidget->SetShadowColorAndOpacity(TextStyle->ShadowColor);
			SlateWidget->SetShadowOffset(TextStyle->ShadowOffset);
			SlateWidget->SetLineHeightPercentage(TextStyle->LineHeightPercentage);

			TextStyle->StrikeBrush.MakeSlateBrush(TextStyle->StrikeColor, &StrikeBrush);
			SlateWidget->SetStrikeBrush(&StrikeBrush);
		}
	}
}
