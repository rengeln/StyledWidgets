#pragma once

#include <Components/ContentWidget.h>
#include <Components/Widget.h>
#include "WidgetStyleBase.h"
#include "StyledWidgetBase.h"
#include "StyledWidgetInterface.h"

#include "StyledWidget.generated.h"

class UWidgetStyleSheet;

//
// Due to the UWidget inheritence structure, nearly all of this code is duplicated in
// UStyledWidget, UStyledContentWidget and UStyledUserWidget. Any changes made to one
// class should be made to the others as well.
//

//
// Base class for styled leaf widgets. (See UStyledContentWidget for widgets which host content.)
//
UCLASS(BlueprintType, Abstract)
class STYLEDWIDGETS_API UStyledWidget 
	: public UWidget
	, public TStyledWidgetBase<UStyledWidget>
	, public IStyledWidgetInterface
{
	GENERATED_BODY()

public:
	UStyledWidget(FObjectInitializer const& Initializer);
	
	UFUNCTION(BlueprintPure, Category = "Widget")
	virtual FName GetIdentifier() const override;

	UFUNCTION(BlueprintCallable, Category = "Widget")
	virtual void SetIdentifier(FName const& InIdentifier) override;

	UFUNCTION(BlueprintCallable, Category="Widget|Style")
	virtual void AddStyleTag(FName const& StyleTag) override;

	UFUNCTION(BlueprintCallable, Category="Widget|Style")
	virtual void RemoveStyleTag(FName const& StyleTag) override;

	UFUNCTION(BlueprintCallable, Category="Widget|Style")
	virtual void ToggleStyleTag(FName const& StyleTag, bool bToggle) override;

	UFUNCTION(BlueprintPure, Category="Widget")
	inline bool GetIsFocusable() const { return bIsFocusable; }

	UFUNCTION(BlueprintPure, Category="Widget")
	inline bool GetIsClickable() const { return bIsClickable; }

	UFUNCTION(BlueprintPure, Category="Widget")
	inline bool GetIsHoverable() const { return bIsHoverable; }

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClickedEvent, UStyledWidget*, Widget);
	// In order for this to fire, bIsClickable must be checked.
	UPROPERTY(BlueprintAssignable)
	FOnClickedEvent OnClicked;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocusReceivedEvent, UStyledWidget*, Widget);
	// In order for this to fire, bIsFocusable must be checked.
	UPROPERTY(BlueprintAssignable)
	FOnFocusReceivedEvent OnFocusReceived;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocusLostEvent, UStyledWidget*, Widget);
	// In order for this to fire, bIsFocusable must be checked.
	UPROPERTY(BlueprintAssignable)
	FOnFocusLostEvent OnFocusLost;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHoverStartEvent, UStyledWidget*, Widget);
	// In order for this to fire, bIsHoverable must be checked.
	UPROPERTY(BlueprintAssignable)
	FOnHoverStartEvent OnHoverStart;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHoverEndEvent, UStyledWidget*, Widget);
	// In order for this to fire, bIsHoverable must be checked.
	UPROPERTY(BlueprintAssignable)
	FOnHoverEndEvent OnHoverEnd;

	virtual void SetIsEnabled(bool bInIsEnabled) override;

protected:
	template <typename TWidget> friend class TStyledWidgetBase;

	virtual void SynchronizeProperties() override;
	void DispatchClickEvent();
	void DispatchHoverEvent(bool bIsHovered);
	void DispatchFocusEvent(bool bIsFocused);
	
	// Subclasses may implement these to provide built-in behavior
	virtual void NativeOnClicked();
	virtual void NativeOnHoverStart();
	virtual void NativeOnHoverEnd();
	virtual void NativeOnFocusReceived();
	virtual void NativeOnFocusLost();

	// Subclasses must implement this to apply the style object
	virtual void ApplyStyle(UWidgetStyleBase* Style);

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual const FText GetPaletteCategory() override;
#endif // WITH_EDITOR

	// Name which can be queried to determine this widget's identity and to specialize its style
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Behavior", meta=(ExposeOnSpawn="true"))
	FName Identifier;

#if WITH_EDITORONLY_DATA
	// List of Style Tags for this widget, separated by spaces. Additional tags may be added or removed at runtime.
	UPROPERTY(EditAnywhere, Category="Style", meta=(DisplayName="Style Tags"))
	FString StyleTagsString;
#endif // WITH_EDITORONLY_DATA

	UPROPERTY(VisibleAnywhere, Category="Style", AdvancedDisplay, meta=(DisplayName="Style Tag Array"))
	TArray<FName> StyleTags;

	// Overrides the style sheet used to style this widget. If left blank, the project default style sheet is used.
	UPROPERTY(EditAnywhere, Category="Style")
	UWidgetStyleSheet* OverrideStyleSheet;

	// If set, the inline style is used instead of the style sheet.
	UPROPERTY(EditAnywhere, Category="Style")
	bool bUseInlineStyle;

	UPROPERTY(EditAnywhere, Instanced, Category="Style", meta=(DisplayName="Inline Style", EditCondition="bUseInlineStyle", EditConditionHides))
	UWidgetStyleBase* StyleInstance;

	UPROPERTY(EditAnywhere, Category="Behavior", meta=(EditCondition="bSupportsFocusable", EditConditionHides))
	bool bIsFocusable;

	// subclasses should set this to true if routing OnFocusReceived/OnFocusLost
	UPROPERTY(VisibleAnywhere, Category="Behavior", AdvancedDisplay)
	bool bSupportsFocusable;

	UPROPERTY(EditAnywhere, Category="Behavior",  meta=(EditCondition="bSupportsHoverable", EditConditionHides))
	bool bIsHoverable;

	// subclasses should set this to true if routing OnMouseEnter/OnMouseLeave
	UPROPERTY(VisibleAnywhere, Category="Behavior", AdvancedDisplay)
	bool bSupportsHoverable;

	UPROPERTY(EditAnywhere, Category="Behavior", meta=(EditCondition="bSupportsClickable", EditConditionHides))
	bool bIsClickable;

	// subclasses should set this to true if routing OnMouseDown/OnMouseUp/OnKeyDown/OnKeyUp/OnMouseEnter/OnMouseLeave
	UPROPERTY(VisibleAnywhere, Category="Behavior", AdvancedDisplay)
	bool bSupportsClickable;
};

template class STYLEDWIDGETS_API TStyledWidgetBase<UStyledWidget>;
