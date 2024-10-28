#pragma once

#include <Customizations/ColorStructCustomization.h>
#include "WidgetStyleSheetEditorModels.h"

class FWidgetStyleSheetEditor;

class FWidgetStyleSheetColorCustomization : public FColorStructCustomization
{
public:
	FWidgetStyleSheetColorCustomization(TSharedPtr<FWidgetStyleSheetEditor> InStyleSheetEditor);

protected:
	virtual void CustomizeHeader(TSharedRef<IPropertyHandle> PropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& CustomizationUtils);
	TSharedRef<SWidget> GetPaletteMenuWidget();
	FText GetColorName() const;
	virtual void SetColor(FLinearColor const& InColor);
	void AddColorToStyleSheet();

	TSharedPtr<IPropertyHandle> PropertyHandle;
	TWeakPtr<class FWidgetStyleSheetEditor> StyleSheetEditor;
};

// unfortunately, FSlateColorCustomization is private so we have to copy & paste quite a bit of its guts
class FWidgetStyleSheetSlateColorCustomization : public FWidgetStyleSheetColorCustomization
{
public:
	FWidgetStyleSheetSlateColorCustomization(TSharedPtr<FWidgetStyleSheetEditor> InStyleSheetEditor);

private:
	virtual void CustomizeHeader(TSharedRef<IPropertyHandle> PropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& CustomizationUtils);
	virtual void MakeHeaderRow(TSharedRef<class IPropertyHandle>& InSPropertyHandle, FDetailWidgetRow& Row);
	void OnValueChanged();
	ECheckBoxState GetForegroundCheckState() const;
	void HandleForegroundChanged(ECheckBoxState CheckedState);	

	TSharedPtr<IPropertyHandle> StructPropertyHandle;
	TSharedPtr<IPropertyHandle> ColorRuleHandle;
	TSharedPtr<IPropertyHandle> SpecifiedColorHandle;
};

