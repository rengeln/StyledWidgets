#include "WidgetStyleSheetEditor.h"

#include <AssetRegistry/AssetRegistryModule.h>
#include <AssetRegistry/IAssetRegistry.h>
#include <Components/Widget.h>
#include <Misc/ITransaction.h>
#include <Misc/TransactionObjectEvent.h>
#include <Widgets/Colors/SColorPicker.h>
#include <Widgets/Input/SSearchBox.h>
#include <Widgets/Layout/SScrollBox.h>
#include "WidgetStyleSheet.h"
#include "StyledWidget.h"
#include "StyledContentWidget.h"
#include "STyledUserWidget.h"
#include "StyledWidgetsEditorModule.h"
#include "SWidgetStyleSheetColorListItem.h"
#include "SWidgetStyleSheetStyleView.h"
#include "SWidgetStyleSheetStyleListItem.h"

const FName FWidgetStyleSheetEditor::TabId_Styles = TEXT("WidgetStyleSheetEditor_Styles");
const FName FWidgetStyleSheetEditor::TabId_Properties = TEXT("WidgetStyleSheetEditor_Properties");
const FName FWidgetStyleSheetEditor::TabId_Colors = TEXT("WidgetStyleSheetEditor_Colors");

FWidgetStyleSheetEditor::FWidgetStyleSheetEditor()
{
}

FWidgetStyleSheetEditor::~FWidgetStyleSheetEditor()
{
}

void FWidgetStyleSheetEditor::InitEditor(TSharedPtr<IToolkitHost>& InitToolkitHost, UWidgetStyleSheet* InWidgetStyleSheet)
{
	check(InWidgetStyleSheet);

	StyleSheetModel = MakeShared<FWidgetStyleSheetModel>(InWidgetStyleSheet);
	
	StyleSortMethod = EWidgetStyleSheetStyleSortMethod::ByClass;
	bStyleSortClassAscending = true;
	bStyleSortSelectorAscending = true;

	ColorSortMethod = EWidgetStyleSheetColorSortMethod::ByLuminance;
	bColorSortAscending = false;

	// enable undo support
	InWidgetStyleSheet->SetFlags(RF_Transactional);
	GEditor->RegisterForUndo(this);

	// set up tab manager layout
	const TSharedRef<FTabManager::FLayout> StandaloneDefaultLayout = FTabManager::NewLayout("Standalone_WidgetStyleSheetEditor_Layout_v4")
	->AddArea
	(
        // Create a vertical area and spawn the toolbar
		FTabManager::NewPrimaryArea()->SetOrientation(Orient_Vertical)
		->Split
		(
			FTabManager::NewStack()
			->SetSizeCoefficient(0.1f)
			->SetHideTabWell(true)
		)
		->Split
		(
			FTabManager::NewSplitter()
			->Split(
				FTabManager::NewSplitter()
				->SetOrientation(Orient_Vertical)
				->Split(
					FTabManager::NewStack()
					->AddTab(TabId_Styles, ETabState::OpenedTab)
					->SetForegroundTab(TabId_Styles)
				)
				->Split(
					FTabManager::NewStack()
					->AddTab(TabId_Colors, ETabState::OpenedTab)
					->SetForegroundTab(TabId_Colors)
				)
			)
			->Split(
			FTabManager::NewStack()
			->AddTab(TabId_Properties, ETabState::OpenedTab)
			->SetForegroundTab(TabId_Properties)
			)
		)
	);

	const bool bCreateDefaultStandaloneMenu = true;
	const bool bCreateDefaultToolbar = true;
	FAssetEditorToolkit::InitAssetEditor(
		InitToolkitHost.IsValid() ? EToolkitMode::WorldCentric : EToolkitMode::Standalone,
		InitToolkitHost,
		TEXT("WidgetStyleSheetEditor"),
		StandaloneDefaultLayout,
		bCreateDefaultStandaloneMenu,
		bCreateDefaultToolbar,
		InWidgetStyleSheet);

	FStyledWidgetsEditorModule& EditorModule = FModuleManager::LoadModuleChecked<FStyledWidgetsEditorModule>("StyledWidgetsEditor");
	auto MenuExtender = EditorModule.GetMenuExtensibilityManager()->GetAllExtenders(GetToolkitCommands(), GetEditingObjects());
	AddMenuExtender(MenuExtender);

	auto ToolbarExtender = EditorModule.GetToolBarExtensibilityManager()->GetAllExtenders(GetToolkitCommands(), GetEditingObjects());
	ToolbarExtender->AddToolBarExtension("Asset", EExtensionHook::After, GetToolkitCommands(), FToolBarExtensionDelegate::CreateSP(this, &FWidgetStyleSheetEditor::ExtendToolbar));
	AddToolbarExtender(ToolbarExtender);

	RegenerateMenusAndToolbars();

	StyleSheetModel->OnModelUpdated.AddSP(this, &FWidgetStyleSheetEditor::OnStyleSheetModelUpdated);
	StyleSheetModel->OnStyleModelUpdated.AddSP(this, &FWidgetStyleSheetEditor::OnStyleModelUpdated);

	LoadFromAsset();
}

