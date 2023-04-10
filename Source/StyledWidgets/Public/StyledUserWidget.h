#pragma once

#include <Blueprint/UserWidget.h>
#include "WidgetStyleBase.h"
#include "StyledWidgetBase.h"
#include "StyledWidgetInterface.h"

#include "StyledUserWidget.generated.h"

class UWidgetStyleSheet;

//
// Base class for styled user widgets.
//
UCLASS(Abstract, Blueprintable)
class STYLEDWIDGETS_API UStyledUserWidget 
	: public UUserWidget
	, public TStyledWidgetBase<UStyledUserWidget>
	, public IStyledWidgetInterface
{
	GENERATED_BODY()

public:
	UStyledUserWidget(FObjectInitializer const& Initializer);

	UFUNCTION(BlueprintPure, Category = "Widget")
	virtual FName GetIdentifier() const override;

	UFUNCTION(BlueprintCallable, Category="Widget")
	virtual void SetIdentifier(FName const& InIdentifier) override;

	UFUNCTION(BlueprintCallable, Category="Widget|Style")
	virtual void AddStyleTag(FName const& StyleTag) override;

	UFUNCTION(BlueprintCallable, Category="Widget|Style")
	virtual void RemoveStyleTag(FName const& StyleTag) override;

	UFUNCTION(BlueprintCallable, Category="Widget|Style")
	virtual void ToggleStyleTag(FName const& StyleTag, bool bToggle) override;
	
	virtual void SetIsEnabled(bool bInIsEnabled) override;

	UFUNCTION(BlueprintImplementableEvent, Category = "Widget")
	void OnClicked();

	UFUNCTION(BlueprintImplementableEvent, Category = "Widget")
	void OnStartHover();

	UFUNCTION(BlueprintImplementableEvent, Category = "Widget")
	void OnEndHover();

	UFUNCTION(BlueprintImplementableEvent, Category = "Widget")
	void OnStartFocus();

	UFUNCTION(BlueprintImplementableEvent, Category = "Widget")
	void OnEndFocus();

protected:
	template <typename TWidget> friend class TStyledWidgetBase;

	virtual void SynchronizeProperties() override;
	virtual void PostInitProperties() override;
	virtual void PreSave(FObjectPreSaveContext SaveContext) override;
	virtual FReply NativeOnFocusReceived(FGeometry const& InGeometry, FFocusEvent const& InFocusEvent);
	virtual void NativeOnFocusLost(FFocusEvent const& InFocusEvent);
	virtual void NativeOnMouseEnter(FGeometry const& InGeometry, FPointerEvent const& InMouseEvent);
	virtual void NativeOnMouseLeave(FPointerEvent const& InMouseEvent);
	virtual FReply NativeOnMouseButtonDown(FGeometry const& InGeometry, FPointerEvent const& InMouseEvent);
	virtual FReply NativeOnMouseButtonUp(FGeometry const& InGeometry, FPointerEvent const& InMouseEvent);
	virtual FReply NativeOnKeyDown(FGeometry const& InGeometry, FKeyEvent const& InKeyEvent);
	virtual FReply NativeOnKeyUp(FGeometry const& InGeometry, FKeyEvent const& InKeyEvent);
	virtual void NativeOnClicked();

	void DispatchClickEvent();
	void DispatchHoverEvent(bool bIsHovered);
	void DispatchFocusEvent(bool bIsFocused);

	// Override this to apply a style to this widget.
	UFUNCTION(BlueprintImplementableEvent)
	void ApplyStyle(UWidgetStyleBase* InStyle);

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual const FText GetPaletteCategory() override;
#endif // WITH_EDITOR

	// In order for Apply Style to be called you must provide a style class here.
	UPROPERTY(EditAnywhere, Category="Style")
	TSubclassOf<UWidgetStyleBase> StyleClass;

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

	// If true, any tags added to this widget are also added to all child widgets.
	UPROPERTY(EditAnywhere, Category="Style")
	bool bPropagateTagsToChildren;

	// Overrides the style sheet used to style this widget. If left blank, the project default style sheet is used.
	UPROPERTY(EditAnywhere, Category="Style")
	UWidgetStyleSheet* OverrideStyleSheet;

	// If set, the inline style is used instead of the style sheet.
	UPROPERTY(EditAnywhere, Category="Style")
	bool bUseInlineStyle;

	UPROPERTY(EditAnywhere, Instanced, Category="Style", meta=(DisplayName="Inline Style", EditCondition="bUseInlineStyle", EditConditionHides))
	UWidgetStyleBase* StyleInstance;

	UPROPERTY(EditAnywhere, Category="Behavior")
	bool bIsHoverable;

	UPROPERTY(EditAnywhere, Category="Behavior")
	bool bIsClickable;
};
