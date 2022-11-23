#include "Styles/StyledProgressBarStyle.h"

UStyledProgressBarStyle::UStyledProgressBarStyle()
{
	// ESlateBrushDrawType::NoDrawType does not do as you would expect; it always produces a complete
	// white brush regardless of the passed in brush color.
	BackgroundBrush.DrawAs = ESlateBrushDrawType::Image;
	BackgroundColor = FLinearColor::Transparent;
	FillBrush.DrawAs = ESlateBrushDrawType::Image;
	FillColor = FLinearColor::White;
}