FName FWidgetStyleSheetEditor::GetToolkitFName() const
{
	return TEXT("WidgetStyleSheetEditor");
}

FText FWidgetStyleSheetEditor::GetBaseToolkitName() const
{
	return NSLOCTEXT("StyledWidgets", "WidgetStyleSheetEditor", "Widget Style Sheet Editor");
}

FText FWidgetStyleSheetEditor::GetToolkitName() const
{
	return StyleSheetModel->GetDisplayName();
}

FText FWidgetStyleSheetEditor::GetToolkitToolTipText() const
{
	return FAssetEditorToolkit::GetToolTipTextForObject(StyleSheetModel->GetStyleSheet());
}

FString FWidgetStyleSheetEditor::GetWorldCentricTabPrefix() const
{
	return TEXT("Widget Style Sheet");
}

FLinearColor FWidgetStyleSheetEditor::GetWorldCentricTabColorScale() const
{
	return FColor::Magenta;
}

bool FWidgetStyleSheetEditor::IsPrimaryEditor() const
{
	return true;
}

void FWidgetStyleSheetEditor::ExtendToolbar(FToolBarBuilder& ToolbarBuilder)
{
	ToolbarBuilder.AddComboButton(
		FUIAction(),
		FOnGetContent::CreateSP(this, &FWidgetStyleSheetEditor::SpawnAddStyleSetMenu),
		NSLOCTEXT("StyledWidgets", "AddStyle", "Add Style"),
		NSLOCTEXT("StyledWidgets", "AddStyleSetTooltip", "Adds a new style set to this style sheet"),
		FSlateIcon(FAppStyle::GetAppStyleSetName(), "DataTableEditor.Add"));

	ToolbarBuilder.AddToolBarButton(
		FUIAction(FExecuteAction::CreateSP(this, &FWidgetStyleSheetEditor::AddColor)),
		NAME_None,
		NSLOCTEXT("StyledWidgets", "AddColor", "Add Color"),
		NSLOCTEXT("StyledWidgets", "AddColorTooltip", "Adds a new color to the style sheet's color palette"),
		FSlateIcon(FAppStyle::GetAppStyleSetName(), "DataTableEditor.Add"));
}

