#include "Styles/StyledImageStyle.h"

UStyledImageStyle::UStyledImageStyle()
{
	Brush.DrawAs = ESlateBrushDrawType::Image;
	Brush.ImageSize = FVector2D(32.0f, 32.0f);
	Color = FLinearColor::White;
}
