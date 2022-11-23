// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StyledWidgets/Public/Widgets/StyledImageWidget.h"
#include "SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStyledImageWidget() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledImageWidget();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledImageWidget_NoRegister();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledWidget();
	UPackage* Z_Construct_UPackage__Script_StyledWidgets();
// End Cross Module References
	void UStyledImageWidget::StaticRegisterNativesUStyledImageWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStyledImageWidget);
	UClass* Z_Construct_UClass_UStyledImageWidget_NoRegister()
	{
		return UStyledImageWidget::StaticClass();
	}
	struct Z_Construct_UClass_UStyledImageWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSizeOverride_MetaData[];
#endif
		static void NewProp_bUseSizeOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSizeOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SizeOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStyledImageWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStyledWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_StyledWidgets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledImageWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Image (Styled)" },
		{ "IncludePath", "Widgets/StyledImageWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/StyledImageWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledImageWidget_Statics::NewProp_bUseSizeOverride_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// If true, uses the size override instead of the image size from the widget style.\n" },
		{ "ModuleRelativePath", "Public/Widgets/StyledImageWidget.h" },
		{ "ToolTip", "If true, uses the size override instead of the image size from the widget style." },
	};
#endif
	void Z_Construct_UClass_UStyledImageWidget_Statics::NewProp_bUseSizeOverride_SetBit(void* Obj)
	{
		((UStyledImageWidget*)Obj)->bUseSizeOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStyledImageWidget_Statics::NewProp_bUseSizeOverride = { "bUseSizeOverride", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStyledImageWidget), &Z_Construct_UClass_UStyledImageWidget_Statics::NewProp_bUseSizeOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStyledImageWidget_Statics::NewProp_bUseSizeOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledImageWidget_Statics::NewProp_bUseSizeOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledImageWidget_Statics::NewProp_SizeOverride_MetaData[] = {
		{ "Category", "Appearance" },
		{ "EditCondition", "bUseSizeOverride" },
		{ "ModuleRelativePath", "Public/Widgets/StyledImageWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStyledImageWidget_Statics::NewProp_SizeOverride = { "SizeOverride", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledImageWidget, SizeOverride), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UStyledImageWidget_Statics::NewProp_SizeOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledImageWidget_Statics::NewProp_SizeOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledImageWidget_Statics::NewProp_Brush_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/StyledImageWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStyledImageWidget_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledImageWidget, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UStyledImageWidget_Statics::NewProp_Brush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledImageWidget_Statics::NewProp_Brush_MetaData)) }; // 608192703
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStyledImageWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledImageWidget_Statics::NewProp_bUseSizeOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledImageWidget_Statics::NewProp_SizeOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledImageWidget_Statics::NewProp_Brush,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStyledImageWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStyledImageWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStyledImageWidget_Statics::ClassParams = {
		&UStyledImageWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStyledImageWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStyledImageWidget_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStyledImageWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledImageWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStyledImageWidget()
	{
		if (!Z_Registration_Info_UClass_UStyledImageWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStyledImageWidget.OuterSingleton, Z_Construct_UClass_UStyledImageWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStyledImageWidget.OuterSingleton;
	}
	template<> STYLEDWIDGETS_API UClass* StaticClass<UStyledImageWidget>()
	{
		return UStyledImageWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStyledImageWidget);
	UStyledImageWidget::~UStyledImageWidget() {}
	struct Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Widgets_StyledImageWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Widgets_StyledImageWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStyledImageWidget, UStyledImageWidget::StaticClass, TEXT("UStyledImageWidget"), &Z_Registration_Info_UClass_UStyledImageWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStyledImageWidget), 633193788U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Widgets_StyledImageWidget_h_524360626(TEXT("/Script/StyledWidgets"),
		Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Widgets_StyledImageWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Widgets_StyledImageWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
