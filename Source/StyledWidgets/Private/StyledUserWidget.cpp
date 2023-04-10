#include "StyledUserWidget.h"

#include "WidgetStyleBase.h"

UStyledUserWidget::UStyledUserWidget(FObjectInitializer const& Initializer) :
	Super(Initializer)
{
	StyleInstance = CreateDefaultSubobject<UWidgetStyleBase>("StyleInstance");
	bPropagateTagsToChildren = true;
}

FName UStyledUserWidget::GetIdentifier() const
{
	return Identifier;
}

void UStyledUserWidget::PostInitProperties()
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

void UStyledUserWidget::PreSave(FObjectPreSaveContext SaveContext)
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


void UStyledUserWidget::SetIsEnabled(bool bInIsEnabled)
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

void UStyledUserWidget::SetIdentifier(FName const& InIdentifier)
{
	if (InIdentifier != Identifier)
	{
		Identifier = InIdentifier;
		RebuildStyle();
	}
}

void UStyledUserWidget::AddStyleTag(FName const& StyleTag)
{
	if (!StyleTags.Contains(StyleTag))
	{
		StyleTags.Emplace(StyleTag);
		HandleStyleTagsChanged();
	}
}

void UStyledUserWidget::RemoveStyleTag(FName const& StyleTag)
{
	if (StyleTags.Contains(StyleTag))
	{
		StyleTags.Remove(StyleTag);
		HandleStyleTagsChanged();
	}
}

void UStyledUserWidget::ToggleStyleTag(FName const& StyleTag, bool bToggle)
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

void UStyledUserWidget::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	RebuildStyle();
}

FReply UStyledUserWidget::NativeOnFocusReceived(FGeometry const& InGeometry, FFocusEvent const& InFocusEvent)
{
	Super::NativeOnFocusReceived(InGeometry, InFocusEvent);
	return HandleFocusReceived(InFocusEvent);
}

void UStyledUserWidget::NativeOnFocusLost(FFocusEvent const& InFocusEvent)
{
	Super::NativeOnFocusLost(InFocusEvent);
	HandleFocusLost(InFocusEvent);
}

void UStyledUserWidget::NativeOnMouseEnter(FGeometry const& InGeometry, FPointerEvent const& InMouseEvent)
{
	Super::NativeOnMouseEnter(InGeometry, InMouseEvent);
	HandleMouseEnter(InMouseEvent);
}

void UStyledUserWidget::NativeOnMouseLeave(FPointerEvent const& InMouseEvent)
{
	Super::NativeOnMouseLeave(InMouseEvent);
	HandleMouseLeave(InMouseEvent);
}

FReply UStyledUserWidget::NativeOnMouseButtonDown(FGeometry const& InGeometry, FPointerEvent const& InMouseEvent)
{
	FReply Reply = Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
	if (!Reply.IsEventHandled())
	{
		Reply = HandleMouseButtonDown(InMouseEvent);
	}
	return Reply;
}

FReply UStyledUserWidget::NativeOnMouseButtonUp(FGeometry const& InGeometry, FPointerEvent const& InMouseEvent)
{
	FReply Reply = Super::NativeOnMouseButtonUp(InGeometry, InMouseEvent);
	if (!Reply.IsEventHandled())
	{
		Reply = HandleMouseButtonUp(InMouseEvent);
	}
	return Reply;
}

FReply UStyledUserWidget::NativeOnKeyDown(FGeometry const& InGeometry, FKeyEvent const& InKeyEvent)
{
	FReply Reply = Super::NativeOnKeyDown(InGeometry, InKeyEvent);
	if (!Reply.IsEventHandled())
	{
		Reply = HandleKeyDown(InKeyEvent);
	}
	return Reply;
}

FReply UStyledUserWidget::NativeOnKeyUp(FGeometry const& InGeometry, FKeyEvent const& InKeyEvent)
{
	FReply Reply = Super::NativeOnKeyUp(InGeometry, InKeyEvent);
	if (!Reply.IsEventHandled())
	{
		Reply = HandleKeyUp(InKeyEvent);
	}
	return Reply;
}

void UStyledUserWidget::NativeOnClicked()
{
}

void UStyledUserWidget::DispatchClickEvent()
{
	NativeOnClicked();
	OnClicked();
}

void UStyledUserWidget::DispatchHoverEvent(bool bInIsHovered)
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

void UStyledUserWidget::DispatchFocusEvent(bool bInIsFocused)
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
void UStyledUserWidget::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
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

const FText UStyledUserWidget::GetPaletteCategory()
{
	return NSLOCTEXT("StyledWidgets", "Styled", "Styled");
}
#endif // WITH_EDITOR
