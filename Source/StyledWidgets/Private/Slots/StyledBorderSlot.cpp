#include "Slots/StyledBorderSlot.h"

#include <ObjectEditorUtils.h>
#include "Slate/SStyledBorder.h"

UStyledBorderSlot::UStyledBorderSlot(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	HorizontalAlignment = HAlign_Fill;
	VerticalAlignment = VAlign_Fill;
}

void UStyledBorderSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	CastChecked<UStyledBorderWidget>(Parent)->SetHorizontalAlignment(InHorizontalAlignment);
}

void UStyledBorderSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	CastChecked<UStyledBorderWidget>(Parent)->SetVerticalAlignment(InVerticalAlignment);
}

void UStyledBorderSlot::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	ParentSlateWidget.Reset();
}

void UStyledBorderSlot::BuildSlot(TSharedRef<SStyledBorder> InBorder)
{
	ParentSlateWidget = InBorder;

	InBorder->SetHAlign(HorizontalAlignment);
	InBorder->SetVAlign(VerticalAlignment);

	ParentSlateWidget.Pin()->SetContent(Content ? Content->TakeWidget() : SNullWidget::NullWidget);
}

void UStyledBorderSlot::SynchronizeProperties()
{
	if (ParentSlateWidget.IsValid())
	{
		ParentSlateWidget.Pin()->SetHAlign(HorizontalAlignment);
		ParentSlateWidget.Pin()->SetVAlign(VerticalAlignment);
	}
}

#if WITH_EDITOR
void UStyledBorderSlot::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
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

			if (UStyledBorderWidget* ParentBorder = CastChecked<UStyledBorderWidget>(Parent))
			{
				if (PropertyName == HorizontalAlignmentName)
				{
					FObjectEditorUtils::MigratePropertyValue(this, HorizontalAlignmentName, ParentBorder, HorizontalAlignmentName);
				}
				else if (PropertyName == VerticalAlignmentName)
				{
					FObjectEditorUtils::MigratePropertyValue(this, VerticalAlignmentName, ParentBorder, VerticalAlignmentName);
				}
			}
		}

		IsReentrant = false;
	}
}
#endif
