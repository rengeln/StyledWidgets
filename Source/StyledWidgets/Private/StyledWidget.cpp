#include "StyledWidget.h"

#include "WidgetStyleBase.h"
#include "WidgetStyleManager.h"
#include "WidgetStyleSettings.h"
#include "WidgetStyleSheet.h"

UStyledWidget::UStyledWidget(FObjectInitializer const& Initializer) :
	Super(Initializer)
{
	StyleInstance = CreateDefaultSubobject<UWidgetStyleBase>("StyleInstance");
}

FName UStyledWidget::GetIdentifier() const
{
	return Identifier;
}

void UStyledWidget::SetIsEnabled(bool bInIsEnabled)
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

void UStyledWidget::SetIdentifier(FName const& InIdentifier)
{
	if (InIdentifier != Identifier)
	{
		Identifier = InIdentifier;
		RebuildStyle();
	}
}

void UStyledWidget::AddStyleTag(FName const& StyleTag)
{
	if (!StyleTags.Contains(StyleTag))
	{
		StyleTags.Emplace(StyleTag);
		HandleStyleTagsChanged();
	}
}

void UStyledWidget::RemoveStyleTag(FName const& StyleTag)
{
	if (StyleTags.Contains(StyleTag))
	{
		StyleTags.Remove(StyleTag);
		HandleStyleTagsChanged();
	}
}

void UStyledWidget::ToggleStyleTag(FName const& StyleTag, bool bToggle)
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

void UStyledWidget::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	RebuildStyle();
}

void UStyledWidget::ApplyStyle(UWidgetStyleBase* Style)
{
}

void UStyledWidget::DispatchClickEvent()
{
	NativeOnClicked();
	OnClicked.Broadcast(this);
}

void UStyledWidget::DispatchHoverEvent(bool bInIsHovered)
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

void UStyledWidget::DispatchFocusEvent(bool bInIsFocused)
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

void UStyledWidget::NativeOnClicked()
{
}

void UStyledWidget::NativeOnFocusReceived()
{
}

void UStyledWidget::NativeOnFocusLost()
{
}

void UStyledWidget::NativeOnHoverStart()
{
}

void UStyledWidget::NativeOnHoverEnd()
{
}

#if WITH_EDITOR
void UStyledWidget::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
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

	Super::PostEditChangeProperty(PropertyChangedEvent);
}

const FText UStyledWidget::GetPaletteCategory()
{
	return NSLOCTEXT("StyledWidgets", "Styled", "Styled");
}
#endif // WITH_EDITOR
