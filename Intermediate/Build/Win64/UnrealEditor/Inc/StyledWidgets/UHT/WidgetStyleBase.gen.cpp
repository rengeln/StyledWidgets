// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StyledWidgets/Public/WidgetStyleBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetStyleBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushDrawType();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushRoundingType();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushTileType();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UWidgetStyleBase();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UWidgetStyleBase_NoRegister();
	STYLEDWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FBrushStyle();
	STYLEDWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetStyleSelector();
	STYLEDWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetStyleTagSelector();
	UPackage* Z_Construct_UPackage__Script_StyledWidgets();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetStyleTagSelector;
class UScriptStruct* FWidgetStyleTagSelector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetStyleTagSelector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetStyleTagSelector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetStyleTagSelector, Z_Construct_UPackage__Script_StyledWidgets(), TEXT("WidgetStyleTagSelector"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetStyleTagSelector.OuterSingleton;
}
template<> STYLEDWIDGETS_API UScriptStruct* StaticStruct<FWidgetStyleTagSelector>()
{
	return FWidgetStyleTagSelector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInverted_MetaData[];
#endif
		static void NewProp_bIsInverted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInverted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHighPriority_MetaData[];
#endif
		static void NewProp_bIsHighPriority_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHighPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetStyleTagSelector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "WidgetStyleTagSelector" },
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetStyleTagSelector, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::NewProp_bIsInverted_MetaData[] = {
		{ "Category", "WidgetStyleTagSelector" },
		{ "Comment", "// If true, the selector only matches when the tag is missing\n" },
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
		{ "ToolTip", "If true, the selector only matches when the tag is missing" },
	};
