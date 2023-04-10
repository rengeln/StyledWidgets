#include "WidgetStyleSheetColorCustomization.h"

#include <DetailLayoutBuilder.h>
#include <DetailWidgetRow.h>
#include <Widgets/Colors/SColorBlock.h>
#include "WidgetStyleSheetEditor.h"

FWidgetStyleSheetColorCustomization::FWidgetStyleSheetColorCustomization(TSharedPtr<FWidgetStyleSheetEditor> InStyleSheetEditor) :
	StyleSheetEditor(InStyleSheetEditor)
{
}

void FWidgetStyleSheetColorCustomization::CustomizeHeader(TSharedRef<IPropertyHandle> InPropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& CustomizationUtils)
{
	PropertyHandle = InPropertyHandle;
	sRGBOverride = true;

	FColorStructCustomization::CustomizeHeader(InPropertyHandle, HeaderRow, CustomizationUtils);

	HeaderRow
		.ExtensionContent()
		[
			SNew(SHorizontalBox)

			+ SHorizontalBox::Slot()
			.Padding(2.f, 0.f, 8.f, 0.f)
			.VAlign(VAlign_Center)
			.AutoWidth()
			[
				SNew(STextBlock)
				.Text(this, &FWidgetStyleSheetColorCustomization::GetColorName)
				.ColorAndOpacity(FLinearColor(1.f, 1.f, 1.f, 0.5f))
			]

			+ SHorizontalBox::Slot()
			.VAlign(VAlign_Center)
			.AutoWidth()
			[
				SNew(SComboButton)
				.OnGetMenuContent(FOnGetContent::CreateSP(this, &FWidgetStyleSheetColorCustomization::GetPaletteMenuWidget))
				.ButtonContent()
				[
					SNew(SImage)
					.Image(FEditorStyle::GetBrush("ColorPicker.ColorThemes"))
				]
			]
		];
}

FText FWidgetStyleSheetColorCustomization::GetColorName() const
{
	FText OutName;
	FLinearColor ColorValue;
	FString ColorString;

	PropertyHandle->GetValueAsFormattedString(ColorString);
	ColorValue.InitFromString(ColorString);

	for (auto ColorModel : StyleSheetEditor.Pin()->GetStyleSheetModel()->GetColors())
	{
		if (ColorModel->GetColor().Equals(ColorValue))
		{
			OutName = ColorModel->GetDisplayName();
			break;
		}
	}

	return OutName;
}

TSharedRef<SWidget> FWidgetStyleSheetColorCustomization::GetPaletteMenuWidget()
{
	FMenuBuilder AddMenu(true, nullptr);

	AddMenu.BeginSection(NAME_None, NSLOCTEXT("StyledWidgets", "Colors", "Colors"));
	
	FText ExistingColorName = GetColorName();
	if (ExistingColorName.IsEmpty())
	{
		AddMenu.AddMenuEntry(NSLOCTEXT("StyledWidgets", "AddColorToPalette", "Add to color list"),
			NSLOCTEXT("StyledWidgets", "AddColorToPaletteTooltip", "Adds this color to the style sheet's list of colors."),
			FSlateIcon(),
			FUIAction(FExecuteAction::CreateSP(this, &FWidgetStyleSheetColorCustomization::AddColorToStyleSheet)));
	}

	for (auto ColorModel : StyleSheetEditor.Pin()->GetStyleSheetModel()->GetColors())
	{
		auto MenuItemWidget = SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				[
					SNew(SColorBlock)
					.AlphaBackgroundBrush(FAppStyle::Get().GetBrush("ColorPicker.RoundedAlphaBackground"))
					.Color(ColorModel.Get(), &FWidgetStyleSheetColorModel::GetColor)
					.ShowBackgroundForAlpha(true)
					.AlphaDisplayMode(EColorBlockAlphaDisplayMode::Separate)
					.Size(FVector2D(70.0f, 20.0f))
					.CornerRadius(FVector4(4.0f,4.0f,4.0f,4.0f))
				]
				+ SHorizontalBox::Slot()
				.VAlign(VAlign_Center)
				.Padding(4.f, 0.f, 4.f, 0.f)
				[
					SNew(STextBlock)
					.Text(ColorModel->GetDisplayName())
				];

		AddMenu.AddMenuEntry(FUIAction(FExecuteAction::CreateLambda([this, ColorModel] () {
				SetColor(ColorModel->GetColor());
			})),	
			MenuItemWidget);
	}

	AddMenu.EndSection();

	return AddMenu.MakeWidget();
}

