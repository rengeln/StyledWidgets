#pragma once

#include <Widgets/Views/STableRow.h>
#include <Widgets/Views/STableViewBase.h>
#include "WidgetStyleSheetEditorModels.h"

class SWidgetStyleSheetColorListItem
	: public SMultiColumnTableRow<FWidgetStyleSheetColorModelPtr>
{
public:
	SLATE_BEGIN_ARGS(SWidgetStyleSheetColorListItem) { }
		
		SLATE_ARGUMENT(FWidgetStyleSheetColorModelPtr, ColorModel)

	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs, TSharedRef<class FWidgetStyleSheetEditor> InStyleSheetEditor, const TSharedRef<STableViewBase>& InOwnerTableView);
	 
	virtual TSharedRef<SWidget> GenerateWidgetForColumn(FName const& ColumnName) override;

private:
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;
	FReply OnClickedRename();
	FReply OnClickedDelete();
	FReply OnClickedCopy();
	FReply OnClickedColorBlock(FGeometry const& InGeometry, FPointerEvent const& InPointerEvent);
	void OnColorCommitted(FLinearColor InColor);
	void OnNameTextCommitted(const FText& Text, ETextCommit::Type CommitType);
	EVisibility GetButtonVisibility() const;
	FText GetColorToolTipText() const;

	TSharedPtr<class SInlineEditableTextBlock> NameTextBlock;
	TWeakPtr<class FWidgetStyleSheetEditor> StyleSheetEditor;
	FWidgetStyleSheetColorModelPtr ColorModel;
	bool bPendingNameEdit = false;
};
