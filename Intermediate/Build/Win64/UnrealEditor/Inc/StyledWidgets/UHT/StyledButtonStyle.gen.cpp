// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StyledWidgets/Public/Styles/StyledButtonStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStyledButtonStyle() {}
// Cross Module References
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledBorderStyle();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledButtonStyle();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledButtonStyle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StyledWidgets();
// End Cross Module References
	void UStyledButtonStyle::StaticRegisterNativesUStyledButtonStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStyledButtonStyle);
	UClass* Z_Construct_UClass_UStyledButtonStyle_NoRegister()
	{
		return UStyledButtonStyle::StaticClass();
	}
	struct Z_Construct_UClass_UStyledButtonStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStyledButtonStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStyledBorderStyle,
		(UObject* (*)())Z_Construct_UPackage__Script_StyledWidgets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledButtonStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Button" },
		{ "IncludePath", "Styles/StyledButtonStyle.h" },
		{ "ModuleRelativePath", "Public/Styles/StyledButtonStyle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStyledButtonStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStyledButtonStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStyledButtonStyle_Statics::ClassParams = {
		&UStyledButtonStyle::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStyledButtonStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledButtonStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStyledButtonStyle()
	{
		if (!Z_Registration_Info_UClass_UStyledButtonStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStyledButtonStyle.OuterSingleton, Z_Construct_UClass_UStyledButtonStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStyledButtonStyle.OuterSingleton;
	}
	template<> STYLEDWIDGETS_API UClass* StaticClass<UStyledButtonStyle>()
	{
		return UStyledButtonStyle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStyledButtonStyle);
	UStyledButtonStyle::~UStyledButtonStyle() {}
	struct Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledButtonStyle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledButtonStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStyledButtonStyle, UStyledButtonStyle::StaticClass, TEXT("UStyledButtonStyle"), &Z_Registration_Info_UClass_UStyledButtonStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStyledButtonStyle), 3561752062U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledButtonStyle_h_3950754660(TEXT("/Script/StyledWidgets"),
		Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledButtonStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Styles_StyledButtonStyle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
