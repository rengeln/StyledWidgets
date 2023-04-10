#include "WidgetStyleBase.h"

#include <Brushes/SlateBorderBrush.h>
#include <Brushes/SlateBoxBrush.h>
#include <Brushes/SlateImageBrush.h>
#include <Brushes/SlateRoundedBoxBrush.h>

void FBrushStyle::MakeSlateBrush(FLinearColor const& Color, FSlateBrush* OutBrush)
{
	if (DrawAs == ESlateBrushDrawType::Image)
	{
		*OutBrush = FSlateImageBrush(Image, ImageSize, Color, Tiling);
	}
	else if (DrawAs == ESlateBrushDrawType::Border)
	{
		*OutBrush = FSlateBorderBrush(Image, Margin, Color);
	}
	else if (DrawAs == ESlateBrushDrawType::Box)
	{
		*OutBrush = FSlateBoxBrush(Image, Margin, Color);
	}
	else if (DrawAs == ESlateBrushDrawType::RoundedBox)
	{
		*OutBrush = FSlateRoundedBoxBrush(Color, 0.f, FVector2D::ZeroVector);
		OutBrush->OutlineSettings.CornerRadii = CornerRadius;
		OutBrush->OutlineSettings.RoundingType = RoundingType;
	}
	else
	{
		*OutBrush = FSlateBrush();
	}
}

int FWidgetStyleSelector::Match(FName const& InIdentifier, TArray<FName> const& InTags) const
{
	int Score = -1;

	if (!bHasError)
	{
		if (Identifier == NAME_None || Identifier == InIdentifier)
		{
			Score = (Identifier != NAME_None) ? 0x70000000 : 0;

			for (FWidgetStyleTagSelector const& TagSelector : Tags)
			{
				if (InTags.Contains(TagSelector.Tag))
				{
					if (TagSelector.bIsInverted)
					{
						Score = -1;
						break;
					}
					else if (TagSelector.bIsHighPriority)
					{
						Score += 0x7000;
					}
					else
					{
						Score++;
					}
				}
				else
				{
					Score = -1;
					break;
				}
			}
		}
	}

	return Score;
}

bool FWidgetStyleSelector::Parse(FString const& InString)
{
	bool bResult = true;
	Identifier = NAME_None;
	Tags.Empty();
	bHasError = false;

	TArray<FString> TokenArray;
	InString.ParseIntoArrayWS(TokenArray);
	for (FString& Token : TokenArray)
	{
		bool bIsIdentifier = false;
		bool bIsInverted = false;
		bool bIsHighPriority = false;
		bool bIsValidToken = false;

		if (Token[0] == '#')
		{
			bIsIdentifier = true;
			Token.RightChopInline(1);
		}
		else if (Token[0] == '!')
		{
			bIsInverted = true;
			Token.RightChopInline(1);
		}
		else if (Token[0] == '+')
		{
			bIsHighPriority = true;
			Token.RightChopInline(1);
		}

		if (Token.Len() > 0)
		{
			bIsValidToken = TChar<TCHAR>::IsAlpha(Token[0]);
			for (int CharIndex = 0; bIsValidToken && CharIndex < Token.Len(); CharIndex++)
			{
				if (!TChar<TCHAR>::IsAlnum(Token[CharIndex]) && Token[CharIndex] != '_')
				{
					bIsValidToken = false;
				}
			}
		}

		if (bIsValidToken)
		{
			if (bIsIdentifier)
			{
				Identifier = FName(*Token);
			}
			else
			{
				FWidgetStyleTagSelector& TagSelector = Tags.Emplace_GetRef();
				TagSelector.Tag = FName(*Token);
				TagSelector.bIsInverted = bIsInverted;
				TagSelector.bIsHighPriority = bIsHighPriority;
			}
		}
		else
		{
			bResult = false;
			break;
		}
	}

	if (!bResult)
	{
		bHasError = true;
	}
	return bResult;
}

void FWidgetStyleSelector::Clear()
{
	bHasError = false;
	Identifier = NAME_None;
	Tags.Empty();
}

void UWidgetStyleBase::CopyOverridenPropertiesTo(UWidgetStyleBase* TargetStyle) const
{
	UClass* ThisClass = GetClass();
	if (TargetStyle->GetClass()->IsChildOf(ThisClass))
	{
		for (FName PropertyName : OverriddenProperties)
		{
			if (FProperty* Property = ThisClass->FindPropertyByName(PropertyName))
			{
				void* DestPtr = Property->ContainerPtrToValuePtr<void>(TargetStyle);
				void const* SrcPtr = Property->ContainerPtrToValuePtr<void>(this);
				Property->CopyCompleteValue(DestPtr, SrcPtr);
			}
		}
	}
}

int UWidgetStyleBase::Match(FName const& InIdentifier, TArray<FName> const& InTags) const
{
	return Selector.Match(InIdentifier, InTags);
}

#if WITH_EDITOR
void UWidgetStyleBase::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.GetPropertyName() == TEXT("SelectorString"))
	{
		Selector.Parse(SelectorString);
	}
}
#endif // WITH_EDITOR
