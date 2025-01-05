#pragma once

#include <Toolkits/AssetEditorToolkit.h>
#include "WidgetStyleSheetEditorModels.h"

class UWidgetStyleSheet;
class SWidgetStyleSheetProperty;
class SWidgetStyleSheetStyleView;
struct FWidgetStyleSelector;

typedef SListView<FWidgetStyleSheetStyleModelPtr> SWidgetStyleSheetStyleList;
typedef SListView<FWidgetStyleSheetColorModelPtr> SWidgetStyleSheetColorList;

class FWidgetStyleSheetEditor : public FAssetEditorToolkit, public FEditorUndoClient
{
public:
	FWidgetStyleSheetEditor();
	virtual ~FWidgetStyleSheetEditor();

	void InitEditor(TSharedPtr<IToolkitHost>& InitToolkitHost, UWidgetStyleSheet* InWidgetStyleSheet);

	virtual FName GetToolkitFName() const override;
	virtual FText GetBaseToolkitName() const override;
	virtual FText GetToolkitName() const override;
	virtual FText GetToolkitToolTipText() const override;
	virtual FString GetWorldCentricTabPrefix() const override;
	FLinearColor GetWorldCentricTabColorScale() const override;
	virtual bool IsPrimaryEditor() const override;
    virtual void RegisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager) override;
    virtual void UnregisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager) override;
	virtual void SaveAsset_Execute() override;
	virtual void SaveAssetAs_Execute() override;
	
	virtual void PostUndo(bool bSuccess) override;
	virtual void PostRedo(bool bSuccess) override;
	virtual bool MatchesContext(const FTransactionContext& InContext, const TArray<TPair<UObject*, FTransactionObjectEvent>>& TransactionObjectContexts) const override;

	FWidgetStyleSheetModelPtr GetStyleSheetModel() const;
	void DeleteStyle(FWidgetStyleSheetStyleModelPtr Style);
	void AddColor();
	void AddColorWithValue(FLinearColor ColorValue);
	void DeleteColor(FWidgetStyleSheetColorModelPtr Color);
	void RenameColor(FWidgetStyleSheetColorModelPtr Color, FText const& InColorName);
	void ReplaceColor(FWidgetStyleSheetColorModelPtr Color, FLinearColor const& InNewColor);

private:
	TSharedRef<SDockTab> SpawnStylesTab(const FSpawnTabArgs& Args);
	TSharedRef<SDockTab> SpawnPropertiesTab(const FSpawnTabArgs& Args);
	TSharedRef<SDockTab> SpawnColorsTab(const FSpawnTabArgs& Args);
	TSharedRef<SWidget> SpawnAddStyleSetMenu();
	
	void AddStyleSet(UClass* StyleSetClass);

	TSharedRef<ITableRow> StyleList_SpawnItemWidget(FWidgetStyleSheetStyleModelPtr ItemModel, const TSharedRef<STableViewBase>& OwnerTable);
	TArray<FWidgetStyleSheetStyleModelPtr> StyleList_GetListItems() const;
	void StyleList_OnSelectionChanged(FWidgetStyleSheetStyleModelPtr ItemModel, ESelectInfo::Type SelectInfo);
	void StyleList_OnSearchTextChanged(FText const& InSearchText);
	void StyleList_OnSortModeChanged(EColumnSortPriority::Type SortPriority, const FName& ColumnName, EColumnSortMode::Type SortMode);
	EColumnSortMode::Type GetStyleClassColumnSortMode() const;
	EColumnSortPriority::Type GetStyleClassColumnSortPriority() const;
	EColumnSortMode::Type GetStyleSelectorColumnSortMode() const;
	EColumnSortPriority::Type GetStyleSelectorColumnSortPriority() const;
	void SortAndRefreshStyleList();

	TSharedRef<ITableRow> ColorList_SpawnRowWidget(FWidgetStyleSheetColorModelPtr ColorModel, const TSharedRef<STableViewBase>& OwnerTable);
	void ColorList_OnSortModeChanged(EColumnSortPriority::Type SortPriority, const FName& ColumnName, EColumnSortMode::Type SortMode);
	EColumnSortMode::Type GetColorValueColumnSortMode() const;
	EColumnSortPriority::Type GetColorValueColumnSortPriority() const;
	EColumnSortMode::Type GetColorNameColumnSortMode() const;
	EColumnSortPriority::Type GetColorNameColumnSortPriority() const;
	void SortAndRefreshColorList();

	void ExtendToolbar(FToolBarBuilder& ToolbarBuilder);
	void LoadFromAsset();
	void SaveToAsset();
	void SaveStyle(FWidgetStyleSheetStyleModelPtr Style);

	void OnStyleSheetModelUpdated();
	void OnStyleModelUpdated(FWidgetStyleSheetStyleModelPtr Style);

	static const FName TabId_Styles;
	static const FName TabId_Properties;
	static const FName TabId_Colors;

	bool bIsLoadingOrSaving = false;
	FWidgetStyleSheetModelPtr StyleSheetModel;
	TSharedPtr<SWidgetStyleSheetStyleView> StyleView;
	TSharedPtr<SWidget> ClassPickerWidget;
	TSharedPtr<SWidgetStyleSheetStyleList> StyleList;
	TSharedPtr<SHeaderRow> StyleListHeader;
	TArray<FWidgetStyleSheetStyleModelPtr> FilteredStyleList;
	FString StyleSearchString;
	TArray<FString> StyleSearchTokens;
	EWidgetStyleSheetStyleSortMethod StyleSortMethod;
	bool bStyleSortClassAscending;
	bool bStyleSortSelectorAscending;

	TSharedPtr<SWidgetStyleSheetColorList> ColorList;
	TSharedPtr<SHeaderRow> ColorListHeader;
	EWidgetStyleSheetColorSortMethod ColorSortMethod;
	bool bColorSortAscending;
};