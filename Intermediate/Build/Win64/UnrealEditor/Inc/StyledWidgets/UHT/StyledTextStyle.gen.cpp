// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StyledWidgets/Public/Styles/StyledTextStyle.h"
#include "StyledWidgets/Public/WidgetStyleBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStyledTextStyle() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledTextStyle();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledTextStyle_NoRegister();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UWidgetStyleBase();
	STYLEDWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FBrushStyle();
	UPackage* Z_Construct_UPackage__Script_StyledWidgets();
// End Cross Module References
	void UStyledTextStyle::StaticRegisterNativesUStyledTextStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStyledTextStyle);
	UClass* Z_Construct_UClass_UStyledTextStyle_NoRegister()
	{
		return UStyledTextStyle::StaticClass();
	}
	struct Z_Construct_UClass_UStyledTextStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Typeface_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Typeface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LetterSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LetterSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineHeightPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineHeightPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutlineSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OutlineSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutlineColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutlineColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrikeBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StrikeBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrikeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StrikeColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStyledTextStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetStyleBase,
		(UObject* (*)())Z_Construct_UPackage__Script_StyledWidgets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Text" },
		{ "IncludePath", "Styles/StyledTextStyle.h" },
		{ "ModuleRelativePath", "Public/Styles/StyledTextStyle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "Font" },
		{ "ModuleRelativePath", "Public/Styles/StyledTextStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledTextStyle, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Typeface_MetaData[] = {
		{ "Category", "Font" },
		{ "ModuleRelativePath", "Public/Styles/StyledTextStyle.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Typeface = { "Typeface", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledTextStyle, Typeface), METADATA_PARAMS(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Typeface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Typeface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_LetterSpacing_MetaData[] = {
		{ "Category", "Font" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "-1000" },
		{ "Comment", "/** The uniform spacing (or tracking) between all characters in the text. */" },
		{ "ModuleRelativePath", "Public/Styles/StyledTextStyle.h" },
		{ "ToolTip", "The uniform spacing (or tracking) between all characters in the text." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_LetterSpacing = { "LetterSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledTextStyle, LetterSpacing), METADATA_PARAMS(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_LetterSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_LetterSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Font" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Styles/StyledTextStyle.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledTextStyle, Size), METADATA_PARAMS(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Font" },
		{ "ModuleRelativePath", "Public/Styles/StyledTextStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledTextStyle, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_LineHeightPercentage_MetaData[] = {
		{ "Category", "Font" },
		{ "ModuleRelativePath", "Public/Styles/StyledTextStyle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_LineHeightPercentage = { "LineHeightPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledTextStyle, LineHeightPercentage), METADATA_PARAMS(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_LineHeightPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_LineHeightPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/Styles/StyledTextStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledTextStyle, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_OutlineSize_MetaData[] = {
		{ "Category", "Outline" },
		{ "ModuleRelativePath", "Public/Styles/StyledTextStyle.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_OutlineSize = { "OutlineSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledTextStyle, OutlineSize), METADATA_PARAMS(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_OutlineSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_OutlineSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_OutlineColor_MetaData[] = {
		{ "Category", "Outline" },
		{ "ModuleRelativePath", "Public/Styles/StyledTextStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_OutlineColor = { "OutlineColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledTextStyle, OutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_OutlineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_OutlineColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_ShadowOffset_MetaData[] = {
		{ "Category", "Shadow" },
		{ "ModuleRelativePath", "Public/Styles/StyledTextStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_ShadowOffset = { "ShadowOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledTextStyle, ShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_ShadowOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_ShadowOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_ShadowColor_MetaData[] = {
		{ "Category", "Shadow" },
		{ "ModuleRelativePath", "Public/Styles/StyledTextStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_ShadowColor = { "ShadowColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledTextStyle, ShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_ShadowColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_ShadowColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_StrikeBrush_MetaData[] = {
		{ "Category", "Strike" },
		{ "ModuleRelativePath", "Public/Styles/StyledTextStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_StrikeBrush = { "StrikeBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledTextStyle, StrikeBrush), Z_Construct_UScriptStruct_FBrushStyle, METADATA_PARAMS(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_StrikeBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_StrikeBrush_MetaData)) }; // 1228600933
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_StrikeColor_MetaData[] = {
		{ "Category", "Strike" },
		{ "ModuleRelativePath", "Public/Styles/StyledTextStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_StrikeColor = { "StrikeColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledTextStyle, StrikeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_StrikeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_StrikeColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStyledTextStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Typeface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_LetterSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_LineHeightPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_OutlineSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_OutlineColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_ShadowOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_ShadowColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_StrikeBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextStyle_Statics::NewProp_StrikeColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStyledTextStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStyledTextStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStyledTextStyle_Statics::ClassParams = {
		&UStyledTextStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStyledTextStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextStyle_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStyledTextStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStyledTextStyle()
	{
		if (!Z_Registration_Info_UClass_UStyledTextStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStyledTextStyle.OuterSingleton, Z_Construct_UClass_UStyledTextStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStyledTextStyle.OuterSingleton;
	}
	template<> STYLEDWIDGETS_API UClass* StaticClass<UStyledTextStyle>()
	{
		return UStyledTextStyle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStyledTextStyle);
	UStyledTextStyle::~UStyledTextStyle() {}
	struct Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledTextStyle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledTextStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStyledTextStyle, UStyledTextStyle::StaticClass, TEXT("UStyledTextStyle"), &Z_Registration_Info_UClass_UStyledTextStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStyledTextStyle), 3995001514U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledTextStyle_h_3024786844(TEXT("/Script/StyledWidgets"),
		Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledTextStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledTextStyle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
