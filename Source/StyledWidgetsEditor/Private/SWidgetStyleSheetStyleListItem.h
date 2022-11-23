#pragma once

#include <Widgets/Views/STableRow.h>
#include <Widgets/Views/STableViewBase.h>
#include "WidgetStyleSheetEditorModels.h"

class SWidgetStyleSheetStyleListItem
	: public SMultiColumnTableRow<FWidgetStyleSheetStyleModelPtr>
{
public:
	SLATE_BEGIN_ARGS(SWidgetStyleSheetStyleListItem) { }
		
		SLATE_ARGUMENT(FWidgetStyleSheetStyleModelPtr, StyleModel)

	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs, TSharedRef<class FWidgetStyleSheetEditor> InStyleSheetEditor, const TSharedRef<STableViewBase>& InOwnerTableView);

	virtual TSharedRef<SWidget> GenerateWidgetForColumn(FName const& ColumnName) override;

private:
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;
	FReply OnClickedDelete();
	void OnModelUpdated();
	EVisibility GetButtonVisibility() const;

	TSharedPtr<class SInlineEditableTextBlock> NameTextBlock;
	TWeakPtr<class FWidgetStyleSheetEditor> StyleSheetEditor;
	FWidgetStyleSheetStyleModelPtr StyleModel;
	bool bPendingNameEdit = false;

	FText StyleClassName;
	inline FText GetStyleClassName() const { return StyleClassName; }

	FText StyleSelectorString;
	inline FText GetStyleSelectorString() const { return StyleSelectorString; }

	FText StyleComment;
	inline FText GetStyleComment() const { return StyleComment; }

	FSlateColor SelectorTextColor;
	inline FSlateColor GetSelectorTextColor() const { return SelectorTextColor; }

	EVisibility ErrorIconVisibility;
	inline EVisibility GetErrorIconVisibility() const { return ErrorIconVisibility; }
};

