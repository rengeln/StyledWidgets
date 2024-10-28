#pragma once

#include "Styles/StyledBorderStyle.h"

#include "StyledButtonStyle.generated.h"

UCLASS(BlueprintType, meta=(DisplayName="Button"))
class STYLEDWIDGETS_API UStyledButtonStyle : public UStyledBorderStyle
{
	GENERATED_BODY()

public:
	UStyledButtonStyle();
};