TSharedRef<SWidget> FWidgetStyleSheetEditor::SpawnAddStyleSetMenu()
{
	FMenuBuilder AddMenu(true, ToolkitCommands);

	// first add native classes
	for (TObjectIterator<UClass> ClassIterator; ClassIterator; ++ClassIterator)
	{
		if (ClassIterator->IsChildOf<UWidgetStyleBase>() &&
			!ClassIterator->HasAnyClassFlags(CLASS_Abstract | CLASS_CompiledFromBlueprint))
		{
			UClass* Class = *ClassIterator;

			AddMenu.AddMenuEntry(ClassIterator->GetDisplayNameText(), 
				Class->GetToolTipText(),
				FSlateIcon(),
				FExecuteAction::CreateSP(this, &FWidgetStyleSheetEditor::AddStyle, TSubclassOf<UWidgetStyleBase>(Class)));
		}
	}

	// next add blueprint classes
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked< FAssetRegistryModule >(FName("AssetRegistry"));
	IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();

	TArray<FAssetData> AssetList;
	FARFilter Filter;
	Filter.ClassPaths.Add(UBlueprint::StaticClass()->GetClassPathName());
	Filter.ClassPaths.Add(UBlueprintGeneratedClass::StaticClass()->GetClassPathName());
	AssetRegistry.GetAssets(Filter, AssetList);

	for (auto& Asset : AssetList)
	{
		if (UObject* AssetObj = Asset.GetAsset())
		{
			UBlueprint* Blueprint = Cast<UBlueprint>(StaticLoadObject(UBlueprint::StaticClass(), NULL, *AssetObj->GetPathName()));

			if (Blueprint != NULL && Blueprint->GeneratedClass != NULL && Blueprint->GeneratedClass->GetDefaultObject() != NULL)
			{
				UClass* Class = Blueprint->GeneratedClass;

				if (Class->IsChildOf(UWidgetStyleBase::StaticClass()))
				{
					AddMenu.AddMenuEntry(Class->GetDisplayNameText(), 
						Class->GetToolTipText(),
						FSlateIcon(),
						FExecuteAction::CreateSP(this, &FWidgetStyleSheetEditor::AddStyle, TSubclassOf<UWidgetStyleBase>(Class)));
				}
			}
		}
	}

	AddMenu.EndSection();

	return AddMenu.MakeWidget();
}

void FWidgetStyleSheetEditor::RegisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager)
{
	WorkspaceMenuCategory = InTabManager->AddLocalWorkspaceMenuCategory(NSLOCTEXT("StyledWidgets", "WidgetStyleSheet", "Widget Style Sheet"));

	FAssetEditorToolkit::RegisterTabSpawners(InTabManager);
	InTabManager->RegisterTabSpawner(TabId_Styles, FOnSpawnTab::CreateSP(this, &FWidgetStyleSheetEditor::SpawnStylesTab))
		.SetDisplayName(NSLOCTEXT("StyledWidgets", "Styles", "Styles"))
		.SetGroup(WorkspaceMenuCategory.ToSharedRef())
		.SetIcon(FSlateIcon(FAppStyle::GetAppStyleSetName(), "LevelEditor.Tabs.Outliner"));
	InTabManager->RegisterTabSpawner(TabId_Properties, FOnSpawnTab::CreateSP(this, &FWidgetStyleSheetEditor::SpawnPropertiesTab))
		.SetDisplayName(NSLOCTEXT("StyledWidgets", "Properties", "Properties"))
		.SetGroup(WorkspaceMenuCategory.ToSharedRef())
		.SetIcon(FSlateIcon(FAppStyle::GetAppStyleSetName(), "LevelEditor.Tabs.Details"));
	InTabManager->RegisterTabSpawner(TabId_Colors, FOnSpawnTab::CreateSP(this, &FWidgetStyleSheetEditor::SpawnColorsTab))
		.SetDisplayName(NSLOCTEXT("StyledWidgets", "Colors", "Colors"))
		.SetGroup(WorkspaceMenuCategory.ToSharedRef())
		.SetIcon(FSlateIcon(FAppStyle::GetAppStyleSetName(), "LevelEditor.Tabs.Layers"));
	
}

void FWidgetStyleSheetEditor::UnregisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager)
{
	FAssetEditorToolkit::UnregisterTabSpawners(InTabManager);
	InTabManager->UnregisterTabSpawner(TabId_Styles);
	InTabManager->UnregisterTabSpawner(TabId_Properties);
}

