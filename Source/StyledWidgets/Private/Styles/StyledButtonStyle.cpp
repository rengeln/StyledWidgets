#include "Styles/StyledButtonStyle.h"

UStyledButtonStyle::UStyledButtonStyle() 
	: Super()
{
	BorderBrush.DrawAs = ESlateBrushDrawType::Border;
	BorderBrush.Margin = 8.0f;
	BorderColor = FLinearColor::White;
	Padding = FMargin(4.0f, 4.0f, 4.0f, 4.0f);
}
