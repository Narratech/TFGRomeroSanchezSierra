// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAtom;
class UGOAPAction;
#ifdef GOAP_GOAPController_generated_h
#error "GOAPController.generated.h already included, missing '#pragma once' in GOAPController.h"
#endif
#define GOAP_GOAPController_generated_h

#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPController_h_26_SPARSE_DATA
#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPController_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execsetGoal); \
	DECLARE_FUNCTION(execgetPlan); \
	DECLARE_FUNCTION(execgeneratePlan); \
	DECLARE_FUNCTION(execexecuteGOAP);


#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPController_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execsetGoal); \
	DECLARE_FUNCTION(execgetPlan); \
	DECLARE_FUNCTION(execgeneratePlan); \
	DECLARE_FUNCTION(execexecuteGOAP);


#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPController_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGOAPController(); \
	friend struct Z_Construct_UClass_AGOAPController_Statics; \
public: \
	DECLARE_CLASS(AGOAPController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GOAP"), NO_API) \
	DECLARE_SERIALIZER(AGOAPController)


#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPController_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAGOAPController(); \
	friend struct Z_Construct_UClass_AGOAPController_Statics; \
public: \
	DECLARE_CLASS(AGOAPController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GOAP"), NO_API) \
	DECLARE_SERIALIZER(AGOAPController)


#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPController_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGOAPController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGOAPController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGOAPController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGOAPController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGOAPController(AGOAPController&&); \
	NO_API AGOAPController(const AGOAPController&); \
public:


#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPController_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGOAPController(AGOAPController&&); \
	NO_API AGOAPController(const AGOAPController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGOAPController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGOAPController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGOAPController)


#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPController_h_26_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPController_h_23_PROLOG
#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPController_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPController_h_26_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPController_h_26_SPARSE_DATA \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPController_h_26_RPC_WRAPPERS \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPController_h_26_INCLASS \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPController_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPController_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPController_h_26_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPController_h_26_SPARSE_DATA \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPController_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPController_h_26_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPController_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOAP_API UClass* StaticClass<class AGOAPController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_GOAP_Source_GOAP_Public_GOAPController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
