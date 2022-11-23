// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StyledWidgets/Public/Widgets/StyledProgressBarWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStyledProgressBarWidget() {}
// Cross Module References
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledProgressBarWidget();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledProgressBarWidget_NoRegister();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledWidget();
	UPackage* Z_Construct_UPackage__Script_StyledWidgets();
// End Cross Module References
	DEFINE_FUNCTION(UStyledProgressBarWidget::execGetPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStyledProgressBarWidget::execSetPercent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPercent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPercent(Z_Param_InPercent);
		P_NATIVE_END;
	}
	void UStyledProgressBarWidget::StaticRegisterNativesUStyledProgressBarWidget()
	{
		UClass* Class = UStyledProgressBarWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPercent", &UStyledProgressBarWidget::execGetPercent },
			{ "SetPercent", &UStyledProgressBarWidget::execSetPercent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStyledProgressBarWidget_GetPercent_Statics
	{
		struct StyledProgressBarWidget_eventGetPercent_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStyledProgressBarWidget_GetPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StyledProgressBarWidget_eventGetPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStyledProgressBarWidget_GetPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStyledProgressBarWidget_GetPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledProgressBarWidget_GetPercent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widgets|Progress Bar" },
		{ "ModuleRelativePath", "Public/Widgets/StyledProgressBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStyledProgressBarWidget_GetPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStyledProgressBarWidget, nullptr, "GetPercent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStyledProgressBarWidget_GetPercent_Statics::StyledProgressBarWidget_eventGetPercent_Parms), Z_Construct_UFunction_UStyledProgressBarWidget_GetPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledProgressBarWidget_GetPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStyledProgressBarWidget_GetPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledProgressBarWidget_GetPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStyledProgressBarWidget_GetPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStyledProgressBarWidget_GetPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStyledProgressBarWidget_SetPercent_Statics
	{
		struct StyledProgressBarWidget_eventSetPercent_Parms
		{
			float InPercent;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStyledProgressBarWidget_SetPercent_Statics::NewProp_InPercent = { "InPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StyledProgressBarWidget_eventSetPercent_Parms, InPercent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStyledProgressBarWidget_SetPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStyledProgressBarWidget_SetPercent_Statics::NewProp_InPercent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledProgressBarWidget_SetPercent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widgets|Progress Bar" },
		{ "ModuleRelativePath", "Public/Widgets/StyledProgressBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStyledProgressBarWidget_SetPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStyledProgressBarWidget, nullptr, "SetPercent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStyledProgressBarWidget_SetPercent_Statics::StyledProgressBarWidget_eventSetPercent_Parms), Z_Construct_UFunction_UStyledProgressBarWidget_SetPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledProgressBarWidget_SetPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStyledProgressBarWidget_SetPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledProgressBarWidget_SetPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStyledProgressBarWidget_SetPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStyledProgressBarWidget_SetPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStyledProgressBarWidget);
	UClass* Z_Construct_UClass_UStyledProgressBarWidget_NoRegister()
	{
		return UStyledProgressBarWidget::StaticClass();
	}
	struct Z_Construct_UClass_UStyledProgressBarWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Percent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStyledProgressBarWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStyledWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_StyledWidgets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStyledProgressBarWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStyledProgressBarWidget_GetPercent, "GetPercent" }, // 2641719955
		{ &Z_Construct_UFunction_UStyledProgressBarWidget_SetPercent, "SetPercent" }, // 3580687248
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledProgressBarWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Progress Bar (Styled)" },
		{ "IncludePath", "Widgets/StyledProgressBarWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/StyledProgressBarWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledProgressBarWidget_Statics::NewProp_Percent_MetaData[] = {
		{ "Category", "Content" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Widgets/StyledProgressBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStyledProgressBarWidget_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledProgressBarWidget, Percent), METADATA_PARAMS(Z_Construct_UClass_UStyledProgressBarWidget_Statics::NewProp_Percent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledProgressBarWidget_Statics::NewProp_Percent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStyledProgressBarWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledProgressBarWidget_Statics::NewProp_Percent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStyledProgressBarWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStyledProgressBarWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStyledProgressBarWidget_Statics::ClassParams = {
		&UStyledProgressBarWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStyledProgressBarWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStyledProgressBarWidget_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStyledProgressBarWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledProgressBarWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStyledProgressBarWidget()
	{
		if (!Z_Registration_Info_UClass_UStyledProgressBarWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStyledProgressBarWidget.OuterSingleton, Z_Construct_UClass_UStyledProgressBarWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStyledProgressBarWidget.OuterSingleton;
	}
	template<> STYLEDWIDGETS_API UClass* StaticClass<UStyledProgressBarWidget>()
	{
		return UStyledProgressBarWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStyledProgressBarWidget);
	UStyledProgressBarWidget::~UStyledProgressBarWidget() {}
	struct Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Widgets_StyledProgressBarWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Widgets_StyledProgressBarWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStyledProgressBarWidget, UStyledProgressBarWidget::StaticClass, TEXT("UStyledProgressBarWidget"), &Z_Registration_Info_UClass_UStyledProgressBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStyledProgressBarWidget), 704147707U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Widgets_StyledProgressBarWidget_h_2451380308(TEXT("/Script/StyledWidgets"),
		Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Widgets_StyledProgressBarWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Widgets_StyledProgressBarWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
