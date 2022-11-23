// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StyledWidgets/Public/Styles/StyledProgressBarStyle.h"
#include "StyledWidgets/Public/WidgetStyleBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStyledProgressBarStyle() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EProgressBarFillStyle();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EProgressBarFillType();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledProgressBarStyle();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledProgressBarStyle_NoRegister();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UWidgetStyleBase();
	STYLEDWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FBrushStyle();
	UPackage* Z_Construct_UPackage__Script_StyledWidgets();
// End Cross Module References
	void UStyledProgressBarStyle::StaticRegisterNativesUStyledProgressBarStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStyledProgressBarStyle);
	UClass* Z_Construct_UClass_UStyledProgressBarStyle_NoRegister()
	{
		return UStyledProgressBarStyle::StaticClass();
	}
	struct Z_Construct_UClass_UStyledProgressBarStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FillBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FillColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FillType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillStyle_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FillStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FillPadding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStyledProgressBarStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetStyleBase,
		(UObject* (*)())Z_Construct_UPackage__Script_StyledWidgets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledProgressBarStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Progress Bar" },
		{ "IncludePath", "Styles/StyledProgressBarStyle.h" },
		{ "ModuleRelativePath", "Public/Styles/StyledProgressBarStyle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_BackgroundBrush_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Public/Styles/StyledProgressBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_BackgroundBrush = { "BackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledProgressBarStyle, BackgroundBrush), Z_Construct_UScriptStruct_FBrushStyle, METADATA_PARAMS(Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_BackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_BackgroundBrush_MetaData)) }; // 1228600933
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Public/Styles/StyledProgressBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledProgressBarStyle, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillBrush_MetaData[] = {
		{ "Category", "Fill" },
		{ "ModuleRelativePath", "Public/Styles/StyledProgressBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillBrush = { "FillBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledProgressBarStyle, FillBrush), Z_Construct_UScriptStruct_FBrushStyle, METADATA_PARAMS(Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillBrush_MetaData)) }; // 1228600933
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillColor_MetaData[] = {
		{ "Category", "Fill" },
		{ "ModuleRelativePath", "Public/Styles/StyledProgressBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillColor = { "FillColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledProgressBarStyle, FillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillType_MetaData[] = {
		{ "Category", "Fill" },
		{ "ModuleRelativePath", "Public/Styles/StyledProgressBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillType = { "FillType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledProgressBarStyle, FillType), Z_Construct_UEnum_Slate_EProgressBarFillType, METADATA_PARAMS(Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillType_MetaData)) }; // 438747145
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillStyle_MetaData[] = {
		{ "Category", "Fill" },
		{ "ModuleRelativePath", "Public/Styles/StyledProgressBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillStyle = { "FillStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledProgressBarStyle, FillStyle), Z_Construct_UEnum_Slate_EProgressBarFillStyle, METADATA_PARAMS(Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillStyle_MetaData)) }; // 1326948045
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillPadding_MetaData[] = {
		{ "Category", "Fill" },
		{ "ModuleRelativePath", "Public/Styles/StyledProgressBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillPadding = { "FillPadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledProgressBarStyle, FillPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillPadding_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStyledProgressBarStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_BackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_BackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledProgressBarStyle_Statics::NewProp_FillPadding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStyledProgressBarStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStyledProgressBarStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStyledProgressBarStyle_Statics::ClassParams = {
		&UStyledProgressBarStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStyledProgressBarStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStyledProgressBarStyle_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStyledProgressBarStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledProgressBarStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStyledProgressBarStyle()
	{
		if (!Z_Registration_Info_UClass_UStyledProgressBarStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStyledProgressBarStyle.OuterSingleton, Z_Construct_UClass_UStyledProgressBarStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStyledProgressBarStyle.OuterSingleton;
	}
	template<> STYLEDWIDGETS_API UClass* StaticClass<UStyledProgressBarStyle>()
	{
		return UStyledProgressBarStyle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStyledProgressBarStyle);
	UStyledProgressBarStyle::~UStyledProgressBarStyle() {}
	struct Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledProgressBarStyle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledProgressBarStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStyledProgressBarStyle, UStyledProgressBarStyle::StaticClass, TEXT("UStyledProgressBarStyle"), &Z_Registration_Info_UClass_UStyledProgressBarStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStyledProgressBarStyle), 4074214106U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledProgressBarStyle_h_1646528971(TEXT("/Script/StyledWidgets"),
		Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledProgressBarStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledProgressBarStyle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
