#include "StyledContentWidget.h"

#include <Blueprint/WidgetTree.h>
#include "StyledWidget.h"
#include "WidgetStyleBase.h"
#include "WidgetStyleManager.h"
#include "WidgetStyleSettings.h"
#include "WidgetStyleSheet.h"

UStyledContentWidget::UStyledContentWidget(FObjectInitializer const& Initializer) :
	Super(Initializer)
{
	StyleInstance = CreateDefaultSubobject<UWidgetStyleBase>("StyleInstance");
	bPropagateTagsToChildren = true;
}

FName UStyledContentWidget::GetIdentifier() const
{
	return Identifier;
}

void UStyledContentWidget::SetIsEnabled(bool bInIsEnabled)
{
	Super::SetIsEnabled(bInIsEnabled);

	if (bInIsEnabled)
	{
		RemoveStyleTag(FStyleTags::Disabled);
	}
	else
	{
		AddStyleTag(FStyleTags::Disabled);
	}
}

void UStyledContentWidget::SetIdentifier(FName const& InIdentifier)
{
	if (InIdentifier != Identifier)
	{
		Identifier = InIdentifier;
		RebuildStyle();
	}
}
void UStyledContentWidget::AddStyleTag(FName const& StyleTag)
{
	if (!StyleTags.Contains(StyleTag))
	{
		StyleTags.Emplace(StyleTag);
		HandleStyleTagsChanged();
	}
}

void UStyledContentWidget::RemoveStyleTag(FName const& StyleTag)
{
	if (StyleTags.Contains(StyleTag))
	{
		StyleTags.Remove(StyleTag);
		HandleStyleTagsChanged();
	}
}

void UStyledContentWidget::ToggleStyleTag(FName const& StyleTag, bool bToggle)
{
	if (bToggle && !StyleTags.Contains(StyleTag))
	{
		AddStyleTag(StyleTag);
	}
	else if (!bToggle && StyleTags.Contains(StyleTag))
	{
		RemoveStyleTag(StyleTag);
	}
}

void UStyledContentWidget::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	RebuildStyle();
}

void UStyledContentWidget::ApplyStyle(UWidgetStyleBase* Style)
{
}

void UStyledContentWidget::DispatchClickEvent()
{
	NativeOnClicked();
	OnClicked.Broadcast(this);
}

void UStyledContentWidget::DispatchHoverEvent(bool bInIsHovered)
{
	if (bInIsHovered)
	{
		NativeOnHoverStart();
		OnHoverStart.Broadcast(this);
	}
	else
	{
		NativeOnHoverEnd();
		OnHoverEnd.Broadcast(this);
	}
}

void UStyledContentWidget::DispatchFocusEvent(bool bInIsFocused)
{
	if (bInIsFocused)
	{
		NativeOnFocusReceived();
		OnFocusReceived.Broadcast(this);
	}
	else
	{
		NativeOnFocusLost();
		OnFocusLost.Broadcast(this);
	}
}

void UStyledContentWidget::NativeOnClicked()
{
}

void UStyledContentWidget::NativeOnFocusReceived()
{
}

void UStyledContentWidget::NativeOnFocusLost()
{
}

void UStyledContentWidget::NativeOnHoverStart()
{
}

void UStyledContentWidget::NativeOnHoverEnd()
{
}

#if WITH_EDITOR
void UStyledContentWidget::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.GetPropertyName() == TEXT("Identifier"))
	{
		RebuildStyle();
	}
	else if (PropertyChangedEvent.GetPropertyName() == TEXT("StyleTagsString"))
	{
		TArray<FString> TagStrings;
		StyleTagsString.ParseIntoArrayWS(TagStrings, TEXT(","));
		
		StyleTags.Empty();
		for (FString const& TagString : TagStrings)
		{
			StyleTags.Add(FName(*TagString));
		}

		HandleStyleTagsChanged();
	}
	else if (PropertyChangedEvent.GetPropertyName() == TEXT("bIsEnabled"))
	{
		SetIsEnabled(GetIsEnabled());
	}
	else if (PropertyChangedEvent.GetPropertyName() == TEXT("bPropagateTagsToChildren"))
	{
		HandleStyleTagsChanged();
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}

const FText UStyledContentWidget::GetPaletteCategory()
{
	return NSLOCTEXT("StyledWidgets", "Styled", "Styled");
}
#endif // WITH_EDITOR
