#include "StyledWidgetBase.h"

#include <Blueprint/UserWidget.h>
#include <Blueprint/WidgetTree.h>
#include <Components/Widget.h>
#include <Engine/GameInstance.h>
#include "StyledWidget.h"
#include "StyledContentWidget.h"
#include "StyledUserWidget.h"
#include "WidgetStyleSettings.h"
#include "WidgetStyleSheet.h"
#include "WidgetStyleManager.h"

const FName FStyleTags::Disabled = TEXT("Disabled");
const FName FStyleTags::Hovered = TEXT("Hovered");
const FName FStyleTags::Pressed = TEXT("Pressed");
const FName FStyleTags::Focused = TEXT("Focused");

template <typename TWidget>
void TStyledWidgetBase<TWidget>::GatherInheritedStyleTags(TArray<FName>& OutStyleTags)
{
	GatherInheritedStyleTagsRecursive(static_cast<TWidget*>(this), OutStyleTags);
}

template <typename TWidget>
void TStyledWidgetBase<TWidget>::GatherInheritedStyleTagsRecursive(UWidget* Widget, TArray<FName>& OutStyleTags)
{
	bool bKeepGoing = true;

	if (UStyledContentWidget* StyledContentWidget = Cast<UStyledContentWidget>(Widget))
	{
		if (StyledContentWidget->bPropagateTagsToChildren)
		{
			for (int TagIndex = 0; TagIndex < StyledContentWidget->StyleTags.Num(); TagIndex++)
			{
				OutStyleTags.AddUnique(StyledContentWidget->StyleTags[TagIndex]);
			}
		}
		else
		{
			bKeepGoing = false;
		}
	}
	else if (UStyledUserWidget* StyledUserWidget = Cast<UStyledUserWidget>(Widget))
	{
		if (StyledUserWidget->bPropagateTagsToChildren)
		{
			for (int TagIndex = 0; TagIndex < StyledUserWidget->StyleTags.Num(); TagIndex++)
			{
				OutStyleTags.AddUnique(StyledUserWidget->StyleTags[TagIndex]);
			}
		}
		else
		{
			bKeepGoing = false;
		}
	}

	if (bKeepGoing)
	{
		if (Widget->Slot && Widget->Slot->Parent)
		{
			GatherInheritedStyleTagsRecursive(Widget->Slot->Parent, OutStyleTags);
		}
		else if (UWidgetTree* WidgetTree = Cast<UWidgetTree>(Widget->GetOuter()))
		{
			if (UUserWidget* UserWidget = Cast<UUserWidget>(WidgetTree->GetOuter()))
			{
				GatherInheritedStyleTagsRecursive(UserWidget, OutStyleTags);
			}
		}
	}
}

template <typename TWidget>
void TStyledWidgetBase<TWidget>::HandleStyleTagsChanged()
{
	RebuildDescendantStylesRecursive(static_cast<TWidget*>(this));
}

template <typename TWidget>
void TStyledWidgetBase<TWidget>::RebuildDescendantStylesRecursive(UWidget* Widget)
{
	bool bContinuePropagation = true;
	if (UStyledWidget* StyledWidget = Cast<UStyledWidget>(Widget))
	{
		StyledWidget->RebuildStyle();
	}
	else if (UStyledContentWidget* StyledContentWidget = Cast<UStyledContentWidget>(Widget))
	{
		StyledContentWidget->RebuildStyle();
		bContinuePropagation = StyledContentWidget->bPropagateTagsToChildren;
	}

	if (bContinuePropagation)
	{
		if (INamedSlotInterface* NamedSlotHost = Cast<INamedSlotInterface>(Widget))
		{
			TArray<FName> SlotNames;
			NamedSlotHost->GetSlotNames(SlotNames);

			for (FName SlotName : SlotNames)
			{
				if (UWidget* SlotContent = NamedSlotHost->GetContentForSlot(SlotName))
				{
					RebuildDescendantStylesRecursive(SlotContent);
				}
			}
		}

		if (UPanelWidget* PanelWidget = Cast<UPanelWidget>(Widget))
		{
			for (int32 ChildIndex = 0; ChildIndex < PanelWidget->GetChildrenCount(); ChildIndex++)
			{
				if (UWidget* PanelChildWidget = PanelWidget->GetChildAt(ChildIndex))
				{
					RebuildDescendantStylesRecursive(PanelChildWidget);
				}
			}
		}

		if (UUserWidget* UserWidget = Cast<UUserWidget>(Widget))
		{
			if (UserWidget->WidgetTree && UserWidget->WidgetTree->RootWidget)
			{
				RebuildDescendantStylesRecursive(UserWidget->WidgetTree->RootWidget);
			}
		}
	}
}

template <typename TWidget>
void TStyledWidgetBase<TWidget>::RebuildStyle()
{
	TWidget* ThisWidget = static_cast<TWidget*>(this);

	UWidgetStyleSheet* StyleSheet = ThisWidget->OverrideStyleSheet;
	if (StyleSheet == nullptr)
	{
		if (auto* GameInstance = ThisWidget->GetGameInstance())
		{
			StyleSheet = GameInstance->GetSubsystem<UWidgetStyleManager>()->GetDefaultStyleSheet();
		}
#if WITH_EDITOR
		else
		{
			UWidgetStyleSettings const* Settings = GetDefault<UWidgetStyleSettings>();
			if (!Settings->DefaultStyleSheet.IsNull())
			{
				auto* DefaultStyleSheet = Settings->DefaultStyleSheet.LoadSynchronous();
				if (DefaultStyleSheet != nullptr)
				{
					StyleSheet = DefaultStyleSheet;
				}
			}
		}
#endif // WITH_EDITOR
	}

	if (StyleSheet && ThisWidget->StyleInstance)
	{
		if (!ThisWidget->bUseInlineStyle)
		{
			TArray<FName> AllStyleTags;
			AllStyleTags.Append(ThisWidget->StyleTags);
			GatherInheritedStyleTags(AllStyleTags);

			StyleSheet->BuildStyle(ThisWidget->Identifier, AllStyleTags, ThisWidget->StyleInstance);
		}
		ThisWidget->ApplyStyle(ThisWidget->StyleInstance);
	}
}

