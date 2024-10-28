#include "StyledActivatableWidget.h"

#include "WidgetStyleBase.h"

UStyledActivatableWidget::UStyledActivatableWidget(FObjectInitializer const& Initializer) :
	Super(Initializer)
{
	StyleInstance = CreateDefaultSubobject<UWidgetStyleBase>("StyleInstance");
	bPropagateTagsToChildren = true;
}

FName UStyledActivatableWidget::GetIdentifier() const
{
	return Identifier;
}

void UStyledActivatableWidget::PostInitProperties()
{
	Super::PostInitProperties();

#if WITH_EDITORONLY_DATA
	TArray<FString> TagStrings;
	StyleTagsString.ParseIntoArrayWS(TagStrings, TEXT(","));

	StyleTags.Empty();
	for (FString const& TagString : TagStrings)
	{
		StyleTags.Add(FName(*TagString));
	}
#endif // WITH_EDITORONLY_DATA
}

void UStyledActivatableWidget::PreSave(FObjectPreSaveContext SaveContext)
{
	Super::PreSave(SaveContext);

#if WITH_EDITORONLY_DATA
	TArray<FString> TagStrings;
	StyleTagsString.ParseIntoArrayWS(TagStrings, TEXT(","));

	StyleTags.Empty();
	for (FString const& TagString : TagStrings)
	{
		StyleTags.Add(FName(*TagString));
	}
#endif // WITH_EDITORONLY_DATA
}


void UStyledActivatableWidget::SetIsEnabled(bool bInIsEnabled)
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

void UStyledActivatableWidget::SetIdentifier(FName const& InIdentifier)
{
	if (InIdentifier != Identifier)
	{
		Identifier = InIdentifier;
		RebuildStyle();
	}
}

void UStyledActivatableWidget::AddStyleTag(FName const& StyleTag)
{
	if (!StyleTags.Contains(StyleTag))
	{
		StyleTags.Emplace(StyleTag);
		HandleStyleTagsChanged();
	}
}

void UStyledActivatableWidget::RemoveStyleTag(FName const& StyleTag)
{
	if (StyleTags.Contains(StyleTag))
	{
		StyleTags.Remove(StyleTag);
		HandleStyleTagsChanged();
	}
}

void UStyledActivatableWidget::ToggleStyleTag(FName const& StyleTag, bool bToggle)
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

void UStyledActivatableWidget::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	RebuildStyle();
}

FReply UStyledActivatableWidget::NativeOnFocusReceived(FGeometry const& InGeometry, FFocusEvent const& InFocusEvent)
{
	Super::NativeOnFocusReceived(InGeometry, InFocusEvent);
	return HandleFocusReceived(InFocusEvent);
}

void UStyledActivatableWidget::NativeOnFocusLost(FFocusEvent const& InFocusEvent)
{
	Super::NativeOnFocusLost(InFocusEvent);
	HandleFocusLost(InFocusEvent);
}

void UStyledActivatableWidget::NativeOnMouseEnter(FGeometry const& InGeometry, FPointerEvent const& InMouseEvent)
{
	Super::NativeOnMouseEnter(InGeometry, InMouseEvent);
	HandleMouseEnter(InMouseEvent);
}

void UStyledActivatableWidget::NativeOnMouseLeave(FPointerEvent const& InMouseEvent)
{
	Super::NativeOnMouseLeave(InMouseEvent);
	HandleMouseLeave(InMouseEvent);
}

FReply UStyledActivatableWidget::NativeOnMouseButtonDown(FGeometry const& InGeometry, FPointerEvent const& InMouseEvent)
{
	FReply Reply = Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
	if (!Reply.IsEventHandled())
	{
		Reply = HandleMouseButtonDown(InMouseEvent);
	}
	return Reply;
}

FReply UStyledActivatableWidget::NativeOnMouseButtonUp(FGeometry const& InGeometry, FPointerEvent const& InMouseEvent)
{
	FReply Reply = Super::NativeOnMouseButtonUp(InGeometry, InMouseEvent);
	if (!Reply.IsEventHandled())
	{
		Reply = HandleMouseButtonUp(InMouseEvent);
	}
	return Reply;
}

FReply UStyledActivatableWidget::NativeOnKeyDown(FGeometry const& InGeometry, FKeyEvent const& InKeyEvent)
{
	FReply Reply = Super::NativeOnKeyDown(InGeometry, InKeyEvent);
	if (!Reply.IsEventHandled())
	{
		Reply = HandleKeyDown(InKeyEvent);
	}
	return Reply;
}

FReply UStyledActivatableWidget::NativeOnKeyUp(FGeometry const& InGeometry, FKeyEvent const& InKeyEvent)
{
	FReply Reply = Super::NativeOnKeyUp(InGeometry, InKeyEvent);
	if (!Reply.IsEventHandled())
	{
		Reply = HandleKeyUp(InKeyEvent);
	}
	return Reply;
}

void UStyledActivatableWidget::NativeOnClicked()
{
}

void UStyledActivatableWidget::DispatchClickEvent()
{
	NativeOnClicked();
	OnClicked();
}

void UStyledActivatableWidget::DispatchHoverEvent(bool bInIsHovered)
{
	if (bInIsHovered)
	{
		OnStartHover();
	}
	else
	{
		OnEndHover();
	}
}

void UStyledActivatableWidget::DispatchFocusEvent(bool bInIsFocused)
{
	if (bInIsFocused)
	{
		OnStartFocus();
	}
	else
	{
		OnEndFocus();
	}
}

#if WITH_EDITOR
void UStyledActivatableWidget::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
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

const FText UStyledActivatableWidget::GetPaletteCategory()
{
	return NSLOCTEXT("StyledWidgets", "Styled", "Styled");
}
#endif // WITH_EDITOR
