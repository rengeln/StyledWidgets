#pragma once

#include "Widgets/StyledBorderWidget.h"

#include "StyledButtonWidget.generated.h"

//
// A button widget is really just a border widget with some sensible defaults for interaction.
//
UCLASS(BlueprintType, meta=(DisplayName="Button (Styled)"))
class UStyledButtonWidget : public UStyledBorderWidget
{
	GENERATED_BODY()

public:
	UStyledButtonWidget(FObjectInitializer const& Initializer);
};