void FWidgetStyleSheetColorCustomization::SetColor(FLinearColor const& InColor)
{
	PropertyHandle->SetValueFromFormattedString(InColor.ToString());
}

void FWidgetStyleSheetColorCustomization::AddColorToStyleSheet()
{
	FLinearColor ColorValue;
	FString ColorString;

	PropertyHandle->GetValueAsFormattedString(ColorString);
	ColorValue.InitFromString(ColorString);

	StyleSheetEditor.Pin()->AddColorWithValue(ColorValue);
}

FWidgetStyleSheetSlateColorCustomization::FWidgetStyleSheetSlateColorCustomization(TSharedPtr<FWidgetStyleSheetEditor> InStyleSheetEditor) :
	FWidgetStyleSheetColorCustomization(InStyleSheetEditor)
{
}

void FWidgetStyleSheetSlateColorCustomization::CustomizeHeader(TSharedRef<IPropertyHandle> InPropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& CustomizationUtils)
{
	static const FName ColorUseRuleKey(TEXT("ColorUseRule"));
	static const FName SpecifiedColorKey(TEXT("SpecifiedColor"));

	StructPropertyHandle = InPropertyHandle;
	ColorRuleHandle = InPropertyHandle->GetChildHandle(ColorUseRuleKey);
	SpecifiedColorHandle = InPropertyHandle->GetChildHandle(SpecifiedColorKey);

	check(ColorRuleHandle.IsValid());
	check(SpecifiedColorHandle.IsValid());

	ColorRuleHandle->MarkHiddenByCustomization();
	SpecifiedColorHandle->SetOnPropertyValueChanged(FSimpleDelegate::CreateSP(SharedThis(this), &FWidgetStyleSheetSlateColorCustomization::OnValueChanged));

	FWidgetStyleSheetColorCustomization::CustomizeHeader(SpecifiedColorHandle.ToSharedRef(), HeaderRow, CustomizationUtils);
}

void FWidgetStyleSheetSlateColorCustomization::MakeHeaderRow(TSharedRef<class IPropertyHandle>& InStructPropertyHandle, FDetailWidgetRow& Row)
{
	// NOTE: Ignore InStructPropertyHandle, it's going to be the specified color handle that we passed to the color customization base class.
	Row
		.NameContent()
		[
			SNew(STextBlock)
			.Font(IDetailLayoutBuilder::GetDetailFont())
			.Text(StructPropertyHandle->GetPropertyDisplayName())
			.ToolTipText(StructPropertyHandle->GetToolTipText())
		]
		.ValueContent()
		.MinDesiredWidth(180.f)
		[
			SNew(SHorizontalBox)

			+ SHorizontalBox::Slot()
			.FillWidth(1.0f)
			[
				CreateColorWidget(StructPropertyHandle)
			]

			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(2, 0, 0, 0)
			[
				SNew(SCheckBox)
				.IsChecked(this, &FWidgetStyleSheetSlateColorCustomization::GetForegroundCheckState)
				.OnCheckStateChanged(this, &FWidgetStyleSheetSlateColorCustomization::HandleForegroundChanged)
				[
					SNew(STextBlock)
					.Font(IDetailLayoutBuilder::GetDetailFont())
					.Text(NSLOCTEXT("SlateColorCustomization", "Inherit", "Inherit"))
					.ToolTipText(NSLOCTEXT("SlateColorCustomization", "InheritToolTip", "Uses the foreground color inherited down the widget hierarchy"))
				]
			]
		];
}

void FWidgetStyleSheetSlateColorCustomization::OnValueChanged()
{
	ColorRuleHandle->SetValueFromFormattedString(TEXT("UseColor_Specified"));
}

ECheckBoxState FWidgetStyleSheetSlateColorCustomization::GetForegroundCheckState() const
{
	FString ColorRuleValue;
	ColorRuleHandle->GetValueAsFormattedString(ColorRuleValue);

	if ( ColorRuleValue == TEXT("UseColor_Foreground") )
	{
		return ECheckBoxState::Checked;
	}

	return ECheckBoxState::Unchecked;
}

void FWidgetStyleSheetSlateColorCustomization::HandleForegroundChanged(ECheckBoxState CheckedState)
{
	if ( CheckedState == ECheckBoxState::Checked )
	{
		ColorRuleHandle->SetValueFromFormattedString(TEXT("UseColor_Foreground"));
	}
	else
	{
		ColorRuleHandle->SetValueFromFormattedString(TEXT("UseColor_Specified"));
	}
}