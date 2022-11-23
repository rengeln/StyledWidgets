// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StyledWidgets/Public/WidgetStyleSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetStyleSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UWidgetStyleSettings();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UWidgetStyleSettings_NoRegister();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UWidgetStyleSheet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StyledWidgets();
// End Cross Module References
	void UWidgetStyleSettings::StaticRegisterNativesUWidgetStyleSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetStyleSettings);
	UClass* Z_Construct_UClass_UWidgetStyleSettings_NoRegister()
	{
		return UWidgetStyleSettings::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetStyleSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStyleSheet_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultStyleSheet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetStyleSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StyledWidgets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetStyleSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WidgetStyleSettings.h" },
		{ "ModuleRelativePath", "Public/WidgetStyleSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetStyleSettings_Statics::NewProp_DefaultStyleSheet_MetaData[] = {
		{ "Category", "Widget Styles" },
		{ "Comment", "// The global style sheet used by all widgets that don't specify a custom style sheet.\n" },
		{ "ModuleRelativePath", "Public/WidgetStyleSettings.h" },
		{ "ToolTip", "The global style sheet used by all widgets that don't specify a custom style sheet." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWidgetStyleSettings_Statics::NewProp_DefaultStyleSheet = { "DefaultStyleSheet", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetStyleSettings, DefaultStyleSheet), Z_Construct_UClass_UWidgetStyleSheet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetStyleSettings_Statics::NewProp_DefaultStyleSheet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetStyleSettings_Statics::NewProp_DefaultStyleSheet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetStyleSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetStyleSettings_Statics::NewProp_DefaultStyleSheet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetStyleSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetStyleSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetStyleSettings_Statics::ClassParams = {
		&UWidgetStyleSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidgetStyleSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetStyleSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetStyleSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetStyleSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetStyleSettings()
	{
		if (!Z_Registration_Info_UClass_UWidgetStyleSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetStyleSettings.OuterSingleton, Z_Construct_UClass_UWidgetStyleSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetStyleSettings.OuterSingleton;
	}
	template<> STYLEDWIDGETS_API UClass* StaticClass<UWidgetStyleSettings>()
	{
		return UWidgetStyleSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetStyleSettings);
	UWidgetStyleSettings::~UWidgetStyleSettings() {}
	struct Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetStyleSettings, UWidgetStyleSettings::StaticClass, TEXT("UWidgetStyleSettings"), &Z_Registration_Info_UClass_UWidgetStyleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetStyleSettings), 2481848982U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleSettings_h_3630315389(TEXT("/Script/StyledWidgets"),
		Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