TSharedRef<SDockTab> FWidgetStyleSheetEditor::SpawnStylesTab(const FSpawnTabArgs& Args)
{
	check(Args.GetTabId() == TabId_Styles);

	return SNew(SDockTab)
		.Label(NSLOCTEXT("StyledWidgets", "Styles", "Styles"))
		.TabColorScale(GetTabColorScale())
		[
			SNew(SVerticalBox)

			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(4.0f)
			[
				SNew(SSearchBox)
				.OnTextChanged(this, &FWidgetStyleSheetEditor::StyleList_OnSearchTextChanged)
			]

			+ SVerticalBox::Slot()
			[
				SAssignNew(StyleList, SWidgetStyleSheetStyleList)
					.ListItemsSource(&FilteredStyleList)
					.OnGenerateRow(this, &FWidgetStyleSheetEditor::StyleList_SpawnItemWidget)
					.OnSelectionChanged(this, &FWidgetStyleSheetEditor::StyleList_OnSelectionChanged)
					.SelectionMode(ESelectionMode::Single)
					.HeaderRow
					(
						SAssignNew(StyleListHeader, SHeaderRow)
						+ SHeaderRow::Column(TEXT("StyleClass"))
							.HeaderContentPadding(FMargin(8.0f, 0.0f))
							.DefaultLabel(NSLOCTEXT("StyledWidgets", "StyleClassColumn", "Widget"))
							.ManualWidth(200.f)
							.VAlignCell(EVerticalAlignment::VAlign_Center)
							.OnSort(this, &FWidgetStyleSheetEditor::StyleList_OnSortModeChanged)
							.SortMode(this, &FWidgetStyleSheetEditor::GetStyleClassColumnSortMode)
							.SortPriority(this, &FWidgetStyleSheetEditor::GetStyleClassColumnSortPriority)
						+ SHeaderRow::Column(TEXT("StyleSelector"))
							.HeaderContentPadding(FMargin(8.0f, 0.0f))
							.DefaultLabel(NSLOCTEXT("StyledWidgets", "StyleSelectorColumn", "Selector"))
							.FillWidth(1.0f)
							.VAlignCell(EVerticalAlignment::VAlign_Center)
							.OnSort(this, &FWidgetStyleSheetEditor::StyleList_OnSortModeChanged)
							.SortMode(this, &FWidgetStyleSheetEditor::GetStyleSelectorColumnSortMode)
							.SortPriority(this, &FWidgetStyleSheetEditor::GetStyleSelectorColumnSortPriority)
						+ SHeaderRow::Column(TEXT("StyleComment"))
							.HeaderContentPadding(FMargin(8.0f, 0.0f))
							.DefaultLabel(NSLOCTEXT("StyledWidgets", "StyleCommentColumn", "Comment"))
							.FillWidth(1.0f)
							.VAlignCell(EVerticalAlignment::VAlign_Center)
						+ SHeaderRow::Column(TEXT("StyleOperations"))
							.DefaultLabel(FText())
							.FixedWidth(36.0f)
							.VAlignCell(EVerticalAlignment::VAlign_Center)
							.HAlignCell(EHorizontalAlignment::HAlign_Center)
					)
			]
		];
}

TSharedRef<SDockTab> FWidgetStyleSheetEditor::SpawnPropertiesTab(const FSpawnTabArgs& Args)
{
	check(Args.GetTabId() == TabId_Properties);

	return SNew(SDockTab)
		.Label(NSLOCTEXT("StyledWidgets", "Properties", "Properties"))
		.TabColorScale(GetTabColorScale())
		[
			SAssignNew(StyleView, SWidgetStyleSheetStyleView, SharedThis(this))
		];
}

