// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StyledWidgets/Public/Styles/StyledImageStyle.h"
#include "StyledWidgets/Public/WidgetStyleBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStyledImageStyle() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledImageStyle();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledImageStyle_NoRegister();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UWidgetStyleBase();
	STYLEDWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FBrushStyle();
	UPackage* Z_Construct_UPackage__Script_StyledWidgets();
// End Cross Module References
	void UStyledImageStyle::StaticRegisterNativesUStyledImageStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStyledImageStyle);
	UClass* Z_Construct_UClass_UStyledImageStyle_NoRegister()
	{
		return UStyledImageStyle::StaticClass();
	}
	struct Z_Construct_UClass_UStyledImageStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStyledImageStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetStyleBase,
		(UObject* (*)())Z_Construct_UPackage__Script_StyledWidgets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledImageStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Image" },
		{ "IncludePath", "Styles/StyledImageStyle.h" },
		{ "ModuleRelativePath", "Public/Styles/StyledImageStyle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledImageStyle_Statics::NewProp_Brush_MetaData[] = {
		{ "Category", "Image" },
		{ "ModuleRelativePath", "Public/Styles/StyledImageStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStyledImageStyle_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledImageStyle, Brush), Z_Construct_UScriptStruct_FBrushStyle, METADATA_PARAMS(Z_Construct_UClass_UStyledImageStyle_Statics::NewProp_Brush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledImageStyle_Statics::NewProp_Brush_MetaData)) }; // 1228600933
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledImageStyle_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Image" },
		{ "ModuleRelativePath", "Public/Styles/StyledImageStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStyledImageStyle_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledImageStyle, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UStyledImageStyle_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledImageStyle_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStyledImageStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledImageStyle_Statics::NewProp_Brush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledImageStyle_Statics::NewProp_Color,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStyledImageStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStyledImageStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStyledImageStyle_Statics::ClassParams = {
		&UStyledImageStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStyledImageStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStyledImageStyle_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStyledImageStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledImageStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStyledImageStyle()
	{
		if (!Z_Registration_Info_UClass_UStyledImageStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStyledImageStyle.OuterSingleton, Z_Construct_UClass_UStyledImageStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStyledImageStyle.OuterSingleton;
	}
	template<> STYLEDWIDGETS_API UClass* StaticClass<UStyledImageStyle>()
	{
		return UStyledImageStyle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStyledImageStyle);
	UStyledImageStyle::~UStyledImageStyle() {}
	struct Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledImageStyle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledImageStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStyledImageStyle, UStyledImageStyle::StaticClass, TEXT("UStyledImageStyle"), &Z_Registration_Info_UClass_UStyledImageStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStyledImageStyle), 2379524278U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledImageStyle_h_3202136657(TEXT("/Script/StyledWidgets"),
		Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledImageStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledImageStyle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
