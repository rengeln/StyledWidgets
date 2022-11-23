#include "Styles/StyledBorderStyle.h"

UStyledBorderStyle::UStyledBorderStyle()
	: Super()
{
	// ESlateBrushDrawType::NoDrawType does not do as you would expect; it always produces a complete
	// white brush regardless of the passed in brush color.
	BorderBrush.DrawAs = ESlateBrushDrawType::Image;
	BorderColor = FLinearColor::Transparent;
	Padding = FMargin(0, 0, 0, 0);
}
