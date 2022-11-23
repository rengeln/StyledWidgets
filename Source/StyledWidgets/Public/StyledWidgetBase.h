#pragma once

// Base class for Styled Widget implementations
//
// Due to the existing UWidget class hierarchy, duplication is unavoidable for various
// widget types (StyledWidget, StyledContentWidget, StyledUserWidget, etc.). Anything that
// the code generator needs to parse must be duplicated across all classes. Everything else
// can live in here.

class UWidget;

struct STYLEDWIDGETS_API FStyleTags
{
	static const FName Hovered;
	static const FName Pressed;
	static const FName Focused;
	static const FName Disabled;
};

#pragma warning(disable:4661)
template <typename TWidget>
class TStyledWidgetBase
{
protected:
	template <typename TBase, typename TOuter> friend class SStyledWidget;

	void GatherInheritedStyleTags(TArray<FName>& OutStyleTags);
	void HandleStyleTagsChanged();
	void UpdateIsPressed();
	void RebuildStyle();

	void HandleMouseEnter(FPointerEvent const& InMouseEvent);
	void HandleMouseLeave(FPointerEvent const& InMouseEvent);
	FReply HandleFocusReceived(FFocusEvent const& InFocusEvent);
	void HandleFocusLost(FFocusEvent const& InFocusEvent);
	FReply HandleMouseButtonDown(FPointerEvent const& InMouseEvent);
	FReply HandleMouseButtonUp(FPointerEvent const& InMouseEvent);
	FReply HandleKeyDown(FKeyEvent const& InKeyEvent);
	FReply HandleKeyUp(FKeyEvent const& InKeyEvent);

	bool bIsHovered = false;
	bool bIsMouseDown = false;
	bool bIsAcceptKeyDown = false;

private:
	void GatherInheritedStyleTagsRecursive(UWidget* Widget, TArray<FName>& OutStyleTags);
	void RebuildDescendantStylesRecursive(UWidget* Widget);
};
#pragma warning(default:4661)
