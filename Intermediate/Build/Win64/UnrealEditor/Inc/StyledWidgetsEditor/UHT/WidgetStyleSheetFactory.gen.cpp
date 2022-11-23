// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StyledWidgetsEditor/Private/WidgetStyleSheetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetStyleSheetFactory() {}
// Cross Module References
	STYLEDWIDGETSEDITOR_API UClass* Z_Construct_UClass_UWidgetStyleSheetFactory();
	STYLEDWIDGETSEDITOR_API UClass* Z_Construct_UClass_UWidgetStyleSheetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_StyledWidgetsEditor();
// End Cross Module References
	void UWidgetStyleSheetFactory::StaticRegisterNativesUWidgetStyleSheetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetStyleSheetFactory);
	UClass* Z_Construct_UClass_UWidgetStyleSheetFactory_NoRegister()
	{
		return UWidgetStyleSheetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetStyleSheetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetStyleSheetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_StyledWidgetsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetStyleSheetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WidgetStyleSheetFactory.h" },
		{ "ModuleRelativePath", "Private/WidgetStyleSheetFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetStyleSheetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetStyleSheetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetStyleSheetFactory_Statics::ClassParams = {
		&UWidgetStyleSheetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetStyleSheetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetStyleSheetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetStyleSheetFactory()
	{
		if (!Z_Registration_Info_UClass_UWidgetStyleSheetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetStyleSheetFactory.OuterSingleton, Z_Construct_UClass_UWidgetStyleSheetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetStyleSheetFactory.OuterSingleton;
	}
	template<> STYLEDWIDGETSEDITOR_API UClass* StaticClass<UWidgetStyleSheetFactory>()
	{
		return UWidgetStyleSheetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetStyleSheetFactory);
	UWidgetStyleSheetFactory::~UWidgetStyleSheetFactory() {}
	struct Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgetsEditor_Private_WidgetStyleSheetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgetsEditor_Private_WidgetStyleSheetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetStyleSheetFactory, UWidgetStyleSheetFactory::StaticClass, TEXT("UWidgetStyleSheetFactory"), &Z_Registration_Info_UClass_UWidgetStyleSheetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetStyleSheetFactory), 327104486U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgetsEditor_Private_WidgetStyleSheetFactory_h_208800884(TEXT("/Script/StyledWidgetsEditor"),
		Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgetsEditor_Private_WidgetStyleSheetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgetsEditor_Private_WidgetStyleSheetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
