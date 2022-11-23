#pragma once

#include <AssetTypeCategories.h>
#include <AssetTypeActions_Base.h>
#include <Toolkits/IToolkitHost.h>

class FAssetTypeActions_WidgetStyleSheet : public FAssetTypeActions_Base
{
public:
	FAssetTypeActions_WidgetStyleSheet(EAssetTypeCategories::Type InAssetCategory);

	virtual FText GetName() const override;
	virtual FColor GetTypeColor() const override;
	virtual UClass* GetSupportedClass() const override;
	virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>()) override;
	virtual uint32 GetCategories() override;

private:
	EAssetTypeCategories::Type AssetCategory;
};
