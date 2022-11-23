#pragma once

class UWidgetStyleSheet;
class UWidgetStyleBase;
class FWidgetStyleSheetEditor;

class FWidgetStyleSheetModel;
typedef TSharedRef<FWidgetStyleSheetModel> FWidgetStyleSheetModelRef;
typedef TSharedPtr<FWidgetStyleSheetModel> FWidgetStyleSheetModelPtr;
typedef TWeakPtr<FWidgetStyleSheetModel> FWidgetStyleSheetModelWeakPtr;

class FWidgetStyleSheetStyleModel;
typedef TSharedRef<FWidgetStyleSheetStyleModel> FWidgetStyleSheetStyleModelRef;
typedef TSharedPtr<FWidgetStyleSheetStyleModel> FWidgetStyleSheetStyleModelPtr;
typedef TWeakPtr<FWidgetStyleSheetStyleModel> FWidgetStyleSheetStyleModelWeakPtr;

class FWidgetStyleSheetPropertyModel;
typedef TSharedRef<FWidgetStyleSheetPropertyModel> FWidgetStyleSheetPropertyModelRef;
typedef TSharedPtr<FWidgetStyleSheetPropertyModel> FWidgetStyleSheetPropertyModelPtr;
typedef TWeakPtr<FWidgetStyleSheetPropertyModel> FWidgetStyleSheetPropertyModelWeakPtr;

class FWidgetStyleSheetColorModel;
typedef TSharedRef<FWidgetStyleSheetColorModel> FWidgetStyleSheetColorModelRef;
typedef TSharedPtr<FWidgetStyleSheetColorModel> FWidgetStyleSheetColorModelPtr;
typedef TWeakPtr<FWidgetStyleSheetColorModel> FWidgetStyleSheetColorModelWeakPtr;

enum class EWidgetStyleSheetStyleSortMethod : uint8
{
	ByClass,
	BySelector
};

enum class EWidgetStyleSheetColorSortMethod : uint8
{
	ByLuminance,
	ByName
};

class FWidgetStyleSheetModel : public TSharedFromThis<FWidgetStyleSheetModel>
{
public:
	FWidgetStyleSheetModel(UWidgetStyleSheet* InStyleSheet);
	~FWidgetStyleSheetModel();

	inline UWidgetStyleSheet* GetStyleSheet() const { return StyleSheet; }
	inline TArray<FWidgetStyleSheetStyleModelPtr> const& GetStyles() const { return Styles; }
	inline TArray<FWidgetStyleSheetColorModelPtr> const& GetColors() const { return Colors; }
	inline bool IsValid() const { return StyleSheet != nullptr; }
	FText GetDisplayName() const;
	FWidgetStyleSheetStyleModelPtr AddStyle(TSubclassOf<UWidgetStyleBase> InStyleClass);
	void ClearStyles();
	void SortStyles(EWidgetStyleSheetStyleSortMethod SortMethod, bool bSortClassAscending, bool bSortSelectorAscending);
	FWidgetStyleSheetColorModelPtr AddColor();
	void ClearColors();
	int ReplaceColor(FLinearColor const& OldColor, FLinearColor const& NewColor, bool bCountOnly);
	void SortColors(EWidgetStyleSheetColorSortMethod SortMethod, bool bSortAscending);

	DECLARE_MULTICAST_DELEGATE(FModelUpdated)
	FModelUpdated OnModelUpdated;

	DECLARE_MULTICAST_DELEGATE_OneParam(FStyleModelUpdated, FWidgetStyleSheetStyleModelPtr)
	FStyleModelUpdated OnStyleModelUpdated;

private:
	friend class FWidgetStyleSheetStyleModel;
	friend class FWidgetStyleSheetColorModel;

	UWidgetStyleSheet* StyleSheet;
	TArray<FWidgetStyleSheetStyleModelPtr> Styles;
	TArray<FWidgetStyleSheetColorModelPtr> Colors;
};

class FWidgetStyleSheetStyleModel : public TSharedFromThis<FWidgetStyleSheetStyleModel>
{
public:
	FWidgetStyleSheetStyleModel(FWidgetStyleSheetModelPtr StyleSheet, TSubclassOf<UWidgetStyleBase> StyleClass);
	~FWidgetStyleSheetStyleModel();

	inline bool IsValid() const { return StyleSheet.IsValid(); };
	inline TSubclassOf<UWidgetStyleBase> GetStyleClass() const { return StyleClass; }
	inline UWidgetStyleBase* GetStyleInstance() const { return StyleInstance; }
	inline TArray<FWidgetStyleSheetPropertyModelPtr> const& GetProperties() const { return Properties; }
	FString const& GetSelectorString() const;
	FString const& GetComment() const;
	bool HasError() const;
	void CopyStyleInstance(UWidgetStyleBase* SourceStyleInstance);
	void Remove();
	void NotifyPropertyChanged(FName PropertyName);
	int ReplaceColor(FLinearColor const& OldColor, FLinearColor const& NewColor, bool bCountOnly);
	bool IsPropertyOverridden(FName PropertyName) const;
	bool AreAnyPropertiesOverridden() const;
	void TogglePropertyOverride(FName PropertyName, bool bOverride);

	DECLARE_MULTICAST_DELEGATE(FModelUpdated)
	FModelUpdated OnModelUpdated;

private:
	friend class FWidgetStyleSheetModel;

	void InitializeStyleInstance();

	FWidgetStyleSheetModelWeakPtr StyleSheet;
	UWidgetStyleBase* StyleInstance;
	TSubclassOf<UWidgetStyleBase> StyleClass;
	TArray<FWidgetStyleSheetPropertyModelPtr> Properties;
};

class FWidgetStyleSheetColorModel : public TSharedFromThis<FWidgetStyleSheetColorModel>
{
public:
	FWidgetStyleSheetColorModel(FWidgetStyleSheetModelPtr InStyleSheetModel);

	inline FText GetDisplayName() const { return Name; }
	inline FLinearColor GetColor() const { return Color; }
	void SetName(FText const& InName, bool bMakeUnique);
	void SetColor(FLinearColor const& InColor);
	void Remove();

private:
	FString GenerateUniqueName(FStringView BaseName)  const;
	FWidgetStyleSheetModelWeakPtr StyleSheetModel;
	FText Name;
	FLinearColor Color;
};
