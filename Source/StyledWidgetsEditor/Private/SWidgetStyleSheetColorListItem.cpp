#include "SWidgetStyleSheetColorListItem.h"

#include <EditorStyleSet.h>
#include <GraphEditorSettings.h>
#include <HAL/PlatformApplicationMisc.h>
#include <Styling/SlateBrush.h>
#include <Styling/SlateIconFinder.h>
#include <Textures/SlateIcon.h>
#include <Widgets/Colors/SColorBlock.h>
#include <Widgets/Colors/SColorPicker.h>
#include <Widgets/Text/STextBlock.h>
#include <Widgets/Text/SInlineEditableTextBlock.h>
#include "WidgetStyleSheetEditor.h"

void SWidgetStyleSheetColorListItem::Construct(const FArguments& InArgs, TSharedRef<FWidgetStyleSheetEditor> InStyleSheetEditor, const TSharedRef<STableViewBase>& InOwnerTableView)
{
	StyleSheetEditor = InStyleSheetEditor;
	ColorModel = InArgs._ColorModel;

	SMultiColumnTableRow<FWidgetStyleSheetColorModelPtr>::Construct(
		STableRow<FWidgetStyleSheetColorModelPtr>::FArguments().ShowSelection(true), 
		InOwnerTableView);
}

TSharedRef<SWidget> SWidgetStyleSheetColorListItem::GenerateWidgetForColumn(const FName& ColumnName)
{
	if (ColumnName == TEXT("Color"))
	{
		return SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.Padding(8.0f, 4.0f)
			[	
				SNew(SBorder)
				.Padding(1.0f)
				.BorderImage(FAppStyle::Get().GetBrush("ColorPicker.RoundedSolidBackground"))
				.VAlign(VAlign_Center)
				.ToolTipText(this, &SWidgetStyleSheetColorListItem::GetColorToolTipText)
				[
					SNew(SColorBlock)
						.AlphaBackgroundBrush(FAppStyle::Get().GetBrush("ColorPicker.RoundedAlphaBackground"))
						.Color(ColorModel.Get(), &FWidgetStyleSheetColorModel::GetColor)
						.ShowBackgroundForAlpha(true)
						.AlphaDisplayMode(EColorBlockAlphaDisplayMode::Separate)
						.OnMouseButtonDown(this, &SWidgetStyleSheetColorListItem::OnClickedColorBlock)
						.Size(FVector2D(70.0f, 20.0f))
						.CornerRadius(FVector4(4.0f,4.0f,4.0f,4.0f))
				]
			];
	}
	else if (ColumnName == TEXT("Name"))
	{
		return SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			.Padding(8.0f, 0.0f)
			[
				SAssignNew(NameTextBlock, SInlineEditableTextBlock)
				.Text(ColorModel.Get(), &FWidgetStyleSheetColorModel::GetDisplayName)
				.OnTextCommitted(this, &SWidgetStyleSheetColorListItem::OnNameTextCommitted)
			];
	}
	else if (ColumnName == TEXT("Operations"))
	{
		return SNew(SHorizontalBox)
			.Visibility(this, &SWidgetStyleSheetColorListItem::GetButtonVisibility)

			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(4.f, 4.f)
			.VAlign(VAlign_Center)
			[
				SNew(SButton)
				.ButtonStyle(FAppStyle::Get(), "SimpleButton")
				.ContentPadding(FMargin(1, 0))
				.ToolTipText(NSLOCTEXT("StyledWidgets", "CopyColor", "Copy this color to the clipboard"))
				.OnClicked(this, &SWidgetStyleSheetColorListItem::OnClickedCopy)
				[
					SNew(SImage)
					.Image(FAppStyle::Get().GetBrush("GenericCommands.Copy"))
					.ColorAndOpacity(FSlateColor::UseSubduedForeground())
				]
			]

			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(4.f, 4.f)
			.VAlign(VAlign_Center)
			[
				SNew(SButton)
				.ButtonStyle(FAppStyle::Get(), "SimpleButton")
				.ContentPadding(FMargin(1, 0))
				.ToolTipText(NSLOCTEXT("StyledWidgets", "RenameColor", "Rename this color"))
				.OnClicked(this, &SWidgetStyleSheetColorListItem::OnClickedRename)
				[
					SNew(SImage)
					.Image(FAppStyle::Get().GetBrush("GenericCommands.Rename"))
					.ColorAndOpacity(FSlateColor::UseSubduedForeground())
				]
			]

			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(4.f, 4.f)
			.VAlign(VAlign_Center)
			[
				SNew(SButton)
				.ButtonStyle(FAppStyle::Get(), "SimpleButton")
				.ContentPadding(FMargin(1, 0))
				.ToolTipText(NSLOCTEXT("StyledWidgets", "DeleteColor", "Delete this color"))
				.OnClicked(this, &SWidgetStyleSheetColorListItem::OnClickedDelete)
				[
					SNew(SImage)
					.Image(FAppStyle::Get().GetBrush("Icons.Delete"))
					.ColorAndOpacity(FSlateColor::UseSubduedForeground())
				]
			];
	}

	return SNullWidget::NullWidget;
}

void SWidgetStyleSheetColorListItem::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	STableRow<FWidgetStyleSheetColorModelPtr>::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);

	if (bPendingNameEdit)
	{
		NameTextBlock->EnterEditingMode();
		bPendingNameEdit = false;
	}

	SetCanTick(false);
}

FText SWidgetStyleSheetColorListItem::GetColorToolTipText() const
{
	return FText::AsCultureInvariant(ColorModel->GetColor().ToFColor(false).ToHex());
}

EVisibility SWidgetStyleSheetColorListItem::GetButtonVisibility() const
{
	return IsHovered() ? EVisibility::Visible : EVisibility::Hidden;
}

FReply SWidgetStyleSheetColorListItem::OnClickedRename()
{
	SetCanTick(true);
	bPendingNameEdit = true;
	return FReply::Handled();
}

FReply SWidgetStyleSheetColorListItem::OnClickedDelete()
{
	StyleSheetEditor.Pin()->DeleteColor(ColorModel);
	return FReply::Handled();
}

FReply SWidgetStyleSheetColorListItem::OnClickedCopy()
{
	FPlatformApplicationMisc::ClipboardCopy(*ColorModel->GetColor().ToString());
	return FReply::Handled();
}

FReply SWidgetStyleSheetColorListItem::OnClickedColorBlock(FGeometry const& InGeometry, FPointerEvent const& InPointerEvent)
{
	FColorPickerArgs Args;
	Args.bIsModal = true;
	Args.bUseAlpha = true;
	Args.sRGBOverride = true;
	Args.InitialColor = ColorModel->GetColor();
	Args.OnColorCommitted = FOnLinearColorValueChanged::CreateSP(this, &SWidgetStyleSheetColorListItem::OnColorCommitted);

	OpenColorPicker(Args);

	return FReply::Handled();
}

void SWidgetStyleSheetColorListItem::OnColorCommitted(FLinearColor InColor)
{
	StyleSheetEditor.Pin()->ReplaceColor(ColorModel, InColor);
}

void SWidgetStyleSheetColorListItem::OnNameTextCommitted(FText const& InText, ETextCommit::Type CommitType)
{
	if (CommitType != ETextCommit::OnCleared)
	{
		StyleSheetEditor.Pin()->RenameColor(ColorModel, InText);
	}
}
