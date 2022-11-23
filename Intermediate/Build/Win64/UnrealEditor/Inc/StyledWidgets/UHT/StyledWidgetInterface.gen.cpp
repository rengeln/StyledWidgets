// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StyledWidgets/Public/StyledWidgetInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStyledWidgetInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledWidgetInterface();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledWidgetInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StyledWidgets();
// End Cross Module References
	DEFINE_FUNCTION(IStyledWidgetInterface::execToggleStyleTag)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_StyleTag);
		P_GET_UBOOL(Z_Param_bToggle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleStyleTag(Z_Param_Out_StyleTag,Z_Param_bToggle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStyledWidgetInterface::execRemoveStyleTag)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_StyleTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveStyleTag(Z_Param_Out_StyleTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStyledWidgetInterface::execAddStyleTag)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_StyleTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStyleTag(Z_Param_Out_StyleTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStyledWidgetInterface::execSetIdentifier)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InIdentifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIdentifier(Z_Param_Out_InIdentifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStyledWidgetInterface::execGetIdentifier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetIdentifier();
		P_NATIVE_END;
	}
	void UStyledWidgetInterface::StaticRegisterNativesUStyledWidgetInterface()
	{
		UClass* Class = UStyledWidgetInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddStyleTag", &IStyledWidgetInterface::execAddStyleTag },
			{ "GetIdentifier", &IStyledWidgetInterface::execGetIdentifier },
			{ "RemoveStyleTag", &IStyledWidgetInterface::execRemoveStyleTag },
			{ "SetIdentifier", &IStyledWidgetInterface::execSetIdentifier },
			{ "ToggleStyleTag", &IStyledWidgetInterface::execToggleStyleTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStyledWidgetInterface_AddStyleTag_Statics
	{
		struct StyledWidgetInterface_eventAddStyleTag_Parms
		{
			FName StyleTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StyleTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StyleTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledWidgetInterface_AddStyleTag_Statics::NewProp_StyleTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStyledWidgetInterface_AddStyleTag_Statics::NewProp_StyleTag = { "StyleTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StyledWidgetInterface_eventAddStyleTag_Parms, StyleTag), METADATA_PARAMS(Z_Construct_UFunction_UStyledWidgetInterface_AddStyleTag_Statics::NewProp_StyleTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledWidgetInterface_AddStyleTag_Statics::NewProp_StyleTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStyledWidgetInterface_AddStyleTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStyledWidgetInterface_AddStyleTag_Statics::NewProp_StyleTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledWidgetInterface_AddStyleTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Style" },
		{ "ModuleRelativePath", "Public/StyledWidgetInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStyledWidgetInterface_AddStyleTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStyledWidgetInterface, nullptr, "AddStyleTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStyledWidgetInterface_AddStyleTag_Statics::StyledWidgetInterface_eventAddStyleTag_Parms), Z_Construct_UFunction_UStyledWidgetInterface_AddStyleTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledWidgetInterface_AddStyleTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStyledWidgetInterface_AddStyleTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledWidgetInterface_AddStyleTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStyledWidgetInterface_AddStyleTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStyledWidgetInterface_AddStyleTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStyledWidgetInterface_GetIdentifier_Statics
	{
		struct StyledWidgetInterface_eventGetIdentifier_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStyledWidgetInterface_GetIdentifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StyledWidgetInterface_eventGetIdentifier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStyledWidgetInterface_GetIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStyledWidgetInterface_GetIdentifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledWidgetInterface_GetIdentifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/StyledWidgetInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStyledWidgetInterface_GetIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStyledWidgetInterface, nullptr, "GetIdentifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStyledWidgetInterface_GetIdentifier_Statics::StyledWidgetInterface_eventGetIdentifier_Parms), Z_Construct_UFunction_UStyledWidgetInterface_GetIdentifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledWidgetInterface_GetIdentifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStyledWidgetInterface_GetIdentifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledWidgetInterface_GetIdentifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStyledWidgetInterface_GetIdentifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStyledWidgetInterface_GetIdentifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStyledWidgetInterface_RemoveStyleTag_Statics
	{
		struct StyledWidgetInterface_eventRemoveStyleTag_Parms
		{
			FName StyleTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StyleTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StyleTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledWidgetInterface_RemoveStyleTag_Statics::NewProp_StyleTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStyledWidgetInterface_RemoveStyleTag_Statics::NewProp_StyleTag = { "StyleTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StyledWidgetInterface_eventRemoveStyleTag_Parms, StyleTag), METADATA_PARAMS(Z_Construct_UFunction_UStyledWidgetInterface_RemoveStyleTag_Statics::NewProp_StyleTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledWidgetInterface_RemoveStyleTag_Statics::NewProp_StyleTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStyledWidgetInterface_RemoveStyleTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStyledWidgetInterface_RemoveStyleTag_Statics::NewProp_StyleTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledWidgetInterface_RemoveStyleTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Style" },
		{ "ModuleRelativePath", "Public/StyledWidgetInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStyledWidgetInterface_RemoveStyleTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStyledWidgetInterface, nullptr, "RemoveStyleTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStyledWidgetInterface_RemoveStyleTag_Statics::StyledWidgetInterface_eventRemoveStyleTag_Parms), Z_Construct_UFunction_UStyledWidgetInterface_RemoveStyleTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledWidgetInterface_RemoveStyleTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStyledWidgetInterface_RemoveStyleTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledWidgetInterface_RemoveStyleTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStyledWidgetInterface_RemoveStyleTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStyledWidgetInterface_RemoveStyleTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStyledWidgetInterface_SetIdentifier_Statics
	{
		struct StyledWidgetInterface_eventSetIdentifier_Parms
		{
			FName InIdentifier;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InIdentifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledWidgetInterface_SetIdentifier_Statics::NewProp_InIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStyledWidgetInterface_SetIdentifier_Statics::NewProp_InIdentifier = { "InIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StyledWidgetInterface_eventSetIdentifier_Parms, InIdentifier), METADATA_PARAMS(Z_Construct_UFunction_UStyledWidgetInterface_SetIdentifier_Statics::NewProp_InIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledWidgetInterface_SetIdentifier_Statics::NewProp_InIdentifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStyledWidgetInterface_SetIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStyledWidgetInterface_SetIdentifier_Statics::NewProp_InIdentifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledWidgetInterface_SetIdentifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/StyledWidgetInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStyledWidgetInterface_SetIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStyledWidgetInterface, nullptr, "SetIdentifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStyledWidgetInterface_SetIdentifier_Statics::StyledWidgetInterface_eventSetIdentifier_Parms), Z_Construct_UFunction_UStyledWidgetInterface_SetIdentifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledWidgetInterface_SetIdentifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStyledWidgetInterface_SetIdentifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledWidgetInterface_SetIdentifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStyledWidgetInterface_SetIdentifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStyledWidgetInterface_SetIdentifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStyledWidgetInterface_ToggleStyleTag_Statics
	{
		struct StyledWidgetInterface_eventToggleStyleTag_Parms
		{
			FName StyleTag;
			bool bToggle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StyleTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StyleTag;
		static void NewProp_bToggle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bToggle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledWidgetInterface_ToggleStyleTag_Statics::NewProp_StyleTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStyledWidgetInterface_ToggleStyleTag_Statics::NewProp_StyleTag = { "StyleTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StyledWidgetInterface_eventToggleStyleTag_Parms, StyleTag), METADATA_PARAMS(Z_Construct_UFunction_UStyledWidgetInterface_ToggleStyleTag_Statics::NewProp_StyleTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledWidgetInterface_ToggleStyleTag_Statics::NewProp_StyleTag_MetaData)) };
	void Z_Construct_UFunction_UStyledWidgetInterface_ToggleStyleTag_Statics::NewProp_bToggle_SetBit(void* Obj)
	{
		((StyledWidgetInterface_eventToggleStyleTag_Parms*)Obj)->bToggle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStyledWidgetInterface_ToggleStyleTag_Statics::NewProp_bToggle = { "bToggle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StyledWidgetInterface_eventToggleStyleTag_Parms), &Z_Construct_UFunction_UStyledWidgetInterface_ToggleStyleTag_Statics::NewProp_bToggle_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStyledWidgetInterface_ToggleStyleTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStyledWidgetInterface_ToggleStyleTag_Statics::NewProp_StyleTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStyledWidgetInterface_ToggleStyleTag_Statics::NewProp_bToggle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledWidgetInterface_ToggleStyleTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Style" },
		{ "ModuleRelativePath", "Public/StyledWidgetInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStyledWidgetInterface_ToggleStyleTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStyledWidgetInterface, nullptr, "ToggleStyleTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStyledWidgetInterface_ToggleStyleTag_Statics::StyledWidgetInterface_eventToggleStyleTag_Parms), Z_Construct_UFunction_UStyledWidgetInterface_ToggleStyleTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledWidgetInterface_ToggleStyleTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStyledWidgetInterface_ToggleStyleTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledWidgetInterface_ToggleStyleTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStyledWidgetInterface_ToggleStyleTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStyledWidgetInterface_ToggleStyleTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStyledWidgetInterface);
	UClass* Z_Construct_UClass_UStyledWidgetInterface_NoRegister()
	{
		return UStyledWidgetInterface::StaticClass();
	}
	struct Z_Construct_UClass_UStyledWidgetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStyledWidgetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_StyledWidgets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStyledWidgetInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStyledWidgetInterface_AddStyleTag, "AddStyleTag" }, // 3274707093
		{ &Z_Construct_UFunction_UStyledWidgetInterface_GetIdentifier, "GetIdentifier" }, // 4223117154
		{ &Z_Construct_UFunction_UStyledWidgetInterface_RemoveStyleTag, "RemoveStyleTag" }, // 3323937691
		{ &Z_Construct_UFunction_UStyledWidgetInterface_SetIdentifier, "SetIdentifier" }, // 1254395109
		{ &Z_Construct_UFunction_UStyledWidgetInterface_ToggleStyleTag, "ToggleStyleTag" }, // 3717395669
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledWidgetInterface_Statics::Class_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/StyledWidgetInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStyledWidgetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStyledWidgetInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStyledWidgetInterface_Statics::ClassParams = {
		&UStyledWidgetInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UStyledWidgetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledWidgetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStyledWidgetInterface()
	{
		if (!Z_Registration_Info_UClass_UStyledWidgetInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStyledWidgetInterface.OuterSingleton, Z_Construct_UClass_UStyledWidgetInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStyledWidgetInterface.OuterSingleton;
	}
	template<> STYLEDWIDGETS_API UClass* StaticClass<UStyledWidgetInterface>()
	{
		return UStyledWidgetInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStyledWidgetInterface);
	UStyledWidgetInterface::~UStyledWidgetInterface() {}
	struct Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStyledWidgetInterface, UStyledWidgetInterface::StaticClass, TEXT("UStyledWidgetInterface"), &Z_Registration_Info_UClass_UStyledWidgetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStyledWidgetInterface), 4001039763U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_2634344258(TEXT("/Script/StyledWidgets"),
		Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
