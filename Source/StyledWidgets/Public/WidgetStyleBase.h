#pragma once

#include "WidgetStyleBase.generated.h"

USTRUCT()
struct STYLEDWIDGETS_API FWidgetStyleTagSelector
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FName Tag;

	// If true, the selector only matches when the tag is missing
	UPROPERTY(EditAnywhere)
	bool bIsInverted;

	// If true, matches of this tag are higher priority than normal tag matches
	UPROPERTY(EditAnywhere)
	bool bIsHighPriority;
};

USTRUCT()
struct STYLEDWIDGETS_API FWidgetStyleSelector
{
	GENERATED_BODY()

	// flag erroneous selectors so they don't match everything
	UPROPERTY(VisibleAnywhere)
	bool bHasError;

	UPROPERTY(EditAnywhere)
	FName Identifier;

	UPROPERTY(EditAnywhere)
	TArray<FWidgetStyleTagSelector> Tags; 

	int Match(FName const& InIdentifier, TArray<FName> const& InTags) const;
	bool Parse(FString const& InString);
	void Clear();
};


USTRUCT()
struct STYLEDWIDGETS_API FBrushStyle
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TEnumAsByte<ESlateBrushDrawType::Type> DrawAs = ESlateBrushDrawType::NoDrawType;

	UPROPERTY(EditAnywhere, meta=(DisplayThumbnail="true", AllowedClasses="Texture,MaterialInterface,SlateTextureAtlasInterface", DisallowedClasses = "MediaTexture", EditCondition="DrawAs==ESlateBrushDrawType::Image || DrawAs==ESlateBrushDrawType::Border || DrawAs==ESlateBrushDrawType::Box", EditConditionHides))
	TObjectPtr<UObject> Image;

	UPROPERTY(EditAnywhere, meta=(EditCondition="DrawAs==ESlateBrushDrawType::Image", EditConditionHides))
	FVector2D ImageSize = FVector2D::ZeroVector;

	UPROPERTY(EditAnywhere, meta=(EditCondition="DrawAs==ESlateBrushDrawType::Image", EditConditionHides))
	TEnumAsByte<ESlateBrushTileType::Type> Tiling = ESlateBrushTileType::NoTile;

	UPROPERTY(EditAnywhere, meta=(EditCondition="DrawAs==ESlateBrushDrawType::Box || DrawAs==ESlateBrushDrawType::Border", EditConditionHides))
	float Margin = 0.0f;

	UPROPERTY(EditAnywhere, meta=(EditCondition="DrawAs==ESlateBrushDrawType::RoundedBox", EditConditionHides))
	TEnumAsByte<enum ESlateBrushRoundingType::Type> RoundingType = ESlateBrushRoundingType::HalfHeightRadius;

	// X = Top Left, Y = Top Right, Z = Bottom Right, W = Bottom Left
	UPROPERTY(EditAnywhere, meta=(EditCondition="DrawAs==ESlateBrushDrawType::RoundedBox && RoundingType==ESlateBrushRoundingType::FixedRadius", EditConditionHides))
	FVector4 CornerRadius = FVector4::Zero();

	void MakeSlateBrush(FLinearColor const& Color, FSlateBrush* OutSlateBrush);
};

UCLASS(Blueprintable, Abstract)
class STYLEDWIDGETS_API UWidgetStyleBase : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	inline FName const& GetStyleName() const { return StyleName; }

	// applies all of the overriden properties from this style to the target style
	void CopyOverridenPropertiesTo(UWidgetStyleBase* TargetStyle) const;

	// matches this style against the provided selector
	int Match(FName const& InIdentifier, TArray<FName> const& InTags) const;

#if WITH_EDITORONLY_DATA
	// Selector used to match this style with widgets. Whitespaced-delimited list of selector tokens:
	//	tag - Matches any widget with the given style tag.
	//  +tag - Matches any widget with the given style tag and elevates this style's priority.
	//  !tag - Matches any widget without the given style tag.
	//  #id - Matches only widgets with the given identifier.
	UPROPERTY(EditDefaultsOnly, Category="Style", meta=(DisplayName="Selector"))
	FString SelectorString;

	// Brief description of this style. Only used in-editor to display a tooltip in the style selector.
	UPROPERTY(EditDefaultsOnly, Category="Style")
	FString Comment;
#endif // WITH_EDITORONLY_DATA

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif // WITH_EDITOR

private:
	friend class FWidgetStyleSheetEditor;
	friend class FWidgetStyleSheetStyleModel;

	UPROPERTY()
	FName StyleName;

	UPROPERTY()
	FWidgetStyleSelector Selector;

	UPROPERTY()
	TArray<FName> OverriddenProperties;
};