TSharedRef<SDockTab> FWidgetStyleSheetEditor::SpawnColorsTab(const FSpawnTabArgs& Args)
{
	check(Args.GetTabId() == TabId_Colors);

	return SNew(SDockTab)
		.Label(NSLOCTEXT("StyledWidgets", "Colors", "Colors"))
		.TabColorScale(GetTabColorScale())
		[
			SAssignNew(ColorList, SWidgetStyleSheetColorList)
			.ListItemsSource(&StyleSheetModel->GetColors())
			.OnGenerateRow(this, &FWidgetStyleSheetEditor::ColorList_SpawnRowWidget)
			.SelectionMode(ESelectionMode::Single)
			.HeaderRow
			(
				SAssignNew(ColorListHeader, SHeaderRow)
				+ SHeaderRow::Column(TEXT("Color"))
					.DefaultLabel(NSLOCTEXT("StyledWidgets", "ColorValueColumn", "Color"))
					.HeaderContentPadding(FMargin(8.0f, 0.0f))
					.ManualWidth(92.f)
					.VAlignCell(EVerticalAlignment::VAlign_Center)
					.SortMode(this, &FWidgetStyleSheetEditor::GetColorValueColumnSortMode)
					.SortPriority(this, &FWidgetStyleSheetEditor::GetColorValueColumnSortPriority)
					.OnSort(this, &FWidgetStyleSheetEditor::ColorList_OnSortModeChanged)
				+ SHeaderRow::Column(TEXT("Name"))
					.DefaultLabel(NSLOCTEXT("StyledWidgets", "ColorNameColumn", "Name"))
					.HeaderContentPadding(FMargin(8.0f, 0.0f))
					.VAlignCell(EVerticalAlignment::VAlign_Center)
					.FillWidth(1.0f)
					.SortMode(this, &FWidgetStyleSheetEditor::GetColorNameColumnSortMode)
					.SortPriority(this, &FWidgetStyleSheetEditor::GetColorNameColumnSortPriority)
					.OnSort(this, &FWidgetStyleSheetEditor::ColorList_OnSortModeChanged)
				+ SHeaderRow::Column(TEXT("Operations"))
					.DefaultLabel(FText())
					.FixedWidth(100.f)
					.VAlignCell(EVerticalAlignment::VAlign_Center)
					.HAlignCell(EHorizontalAlignment::HAlign_Center)
			)
		];
}

TSharedRef<ITableRow> FWidgetStyleSheetEditor::StyleList_SpawnItemWidget(
	FWidgetStyleSheetStyleModelPtr ItemModel, 
	const TSharedRef<STableViewBase>& OwnerTable)
{
	return SNew(SWidgetStyleSheetStyleListItem, SharedThis(this), OwnerTable)
		.StyleModel(ItemModel);
}

void FWidgetStyleSheetEditor::StyleList_OnSelectionChanged(FWidgetStyleSheetStyleModelPtr ItemModel, ESelectInfo::Type SelectInfo)
{
	StyleView->SetStyleModel(ItemModel);
}

void FWidgetStyleSheetEditor::StyleList_OnSearchTextChanged(FText const& InSearchText)
{
	StyleSearchString = InSearchText.ToString();
	InSearchText.ToString().ParseIntoArrayWS(StyleSearchTokens);
	SortAndRefreshStyleList();
}

void FWidgetStyleSheetEditor::StyleList_OnSortModeChanged(EColumnSortPriority::Type SortPriority, const FName& ColumnName, EColumnSortMode::Type SortMode)
{
	if (ColumnName == TEXT("StyleClass"))
	{
		if (StyleSortMethod == EWidgetStyleSheetStyleSortMethod::ByClass)
		{
			bStyleSortClassAscending = !bStyleSortClassAscending;
		}
		else
		{
			StyleSortMethod = EWidgetStyleSheetStyleSortMethod::ByClass;
		}
	}
	else if (ColumnName == TEXT("StyleSelector"))
	{
		if (StyleSortMethod == EWidgetStyleSheetStyleSortMethod::BySelector)
		{
			bStyleSortSelectorAscending = !bStyleSortSelectorAscending;
		}
		else
		{
			StyleSortMethod = EWidgetStyleSheetStyleSortMethod::BySelector;
		}
	}

	SortAndRefreshStyleList();
}

void FWidgetStyleSheetEditor::SortAndRefreshStyleList()
{
	StyleSheetModel->SortStyles(StyleSortMethod, bStyleSortClassAscending, bStyleSortSelectorAscending);

	FilteredStyleList.Empty();
	for (auto Style : StyleSheetModel->GetStyles())
	{
		bool bMatchedAllTokens = true;
		for (FString const& SearchToken : StyleSearchTokens)
		{
			bool bMatchedToken = false;

			if (Style->GetStyleClass()->GetDisplayNameText().ToString().Contains(SearchToken, ESearchCase::IgnoreCase))
			{
				bMatchedToken = true;
			}
			else if (Style->GetSelectorString().Contains(SearchToken, ESearchCase::IgnoreCase))
			{
				bMatchedToken = true;
			}

			if (!bMatchedToken)
			{
				bMatchedAllTokens = false;
				break;
			}
		}
		
		if (bMatchedAllTokens)
		{
			FilteredStyleList.Emplace(Style);
		}
	}

	StyleList->RequestListRefresh();
}

