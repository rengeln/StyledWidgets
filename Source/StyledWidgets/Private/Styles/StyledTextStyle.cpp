#include "Styles/StyledTextStyle.h"

#include <Components/Widget.h>
#include <Engine/Font.h>

UStyledTextStyle::UStyledTextStyle() :
	Super()
{
	if (!IsRunningDedicatedServer())
	{
		static ConstructorHelpers::FObjectFinder<UFont> RobotoFontObj(*UWidget::GetDefaultFontName());
		Font = RobotoFontObj.Object;
	}
	Typeface = TEXT("Bold");
}
