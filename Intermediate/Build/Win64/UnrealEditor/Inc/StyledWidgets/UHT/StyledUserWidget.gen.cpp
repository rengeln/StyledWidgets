// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StyledWidgets/Public/StyledUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStyledUserWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledUserWidget();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledUserWidget_NoRegister();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledWidgetInterface_NoRegister();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UWidgetStyleBase_NoRegister();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UWidgetStyleSheet_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_StyledWidgets();
// End Cross Module References
	DEFINE_FUNCTION(UStyledUserWidget::execToggleStyleTag)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_StyleTag);
		P_GET_UBOOL(Z_Param_bToggle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleStyleTag(Z_Param_Out_StyleTag,Z_Param_bToggle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStyledUserWidget::execRemoveStyleTag)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_StyleTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveStyleTag(Z_Param_Out_StyleTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStyledUserWidget::execAddStyleTag)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_StyleTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStyleTag(Z_Param_Out_StyleTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStyledUserWidget::execSetIdentifier)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InIdentifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIdentifier(Z_Param_Out_InIdentifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStyledUserWidget::execGetIdentifier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetIdentifier();
		P_NATIVE_END;
	}
	struct StyledUserWidget_eventApplyStyle_Parms
	{
		UWidgetStyleBase* InStyle;
	};
	static FName NAME_UStyledUserWidget_ApplyStyle = FName(TEXT("ApplyStyle"));
	void UStyledUserWidget::ApplyStyle(UWidgetStyleBase* InStyle)
	{
		StyledUserWidget_eventApplyStyle_Parms Parms;
		Parms.InStyle=InStyle;
		ProcessEvent(FindFunctionChecked(NAME_UStyledUserWidget_ApplyStyle),&Parms);
	}
	static FName NAME_UStyledUserWidget_OnClicked = FName(TEXT("OnClicked"));
	void UStyledUserWidget::OnClicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_UStyledUserWidget_OnClicked),NULL);
	}
	void UStyledUserWidget::StaticRegisterNativesUStyledUserWidget()
	{
		UClass* Class = UStyledUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddStyleTag", &UStyledUserWidget::execAddStyleTag },
			{ "GetIdentifier", &UStyledUserWidget::execGetIdentifier },
			{ "RemoveStyleTag", &UStyledUserWidget::execRemoveStyleTag },
			{ "SetIdentifier", &UStyledUserWidget::execSetIdentifier },
			{ "ToggleStyleTag", &UStyledUserWidget::execToggleStyleTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStyledUserWidget_AddStyleTag_Statics
	{
		struct StyledUserWidget_eventAddStyleTag_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledUserWidget_AddStyleTag_Statics::NewProp_StyleTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStyledUserWidget_AddStyleTag_Statics::NewProp_StyleTag = { "StyleTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StyledUserWidget_eventAddStyleTag_Parms, StyleTag), METADATA_PARAMS(Z_Construct_UFunction_UStyledUserWidget_AddStyleTag_Statics::NewProp_StyleTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledUserWidget_AddStyleTag_Statics::NewProp_StyleTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStyledUserWidget_AddStyleTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStyledUserWidget_AddStyleTag_Statics::NewProp_StyleTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledUserWidget_AddStyleTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Style" },
		{ "ModuleRelativePath", "Public/StyledUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStyledUserWidget_AddStyleTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStyledUserWidget, nullptr, "AddStyleTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStyledUserWidget_AddStyleTag_Statics::StyledUserWidget_eventAddStyleTag_Parms), Z_Construct_UFunction_UStyledUserWidget_AddStyleTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledUserWidget_AddStyleTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStyledUserWidget_AddStyleTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledUserWidget_AddStyleTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStyledUserWidget_AddStyleTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStyledUserWidget_AddStyleTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStyledUserWidget_ApplyStyle_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStyledUserWidget_ApplyStyle_Statics::NewProp_InStyle = { "InStyle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StyledUserWidget_eventApplyStyle_Parms, InStyle), Z_Construct_UClass_UWidgetStyleBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStyledUserWidget_ApplyStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStyledUserWidget_ApplyStyle_Statics::NewProp_InStyle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledUserWidget_ApplyStyle_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Override this to apply a style to this widget.\n" },
		{ "ModuleRelativePath", "Public/StyledUserWidget.h" },
		{ "ToolTip", "Override this to apply a style to this widget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStyledUserWidget_ApplyStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStyledUserWidget, nullptr, "ApplyStyle", nullptr, nullptr, sizeof(StyledUserWidget_eventApplyStyle_Parms), Z_Construct_UFunction_UStyledUserWidget_ApplyStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledUserWidget_ApplyStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStyledUserWidget_ApplyStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledUserWidget_ApplyStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStyledUserWidget_ApplyStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStyledUserWidget_ApplyStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStyledUserWidget_GetIdentifier_Statics
	{
		struct StyledUserWidget_eventGetIdentifier_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStyledUserWidget_GetIdentifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StyledUserWidget_eventGetIdentifier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStyledUserWidget_GetIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStyledUserWidget_GetIdentifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledUserWidget_GetIdentifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/StyledUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStyledUserWidget_GetIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStyledUserWidget, nullptr, "GetIdentifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStyledUserWidget_GetIdentifier_Statics::StyledUserWidget_eventGetIdentifier_Parms), Z_Construct_UFunction_UStyledUserWidget_GetIdentifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledUserWidget_GetIdentifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStyledUserWidget_GetIdentifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledUserWidget_GetIdentifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStyledUserWidget_GetIdentifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStyledUserWidget_GetIdentifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStyledUserWidget_OnClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledUserWidget_OnClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/StyledUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStyledUserWidget_OnClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStyledUserWidget, nullptr, "OnClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStyledUserWidget_OnClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledUserWidget_OnClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStyledUserWidget_OnClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStyledUserWidget_OnClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStyledUserWidget_RemoveStyleTag_Statics
	{
		struct StyledUserWidget_eventRemoveStyleTag_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledUserWidget_RemoveStyleTag_Statics::NewProp_StyleTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStyledUserWidget_RemoveStyleTag_Statics::NewProp_StyleTag = { "StyleTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StyledUserWidget_eventRemoveStyleTag_Parms, StyleTag), METADATA_PARAMS(Z_Construct_UFunction_UStyledUserWidget_RemoveStyleTag_Statics::NewProp_StyleTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledUserWidget_RemoveStyleTag_Statics::NewProp_StyleTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStyledUserWidget_RemoveStyleTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStyledUserWidget_RemoveStyleTag_Statics::NewProp_StyleTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledUserWidget_RemoveStyleTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Style" },
		{ "ModuleRelativePath", "Public/StyledUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStyledUserWidget_RemoveStyleTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStyledUserWidget, nullptr, "RemoveStyleTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStyledUserWidget_RemoveStyleTag_Statics::StyledUserWidget_eventRemoveStyleTag_Parms), Z_Construct_UFunction_UStyledUserWidget_RemoveStyleTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledUserWidget_RemoveStyleTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStyledUserWidget_RemoveStyleTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledUserWidget_RemoveStyleTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStyledUserWidget_RemoveStyleTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStyledUserWidget_RemoveStyleTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStyledUserWidget_SetIdentifier_Statics
	{
		struct StyledUserWidget_eventSetIdentifier_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledUserWidget_SetIdentifier_Statics::NewProp_InIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStyledUserWidget_SetIdentifier_Statics::NewProp_InIdentifier = { "InIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StyledUserWidget_eventSetIdentifier_Parms, InIdentifier), METADATA_PARAMS(Z_Construct_UFunction_UStyledUserWidget_SetIdentifier_Statics::NewProp_InIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledUserWidget_SetIdentifier_Statics::NewProp_InIdentifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStyledUserWidget_SetIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStyledUserWidget_SetIdentifier_Statics::NewProp_InIdentifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledUserWidget_SetIdentifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/StyledUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStyledUserWidget_SetIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStyledUserWidget, nullptr, "SetIdentifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStyledUserWidget_SetIdentifier_Statics::StyledUserWidget_eventSetIdentifier_Parms), Z_Construct_UFunction_UStyledUserWidget_SetIdentifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledUserWidget_SetIdentifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStyledUserWidget_SetIdentifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledUserWidget_SetIdentifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStyledUserWidget_SetIdentifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStyledUserWidget_SetIdentifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStyledUserWidget_ToggleStyleTag_Statics
	{
		struct StyledUserWidget_eventToggleStyleTag_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledUserWidget_ToggleStyleTag_Statics::NewProp_StyleTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStyledUserWidget_ToggleStyleTag_Statics::NewProp_StyleTag = { "StyleTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StyledUserWidget_eventToggleStyleTag_Parms, StyleTag), METADATA_PARAMS(Z_Construct_UFunction_UStyledUserWidget_ToggleStyleTag_Statics::NewProp_StyleTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledUserWidget_ToggleStyleTag_Statics::NewProp_StyleTag_MetaData)) };
	void Z_Construct_UFunction_UStyledUserWidget_ToggleStyleTag_Statics::NewProp_bToggle_SetBit(void* Obj)
	{
		((StyledUserWidget_eventToggleStyleTag_Parms*)Obj)->bToggle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStyledUserWidget_ToggleStyleTag_Statics::NewProp_bToggle = { "bToggle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StyledUserWidget_eventToggleStyleTag_Parms), &Z_Construct_UFunction_UStyledUserWidget_ToggleStyleTag_Statics::NewProp_bToggle_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStyledUserWidget_ToggleStyleTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStyledUserWidget_ToggleStyleTag_Statics::NewProp_StyleTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStyledUserWidget_ToggleStyleTag_Statics::NewProp_bToggle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledUserWidget_ToggleStyleTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget|Style" },
		{ "ModuleRelativePath", "Public/StyledUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStyledUserWidget_ToggleStyleTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStyledUserWidget, nullptr, "ToggleStyleTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStyledUserWidget_ToggleStyleTag_Statics::StyledUserWidget_eventToggleStyleTag_Parms), Z_Construct_UFunction_UStyledUserWidget_ToggleStyleTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledUserWidget_ToggleStyleTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStyledUserWidget_ToggleStyleTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledUserWidget_ToggleStyleTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStyledUserWidget_ToggleStyleTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStyledUserWidget_ToggleStyleTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStyledUserWidget);
	UClass* Z_Construct_UClass_UStyledUserWidget_NoRegister()
	{
		return UStyledUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UStyledUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StyleClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StyleClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Identifier;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StyleTagsString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StyleTagsString;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FNamePropertyParams NewProp_StyleTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StyleTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StyleTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateTagsToChildren_MetaData[];
#endif
		static void NewProp_bPropagateTagsToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateTagsToChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideStyleSheet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideStyleSheet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseInlineStyle_MetaData[];
#endif
		static void NewProp_bUseInlineStyle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInlineStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StyleInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StyleInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHoverable_MetaData[];
#endif
		static void NewProp_bIsHoverable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHoverable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsClickable_MetaData[];
#endif
		static void NewProp_bIsClickable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsClickable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStyledUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_StyledWidgets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStyledUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStyledUserWidget_AddStyleTag, "AddStyleTag" }, // 2935464642
		{ &Z_Construct_UFunction_UStyledUserWidget_ApplyStyle, "ApplyStyle" }, // 263286543
		{ &Z_Construct_UFunction_UStyledUserWidget_GetIdentifier, "GetIdentifier" }, // 1521606057
		{ &Z_Construct_UFunction_UStyledUserWidget_OnClicked, "OnClicked" }, // 2272403258
		{ &Z_Construct_UFunction_UStyledUserWidget_RemoveStyleTag, "RemoveStyleTag" }, // 2092923002
		{ &Z_Construct_UFunction_UStyledUserWidget_SetIdentifier, "SetIdentifier" }, // 2345889221
		{ &Z_Construct_UFunction_UStyledUserWidget_ToggleStyleTag, "ToggleStyleTag" }, // 4142712398
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledUserWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n// Base class for styled user widgets.\n//\n" },
		{ "IncludePath", "StyledUserWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StyledUserWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for styled user widgets." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_StyleClass_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "// In order for Apply Style to be called you must provide a style class here.\n" },
		{ "ModuleRelativePath", "Public/StyledUserWidget.h" },
		{ "ToolTip", "In order for Apply Style to be called you must provide a style class here." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_StyleClass = { "StyleClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledUserWidget, StyleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWidgetStyleBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_StyleClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_StyleClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_Identifier_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "// Name which can be queried to determine this widget's identity and to specialize its style\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/StyledUserWidget.h" },
		{ "ToolTip", "Name which can be queried to determine this widget's identity and to specialize its style" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0021080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledUserWidget, Identifier), METADATA_PARAMS(Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_Identifier_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_StyleTagsString_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "// List of Style Tags for this widget, separated by spaces. Additional tags may be added or removed at runtime.\n" },
		{ "DisplayName", "Style Tags" },
		{ "ModuleRelativePath", "Public/StyledUserWidget.h" },
		{ "ToolTip", "List of Style Tags for this widget, separated by spaces. Additional tags may be added or removed at runtime." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_StyleTagsString = { "StyleTagsString", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledUserWidget, StyleTagsString), METADATA_PARAMS(Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_StyleTagsString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_StyleTagsString_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_StyleTags_Inner = { "StyleTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_StyleTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/StyledUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_StyleTags = { "StyleTags", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledUserWidget, StyleTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_StyleTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_StyleTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bPropagateTagsToChildren_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "// If true, any tags added to this widget are also added to all child widgets.\n" },
		{ "ModuleRelativePath", "Public/StyledUserWidget.h" },
		{ "ToolTip", "If true, any tags added to this widget are also added to all child widgets." },
	};
#endif
	void Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bPropagateTagsToChildren_SetBit(void* Obj)
	{
		((UStyledUserWidget*)Obj)->bPropagateTagsToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bPropagateTagsToChildren = { "bPropagateTagsToChildren", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStyledUserWidget), &Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bPropagateTagsToChildren_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bPropagateTagsToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bPropagateTagsToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_OverrideStyleSheet_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "// Overrides the style sheet used to style this widget. If left blank, the project default style sheet is used.\n" },
		{ "ModuleRelativePath", "Public/StyledUserWidget.h" },
		{ "ToolTip", "Overrides the style sheet used to style this widget. If left blank, the project default style sheet is used." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_OverrideStyleSheet = { "OverrideStyleSheet", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledUserWidget, OverrideStyleSheet), Z_Construct_UClass_UWidgetStyleSheet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_OverrideStyleSheet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_OverrideStyleSheet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bUseInlineStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "// If set, the inline style is used instead of the style sheet.\n" },
		{ "ModuleRelativePath", "Public/StyledUserWidget.h" },
		{ "ToolTip", "If set, the inline style is used instead of the style sheet." },
	};
#endif
	void Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bUseInlineStyle_SetBit(void* Obj)
	{
		((UStyledUserWidget*)Obj)->bUseInlineStyle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bUseInlineStyle = { "bUseInlineStyle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStyledUserWidget), &Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bUseInlineStyle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bUseInlineStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bUseInlineStyle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_StyleInstance_MetaData[] = {
		{ "Category", "Style" },
		{ "DisplayName", "Inline Style" },
		{ "EditCondition", "bUseInlineStyle" },
		{ "EditConditionHides", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StyledUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_StyleInstance = { "StyleInstance", nullptr, (EPropertyFlags)0x0022080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledUserWidget, StyleInstance), Z_Construct_UClass_UWidgetStyleBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_StyleInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_StyleInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bIsHoverable_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/StyledUserWidget.h" },
	};
#endif
	void Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bIsHoverable_SetBit(void* Obj)
	{
		((UStyledUserWidget*)Obj)->bIsHoverable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bIsHoverable = { "bIsHoverable", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStyledUserWidget), &Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bIsHoverable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bIsHoverable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bIsHoverable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bIsClickable_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/StyledUserWidget.h" },
	};
#endif
	void Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bIsClickable_SetBit(void* Obj)
	{
		((UStyledUserWidget*)Obj)->bIsClickable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bIsClickable = { "bIsClickable", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStyledUserWidget), &Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bIsClickable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bIsClickable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bIsClickable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStyledUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_StyleClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_Identifier,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_StyleTagsString,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_StyleTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_StyleTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bPropagateTagsToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_OverrideStyleSheet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bUseInlineStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_StyleInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bIsHoverable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledUserWidget_Statics::NewProp_bIsClickable,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStyledUserWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStyledWidgetInterface_NoRegister, (int32)VTABLE_OFFSET(UStyledUserWidget, IStyledWidgetInterface), false },  // 4001039763
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStyledUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStyledUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStyledUserWidget_Statics::ClassParams = {
		&UStyledUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStyledUserWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStyledUserWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UStyledUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStyledUserWidget()
	{
		if (!Z_Registration_Info_UClass_UStyledUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStyledUserWidget.OuterSingleton, Z_Construct_UClass_UStyledUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStyledUserWidget.OuterSingleton;
	}
	template<> STYLEDWIDGETS_API UClass* StaticClass<UStyledUserWidget>()
	{
		return UStyledUserWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStyledUserWidget);
	UStyledUserWidget::~UStyledUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStyledUserWidget, UStyledUserWidget::StaticClass, TEXT("UStyledUserWidget"), &Z_Registration_Info_UClass_UStyledUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStyledUserWidget), 3399548314U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledUserWidget_h_2424071946(TEXT("/Script/StyledWidgets"),
		Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