#endif
	void Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::NewProp_bIsInverted_SetBit(void* Obj)
	{
		((FWidgetStyleTagSelector*)Obj)->bIsInverted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::NewProp_bIsInverted = { "bIsInverted", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWidgetStyleTagSelector), &Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::NewProp_bIsInverted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::NewProp_bIsInverted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::NewProp_bIsInverted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::NewProp_bIsHighPriority_MetaData[] = {
		{ "Category", "WidgetStyleTagSelector" },
		{ "Comment", "// If true, matches of this tag are higher priority than normal tag matches\n" },
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
		{ "ToolTip", "If true, matches of this tag are higher priority than normal tag matches" },
	};
#endif
	void Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::NewProp_bIsHighPriority_SetBit(void* Obj)
	{
		((FWidgetStyleTagSelector*)Obj)->bIsHighPriority = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::NewProp_bIsHighPriority = { "bIsHighPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWidgetStyleTagSelector), &Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::NewProp_bIsHighPriority_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::NewProp_bIsHighPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::NewProp_bIsHighPriority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::NewProp_bIsInverted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::NewProp_bIsHighPriority,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StyledWidgets,
		nullptr,
		&NewStructOps,
		"WidgetStyleTagSelector",
		sizeof(FWidgetStyleTagSelector),
		alignof(FWidgetStyleTagSelector),
		Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetStyleTagSelector()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetStyleTagSelector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetStyleTagSelector.InnerSingleton, Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetStyleTagSelector.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetStyleSelector;
class UScriptStruct* FWidgetStyleSelector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetStyleSelector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetStyleSelector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetStyleSelector, Z_Construct_UPackage__Script_StyledWidgets(), TEXT("WidgetStyleSelector"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetStyleSelector.OuterSingleton;
}
template<> STYLEDWIDGETS_API UScriptStruct* StaticStruct<FWidgetStyleSelector>()
{
	return FWidgetStyleSelector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasError_MetaData[];
#endif
		static void NewProp_bHasError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetStyleSelector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::NewProp_bHasError_MetaData[] = {
		{ "Category", "WidgetStyleSelector" },
		{ "Comment", "// flag erroneous selectors so they don't match everything\n" },
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
		{ "ToolTip", "flag erroneous selectors so they don't match everything" },
	};
#endif
	void Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::NewProp_bHasError_SetBit(void* Obj)
	{
		((FWidgetStyleSelector*)Obj)->bHasError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::NewProp_bHasError = { "bHasError", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWidgetStyleSelector), &Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::NewProp_bHasError_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::NewProp_bHasError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::NewProp_bHasError_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::NewProp_Identifier_MetaData[] = {
		{ "Category", "WidgetStyleSelector" },
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetStyleSelector, Identifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::NewProp_Identifier_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWidgetStyleTagSelector, METADATA_PARAMS(nullptr, 0) }; // 41941567
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "WidgetStyleSelector" },
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetStyleSelector, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::NewProp_Tags_MetaData)) }; // 41941567
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::NewProp_bHasError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::NewProp_Tags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StyledWidgets,
		nullptr,
		&NewStructOps,
		"WidgetStyleSelector",
		sizeof(FWidgetStyleSelector),
		alignof(FWidgetStyleSelector),
		Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetStyleSelector()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetStyleSelector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetStyleSelector.InnerSingleton, Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetStyleSelector.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BrushStyle;
class UScriptStruct* FBrushStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BrushStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BrushStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBrushStyle, Z_Construct_UPackage__Script_StyledWidgets(), TEXT("BrushStyle"));
	}
	return Z_Registration_Info_UScriptStruct_BrushStyle.OuterSingleton;
}
template<> STYLEDWIDGETS_API UScriptStruct* StaticStruct<FBrushStyle>()
{
	return FBrushStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBrushStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawAs_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DrawAs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImageSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tiling_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Tiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Margin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoundingType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoundingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CornerRadius_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CornerRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushStyle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBrushStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBrushStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_DrawAs_MetaData[] = {
		{ "Category", "BrushStyle" },
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_DrawAs = { "DrawAs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushStyle, DrawAs), Z_Construct_UEnum_SlateCore_ESlateBrushDrawType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_DrawAs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_DrawAs_MetaData)) }; // 2311007087
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_Image_MetaData[] = {
		{ "AllowedClasses", "Texture,MaterialInterface,SlateTextureAtlasInterface" },
		{ "Category", "BrushStyle" },
		{ "DisallowedClasses", "MediaTexture" },
		{ "DisplayThumbnail", "true" },
		{ "EditCondition", "DrawAs==ESlateBrushDrawType::Image || DrawAs==ESlateBrushDrawType::Border || DrawAs==ESlateBrushDrawType::Box" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushStyle, Image), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_Image_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_ImageSize_MetaData[] = {
		{ "Category", "BrushStyle" },
		{ "EditCondition", "DrawAs==ESlateBrushDrawType::Image" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_ImageSize = { "ImageSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushStyle, ImageSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_ImageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_ImageSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_Tiling_MetaData[] = {
		{ "Category", "BrushStyle" },
		{ "EditCondition", "DrawAs==ESlateBrushDrawType::Image" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_Tiling = { "Tiling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushStyle, Tiling), Z_Construct_UEnum_SlateCore_ESlateBrushTileType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_Tiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_Tiling_MetaData)) }; // 3702849228
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_Margin_MetaData[] = {
		{ "Category", "BrushStyle" },
		{ "EditCondition", "DrawAs==ESlateBrushDrawType::Box || DrawAs==ESlateBrushDrawType::Border" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_Margin = { "Margin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushStyle, Margin), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_Margin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_Margin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_RoundingType_MetaData[] = {
		{ "Category", "BrushStyle" },
		{ "EditCondition", "DrawAs==ESlateBrushDrawType::RoundedBox" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_RoundingType = { "RoundingType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushStyle, RoundingType), Z_Construct_UEnum_SlateCore_ESlateBrushRoundingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_RoundingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_RoundingType_MetaData)) }; // 1606112441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_CornerRadius_MetaData[] = {
		{ "Category", "BrushStyle" },
		{ "Comment", "// X = Top Left, Y = Top Right, Z = Bottom Right, W = Bottom Left\n" },
		{ "EditCondition", "DrawAs==ESlateBrushDrawType::RoundedBox && RoundingType==ESlateBrushRoundingType::FixedRadius" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
		{ "ToolTip", "X = Top Left, Y = Top Right, Z = Bottom Right, W = Bottom Left" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_CornerRadius = { "CornerRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushStyle, CornerRadius), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_CornerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_CornerRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBrushStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_DrawAs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_ImageSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_Tiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_Margin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_RoundingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushStyle_Statics::NewProp_CornerRadius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBrushStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StyledWidgets,
		nullptr,
		&NewStructOps,
		"BrushStyle",
		sizeof(FBrushStyle),
		alignof(FBrushStyle),
		Z_Construct_UScriptStruct_FBrushStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBrushStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_BrushStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BrushStyle.InnerSingleton, Z_Construct_UScriptStruct_FBrushStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BrushStyle.InnerSingleton;
	}
	DEFINE_FUNCTION(UWidgetStyleBase::execGetStyleName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetStyleName();
		P_NATIVE_END;
	}
	void UWidgetStyleBase::StaticRegisterNativesUWidgetStyleBase()
	{
		UClass* Class = UWidgetStyleBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStyleName", &UWidgetStyleBase::execGetStyleName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetStyleBase_GetStyleName_Statics
	{
		struct WidgetStyleBase_eventGetStyleName_Parms
		{
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetStyleBase_GetStyleName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWidgetStyleBase_GetStyleName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetStyleBase_eventGetStyleName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UWidgetStyleBase_GetStyleName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetStyleBase_GetStyleName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetStyleBase_GetStyleName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetStyleBase_GetStyleName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetStyleBase_GetStyleName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetStyleBase_GetStyleName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetStyleBase, nullptr, "GetStyleName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetStyleBase_GetStyleName_Statics::WidgetStyleBase_eventGetStyleName_Parms), Z_Construct_UFunction_UWidgetStyleBase_GetStyleName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetStyleBase_GetStyleName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetStyleBase_GetStyleName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetStyleBase_GetStyleName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetStyleBase_GetStyleName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetStyleBase_GetStyleName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetStyleBase);
	UClass* Z_Construct_UClass_UWidgetStyleBase_NoRegister()
	{
		return UWidgetStyleBase::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetStyleBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectorString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelectorString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Comment;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StyleName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StyleName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selector;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverriddenProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverriddenProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverriddenProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetStyleBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StyledWidgets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetStyleBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetStyleBase_GetStyleName, "GetStyleName" }, // 2219448281
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetStyleBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WidgetStyleBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_SelectorString_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "// Selector used to match this style with widgets. Whitespaced-delimited list of selector tokens:\n//\x09tag - Matches any widget with the given style tag.\n//  +tag - Matches any widget with the given style tag and elevates this style's priority.\n//  !tag - Matches any widget without the given style tag.\n//  #id - Matches only widgets with the given identifier.\n" },
		{ "DisplayName", "Selector" },
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
		{ "ToolTip", "Selector used to match this style with widgets. Whitespaced-delimited list of selector tokens:\n      tag - Matches any widget with the given style tag.\n +tag - Matches any widget with the given style tag and elevates this style's priority.\n !tag - Matches any widget without the given style tag.\n #id - Matches only widgets with the given identifier." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_SelectorString = { "SelectorString", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetStyleBase, SelectorString), METADATA_PARAMS(Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_SelectorString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_SelectorString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_Comment_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "// Brief description of this style. Only used in-editor to display a tooltip in the style selector.\n" },
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
		{ "ToolTip", "Brief description of this style. Only used in-editor to display a tooltip in the style selector." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetStyleBase, Comment), METADATA_PARAMS(Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_Comment_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_StyleName_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_StyleName = { "StyleName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetStyleBase, StyleName), METADATA_PARAMS(Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_StyleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_StyleName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_Selector_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetStyleBase, Selector), Z_Construct_UScriptStruct_FWidgetStyleSelector, METADATA_PARAMS(Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_Selector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_Selector_MetaData)) }; // 2606761907
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_OverriddenProperties_Inner = { "OverriddenProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_OverriddenProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetStyleBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_OverriddenProperties = { "OverriddenProperties", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetStyleBase, OverriddenProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_OverriddenProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_OverriddenProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetStyleBase_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_SelectorString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_Comment,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_StyleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_Selector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_OverriddenProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetStyleBase_Statics::NewProp_OverriddenProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetStyleBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetStyleBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetStyleBase_Statics::ClassParams = {
		&UWidgetStyleBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidgetStyleBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetStyleBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetStyleBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetStyleBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetStyleBase()
	{
		if (!Z_Registration_Info_UClass_UWidgetStyleBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetStyleBase.OuterSingleton, Z_Construct_UClass_UWidgetStyleBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetStyleBase.OuterSingleton;
	}
	template<> STYLEDWIDGETS_API UClass* StaticClass<UWidgetStyleBase>()
	{
		return UWidgetStyleBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetStyleBase);
	UWidgetStyleBase::~UWidgetStyleBase() {}
	struct Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleBase_h_Statics::ScriptStructInfo[] = {
		{ FWidgetStyleTagSelector::StaticStruct, Z_Construct_UScriptStruct_FWidgetStyleTagSelector_Statics::NewStructOps, TEXT("WidgetStyleTagSelector"), &Z_Registration_Info_UScriptStruct_WidgetStyleTagSelector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetStyleTagSelector), 41941567U) },
		{ FWidgetStyleSelector::StaticStruct, Z_Construct_UScriptStruct_FWidgetStyleSelector_Statics::NewStructOps, TEXT("WidgetStyleSelector"), &Z_Registration_Info_UScriptStruct_WidgetStyleSelector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetStyleSelector), 2606761907U) },
		{ FBrushStyle::StaticStruct, Z_Construct_UScriptStruct_FBrushStyle_Statics::NewStructOps, TEXT("BrushStyle"), &Z_Registration_Info_UScriptStruct_BrushStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBrushStyle), 1228600933U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetStyleBase, UWidgetStyleBase::StaticClass, TEXT("UWidgetStyleBase"), &Z_Registration_Info_UClass_UWidgetStyleBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetStyleBase), 160043576U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleBase_h_83629398(TEXT("/Script/StyledWidgets"),
		Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
