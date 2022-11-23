// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StyledWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStyledWidget;
#ifdef STYLEDWIDGETS_StyledWidget_generated_h
#error "StyledWidget.generated.h already included, missing '#pragma once' in StyledWidget.h"
#endif
#define STYLEDWIDGETS_StyledWidget_generated_h

#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_57_DELEGATE \
struct StyledWidget_eventOnClickedEvent_Parms \
{ \
	UStyledWidget* Widget; \
}; \
static inline void FOnClickedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnClickedEvent, UStyledWidget* Widget) \
{ \
	StyledWidget_eventOnClickedEvent_Parms Parms; \
	Parms.Widget=Widget; \
	OnClickedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_62_DELEGATE \
struct StyledWidget_eventOnFocusReceivedEvent_Parms \
{ \
	UStyledWidget* Widget; \
}; \
static inline void FOnFocusReceivedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnFocusReceivedEvent, UStyledWidget* Widget) \
{ \
	StyledWidget_eventOnFocusReceivedEvent_Parms Parms; \
	Parms.Widget=Widget; \
	OnFocusReceivedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_67_DELEGATE \
struct StyledWidget_eventOnFocusLostEvent_Parms \
{ \
	UStyledWidget* Widget; \
}; \
static inline void FOnFocusLostEvent_DelegateWrapper(const FMulticastScriptDelegate& OnFocusLostEvent, UStyledWidget* Widget) \
{ \
	StyledWidget_eventOnFocusLostEvent_Parms Parms; \
	Parms.Widget=Widget; \
	OnFocusLostEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_72_DELEGATE \
struct StyledWidget_eventOnHoverStartEvent_Parms \
{ \
	UStyledWidget* Widget; \
}; \
static inline void FOnHoverStartEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHoverStartEvent, UStyledWidget* Widget) \
{ \
	StyledWidget_eventOnHoverStartEvent_Parms Parms; \
	Parms.Widget=Widget; \
	OnHoverStartEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_77_DELEGATE \
struct StyledWidget_eventOnHoverEndEvent_Parms \
{ \
	UStyledWidget* Widget; \
}; \
static inline void FOnHoverEndEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHoverEndEvent, UStyledWidget* Widget) \
{ \
	StyledWidget_eventOnHoverEndEvent_Parms Parms; \
	Parms.Widget=Widget; \
	OnHoverEndEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_28_SPARSE_DATA
#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIsHoverable); \
	DECLARE_FUNCTION(execGetIsClickable); \
	DECLARE_FUNCTION(execGetIsFocusable); \
	DECLARE_FUNCTION(execToggleStyleTag); \
	DECLARE_FUNCTION(execRemoveStyleTag); \
	DECLARE_FUNCTION(execAddStyleTag); \
	DECLARE_FUNCTION(execSetIdentifier); \
	DECLARE_FUNCTION(execGetIdentifier);


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIsHoverable); \
	DECLARE_FUNCTION(execGetIsClickable); \
	DECLARE_FUNCTION(execGetIsFocusable); \
	DECLARE_FUNCTION(execToggleStyleTag); \
	DECLARE_FUNCTION(execRemoveStyleTag); \
	DECLARE_FUNCTION(execAddStyleTag); \
	DECLARE_FUNCTION(execSetIdentifier); \
	DECLARE_FUNCTION(execGetIdentifier);


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_28_ACCESSORS
#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStyledWidget(); \
	friend struct Z_Construct_UClass_UStyledWidget_Statics; \
public: \
	DECLARE_CLASS(UStyledWidget, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/StyledWidgets"), NO_API) \
	DECLARE_SERIALIZER(UStyledWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UStyledWidget*>(this); }


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUStyledWidget(); \
	friend struct Z_Construct_UClass_UStyledWidget_Statics; \
public: \
	DECLARE_CLASS(UStyledWidget, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/StyledWidgets"), NO_API) \
	DECLARE_SERIALIZER(UStyledWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UStyledWidget*>(this); }


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStyledWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStyledWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStyledWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStyledWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStyledWidget(UStyledWidget&&); \
	NO_API UStyledWidget(const UStyledWidget&); \
public: \
	NO_API virtual ~UStyledWidget();


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStyledWidget(UStyledWidget&&); \
	NO_API UStyledWidget(const UStyledWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStyledWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStyledWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStyledWidget) \
	NO_API virtual ~UStyledWidget();


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_22_PROLOG
#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_28_SPARSE_DATA \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_28_RPC_WRAPPERS \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_28_ACCESSORS \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_28_INCLASS \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_28_SPARSE_DATA \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_28_ACCESSORS \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_28_INCLASS_NO_PURE_DECLS \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STYLEDWIDGETS_API UClass* StaticClass<class UStyledWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