template <typename TWidget>
void TStyledWidgetBase<TWidget>::UpdateIsPressed()
{
	bool bIsPressed = bIsAcceptKeyDown || (bIsMouseDown && bIsHovered);
	if (bIsPressed)
	{
		static_cast<TWidget*>(this)->AddStyleTag(FStyleTags::Pressed);
	}
	else
	{
		static_cast<TWidget*>(this)->RemoveStyleTag(FStyleTags::Pressed);
	}
}

template <typename TWidget>
void TStyledWidgetBase<TWidget>::HandleMouseEnter(FPointerEvent const& InMouseEvent)
{
	TWidget* ThisWidget = static_cast<TWidget*>(this);

	if (ThisWidget->bIsHoverable)
	{
		TSharedPtr<SWidget> CachedWidget = ThisWidget->GetCachedWidget();
		if (CachedWidget.IsValid())
		{
			if (CachedWidget->IsHovered())
			{
				ThisWidget->AddStyleTag(FStyleTags::Hovered);
				bIsHovered = true;
				ThisWidget->DispatchHoverEvent(true);
			}
		}
	}

	if (bIsMouseDown)
	{
		UpdateIsPressed();
	}
}

template <typename TWidget>
void TStyledWidgetBase<TWidget>::HandleMouseLeave(FPointerEvent const& InMouseEvent)
{
	TWidget* ThisWidget = static_cast<TWidget*>(this);

	if (bIsHovered)
	{
		ThisWidget->RemoveStyleTag(FStyleTags::Hovered);
		bIsHovered = false;
		ThisWidget->DispatchHoverEvent(false);
	}

	if (bIsMouseDown)
	{
		UpdateIsPressed();
	}
}

template <typename TWidget>
FReply TStyledWidgetBase<TWidget>::HandleFocusReceived(FFocusEvent const& InFocusEvent)
{
	TWidget* ThisWidget = static_cast<TWidget*>(this);

	if (ThisWidget->bIsFocusable)
	{
		ThisWidget->AddStyleTag(FStyleTags::Focused);
	}
	return FReply::Unhandled();
}

template <typename TWidget>
void TStyledWidgetBase<TWidget>::HandleFocusLost(FFocusEvent const& InFocusEvent)
{
	TWidget* ThisWidget = static_cast<TWidget*>(this);

	if (ThisWidget->bIsFocusable)
	{
		ThisWidget->RemoveStyleTag(FStyleTags::Focused);
	}

	if (bIsAcceptKeyDown)
	{
		bIsAcceptKeyDown = false;
		UpdateIsPressed();
	}
}

template <typename TWidget>
FReply TStyledWidgetBase<TWidget>::HandleMouseButtonDown(FPointerEvent const& InMouseEvent)
{
	TWidget* ThisWidget = static_cast<TWidget*>(this);

	FReply Reply = FReply::Unhandled();
	if (ThisWidget->bIsClickable && InMouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
	{
		bIsMouseDown = true;
		UpdateIsPressed();

		return FReply::Handled().CaptureMouse(ThisWidget->GetCachedWidget().ToSharedRef());
	}
	return Reply;
}

template <typename TWidget>
FReply TStyledWidgetBase<TWidget>::HandleMouseButtonUp(FPointerEvent const& InMouseEvent)
{
	TWidget* ThisWidget = static_cast<TWidget*>(this);

	FReply Reply = FReply::Unhandled();
	if (bIsMouseDown)
	{
		bIsMouseDown = false;
		if (bIsHovered)
		{
			ThisWidget->DispatchClickEvent();
		}

		UpdateIsPressed();
		Reply = FReply::Handled().ReleaseMouseCapture();
	}
	return Reply;
}

template <typename TWidget>
FReply TStyledWidgetBase<TWidget>::HandleKeyDown(FKeyEvent const& InKeyEvent)
{
	TWidget* ThisWidget = static_cast<TWidget*>(this);

	FReply Reply = FReply::Unhandled();
	if (ThisWidget->bIsClickable && 
		FSlateApplication::Get().GetNavigationActionFromKey(InKeyEvent) == EUINavigationAction::Accept)
	{
		bIsAcceptKeyDown = true;
		UpdateIsPressed();
		Reply = FReply::Handled();
	}
	return Reply;
}

template <typename TWidget>
FReply TStyledWidgetBase<TWidget>::HandleKeyUp(FKeyEvent const& InKeyEvent)
{
	TWidget* ThisWidget = static_cast<TWidget*>(this);

	FReply Reply = FReply::Unhandled();
	if (bIsAcceptKeyDown &&
		FSlateApplication::Get().GetNavigationActionFromKey(InKeyEvent) == EUINavigationAction::Accept)
	{
		bIsAcceptKeyDown = false;
		UpdateIsPressed();
		ThisWidget->DispatchClickEvent();
		Reply = FReply::Handled();
	}
	return Reply;
}

template class TStyledWidgetBase<UStyledWidget>;
template class TStyledWidgetBase<UStyledContentWidget>;
template class TStyledWidgetBase<UStyledUserWidget>;
