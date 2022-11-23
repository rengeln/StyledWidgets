#include "SWidgetStyleSheetStyleListItem.h"

#include <EditorStyleSet.h>
#include <GraphEditorSettings.h>
#include <Styling/SlateBrush.h>
#include <Styling/SlateIconFinder.h>
#include <STyling/StyleColors.h>
#include <Textures/SlateIcon.h>
#include <Widgets/Text/STextBlock.h>
#include <Widgets/Text/SInlineEditableTextBlock.h>
#include "WidgetStyleBase.h"
#include "WidgetStyleSheetEditor.h"

void SWidgetStyleSheetStyleListItem::Construct(const FArguments& InArgs, TSharedRef<FWidgetStyleSheetEditor> InStyleSheetEditor, const TSharedRef<STableViewBase>& InOwnerTableView)
{
	StyleSheetEditor = InStyleSheetEditor;
	StyleModel = InArgs._StyleModel;

	StyleModel->OnModelUpdated.AddSP(this, &SWidgetStyleSheetStyleListItem::OnModelUpdated);
	OnModelUpdated();

	SMultiColumnTableRow<FWidgetStyleSheetStyleModelPtr>::Construct(
		STableRow<FWidgetStyleSheetStyleModelPtr>::FArguments().ShowSelection(true), 
		InOwnerTableView);
}

TSharedRef<SWidget> SWidgetStyleSheetStyleListItem::GenerateWidgetForColumn(const FName& ColumnName)
{
	if (ColumnName == TEXT("StyleClass"))
	{
		return SNew(SHorizontalBox)
			
			+SHorizontalBox::Slot()
			.Padding(8.0f, 0.0f)
			[
				SNew(STextBlock)
				.Text(this, &SWidgetStyleSheetStyleListItem::GetStyleClassName)
			];
	}
	else if (ColumnName == TEXT("StyleSelector"))
	{
		return SNew(SHorizontalBox)

			+SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(VAlign_Center)
			[
				SNew(SImage)
				.Image(FAppStyle::Get().GetBrush("Icons.Error"))
				.ColorAndOpacity(FSlateColor(FColor::Red))
				.Visibility(this, &SWidgetStyleSheetStyleListItem::GetErrorIconVisibility)
				.ToolTipText(NSLOCTEXT("StyledWidgets", "SelectorError", "This selector is invalid. The style will not be used."))
			]

			+SHorizontalBox::Slot()
			.VAlign(VAlign_Center)
			.Padding(8.0f, 0.0f)
			[
				SNew(STextBlock)
				.Text(this, &SWidgetStyleSheetStyleListItem::GetStyleSelectorString)
				.ColorAndOpacity(this, &SWidgetStyleSheetStyleListItem::GetSelectorTextColor)
			];
	}
	else if (ColumnName == TEXT("StyleComment"))
	{
		return SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(8.0f, 0.0f)
			[
				SNew(STextBlock)
				.Text(this, &SWidgetStyleSheetStyleListItem::GetStyleComment)
			];
	}
	else if (ColumnName == TEXT("StyleOperations"))
	{
		return SNew(SHorizontalBox)
			.Visibility(this, &SWidgetStyleSheetStyleListItem::GetButtonVisibility)

			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(4.f, 4.f)
			.VAlign(VAlign_Center)
			[
				SNew(SButton)
				.ButtonStyle(FAppStyle::Get(), "SimpleButton")
				.ContentPadding(FMargin(1, 0))
				.ToolTipText(NSLOCTEXT("StyledWidgets", "DeleteStyle", "Deletes this style and any of its children"))
				.OnClicked(this, &SWidgetStyleSheetStyleListItem::OnClickedDelete)
				[
					SNew(SImage)
					.Image(FAppStyle::Get().GetBrush("Icons.Delete"))
					.ColorAndOpacity(FSlateColor::UseSubduedForeground())
				]
			];
	}

	return SNullWidget::NullWidget;
}

void SWidgetStyleSheetStyleListItem::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	STableRow<FWidgetStyleSheetStyleModelPtr>::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);

	if (bPendingNameEdit)
	{
		NameTextBlock->EnterEditingMode();
		bPendingNameEdit = false;
	}

	SetCanTick(false);
}

void SWidgetStyleSheetStyleListItem::OnModelUpdated()
{
	StyleClassName = StyleModel->GetStyleClass()->GetDisplayNameText();
	StyleSelectorString = FText::AsCultureInvariant(StyleModel->GetSelectorString());
	StyleComment = FText::AsCultureInvariant(StyleModel->GetComment());

	if (StyleModel->HasError())
	{
		ErrorIconVisibility = EVisibility::Visible;
		SelectorTextColor = FSlateColor(EStyleColor::Error);
	}
	else
	{
		ErrorIconVisibility = EVisibility::Collapsed;
		if (StyleSelectorString.IsEmpty())
		{
			StyleSelectorString = NSLOCTEXT("StyledWidgets", "EmptySelectorString", "(none)");
			SelectorTextColor = FSlateColor::UseSubduedForeground();
		}
		else
		{
			SelectorTextColor = FSlateColor::UseForeground();
		}
	}
}

FReply SWidgetStyleSheetStyleListItem::OnClickedDelete()
{
	bool bShouldDelete = true;

	// give users the opportunity to cancel before data loss
	if (StyleModel->AreAnyPropertiesOverridden())
	{
		auto Result = FMessageDialog::Open(EAppMsgType::YesNo, NSLOCTEXT("StyledWidgets", "ConfirmDeleteStyle", "Are you sure you want to delete this style?"));
		if (Result != EAppReturnType::Yes)
		{
			bShouldDelete = false;
		}
	}

	if (bShouldDelete)
	{
		StyleSheetEditor.Pin()->DeleteStyle(StyleModel);
	}

	return FReply::Handled();
}

EVisibility SWidgetStyleSheetStyleListItem::GetButtonVisibility() const
{
	return IsHovered() ? EVisibility::Visible : EVisibility::Hidden;
}
