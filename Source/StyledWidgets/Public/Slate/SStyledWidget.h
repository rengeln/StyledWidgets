#pragma once

template <typename TBase, typename TOuter>
class SStyledWidget : public TBase
{
public:
	TWeakObjectPtr<TOuter> OuterWidget;

	void Construct(typename TBase::FArguments const& InArgs, TOuter* InOuterWidget)
	{
		OuterWidget = InOuterWidget;
		bCanSupportFocus = true;

		TBase::Construct(InArgs);
	}

	virtual bool SupportsKeyboardFocus() const override
	{
		return OuterWidget.IsValid() ? OuterWidget->GetIsFocusable() : false;
	}

	virtual void OnMouseEnter(FGeometry const& MyGeometry, const FPointerEvent& MouseEvent) override
	{
		TBase::OnMouseEnter(MyGeometry, MouseEvent);
		if (OuterWidget.IsValid())
		{
			OuterWidget->HandleMouseEnter(MouseEvent);
		}
	}

	virtual void OnMouseLeave(FPointerEvent const& MouseEvent) override
	{
		TBase::OnMouseLeave(MouseEvent);
		if (OuterWidget.IsValid())
		{
			OuterWidget->HandleMouseLeave(MouseEvent);
		}
	}

	virtual FReply OnFocusReceived(FGeometry const& MyGeometry, FFocusEvent const& FocusEvent) override 
	{
		FReply Reply = TBase::OnFocusReceived(MyGeometry, FocusEvent);
		if (!Reply.IsEventHandled() && OuterWidget.IsValid())
		{
			Reply = OuterWidget->HandleFocusReceived(FocusEvent);
		}
		return Reply;
	}

	virtual void OnFocusLost(FFocusEvent const& InFocusEvent)
	{
		TBase::OnFocusLost(InFocusEvent);
		if (OuterWidget.IsValid())
		{
			OuterWidget->HandleFocusLost(InFocusEvent);
		}
	}

	virtual FReply OnMouseButtonDown(FGeometry const& MyGeometry, FPointerEvent const& MouseEvent) override
	{
		FReply Reply = TBase::OnMouseButtonDown(MyGeometry, MouseEvent);
		if (!Reply.IsEventHandled() && OuterWidget.IsValid())
		{
			Reply = OuterWidget->HandleMouseButtonDown(MouseEvent);
		}
		return Reply;
	}

	virtual FReply OnMouseButtonUp(FGeometry const& MyGeometry, FPointerEvent const& MouseEvent)
	{
		FReply Reply = TBase::OnMouseButtonUp(MyGeometry, MouseEvent);
		if (!Reply.IsEventHandled() && OuterWidget.IsValid())
		{
			Reply = OuterWidget->HandleMouseButtonUp(MouseEvent);
		}
		return Reply;
	}

	virtual FReply OnKeyDown(FGeometry const& MyGeometry, FKeyEvent const& KeyEvent)
	{
		FReply Reply = TBase::OnKeyDown(MyGeometry, KeyEvent);
		if (!Reply.IsEventHandled() && OuterWidget.IsValid())
		{
			Reply = OuterWidget->HandleKeyDown(KeyEvent);
		}
		return Reply;
	}

	virtual FReply OnKeyUp(FGeometry const& MyGeometry, FKeyEvent const& KeyEvent)
	{
		FReply Reply = TBase::OnKeyUp(MyGeometry, KeyEvent);
		if (!Reply.IsEventHandled() && OuterWidget.IsValid())
		{
			Reply = OuterWidget->HandleKeyUp(KeyEvent);
		}
		return Reply;
	}
};
