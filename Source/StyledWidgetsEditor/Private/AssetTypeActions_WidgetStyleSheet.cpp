#include "AssetTypeActions_WidgetStyleSheet.h"

#include <AssetTypeCategories.h>
#include "WidgetStyleSheet.h"
#include "WidgetStyleSheetEditor.h"

FAssetTypeActions_WidgetStyleSheet::FAssetTypeActions_WidgetStyleSheet(EAssetTypeCategories::Type InAssetCategory)
	: AssetCategory(InAssetCategory)
{
}

FText FAssetTypeActions_WidgetStyleSheet::GetName() const
{
	return NSLOCTEXT("StyledWidgets", "WidgetStyleSheet", "Widget Style Sheet");
}

FColor FAssetTypeActions_WidgetStyleSheet::GetTypeColor() const
{
	return FColor::Magenta;
}

UClass* FAssetTypeActions_WidgetStyleSheet::GetSupportedClass() const
{
	return UWidgetStyleSheet::StaticClass();
}

void FAssetTypeActions_WidgetStyleSheet::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor)
{
	EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid() ? EToolkitMode::WorldCentric : EToolkitMode::Standalone;

	for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
	{
		if (auto WidgetStyleSheet = Cast<UWidgetStyleSheet>(*ObjIt))
		{
			TSharedRef<FWidgetStyleSheetEditor> WidgetStyleSheetEditor(new FWidgetStyleSheetEditor());
			WidgetStyleSheetEditor->InitEditor(EditWithinLevelEditor, WidgetStyleSheet);
		}
	}}

uint32 FAssetTypeActions_WidgetStyleSheet::GetCategories()
{
	return AssetCategory;
}
