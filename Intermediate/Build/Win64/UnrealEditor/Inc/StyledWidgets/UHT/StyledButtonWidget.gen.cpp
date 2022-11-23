// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StyledWidgets/Public/Widgets/StyledButtonWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStyledButtonWidget() {}
// Cross Module References
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledBorderWidget();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledButtonWidget();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledButtonWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StyledWidgets();
// End Cross Module References
	void UStyledButtonWidget::StaticRegisterNativesUStyledButtonWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStyledButtonWidget);
	UClass* Z_Construct_UClass_UStyledButtonWidget_NoRegister()
	{
		return UStyledButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UStyledButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStyledButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStyledBorderWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_StyledWidgets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n// A button widget is really just a border widget with some sensible defaults for interaction.\n//\n" },
		{ "DisplayName", "Button (Styled)" },
		{ "IncludePath", "Widgets/StyledButtonWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/StyledButtonWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A button widget is really just a border widget with some sensible defaults for interaction." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStyledButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStyledButtonWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStyledButtonWidget_Statics::ClassParams = {
		&UStyledButtonWidget::StaticClass,
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
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStyledButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStyledButtonWidget()
	{
		if (!Z_Registration_Info_UClass_UStyledButtonWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStyledButtonWidget.OuterSingleton, Z_Construct_UClass_UStyledButtonWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStyledButtonWidget.OuterSingleton;
	}
	template<> STYLEDWIDGETS_API UClass* StaticClass<UStyledButtonWidget>()
	{
		return UStyledButtonWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStyledButtonWidget);
	UStyledButtonWidget::~UStyledButtonWidget() {}
	struct Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Widgets_StyledButtonWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Widgets_StyledButtonWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStyledButtonWidget, UStyledButtonWidget::StaticClass, TEXT("UStyledButtonWidget"), &Z_Registration_Info_UClass_UStyledButtonWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStyledButtonWidget), 1545533424U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Widgets_StyledButtonWidget_h_1288377310(TEXT("/Script/StyledWidgets"),
		Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Widgets_StyledButtonWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Widgets_StyledButtonWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
