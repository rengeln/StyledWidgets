#include "Widgets/StyledButtonWidget.h"

#include "Styles/StyledButtonStyle.h"

UStyledButtonWidget::UStyledButtonWidget(FObjectInitializer const& Initializer) :
	Super(Initializer.SetDefaultSubobjectClass<UStyledButtonStyle>("StyleInstance"))
{
	bIsFocusable = true;
	bIsHoverable = true;
	bIsClickable = true;

#if WITH_EDITORONLY_DATA
	StyleTagsString = TEXT("button");
#endif // WITH_EDITORONLY_DATA
	StyleTags.Add(TEXT("button"));
}
