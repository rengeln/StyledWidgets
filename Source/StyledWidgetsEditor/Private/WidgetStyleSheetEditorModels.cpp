#include "WidgetStyleSheetEditorModels.h"

#include "WidgetStyleSheet.h"
#include "WidgetStyleSheetEditor.h"

FWidgetStyleSheetModel::FWidgetStyleSheetModel(UWidgetStyleSheet* InStyleSheet) :
	StyleSheet(InStyleSheet)
{
	if (StyleSheet)
	{
		StyleSheet->AddToRoot();
	}
}

FWidgetStyleSheetModel::~FWidgetStyleSheetModel()
{
	if (StyleSheet)
	{
		StyleSheet->RemoveFromRoot();
		StyleSheet = nullptr;
	}
}

FText FWidgetStyleSheetModel::GetDisplayName() const
{
	return StyleSheet ? FText::AsCultureInvariant(StyleSheet->GetName()) : NSLOCTEXT("StyledWidgets", "InvalidStyleSheet", "Invalid Style Sheet");
}

FWidgetStyleSheetStyleModelPtr FWidgetStyleSheetModel::AddStyle(TSubclassOf<UWidgetStyleBase> InStyleClass)
{
	auto StyleModel = MakeShared<FWidgetStyleSheetStyleModel>(SharedThis(this), InStyleClass);
	StyleModel->InitializeStyleInstance();
	Styles.Add(StyleModel);
	return StyleModel;
}

void FWidgetStyleSheetModel::ClearStyles()
{
	Styles.Empty();
}

void FWidgetStyleSheetModel::SortStyles(EWidgetStyleSheetStyleSortMethod Method, bool bSortClassAscending, bool bSortSelectorAscending)
{
	Styles.Sort([=](FWidgetStyleSheetStyleModelPtr const& Lhs, FWidgetStyleSheetStyleModelPtr const& Rhs) {
		int ClassSortResult = Lhs->GetStyleClass()->GetDisplayNameText().CompareToCaseIgnored(Rhs->GetStyleClass()->GetDisplayNameText());
		if (!bSortClassAscending)
		{
			ClassSortResult = -ClassSortResult;
		}

		int SelectorSortResult = Lhs->GetSelectorString().Compare(Rhs->GetSelectorString(), ESearchCase::IgnoreCase);
		if (!bSortSelectorAscending)
		{
			SelectorSortResult = -SelectorSortResult;
		}

		if (Method == EWidgetStyleSheetStyleSortMethod::ByClass)
		{
			return ClassSortResult != 0 ? ClassSortResult < 0 : SelectorSortResult < 0;
		}
		else
		{
			return SelectorSortResult != 0 ? SelectorSortResult < 0 : ClassSortResult < 0;
		}
	});
}

void FWidgetStyleSheetModel::ClearColors()
{
	Colors.Empty();
}

FWidgetStyleSheetColorModelPtr FWidgetStyleSheetModel::AddColor()
{
	auto ColorModel = MakeShared<FWidgetStyleSheetColorModel>(SharedThis(this));
	ColorModel->SetColor(FLinearColor::White);
	ColorModel->SetName(NSLOCTEXT("StyledWidgets", "NewColor", "New Color"), true);
	Colors.Add(ColorModel);
	return ColorModel;
}

int FWidgetStyleSheetModel::ReplaceColor(FLinearColor const& OldColor, FLinearColor const& NewColor, bool bCountOnly)
{
	int MatchingColors = 0;
	for (auto& Style : Styles)
	{
		MatchingColors += Style->ReplaceColor(OldColor, NewColor, bCountOnly);
	}
	return MatchingColors;
}

void FWidgetStyleSheetModel::SortColors(EWidgetStyleSheetColorSortMethod SortMethod, bool bSortAscending)
{
	Colors.Sort([=](FWidgetStyleSheetColorModelPtr const& Lhs, FWidgetStyleSheetColorModelPtr const& Rhs) {
		bool bResult = false;
		if (SortMethod == EWidgetStyleSheetColorSortMethod::ByLuminance)
		{
			bResult = Lhs->GetColor().GetLuminance() < Rhs->GetColor().GetLuminance();
		}
		else if (SortMethod == EWidgetStyleSheetColorSortMethod::ByName)
		{
			bResult = Lhs->GetDisplayName().CompareToCaseIgnored(Rhs->GetDisplayName()) < 0;
		}

		if (!bSortAscending)
		{
			bResult = !bResult;
		}

		return bResult;
	});
}

FWidgetStyleSheetStyleModel::FWidgetStyleSheetStyleModel(FWidgetStyleSheetModelPtr InStyleSheet, TSubclassOf<UWidgetStyleBase> InStyleClass) :
	StyleSheet(InStyleSheet),
	StyleClass(InStyleClass)
{
	check(InStyleSheet.IsValid());
	check(InStyleClass != nullptr);
}

FWidgetStyleSheetStyleModel::~FWidgetStyleSheetStyleModel()
{
	if (StyleInstance)
	{
		StyleInstance->RemoveFromRoot();
		StyleInstance = nullptr;
	}
}

FString const& FWidgetStyleSheetStyleModel::GetSelectorString() const
{
	return StyleInstance->SelectorString;
}

