// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GOAP/Public/GOAPController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGOAPController() {}
// Cross Module References
	GOAP_API UClass* Z_Construct_UClass_AGOAPController_NoRegister();
	GOAP_API UClass* Z_Construct_UClass_AGOAPController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_GOAP();
	GOAP_API UClass* Z_Construct_UClass_UGOAPAction_NoRegister();
	GOAP_API UScriptStruct* Z_Construct_UScriptStruct_FAtom();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(AGOAPController::execsetGoal)
	{
		P_GET_TARRAY(FAtom,Z_Param_newGoal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setGoal(Z_Param_newGoal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGOAPController::execgetPlan)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UGOAPAction*>*)Z_Param__Result=P_THIS->getPlan();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGOAPController::execgeneratePlan)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->generatePlan();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGOAPController::execexecuteGOAP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->executeGOAP();
		P_NATIVE_END;
	}
	void AGOAPController::StaticRegisterNativesAGOAPController()
	{
		UClass* Class = AGOAPController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "executeGOAP", &AGOAPController::execexecuteGOAP },
			{ "generatePlan", &AGOAPController::execgeneratePlan },
			{ "getPlan", &AGOAPController::execgetPlan },
			{ "setGoal", &AGOAPController::execsetGoal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGOAPController_executeGOAP_Statics
	{
		struct GOAPController_eventexecuteGOAP_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGOAPController_executeGOAP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GOAPController_eventexecuteGOAP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGOAPController_executeGOAP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GOAPController_eventexecuteGOAP_Parms), &Z_Construct_UFunction_AGOAPController_executeGOAP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGOAPController_executeGOAP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGOAPController_executeGOAP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGOAPController_executeGOAP_Statics::Function_MetaDataParams[] = {
		{ "Category", "GOAPController" },
		{ "Comment", "// Creates and execute the plan.\n" },
		{ "ModuleRelativePath", "Public/GOAPController.h" },
		{ "ToolTip", "Creates and execute the plan." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGOAPController_executeGOAP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGOAPController, nullptr, "executeGOAP", nullptr, nullptr, sizeof(GOAPController_eventexecuteGOAP_Parms), Z_Construct_UFunction_AGOAPController_executeGOAP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGOAPController_executeGOAP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGOAPController_executeGOAP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGOAPController_executeGOAP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGOAPController_executeGOAP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGOAPController_executeGOAP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGOAPController_generatePlan_Statics
	{
		struct GOAPController_eventgeneratePlan_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGOAPController_generatePlan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GOAPController_eventgeneratePlan_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGOAPController_generatePlan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GOAPController_eventgeneratePlan_Parms), &Z_Construct_UFunction_AGOAPController_generatePlan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGOAPController_generatePlan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGOAPController_generatePlan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGOAPController_generatePlan_Statics::Function_MetaDataParams[] = {
		{ "Category", "GOAPController" },
		{ "Comment", "// Creates actions plan\n" },
		{ "ModuleRelativePath", "Public/GOAPController.h" },
		{ "ToolTip", "Creates actions plan" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGOAPController_generatePlan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGOAPController, nullptr, "generatePlan", nullptr, nullptr, sizeof(GOAPController_eventgeneratePlan_Parms), Z_Construct_UFunction_AGOAPController_generatePlan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGOAPController_generatePlan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGOAPController_generatePlan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGOAPController_generatePlan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGOAPController_generatePlan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGOAPController_generatePlan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGOAPController_getPlan_Statics
	{
		struct GOAPController_eventgetPlan_Parms
		{
			TArray<UGOAPAction*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGOAPController_getPlan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GOAPController_eventgetPlan_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGOAPController_getPlan_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGOAPAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGOAPController_getPlan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGOAPController_getPlan_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGOAPController_getPlan_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGOAPController_getPlan_Statics::Function_MetaDataParams[] = {
		{ "Category", "GOAPController" },
		{ "Comment", "// Returns the actions that make up the plan.\n" },
		{ "ModuleRelativePath", "Public/GOAPController.h" },
		{ "ToolTip", "Returns the actions that make up the plan." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGOAPController_getPlan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGOAPController, nullptr, "getPlan", nullptr, nullptr, sizeof(GOAPController_eventgetPlan_Parms), Z_Construct_UFunction_AGOAPController_getPlan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGOAPController_getPlan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGOAPController_getPlan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGOAPController_getPlan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGOAPController_getPlan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGOAPController_getPlan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGOAPController_setGoal_Statics
	{
		struct GOAPController_eventsetGoal_Parms
		{
			TArray<FAtom> newGoal;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_newGoal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newGoal_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGOAPController_setGoal_Statics::NewProp_newGoal = { "newGoal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GOAPController_eventsetGoal_Parms, newGoal), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGOAPController_setGoal_Statics::NewProp_newGoal_Inner = { "newGoal", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtom, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGOAPController_setGoal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGOAPController_setGoal_Statics::NewProp_newGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGOAPController_setGoal_Statics::NewProp_newGoal_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGOAPController_setGoal_Statics::Function_MetaDataParams[] = {
		{ "Category", "GOAPController" },
		{ "Comment", "// Sets the goal of the AI, this function can also be used to change the goal.\n" },
		{ "ModuleRelativePath", "Public/GOAPController.h" },
		{ "ToolTip", "Sets the goal of the AI, this function can also be used to change the goal." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGOAPController_setGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGOAPController, nullptr, "setGoal", nullptr, nullptr, sizeof(GOAPController_eventsetGoal_Parms), Z_Construct_UFunction_AGOAPController_setGoal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGOAPController_setGoal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGOAPController_setGoal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGOAPController_setGoal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGOAPController_setGoal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGOAPController_setGoal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGOAPController_NoRegister()
	{
		return AGOAPController::StaticClass();
	}
	struct Z_Construct_UClass_AGOAPController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_actions;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_actions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_desiredWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_desiredWorld;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_desiredWorld_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_currentWorld;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_currentWorld_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGOAPController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_GOAP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGOAPController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGOAPController_executeGOAP, "executeGOAP" }, // 3594310233
		{ &Z_Construct_UFunction_AGOAPController_generatePlan, "generatePlan" }, // 1204151782
		{ &Z_Construct_UFunction_AGOAPController_getPlan, "getPlan" }, // 128379064
		{ &Z_Construct_UFunction_AGOAPController_setGoal, "setGoal" }, // 3370954059
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGOAPController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* AIController containg the planner, states of the current and desired world, and the list of available actions the AI can perform.\n* Current world and desired world are private for each AI, but it's possible to create a global current world to notify changes to other AIs.\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GOAPController.h" },
		{ "ModuleRelativePath", "Public/GOAPController.h" },
		{ "ToolTip", "AIController containg the planner, states of the current and desired world, and the list of available actions the AI can perform.\nCurrent world and desired world are private for each AI, but it's possible to create a global current world to notify changes to other AIs." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGOAPController_Statics::NewProp_actions_MetaData[] = {
		{ "Category", "GOAP" },
		{ "Comment", "// List of actions AI can do.\n" },
		{ "ModuleRelativePath", "Public/GOAPController.h" },
		{ "ToolTip", "List of actions AI can do." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGOAPController_Statics::NewProp_actions = { "actions", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGOAPController, actions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGOAPController_Statics::NewProp_actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGOAPController_Statics::NewProp_actions_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGOAPController_Statics::NewProp_actions_Inner = { "actions", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGOAPAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGOAPController_Statics::NewProp_desiredWorld_MetaData[] = {
		{ "Category", "GOAP" },
		{ "Comment", "// State of the world in wich the goal has been achieved.\n" },
		{ "ModuleRelativePath", "Public/GOAPController.h" },
		{ "ToolTip", "State of the world in wich the goal has been achieved." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGOAPController_Statics::NewProp_desiredWorld = { "desiredWorld", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGOAPController, desiredWorld), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGOAPController_Statics::NewProp_desiredWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGOAPController_Statics::NewProp_desiredWorld_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGOAPController_Statics::NewProp_desiredWorld_Inner = { "desiredWorld", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtom, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGOAPController_Statics::NewProp_currentWorld_MetaData[] = {
		{ "Category", "GOAP" },
		{ "Comment", "// State of the current world.\n" },
		{ "ModuleRelativePath", "Public/GOAPController.h" },
		{ "ToolTip", "State of the current world." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGOAPController_Statics::NewProp_currentWorld = { "currentWorld", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGOAPController, currentWorld), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGOAPController_Statics::NewProp_currentWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGOAPController_Statics::NewProp_currentWorld_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGOAPController_Statics::NewProp_currentWorld_Inner = { "currentWorld", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtom, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGOAPController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGOAPController_Statics::NewProp_actions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGOAPController_Statics::NewProp_actions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGOAPController_Statics::NewProp_desiredWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGOAPController_Statics::NewProp_desiredWorld_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGOAPController_Statics::NewProp_currentWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGOAPController_Statics::NewProp_currentWorld_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGOAPController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGOAPController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGOAPController_Statics::ClassParams = {
		&AGOAPController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGOAPController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGOAPController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGOAPController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGOAPController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGOAPController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGOAPController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGOAPController, 2856849066);
	template<> GOAP_API UClass* StaticClass<AGOAPController>()
	{
		return AGOAPController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGOAPController(Z_Construct_UClass_AGOAPController, &AGOAPController::StaticClass, TEXT("/Script/GOAP"), TEXT("AGOAPController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGOAPController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
