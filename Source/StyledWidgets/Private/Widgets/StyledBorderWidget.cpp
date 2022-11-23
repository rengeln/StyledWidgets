#include "Widgets/StyledBorderWidget.h"

#include <ObjectEditorUtils.h>
#include <Components/BorderSlot.h>
#include "Slate/SStyledBorder.h"
#include "Slots/StyledBorderSlot.h"
#include "Styles/StyledBorderStyle.h"

UStyledBorderWidget::UStyledBorderWidget(FObjectInitializer const& Initializer) :
	Super(Initializer.SetDefaultSubobjectClass<UStyledBorderStyle>("StyleInstance"))
{
	bSupportsHoverable = true;
	bSupportsFocusable = true;
	bSupportsClickable = true;
}

void UStyledBorderWidget::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	HorizontalAlignment = InHorizontalAlignment;
	if (SlateWidget.IsValid())
	{
		SlateWidget->SetHAlign(HorizontalAlignment);
	}
}

void UStyledBorderWidget::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	VerticalAlignment = InVerticalAlignment;
	if (SlateWidget.IsValid())
	{
		SlateWidget->SetVAlign(VerticalAlignment);
	}
}

UClass* UStyledBorderWidget::GetSlotClass() const
{
	return UStyledBorderSlot::StaticClass();
}

TSharedRef<SWidget> UStyledBorderWidget::RebuildWidget()
{
	SlateWidget = SNew(SStyledBorder, this)
		.ShowEffectWhenDisabled(false);

	if (UStyledBorderSlot* ContentSlot = Cast<UStyledBorderSlot>(GetContentSlot()))
	{
		ContentSlot->BuildSlot(SlateWidget.ToSharedRef());
	}

	return SlateWidget.ToSharedRef();
}

void UStyledBorderWidget::OnSlotAdded(UPanelSlot* InSlot)
{
	UStyledBorderSlot* BorderSlot = CastChecked<UStyledBorderSlot>(InSlot);

	if (SlateWidget.IsValid())
	{
		BorderSlot->BuildSlot(SlateWidget.ToSharedRef());
	}
}

void UStyledBorderWidget::OnSlotRemoved(UPanelSlot* InSlot)
{
	if (SlateWidget.IsValid())
	{
		SlateWidget->SetContent(SNullWidget::NullWidget);
	}
}

void UStyledBorderWidget::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	SlateWidget.Reset();
}

void UStyledBorderWidget::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	if (SlateWidget.IsValid())
	{
		SlateWidget->SetHAlign(HorizontalAlignment);
		SlateWidget->SetVAlign(VerticalAlignment);
	}
}

void UStyledBorderWidget::ApplyStyle(UWidgetStyleBase* Style)
{
	Super::ApplyStyle(Style);

	if (auto* BorderStyle = Cast<UStyledBorderStyle>(Style))
	{
		if (SlateWidget.IsValid())
		{
			SlateWidget->SetPadding(BorderStyle->Padding);

			BorderStyle->BorderBrush.MakeSlateBrush(BorderStyle->BorderColor, &BorderBrush);
			SlateWidget->SetBorderImage(&BorderBrush);
		}
	}
}

#if WITH_EDITOR
void UStyledBorderWidget::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	static bool IsReentrant = false;

	if (!IsReentrant)
	{
		IsReentrant = true;

		if (PropertyChangedEvent.Property)
		{
			static const FName PaddingName("Padding");
			static const FName HorizontalAlignmentName("HorizontalAlignment");
			static const FName VerticalAlignmentName("VerticalAlignment");

			FName PropertyName = PropertyChangedEvent.Property->GetFName();

			if (UStyledBorderSlot* BorderSlot = Cast<UStyledBorderSlot>(GetContentSlot()))
			{
				if (PropertyName == HorizontalAlignmentName)
				{
					FObjectEditorUtils::MigratePropertyValue(this, HorizontalAlignmentName, BorderSlot, HorizontalAlignmentName);
				}
				else if (PropertyName == VerticalAlignmentName)
				{
					FObjectEditorUtils::MigratePropertyValue(this, VerticalAlignmentName, BorderSlot, VerticalAlignmentName);
				}
			}
		}

		IsReentrant = false;
	}
}
#endif // WITH_EDITOR