FString const& FWidgetStyleSheetStyleModel::GetComment() const
{
	return StyleInstance->Comment;
}

bool FWidgetStyleSheetStyleModel::HasError() const
{
	return StyleInstance->Selector.bHasError;
}

void FWidgetStyleSheetStyleModel::InitializeStyleInstance()
{
	// create the proxy object
	StyleInstance = NewObject<UWidgetStyleBase>(GetTransientPackage(), StyleClass);
	StyleInstance->SetFlags(RF_Transient | RF_Transactional);
	StyleInstance->AddToRoot();
}

void FWidgetStyleSheetStyleModel::CopyStyleInstance(UWidgetStyleBase* SourceStyleInstance)
{
	check(SourceStyleInstance);
	if (StyleInstance)
	{
		StyleInstance->RemoveFromRoot();
	}
	StyleInstance = DuplicateObject<UWidgetStyleBase>(SourceStyleInstance, GetTransientPackage());
	StyleInstance->SetFlags(RF_Transient | RF_Transactional);
	StyleInstance->AddToRoot();
}

void FWidgetStyleSheetStyleModel::Remove()
{
	StyleSheet.Pin()->Styles.Remove(SharedThis(this));
}

bool FWidgetStyleSheetStyleModel::IsPropertyOverridden(FName PropertyName) const
{
	return StyleInstance->OverriddenProperties.Contains(PropertyName);
}

bool FWidgetStyleSheetStyleModel::AreAnyPropertiesOverridden() const
{
	return StyleInstance->OverriddenProperties.Num() > 0;
}

void FWidgetStyleSheetStyleModel::TogglePropertyOverride(FName PropertyName, bool bOverride)
{
	if (bOverride)
	{
		StyleInstance->OverriddenProperties.AddUnique(PropertyName);
	}
	else
	{
		StyleInstance->OverriddenProperties.Remove(PropertyName);
	}
}

void FWidgetStyleSheetStyleModel::NotifyPropertyChanged(FName PropertyName)
{
	OnModelUpdated.Broadcast();
	StyleSheet.Pin()->OnStyleModelUpdated.Broadcast(SharedThis(this));
}

int ReplaceColorRecursive(FProperty* FirstProperty, void* ContainerPtr, FLinearColor const& OldColor, FLinearColor const& NewColor, bool bCountOnly)
{
	int MatchingColors = 0;

	for (FProperty* Property = FirstProperty; Property; Property = Property->PropertyLinkNext)
	{
		if (auto* StructProperty = CastField<FStructProperty>(Property))
		{
			static const FName LinearColorName = TEXT("LinearColor");
			if (StructProperty->Struct->GetFName() == LinearColorName)
			{
				FLinearColor* ColorPtr = StructProperty->ContainerPtrToValuePtr<FLinearColor>(ContainerPtr);
				if (*ColorPtr == OldColor)
				{
					if (!bCountOnly)
					{
						*ColorPtr = NewColor;
					}
					MatchingColors++;
				}
			}
			else
			{
				void* StructPtr = StructProperty->ContainerPtrToValuePtr<void>(ContainerPtr);
				MatchingColors += ReplaceColorRecursive(StructProperty->Struct->PropertyLink, StructPtr, OldColor, NewColor, bCountOnly);
			}
		}
	}

	return MatchingColors;
}

int FWidgetStyleSheetStyleModel::ReplaceColor(FLinearColor const& OldColor, FLinearColor const& NewColor, bool bCountOnly)
{
	int MatchingColors = 0;
	
	MatchingColors += ReplaceColorRecursive(StyleClass->PropertyLink, StyleInstance, OldColor, NewColor, bCountOnly);

	return MatchingColors;
}

FWidgetStyleSheetColorModel::FWidgetStyleSheetColorModel(FWidgetStyleSheetModelPtr InStyleSheetModel) :
	StyleSheetModel(InStyleSheetModel)
{
}

void FWidgetStyleSheetColorModel::SetColor(FLinearColor const& InColor)
{
	Color = InColor;
}

void FWidgetStyleSheetColorModel::SetName(FText const& InName, bool bMakeUnique)
{
	if (bMakeUnique)
	{
		Name = FText::AsCultureInvariant(GenerateUniqueName(InName.ToString()));
	}
	else
	{
		Name = InName;
	}
}

void FWidgetStyleSheetColorModel::Remove()
{
	StyleSheetModel.Pin()->Colors.Remove(SharedThis(this));
}

FString FWidgetStyleSheetColorModel::GenerateUniqueName(FStringView BaseName) const
{
	FString OutName = FString(BaseName);
	int SuffixNumber = 2;
	bool bIsNameInUse = false;
	do
	{
		bIsNameInUse = false;
		for (auto const& ColorModel : StyleSheetModel.Pin()->GetColors())
		{
			if (OutName.Compare(ColorModel->GetDisplayName().ToString(), ESearchCase::IgnoreCase) == 0)
			{
				bIsNameInUse = true;
				break;
			}
		}

		if (bIsNameInUse)
		{
			OutName.Empty();
			OutName.Append(BaseName);
			OutName.AppendChar('_');
			OutName.AppendInt(SuffixNumber++);
		}
	} while (bIsNameInUse);

	return OutName;
}
