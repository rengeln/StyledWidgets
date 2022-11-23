// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StyledWidgets/Public/Widgets/StyledTextWidget.h"
#include "SlateCore/Public/Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStyledTextWidget() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextOverflowPolicy();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextTransformPolicy();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledTextWidget();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledTextWidget_NoRegister();
	STYLEDWIDGETS_API UClass* Z_Construct_UClass_UStyledWidget();
	UPackage* Z_Construct_UPackage__Script_StyledWidgets();
// End Cross Module References
	DEFINE_FUNCTION(UStyledTextWidget::execGetText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStyledTextWidget::execSetText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetText(Z_Param_Out_InText);
		P_NATIVE_END;
	}
	void UStyledTextWidget::StaticRegisterNativesUStyledTextWidget()
	{
		UClass* Class = UStyledTextWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetText", &UStyledTextWidget::execGetText },
			{ "SetText", &UStyledTextWidget::execSetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStyledTextWidget_GetText_Statics
	{
		struct StyledTextWidget_eventGetText_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UStyledTextWidget_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StyledTextWidget_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStyledTextWidget_GetText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStyledTextWidget_GetText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledTextWidget_GetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widgets|Text" },
		{ "ModuleRelativePath", "Public/Widgets/StyledTextWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStyledTextWidget_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStyledTextWidget, nullptr, "GetText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStyledTextWidget_GetText_Statics::StyledTextWidget_eventGetText_Parms), Z_Construct_UFunction_UStyledTextWidget_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledTextWidget_GetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStyledTextWidget_GetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledTextWidget_GetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStyledTextWidget_GetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStyledTextWidget_GetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStyledTextWidget_SetText_Statics
	{
		struct StyledTextWidget_eventSetText_Parms
		{
			FText InText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledTextWidget_SetText_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UStyledTextWidget_SetText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StyledTextWidget_eventSetText_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UStyledTextWidget_SetText_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledTextWidget_SetText_Statics::NewProp_InText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStyledTextWidget_SetText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStyledTextWidget_SetText_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStyledTextWidget_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widgets|Text" },
		{ "ModuleRelativePath", "Public/Widgets/StyledTextWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStyledTextWidget_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStyledTextWidget, nullptr, "SetText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStyledTextWidget_SetText_Statics::StyledTextWidget_eventSetText_Parms), Z_Construct_UFunction_UStyledTextWidget_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledTextWidget_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStyledTextWidget_SetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStyledTextWidget_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStyledTextWidget_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStyledTextWidget_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStyledTextWidget);
	UClass* Z_Construct_UClass_UStyledTextWidget_NoRegister()
	{
		return UStyledTextWidget::StaticClass();
	}
	struct Z_Construct_UClass_UStyledTextWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Justification_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Justification;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Margin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoWrap_MetaData[];
#endif
		static void NewProp_bAutoWrap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoWrap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WrapAt_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WrapAt;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransformPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformPolicy;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverflowPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverflowPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverflowPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDesiredWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDesiredWidth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStyledTextWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStyledWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_StyledWidgets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStyledTextWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStyledTextWidget_GetText, "GetText" }, // 3861483202
		{ &Z_Construct_UFunction_UStyledTextWidget_SetText, "SetText" }, // 3063915900
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Text (Styled)" },
		{ "IncludePath", "Widgets/StyledTextWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/StyledTextWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/Widgets/StyledTextWidget.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledTextWidget, Text), METADATA_PARAMS(Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_Justification_MetaData[] = {
		{ "Category", "Arrangement" },
		{ "ModuleRelativePath", "Public/Widgets/StyledTextWidget.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_Justification = { "Justification", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledTextWidget, Justification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_Justification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_Justification_MetaData)) }; // 2107748386
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_Margin_MetaData[] = {
		{ "Category", "Arrangement" },
		{ "Comment", "// The amount of blank space left around the edges of the text.\n" },
		{ "ModuleRelativePath", "Public/Widgets/StyledTextWidget.h" },
		{ "ToolTip", "The amount of blank space left around the edges of the text." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_Margin = { "Margin", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledTextWidget, Margin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_Margin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_Margin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_bAutoWrap_MetaData[] = {
		{ "Category", "Arrangement|Wrapping" },
		{ "Comment", "// If true, text will be wrapped automatically based on the widget's width.\n" },
		{ "ModuleRelativePath", "Public/Widgets/StyledTextWidget.h" },
		{ "ToolTip", "If true, text will be wrapped automatically based on the widget's width." },
	};
#endif
	void Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_bAutoWrap_SetBit(void* Obj)
	{
		((UStyledTextWidget*)Obj)->bAutoWrap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_bAutoWrap = { "bAutoWrap", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStyledTextWidget), &Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_bAutoWrap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_bAutoWrap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_bAutoWrap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_WrapAt_MetaData[] = {
		{ "Category", "Arrangement|Wrapping" },
		{ "Comment", "// If greater than zero, text will wrap onto a new line when it exceeds this length.\n" },
		{ "ModuleRelativePath", "Public/Widgets/StyledTextWidget.h" },
		{ "ToolTip", "If greater than zero, text will wrap onto a new line when it exceeds this length." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_WrapAt = { "WrapAt", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledTextWidget, WrapAt), METADATA_PARAMS(Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_WrapAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_WrapAt_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_TransformPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_TransformPolicy_MetaData[] = {
		{ "Category", "Arrangement" },
		{ "Comment", "// Controls how text is transformed for display.\n" },
		{ "ModuleRelativePath", "Public/Widgets/StyledTextWidget.h" },
		{ "ToolTip", "Controls how text is transformed for display." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_TransformPolicy = { "TransformPolicy", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledTextWidget, TransformPolicy), Z_Construct_UEnum_SlateCore_ETextTransformPolicy, METADATA_PARAMS(Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_TransformPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_TransformPolicy_MetaData)) }; // 883314779
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_OverflowPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_OverflowPolicy_MetaData[] = {
		{ "Category", "Arrangement" },
		{ "Comment", "// Controls how text that cannot fit in this widget's space behaves.\n" },
		{ "ModuleRelativePath", "Public/Widgets/StyledTextWidget.h" },
		{ "ToolTip", "Controls how text that cannot fit in this widget's space behaves." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_OverflowPolicy = { "OverflowPolicy", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledTextWidget, OverflowPolicy), Z_Construct_UEnum_SlateCore_ETextOverflowPolicy, METADATA_PARAMS(Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_OverflowPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_OverflowPolicy_MetaData)) }; // 1604726165
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_MinDesiredWidth_MetaData[] = {
		{ "Category", "Arrangement" },
		{ "Comment", "// Minimum size the widget reports for its desired with, regardless of content.\n" },
		{ "ModuleRelativePath", "Public/Widgets/StyledTextWidget.h" },
		{ "ToolTip", "Minimum size the widget reports for its desired with, regardless of content." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_MinDesiredWidth = { "MinDesiredWidth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStyledTextWidget, MinDesiredWidth), METADATA_PARAMS(Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_MinDesiredWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_MinDesiredWidth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStyledTextWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_Justification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_Margin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_bAutoWrap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_WrapAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_TransformPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_TransformPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_OverflowPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_OverflowPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStyledTextWidget_Statics::NewProp_MinDesiredWidth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStyledTextWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStyledTextWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStyledTextWidget_Statics::ClassParams = {
		&UStyledTextWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStyledTextWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextWidget_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStyledTextWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStyledTextWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStyledTextWidget()
	{
		if (!Z_Registration_Info_UClass_UStyledTextWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStyledTextWidget.OuterSingleton, Z_Construct_UClass_UStyledTextWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStyledTextWidget.OuterSingleton;
	}
	template<> STYLEDWIDGETS_API UClass* StaticClass<UStyledTextWidget>()
	{
		return UStyledTextWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStyledTextWidget);
	UStyledTextWidget::~UStyledTextWidget() {}
	struct Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Widgets_StyledTextWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Widgets_StyledTextWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStyledTextWidget, UStyledTextWidget::StaticClass, TEXT("UStyledTextWidget"), &Z_Registration_Info_UClass_UStyledTextWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStyledTextWidget), 302735698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Widgets_StyledTextWidget_h_3645441590(TEXT("/Script/StyledWidgets"),
		Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Widgets_StyledTextWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_Widgets_StyledTextWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
