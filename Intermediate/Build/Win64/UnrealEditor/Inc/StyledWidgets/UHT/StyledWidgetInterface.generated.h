// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StyledWidgetInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STYLEDWIDGETS_StyledWidgetInterface_generated_h
#error "StyledWidgetInterface.generated.h already included, missing '#pragma once' in StyledWidgetInterface.h"
#endif
#define STYLEDWIDGETS_StyledWidgetInterface_generated_h

#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_SPARSE_DATA
#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleStyleTag); \
	DECLARE_FUNCTION(execRemoveStyleTag); \
	DECLARE_FUNCTION(execAddStyleTag); \
	DECLARE_FUNCTION(execSetIdentifier); \
	DECLARE_FUNCTION(execGetIdentifier);


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleStyleTag); \
	DECLARE_FUNCTION(execRemoveStyleTag); \
	DECLARE_FUNCTION(execAddStyleTag); \
	DECLARE_FUNCTION(execSetIdentifier); \
	DECLARE_FUNCTION(execGetIdentifier);


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_ACCESSORS
#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStyledWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStyledWidgetInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStyledWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStyledWidgetInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStyledWidgetInterface(UStyledWidgetInterface&&); \
	NO_API UStyledWidgetInterface(const UStyledWidgetInterface&); \
public: \
	NO_API virtual ~UStyledWidgetInterface();


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStyledWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStyledWidgetInterface(UStyledWidgetInterface&&); \
	NO_API UStyledWidgetInterface(const UStyledWidgetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStyledWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStyledWidgetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStyledWidgetInterface) \
	NO_API virtual ~UStyledWidgetInterface();


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStyledWidgetInterface(); \
	friend struct Z_Construct_UClass_UStyledWidgetInterface_Statics; \
public: \
	DECLARE_CLASS(UStyledWidgetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/StyledWidgets"), NO_API) \
	DECLARE_SERIALIZER(UStyledWidgetInterface)


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_GENERATED_UINTERFACE_BODY() \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_GENERATED_UINTERFACE_BODY() \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStyledWidgetInterface() {} \
public: \
	typedef UStyledWidgetInterface UClassType; \
	typedef IStyledWidgetInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IStyledWidgetInterface() {} \
public: \
	typedef UStyledWidgetInterface UClassType; \
	typedef IStyledWidgetInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_7_PROLOG
#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_SPARSE_DATA \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_RPC_WRAPPERS \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_ACCESSORS \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_SPARSE_DATA \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_ACCESSORS \
	FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STYLEDWIDGETS_API UClass* StaticClass<class UStyledWidgetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Dev_StyledWidgetsDemo_Plugins_StyledWidgets_Source_StyledWidgets_Public_StyledWidgetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