EColumnSortMode::Type FWidgetStyleSheetEditor::GetStyleClassColumnSortMode() const
{
	return bStyleSortClassAscending ? EColumnSortMode::Ascending : EColumnSortMode::Descending;
}

EColumnSortPriority::Type FWidgetStyleSheetEditor::GetStyleClassColumnSortPriority() const
{
	return StyleSortMethod == EWidgetStyleSheetStyleSortMethod::ByClass ? EColumnSortPriority::Primary : EColumnSortPriority::Secondary;
}

EColumnSortMode::Type FWidgetStyleSheetEditor::GetStyleSelectorColumnSortMode() const
{
	return bStyleSortSelectorAscending ? EColumnSortMode::Ascending : EColumnSortMode::Descending;
}

EColumnSortPriority::Type FWidgetStyleSheetEditor::GetStyleSelectorColumnSortPriority() const
{
	return StyleSortMethod == EWidgetStyleSheetStyleSortMethod::BySelector ? EColumnSortPriority::Primary : EColumnSortPriority::Secondary;
}

EColumnSortMode::Type FWidgetStyleSheetEditor::GetColorValueColumnSortMode() const
{
	return bColorSortAscending ? EColumnSortMode::Ascending : EColumnSortMode::Descending;
}

EColumnSortPriority::Type FWidgetStyleSheetEditor::GetColorValueColumnSortPriority() const
{
	return ColorSortMethod == EWidgetStyleSheetColorSortMethod::ByLuminance ? EColumnSortPriority::Primary : EColumnSortPriority::None;
}

EColumnSortMode::Type FWidgetStyleSheetEditor::GetColorNameColumnSortMode() const
{
	return bColorSortAscending ? EColumnSortMode::Ascending : EColumnSortMode::Descending;
}

EColumnSortPriority::Type FWidgetStyleSheetEditor::GetColorNameColumnSortPriority() const
{
return ColorSortMethod == EWidgetStyleSheetColorSortMethod::ByName ? EColumnSortPriority::Primary : EColumnSortPriority::None;
}

TSharedRef<ITableRow> FWidgetStyleSheetEditor::ColorList_SpawnRowWidget(FWidgetStyleSheetColorModelPtr ColorModel, const TSharedRef<STableViewBase>& OwnerTable)
{
	return SNew(SWidgetStyleSheetColorListItem, SharedThis(this), OwnerTable)
		.ColorModel(ColorModel);
}

FWidgetStyleSheetModelPtr FWidgetStyleSheetEditor::GetStyleSheetModel() const
{
	return StyleSheetModel;
}

void FWidgetStyleSheetEditor::AddStyle(TSubclassOf<UWidgetStyleBase> StyleClass)
{
	const FScopedTransaction Transaction(NSLOCTEXT("StyledWidgets", "AddStyle", "Add Style"));

	FWidgetStyleSheetStyleModelPtr NewStyle = StyleSheetModel->AddStyle(StyleClass);
	NewStyle->GetStyleInstance()->SelectorString = StyleSearchString;
	SaveToAsset();
	StyleList->SetSelection(NewStyle, ESelectInfo::Direct);
	SortAndRefreshStyleList();

	FSlateApplication::Get().SetKeyboardFocus(
		StyleView->GetDetailsView(), EFocusCause::SetDirectly);
}

void FWidgetStyleSheetEditor::DeleteStyle(FWidgetStyleSheetStyleModelPtr Style)
{
	check(Style.IsValid());

	const FScopedTransaction Transaction(NSLOCTEXT("StyledWidgets", "DeleteStyle", "Delete Style"));

	Style->Remove();
	SaveToAsset();

	SortAndRefreshStyleList();
}

void FWidgetStyleSheetEditor::AddColor()
{
	FColorPickerArgs Args;
	Args.bIsModal = true;
	Args.bUseAlpha = true;
	Args.sRGBOverride = true;
	Args.OnColorCommitted = FOnLinearColorValueChanged::CreateSP(this, &FWidgetStyleSheetEditor::AddColorWithValue);

	OpenColorPicker(Args);
}

