// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StyledWidgets/Public/WidgetStyleManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetStyleManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UWidgetStyleManager();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UWidgetStyleManager_NoRegister();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UWidgetStyleSheet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StyledWidgets();
// End Cross Module References
	DEFINE_FUNCTION(UWidgetStyleManager::execGetDefaultStyleSheet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidgetStyleSheet**)Z_Param__Result=P_THIS->GetDefaultStyleSheet();
		P_NATIVE_END;
	}
	void UWidgetStyleManager::StaticRegisterNativesUWidgetStyleManager()
	{
		UClass* Class = UWidgetStyleManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultStyleSheet", &UWidgetStyleManager::execGetDefaultStyleSheet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetStyleManager_GetDefaultStyleSheet_Statics
	{
		struct WidgetStyleManager_eventGetDefaultStyleSheet_Parms
		{
			UWidgetStyleSheet* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetStyleManager_GetDefaultStyleSheet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetStyleManager_eventGetDefaultStyleSheet_Parms, ReturnValue), Z_Construct_UClass_UWidgetStyleSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetStyleManager_GetDefaultStyleSheet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetStyleManager_GetDefaultStyleSheet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetStyleManager_GetDefaultStyleSheet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WidgetStyleManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetStyleManager_GetDefaultStyleSheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetStyleManager, nullptr, "GetDefaultStyleSheet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetStyleManager_GetDefaultStyleSheet_Statics::WidgetStyleManager_eventGetDefaultStyleSheet_Parms), Z_Construct_UFunction_UWidgetStyleManager_GetDefaultStyleSheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetStyleManager_GetDefaultStyleSheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetStyleManager_GetDefaultStyleSheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetStyleManager_GetDefaultStyleSheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetStyleManager_GetDefaultStyleSheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetStyleManager_GetDefaultStyleSheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetStyleManager);
	UClass* Z_Construct_UClass_UWidgetStyleManager_NoRegister()
	{
		return UWidgetStyleManager::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetStyleManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStyleSheet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultStyleSheet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetStyleManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_StyledWidgets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetStyleManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetStyleManager_GetDefaultStyleSheet, "GetDefaultStyleSheet" }, // 3918018886
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetStyleManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WidgetStyleManager.h" },
		{ "ModuleRelativePath", "Public/WidgetStyleManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetStyleManager_Statics::NewProp_DefaultStyleSheet_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetStyleManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetStyleManager_Statics::NewProp_DefaultStyleSheet = { "DefaultStyleSheet", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetStyleManager, DefaultStyleSheet), Z_Construct_UClass_UWidgetStyleSheet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetStyleManager_Statics::NewProp_DefaultStyleSheet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetStyleManager_Statics::NewProp_DefaultStyleSheet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetStyleManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetStyleManager_Statics::NewProp_DefaultStyleSheet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetStyleManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetStyleManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetStyleManager_Statics::ClassParams = {
		&UWidgetStyleManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidgetStyleManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetStyleManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetStyleManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetStyleManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetStyleManager()
	{
		if (!Z_Registration_Info_UClass_UWidgetStyleManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetStyleManager.OuterSingleton, Z_Construct_UClass_UWidgetStyleManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetStyleManager.OuterSingleton;
	}
	template<> STYLEDWIDGETS_API UClass* StaticClass<UWidgetStyleManager>()
	{
		return UWidgetStyleManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetStyleManager);
	UWidgetStyleManager::~UWidgetStyleManager() {}
	struct Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetStyleManager, UWidgetStyleManager::StaticClass, TEXT("UWidgetStyleManager"), &Z_Registration_Info_UClass_UWidgetStyleManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetStyleManager), 1089784995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleManager_h_575339906(TEXT("/Script/StyledWidgets"),
		Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_WidgetStyleManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
