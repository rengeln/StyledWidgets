#include "SWidgetStyleSheetStyleView.h"

#include <DetailLayoutBuilder.h>
#include <DetailWidgetRow.h>
#include <PropertyEditorModule.h>
#include <Widgets/Layout/SBox.h>
#include <Widgets/Layout/SScrollBox.h>
#include <Widgets/Text/STextBlock.h>
#include "WidgetStyleBase.h"
#include "WidgetStyleSheetColorCustomization.h"
#include "WidgetStyleSheetEditor.h"

void SWidgetStyleSheetStyleView::Construct(const FArguments& InArgs, TSharedPtr<FWidgetStyleSheetEditor> InStyleSheetEditor)
{
	StyleSheetEditor = InStyleSheetEditor;

	FPropertyEditorModule& PropertyEditorModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
	FDetailsViewArgs DetailsViewArgs;
	DetailsViewArgs.bUpdatesFromSelection = false;
	DetailsViewArgs.bAllowSearch = false;
	DetailsViewArgs.NameAreaSettings = FDetailsViewArgs::HideNameArea;
	DetailsViewArgs.bHideSelectionTip = true;
	DetailsViewArgs.bAllowMultipleTopLevelObjects = false;
	DetailsViewArgs.bShowModifiedPropertiesOption = false;
	DetailsViewArgs.DefaultsOnlyVisibility = EEditDefaultsOnlyNodeVisibility::Show;
	DetailsViewArgs.bShowObjectLabel = false;

	DetailsView = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
	DetailsView->SetIsPropertyVisibleDelegate(FIsPropertyVisible::CreateSP(this, &SWidgetStyleSheetStyleView::IsPropertyVisible));
	DetailsView->OnFinishedChangingProperties().AddSP(this, &SWidgetStyleSheetStyleView::OnFinishedChangingProperties);
	ChildSlot
	[
		SNew(SScrollBox)

		+ SScrollBox::Slot()
		[
			DetailsView.ToSharedRef()
		]
	];

	SetStyleModel(InArgs._StyleModel);
}

void SWidgetStyleSheetStyleView::SetStyleModel(FWidgetStyleSheetStyleModelPtr InStyleModel)
{
	if (StyleModel != InStyleModel)
	{
		if (StyleModel.IsValid())
		{
			DetailsView->UnregisterInstancedCustomPropertyLayout(StyleModel->GetStyleClass());
			StyleModel->OnModelUpdated.RemoveAll(this);
		}

		StyleModel = InStyleModel;
	
		if (StyleModel.IsValid())
		{
			StyleModel->OnModelUpdated.AddSP(this, &SWidgetStyleSheetStyleView::OnModelUpdated);
			SetVisibility(EVisibility::Visible);
			DetailsView->RegisterInstancedCustomPropertyLayout(StyleModel->GetStyleClass(), 
				FOnGetDetailCustomizationInstance::CreateSP(this, &SWidgetStyleSheetStyleView::GetDetailCustomizationInstance));
			DetailsView->RegisterInstancedCustomPropertyTypeLayout(TEXT("LinearColor"),
				FOnGetPropertyTypeCustomizationInstance::CreateSP(this, &SWidgetStyleSheetStyleView::GetLinearColorCustomizationInstance));
			DetailsView->RegisterInstancedCustomPropertyTypeLayout(TEXT("Color"),
				FOnGetPropertyTypeCustomizationInstance::CreateSP(this, &SWidgetStyleSheetStyleView::GetLinearColorCustomizationInstance));
			DetailsView->RegisterInstancedCustomPropertyTypeLayout(TEXT("SlateColor"),
				FOnGetPropertyTypeCustomizationInstance::CreateSP(this, &SWidgetStyleSheetStyleView::GetSlateColorCustomizationInstance));
			DetailsView->SetObject(StyleModel->GetStyleInstance());
		}
		else
		{
			SetVisibility(EVisibility::Collapsed);
		}
	}
}

TSharedRef<IDetailsView> SWidgetStyleSheetStyleView::GetDetailsView() const
{
	return DetailsView.ToSharedRef();
}

TSharedRef<IDetailCustomization> SWidgetStyleSheetStyleView::GetDetailCustomizationInstance()
{
	return MakeShared<FWidgetStyleSheetStyleViewDetailCustomization>(StyleModel);
}

TSharedRef<IPropertyTypeCustomization> SWidgetStyleSheetStyleView::GetLinearColorCustomizationInstance()
{
	return MakeShared<FWidgetStyleSheetColorCustomization>(StyleSheetEditor.Pin());
}

TSharedRef<IPropertyTypeCustomization> SWidgetStyleSheetStyleView::GetSlateColorCustomizationInstance()
{
	return MakeShared<FWidgetStyleSheetSlateColorCustomization>(StyleSheetEditor.Pin());
}

bool SWidgetStyleSheetStyleView::IsPropertyVisible(FPropertyAndParent const& PropertyAndParent) const
{
	bool bOutIsVisible = false;
	FProperty const* RootProperty = PropertyAndParent.ParentProperties.Num() > 0 ? PropertyAndParent.ParentProperties.Last() : &PropertyAndParent.Property;

	if (RootProperty->HasAllPropertyFlags(CPF_Edit))
	{
		bOutIsVisible = true;
	}

	return bOutIsVisible;
}

void SWidgetStyleSheetStyleView::OnFinishedChangingProperties(FPropertyChangedEvent const& PropertyChangedEvent)
{
	if (StyleModel.IsValid())
	{
		StyleModel->NotifyPropertyChanged(PropertyChangedEvent.MemberProperty->GetFName());
	}
}

void SWidgetStyleSheetStyleView::OnModelUpdated()
{
	//DetailsView->ForceRefresh();
}

FWidgetStyleSheetStyleViewDetailCustomization::FWidgetStyleSheetStyleViewDetailCustomization(FWidgetStyleSheetStyleModelPtr InStyleModel) :
	StyleModel(InStyleModel)
{
}

void FWidgetStyleSheetStyleViewDetailCustomization::CustomizeDetails(IDetailLayoutBuilder& LayoutBuilder)
{
	LayoutBuilder.EditCategory(TEXT("Style")).SetSortOrder(-1);

	UClass* StyleClass = StyleModel->GetStyleClass();
	while (StyleClass != nullptr && StyleClass != UWidgetStyleBase::StaticClass())
	{
		for (FProperty* Property = StyleClass->PropertyLink; Property; Property = Property->PropertyLinkNext)
		{
			FName PropertyName = Property->GetFName();
			auto PropertyHandle = LayoutBuilder.GetProperty(PropertyName, StyleClass);
			auto* PropertyRow = LayoutBuilder.EditDefaultProperty(PropertyHandle);
			if (PropertyRow)
			{
				TSharedPtr<SWidget> NameWidget;
				TSharedPtr<SWidget> ValueWidget;
				PropertyRow->GetDefaultWidgets(NameWidget, ValueWidget);

				PropertyRow->EditCondition(			
					TAttribute<bool>::CreateLambda([=]()
					{
						return StyleModel->IsPropertyOverridden(PropertyName);
					}),
					FOnBooleanValueChanged::CreateLambda([=](bool bNewValue)
					{
						StyleModel->TogglePropertyOverride(PropertyName, bNewValue);
					}));
			}
		}

		StyleClass = StyleClass->GetSuperClass();
	}
}