void FWidgetStyleSheetEditor::AddColorWithValue(FLinearColor ColorValue)
{
	const FScopedTransaction Transaction(NSLOCTEXT("StyledWidgets", "AddColor", "Add Color"));

	auto ColorModel = StyleSheetModel->AddColor();
	ColorModel->SetColor(ColorValue);
	SaveToAsset();

	ColorList->SetSelection(ColorModel, ESelectInfo::Direct);
	SortAndRefreshColorList();
}

void FWidgetStyleSheetEditor::DeleteColor(FWidgetStyleSheetColorModelPtr Color)
{
	check(Color.IsValid());

	const FScopedTransaction Transaction(NSLOCTEXT("StyledWidgets", "DeleteColor", "Delete Color"));

	Color->Remove();
	SaveToAsset();

	SortAndRefreshColorList();
}

void FWidgetStyleSheetEditor::RenameColor(FWidgetStyleSheetColorModelPtr Color, FText const& InColorName)
{
	check(Color.IsValid());

	const FScopedTransaction Transaction(NSLOCTEXT("StyledWidgets", "RenameColor", "Rename Color"));

	Color->SetName(InColorName, true);
	SaveToAsset();
}

void FWidgetStyleSheetEditor::ReplaceColor(FWidgetStyleSheetColorModelPtr Color, FLinearColor const& InNewColor)
{
	FScopedTransaction Transaction(NSLOCTEXT("StyledWidgets", "ReplaceColor", "Replace Color"));

	FLinearColor OldColor = Color->GetColor();
	Color->SetColor(InNewColor);

	int Count = StyleSheetModel->ReplaceColor(OldColor, InNewColor, true);
	if (Count > 0)
	{
		auto Message = FText::Format(FTextFormat(NSLOCTEXT("StyledWidgets", "ReplaceColorInStyles", "Replace all {0} instances of this color?")), Count);
		auto Result = FMessageDialog::Open(EAppMsgType::YesNo, Message);
		if (Result == EAppReturnType::Yes)
		{
			StyleSheetModel->ReplaceColor(OldColor, InNewColor, false);
		}
	}

	SaveToAsset();
	SortAndRefreshColorList();
}

void FWidgetStyleSheetEditor::ColorList_OnSortModeChanged(EColumnSortPriority::Type SortPriority, const FName& ColumnName, EColumnSortMode::Type SortMode)
{
	if (ColumnName == TEXT("Color"))
	{
		if (ColorSortMethod == EWidgetStyleSheetColorSortMethod::ByLuminance)
		{
			bColorSortAscending = !bColorSortAscending;
		}
		else
		{
			ColorSortMethod = EWidgetStyleSheetColorSortMethod::ByLuminance;
			bColorSortAscending = true;
		}
	}
	else if (ColumnName == TEXT("Name"))
	{
		if (ColorSortMethod == EWidgetStyleSheetColorSortMethod::ByName)
		{
			bColorSortAscending = !bColorSortAscending;
		}
		else
		{
			ColorSortMethod = EWidgetStyleSheetColorSortMethod::ByName;
			bColorSortAscending = true;
		}
	}

	SortAndRefreshColorList();
}

void FWidgetStyleSheetEditor::SortAndRefreshColorList()
{
	StyleSheetModel->SortColors(ColorSortMethod, bColorSortAscending);
	ColorList->RequestListRefresh();
}

void FWidgetStyleSheetEditor::OnStyleSheetModelUpdated()
{
	SaveToAsset();
}

void FWidgetStyleSheetEditor::OnStyleModelUpdated(FWidgetStyleSheetStyleModelPtr Style)
{
	SaveToAsset();
	SortAndRefreshStyleList();
}

