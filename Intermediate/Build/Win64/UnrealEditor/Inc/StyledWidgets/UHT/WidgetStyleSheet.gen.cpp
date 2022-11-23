// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StyledWidgets/Public/WidgetStyleSheet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetStyleSheet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UWidgetStyleBase_NoRegister();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UWidgetStyleSheet();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UWidgetStyleSheet_NoRegister();
	STYLEDWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetStyleSheetColor();
	UPackage* Z_Construct_UPackage__Script_StyledWidgets();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetStyleSheetColor;
class UScriptStruct* FWidgetStyleSheetColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetStyleSheetColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetStyleSheetColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetStyleSheetColor, Z_Construct_UPackage__Script_StyledWidgets(), TEXT("WidgetStyleSheetColor"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetStyleSheetColor.OuterSingleton;
}
template<> STYLEDWIDGETS_API UScriptStruct* StaticStruct<FWidgetStyleSheetColor>()
{
	return FWidgetStyleSheetColor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetStyleSheetColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetStyleSheetColor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WidgetStyleSheet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetStyleSheetColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetStyleSheetColor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetStyleSheetColor_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetStyleSheet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetStyleSheetColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetStyleSheetColor, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetStyleSheetColor_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleSheetColor_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetStyleSheetColor_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetStyleSheet.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWidgetStyleSheetColor_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetStyleSheetColor, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetStyleSheetColor_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleSheetColor_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetStyleSheetColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetStyleSheetColor_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetStyleSheetColor_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetStyleSheetColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StyledWidgets,
		nullptr,
		&NewStructOps,
		"WidgetStyleSheetColor",
		sizeof(FWidgetStyleSheetColor),
		alignof(FWidgetStyleSheetColor),
		Z_Construct_UScriptStruct_FWidgetStyleSheetColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleSheetColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetStyleSheetColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleSheetColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetStyleSheetColor()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetStyleSheetColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetStyleSheetColor.InnerSingleton, Z_Construct_UScriptStruct_FWidgetStyleSheetColor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetStyleSheetColor.InnerSingleton;
	}
	void UWidgetStyleSheet::StaticRegisterNativesUWidgetStyleSheet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetStyleSheet);
	UClass* Z_Construct_UClass_UWidgetStyleSheet_NoRegister()
	{
		return UWidgetStyleSheet::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetStyleSheet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Styles_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Styles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Styles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Styles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorPalette_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPalette_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColorPalette;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetStyleSheet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StyledWidgets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetStyleSheet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WidgetStyleSheet.h" },
		{ "ModuleRelativePath", "Public/WidgetStyleSheet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetStyleSheet_Statics::NewProp_Styles_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WidgetStyleSheet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetStyleSheet_Statics::NewProp_Styles_Inner = { "Styles", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWidgetStyleBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetStyleSheet_Statics::NewProp_Styles_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetStyleSheet_Statics::NewProp_Styles_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetStyleSheet_Statics::NewProp_Styles_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WidgetStyleSheet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetStyleSheet_Statics::NewProp_Styles = { "Styles", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetStyleSheet, Styles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidgetStyleSheet_Statics::NewProp_Styles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetStyleSheet_Statics::NewProp_Styles_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetStyleSheet_Statics::NewProp_ColorPalette_Inner = { "ColorPalette", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWidgetStyleSheetColor, METADATA_PARAMS(nullptr, 0) }; // 2442201342
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetStyleSheet_Statics::NewProp_ColorPalette_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetStyleSheet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetStyleSheet_Statics::NewProp_ColorPalette = { "ColorPalette", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetStyleSheet, ColorPalette), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidgetStyleSheet_Statics::NewProp_ColorPalette_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetStyleSheet_Statics::NewProp_ColorPalette_MetaData)) }; // 2442201342
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetStyleSheet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetStyleSheet_Statics::NewProp_Styles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetStyleSheet_Statics::NewProp_Styles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetStyleSheet_Statics::NewProp_ColorPalette_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetStyleSheet_Statics::NewProp_ColorPalette,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetStyleSheet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetStyleSheet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetStyleSheet_Statics::ClassParams = {
		&UWidgetStyleSheet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidgetStyleSheet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetStyleSheet_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetStyleSheet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetStyleSheet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetStyleSheet()
	{
		if (!Z_Registration_Info_UClass_UWidgetStyleSheet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetStyleSheet.OuterSingleton, Z_Construct_UClass_UWidgetStyleSheet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetStyleSheet.OuterSingleton;
	}
	template<> STYLEDWIDGETS_API UClass* StaticClass<UWidgetStyleSheet>()
	{
		return UWidgetStyleSheet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetStyleSheet);
	UWidgetStyleSheet::~UWidgetStyleSheet() {}
	struct Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleSheet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleSheet_h_Statics::ScriptStructInfo[] = {
		{ FWidgetStyleSheetColor::StaticStruct, Z_Construct_UScriptStruct_FWidgetStyleSheetColor_Statics::NewStructOps, TEXT("WidgetStyleSheetColor"), &Z_Registration_Info_UScriptStruct_WidgetStyleSheetColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetStyleSheetColor), 2442201342U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleSheet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetStyleSheet, UWidgetStyleSheet::StaticClass, TEXT("UWidgetStyleSheet"), &Z_Registration_Info_UClass_UWidgetStyleSheet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetStyleSheet), 2901042443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleSheet_h_2655496425(TEXT("/Script/StyledWidgets"),
		Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleSheet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleSheet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleSheet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleSheet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
