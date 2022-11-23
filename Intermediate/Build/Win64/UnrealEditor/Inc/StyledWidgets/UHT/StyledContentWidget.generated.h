// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StyledContentWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStyledContentWidget;
#ifdef STYLEDWIDGETS_StyledContentWidget_generated_h
#error "StyledContentWidget.generated.h already included, missing '#pragma once' in StyledContentWidget.h"
#endif
#define STYLEDWIDGETS_StyledContentWidget_generated_h

#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_51_DELEGATE \
struct StyledContentWidget_eventOnClickedEvent_Parms \
{ \
	UStyledContentWidget* Widget; \
}; \
static inline void FOnClickedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnClickedEvent, UStyledContentWidget* Widget) \
{ \
	StyledContentWidget_eventOnClickedEvent_Parms Parms; \
	Parms.Widget=Widget; \
	OnClickedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_56_DELEGATE \
struct StyledContentWidget_eventOnFocusReceivedEvent_Parms \
{ \
	UStyledContentWidget* Widget; \
}; \
static inline void FOnFocusReceivedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnFocusReceivedEvent, UStyledContentWidget* Widget) \
{ \
	StyledContentWidget_eventOnFocusReceivedEvent_Parms Parms; \
	Parms.Widget=Widget; \
	OnFocusReceivedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_61_DELEGATE \
struct StyledContentWidget_eventOnFocusLostEvent_Parms \
{ \
	UStyledContentWidget* Widget; \
}; \
static inline void FOnFocusLostEvent_DelegateWrapper(const FMulticastScriptDelegate& OnFocusLostEvent, UStyledContentWidget* Widget) \
{ \
	StyledContentWidget_eventOnFocusLostEvent_Parms Parms; \
	Parms.Widget=Widget; \
	OnFocusLostEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_66_DELEGATE \
struct StyledContentWidget_eventOnHoverStartEvent_Parms \
{ \
	UStyledContentWidget* Widget; \
}; \
static inline void FOnHoverStartEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHoverStartEvent, UStyledContentWidget* Widget) \
{ \
	StyledContentWidget_eventOnHoverStartEvent_Parms Parms; \
	Parms.Widget=Widget; \
	OnHoverStartEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_71_DELEGATE \
struct StyledContentWidget_eventOnHoverEndEvent_Parms \
{ \
	UStyledContentWidget* Widget; \
}; \
static inline void FOnHoverEndEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHoverEndEvent, UStyledContentWidget* Widget) \
{ \
	StyledContentWidget_eventOnHoverEndEvent_Parms Parms; \
	Parms.Widget=Widget; \
	OnHoverEndEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_22_SPARSE_DATA
#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIsHoverable); \
	DECLARE_FUNCTION(execGetIsClickable); \
	DECLARE_FUNCTION(execGetIsFocusable); \
	DECLARE_FUNCTION(execToggleStyleTag); \
	DECLARE_FUNCTION(execRemoveStyleTag); \
	DECLARE_FUNCTION(execAddStyleTag); \
	DECLARE_FUNCTION(execSetIdentifier); \
	DECLARE_FUNCTION(execGetIdentifier);


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIsHoverable); \
	DECLARE_FUNCTION(execGetIsClickable); \
	DECLARE_FUNCTION(execGetIsFocusable); \
	DECLARE_FUNCTION(execToggleStyleTag); \
	DECLARE_FUNCTION(execRemoveStyleTag); \
	DECLARE_FUNCTION(execAddStyleTag); \
	DECLARE_FUNCTION(execSetIdentifier); \
	DECLARE_FUNCTION(execGetIdentifier);


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_22_ACCESSORS
#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStyledContentWidget(); \
	friend struct Z_Construct_UClass_UStyledContentWidget_Statics; \
public: \
	DECLARE_CLASS(UStyledContentWidget, UContentWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/StyledWidgets"), NO_API) \
	DECLARE_SERIALIZER(UStyledContentWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UStyledContentWidget*>(this); }


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUStyledContentWidget(); \
	friend struct Z_Construct_UClass_UStyledContentWidget_Statics; \
public: \
	DECLARE_CLASS(UStyledContentWidget, UContentWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/StyledWidgets"), NO_API) \
	DECLARE_SERIALIZER(UStyledContentWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UStyledContentWidget*>(this); }


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStyledContentWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStyledContentWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStyledContentWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStyledContentWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStyledContentWidget(UStyledContentWidget&&); \
	NO_API UStyledContentWidget(const UStyledContentWidget&); \
public: \
	NO_API virtual ~UStyledContentWidget();


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStyledContentWidget(UStyledContentWidget&&); \
	NO_API UStyledContentWidget(const UStyledContentWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStyledContentWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStyledContentWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStyledContentWidget) \
	NO_API virtual ~UStyledContentWidget();


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_16_PROLOG
#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_22_SPARSE_DATA \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_22_RPC_WRAPPERS \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_22_ACCESSORS \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_22_INCLASS \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_22_SPARSE_DATA \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_22_ACCESSORS \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_22_INCLASS_NO_PURE_DECLS \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STYLEDWIDGETS_API UClass* StaticClass<class UStyledContentWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledContentWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