void FWidgetStyleSheetEditor::LoadFromAsset()
{
	if (bIsLoadingOrSaving)
	{
		return;
	}
	bIsLoadingOrSaving = true;

	auto* StyleSheet = StyleSheetModel->GetStyleSheet();
	StyleSheetModel->ClearStyles();
	StyleSheetModel->ClearColors();
	
	for (int StyleIndex = 0; StyleIndex < StyleSheet->Styles.Num(); StyleIndex++)
	{
		UWidgetStyleBase* StyleInstance = StyleSheet->Styles[StyleIndex];
		if (StyleInstance)
		{
			FWidgetStyleSheetStyleModelPtr StyleModel = StyleSheetModel->AddStyle(StyleInstance->GetClass());

			StyleModel->CopyStyleInstance(StyleInstance);
		}
	}
	StyleSheetModel->SortStyles(StyleSortMethod, bStyleSortClassAscending, bStyleSortSelectorAscending);

	for (auto const& SavedColor : StyleSheet->ColorPalette)
	{
		auto ColorModel = StyleSheetModel->AddColor();
		ColorModel->SetColor(SavedColor.Color);
		ColorModel->SetName(FText::AsCultureInvariant(SavedColor.Name.ToString()), false);
	}
	StyleSheetModel->SortColors(ColorSortMethod, bColorSortAscending);

	bIsLoadingOrSaving = false;

	SortAndRefreshStyleList();
}

void FWidgetStyleSheetEditor::SaveToAsset()
{
	if (bIsLoadingOrSaving)
	{
		return;
	}
	bIsLoadingOrSaving = true;

	auto* StyleSheet = StyleSheetModel->GetStyleSheet();
	StyleSheet->Modify();
	StyleSheet->Styles.Empty();
	StyleSheet->ColorPalette.Empty();

	for (auto& StyleModel : StyleSheetModel->GetStyles())
	{
		SaveStyle(StyleModel);
	}

	for (auto& ColorModel : StyleSheetModel->GetColors())
	{
		FWidgetStyleSheetColor& SavedColor = StyleSheet->ColorPalette.Emplace_GetRef();
		SavedColor.Name = FName(*ColorModel->GetDisplayName().ToString());
		SavedColor.Color = ColorModel->GetColor();
	}

	for (TObjectIterator<UWidget> WidgetIterator; WidgetIterator; ++WidgetIterator)
	{
		auto* Widget = *WidgetIterator;
		if (Widget->GetClass()->IsChildOf<UStyledWidget>() ||
			Widget->GetClass()->IsChildOf<UStyledContentWidget>() ||
			Widget->GetClass()->IsChildOf<UStyledUserWidget>())
		{
			if (Widget->IsConstructed())
			{
				Widget->SynchronizeProperties();
			}
		}
	}

	bIsLoadingOrSaving = false;
}

void FWidgetStyleSheetEditor::SaveStyle(FWidgetStyleSheetStyleModelPtr StyleModel)
{
	auto* StyleSheet = StyleSheetModel->GetStyleSheet();

	if (StyleModel->GetStyleInstance())
	{
		auto*& StyleInstance = StyleSheet->Styles.Emplace_GetRef();
		StyleInstance = DuplicateObject(StyleModel->GetStyleInstance(), StyleSheet);
		StyleInstance->ClearFlags(RF_Transient);
	}
}

bool FWidgetStyleSheetEditor::MatchesContext(const FTransactionContext& InContext, const TArray<TPair<UObject*, FTransactionObjectEvent>>& TransactionObjectContexts) const
{
	bool bResult = InContext.PrimaryObject == StyleSheetModel->GetStyleSheet();
	if (!bResult)
	{
		for (auto const& ObjectPair : TransactionObjectContexts)
		{
			if (ObjectPair.Key == StyleSheetModel->GetStyleSheet())
			{
				bResult = true;
				break;
			}
		}
	}
	return bResult;
}

void FWidgetStyleSheetEditor::PostUndo(bool bSuccess)
{
	if (bSuccess)
	{
		LoadFromAsset();
		StyleList->RebuildList();
		ColorList->RebuildList();
		StyleView->SetStyleModel(nullptr);
	}
}

void FWidgetStyleSheetEditor::PostRedo(bool bSuccess)
{
	PostUndo(bSuccess);
}

void FWidgetStyleSheetEditor::SaveAsset_Execute()
{
	SaveToAsset();
	FAssetEditorToolkit::SaveAsset_Execute();
}

void FWidgetStyleSheetEditor::SaveAssetAs_Execute()
{
	SaveToAsset();
	FAssetEditorToolkit::SaveAsset_Execute();
}
