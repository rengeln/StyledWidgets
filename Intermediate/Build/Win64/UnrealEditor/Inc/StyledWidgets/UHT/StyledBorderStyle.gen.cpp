// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StyledWidgets/Public/Styles/StyledBorderStyle.h"
#include "SlateCore/Public/Layout/Margin.h"
#include "StyledWidgets/Public/WidgetStyleBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStyledBorderStyle() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledBorderStyle();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledBorderStyle_NoRegister();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UWidgetStyleBase();
	STYLEDWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FBrushStyle();
	UPackage* Z_Construct_UPackage__Script_StyledWidgets();
// End Cross Module References
	void UStyledBorderStyle::StaticRegisterNativesUStyledBorderStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStyledBorderStyle);
	UClass* Z_Construct_UClass_UStyledBorderStyle_NoRegister()
	{
		return UStyledBorderStyle::StaticClass();
	}
	struct Z_Construct_UClass_UStyledBorderStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStyledBorderStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetStyleBase,
		(UObject* (*)())Z_Construct_UPackage__Script_StyledWidgets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledBorderStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Border" },
		{ "IncludePath", "Styles/StyledBorderStyle.h" },
		{ "ModuleRelativePath", "Public/Styles/StyledBorderStyle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledBorderStyle_Statics::NewProp_BorderBrush_MetaData[] = {
		{ "Category", "Border" },
		{ "ModuleRelativePath", "Public/Styles/StyledBorderStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStyledBorderStyle_Statics::NewProp_BorderBrush = { "BorderBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledBorderStyle, BorderBrush), Z_Construct_UScriptStruct_FBrushStyle, METADATA_PARAMS(Z_Construct_UClass_UStyledBorderStyle_Statics::NewProp_BorderBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledBorderStyle_Statics::NewProp_BorderBrush_MetaData)) }; // 1228600933
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledBorderStyle_Statics::NewProp_BorderColor_MetaData[] = {
		{ "Category", "Border" },
		{ "ModuleRelativePath", "Public/Styles/StyledBorderStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStyledBorderStyle_Statics::NewProp_BorderColor = { "BorderColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledBorderStyle, BorderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UStyledBorderStyle_Statics::NewProp_BorderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledBorderStyle_Statics::NewProp_BorderColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledBorderStyle_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "Border" },
		{ "ModuleRelativePath", "Public/Styles/StyledBorderStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStyledBorderStyle_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledBorderStyle, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UStyledBorderStyle_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledBorderStyle_Statics::NewProp_Padding_MetaData)) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStyledBorderStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledBorderStyle_Statics::NewProp_BorderBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledBorderStyle_Statics::NewProp_BorderColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledBorderStyle_Statics::NewProp_Padding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStyledBorderStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStyledBorderStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStyledBorderStyle_Statics::ClassParams = {
		&UStyledBorderStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStyledBorderStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStyledBorderStyle_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStyledBorderStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledBorderStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStyledBorderStyle()
	{
		if (!Z_Registration_Info_UClass_UStyledBorderStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStyledBorderStyle.OuterSingleton, Z_Construct_UClass_UStyledBorderStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStyledBorderStyle.OuterSingleton;
	}
	template<> STYLEDWIDGETS_API UClass* StaticClass<UStyledBorderStyle>()
	{
		return UStyledBorderStyle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStyledBorderStyle);
	UStyledBorderStyle::~UStyledBorderStyle() {}
	struct Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledBorderStyle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledBorderStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStyledBorderStyle, UStyledBorderStyle::StaticClass, TEXT("UStyledBorderStyle"), &Z_Registration_Info_UClass_UStyledBorderStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStyledBorderStyle), 3970199183U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledBorderStyle_h_1615990458(TEXT("/Script/StyledWidgets"),
		Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledBorderStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledBorderStyle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
