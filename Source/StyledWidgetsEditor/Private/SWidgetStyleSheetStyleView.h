#pragma once

#include <Widgets/SCompoundWidget.h>
#include <IDetailCustomization.h>
#include "WidgetStyleSheetEditorModels.h"

class IDetailsView;
typedef SListView<FWidgetStyleSheetPropertyModelPtr> SWidgetStyleSheetPropertyList;

class FWidgetStyleSheetStyleViewDetailCustomization : public IDetailCustomization
{
public:
	FWidgetStyleSheetStyleViewDetailCustomization(FWidgetStyleSheetStyleModelPtr InStyleModel);

	virtual void CustomizeDetails(IDetailLayoutBuilder& LayoutBuilder);
	
private:
	FWidgetStyleSheetStyleModelPtr StyleModel;
};

class SWidgetStyleSheetStyleView : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SWidgetStyleSheetStyleView) { }
		
		SLATE_ARGUMENT(FWidgetStyleSheetStyleModelPtr, StyleModel)

	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs, TSharedPtr<class FWidgetStyleSheetEditor> InStyleSheetEditor);
	void SetStyleModel(FWidgetStyleSheetStyleModelPtr InStyleModel);

	TSharedRef<IDetailsView> GetDetailsView() const;

private:
	friend class FWidgetStyleSheetStyleViewDetailCustomization;

	TSharedRef<IDetailCustomization> GetDetailCustomizationInstance();
	TSharedRef<IPropertyTypeCustomization> GetLinearColorCustomizationInstance();
	TSharedRef<IPropertyTypeCustomization> GetSlateColorCustomizationInstance();
	bool IsPropertyVisible(FPropertyAndParent const& PropertyAndParent) const;
	void OnFinishedChangingProperties(FPropertyChangedEvent const& PropertyChangedEvent);
	void OnModelUpdated();

	TWeakPtr<FWidgetStyleSheetEditor> StyleSheetEditor;
	FWidgetStyleSheetStyleModelPtr StyleModel;
	TSharedPtr<SWidgetStyleSheetPropertyList> PropertyList;
	TSharedPtr<IDetailsView> DetailsView;
};
