// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
#ifdef GOAP_GOAPAction_generated_h
#error "GOAPAction.generated.h already included, missing '#pragma once' in GOAPAction.h"
#endif
#define GOAP_GOAPAction_generated_h

#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtom_Statics; \
	GOAP_API static class UScriptStruct* StaticStruct();


template<> GOAP_API UScriptStruct* StaticStruct<struct FAtom>();

#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_SPARSE_DATA
#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execsetTarget); \
	DECLARE_FUNCTION(execgetTarget); \
	DECLARE_FUNCTION(execgetTargetsList);


#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execsetTarget); \
	DECLARE_FUNCTION(execgetTarget); \
	DECLARE_FUNCTION(execgetTargetsList);


#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_EVENT_PARMS \
	struct GOAPAction_eventcheckProceduralPrecondition_Parms \
	{ \
		APawn* p; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GOAPAction_eventcheckProceduralPrecondition_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GOAPAction_eventdoAction_Parms \
	{ \
		APawn* p; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GOAPAction_eventdoAction_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_CALLBACK_WRAPPERS
#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGOAPAction(); \
	friend struct Z_Construct_UClass_UGOAPAction_Statics; \
public: \
	DECLARE_CLASS(UGOAPAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GOAP"), NO_API) \
	DECLARE_SERIALIZER(UGOAPAction)


#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUGOAPAction(); \
	friend struct Z_Construct_UClass_UGOAPAction_Statics; \
public: \
	DECLARE_CLASS(UGOAPAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GOAP"), NO_API) \
	DECLARE_SERIALIZER(UGOAPAction)


#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGOAPAction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGOAPAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGOAPAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGOAPAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGOAPAction(UGOAPAction&&); \
	NO_API UGOAPAction(const UGOAPAction&); \
public:


#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGOAPAction(UGOAPAction&&); \
	NO_API UGOAPAction(const UGOAPAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGOAPAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGOAPAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGOAPAction)


#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_42_PROLOG \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_EVENT_PARMS


#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_SPARSE_DATA \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_RPC_WRAPPERS \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_CALLBACK_WRAPPERS \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_INCLASS \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_SPARSE_DATA \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_CALLBACK_WRAPPERS \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOAP_API UClass* StaticClass<class UGOAPAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
