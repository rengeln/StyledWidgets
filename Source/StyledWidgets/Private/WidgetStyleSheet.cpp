#include "WidgetStyleSheet.h"

#include <Serialization/StructuredArchive.h>

UWidgetStyleSheet::UWidgetStyleSheet(FObjectInitializer const& Initializer) :
	Super(Initializer)
{
}

struct FWidgetStyleScorePair
{
	int Score;
	UWidgetStyleBase* Style;

	inline FWidgetStyleScorePair(UWidgetStyleBase* InStyle, int InScore) :
		Score(InScore), Style(InStyle)
	{
	}

	inline bool operator<(FWidgetStyleScorePair const& Other) const
	{
		return Score < Other.Score;
	}
};

void UWidgetStyleSheet::BuildStyle(FName const& InIdentifier, TArray<FName> const& InTags, UWidgetStyleBase* StyleInstance)
{
	check(StyleInstance);

	TArray<FWidgetStyleScorePair> MatchingStyles;
	for (UWidgetStyleBase* Style : Styles)
	{
		if (Style && Style->GetClass() == StyleInstance->GetClass())
		{
			int Score = Style->Match(InIdentifier, InTags);
			if (Score >= 0)
			{
				MatchingStyles.Emplace(Style, Score);
			}
		}
	}

	MatchingStyles.Sort();
	for (FWidgetStyleScorePair& MatchPair : MatchingStyles)
	{
		MatchPair.Style->CopyOverridenPropertiesTo(StyleInstance);
	}
}

FLinearColor UWidgetStyleSheet::TryToGetColor(FName const& InColorName, FLinearColor const& InFallbackColor)
{
	FLinearColor OutColor = InFallbackColor;

	for (FWidgetStyleSheetColor const& ColorInfo : ColorPalette)
	{
		if (ColorInfo.Name == InColorName)
		{
			OutColor = ColorInfo.Color;
			break;
		}
	}

	return OutColor;
}
