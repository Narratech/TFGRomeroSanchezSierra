// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GOAP/Public/GOAPAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGOAPAction() {}
// Cross Module References
	GOAP_API UScriptStruct* Z_Construct_UScriptStruct_FAtom();
	UPackage* Z_Construct_UPackage__Script_GOAP();
	GOAP_API UClass* Z_Construct_UClass_UGOAPAction_NoRegister();
	GOAP_API UClass* Z_Construct_UClass_UGOAPAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
class UScriptStruct* FAtom::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GOAP_API uint32 Get_Z_Construct_UScriptStruct_FAtom_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtom, Z_Construct_UPackage__Script_GOAP(), TEXT("Atom"), sizeof(FAtom), Get_Z_Construct_UScriptStruct_FAtom_Hash());
	}
	return Singleton;
}
template<> GOAP_API UScriptStruct* StaticStruct<FAtom>()
{
	return FAtom::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtom(FAtom::StaticStruct, TEXT("/Script/GOAP"), TEXT("Atom"), false, nullptr, nullptr);
static struct FScriptStruct_GOAP_StaticRegisterNativesFAtom
{
	FScriptStruct_GOAP_StaticRegisterNativesFAtom()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Atom")),new UScriptStruct::TCppStructOps<FAtom>);
	}
} ScriptStruct_GOAP_StaticRegisterNativesFAtom;
	struct Z_Construct_UScriptStruct_FAtom_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtom_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Auxiliary struct to get WorldState's atoms from Blueprints' description.\n*/" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GOAPAction.h" },
		{ "ToolTip", "Auxiliary struct to get WorldState's atoms from Blueprints' description." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtom_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtom>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtom_Statics::NewProp_value_MetaData[] = {
		{ "Category", "Atom" },
		{ "Comment", "// Value of the atom.\n" },
		{ "ModuleRelativePath", "Public/GOAPAction.h" },
		{ "ToolTip", "Value of the atom." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtom_Statics::NewProp_value_SetBit(void* Obj)
	{
		((FAtom*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtom_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtom), &Z_Construct_UScriptStruct_FAtom_Statics::NewProp_value_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtom_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtom_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtom_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Atom" },
		{ "Comment", "// Name of the atom.\n" },
		{ "ModuleRelativePath", "Public/GOAPAction.h" },
		{ "ToolTip", "Name of the atom." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtom_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtom, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtom_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtom_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtom_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtom_Statics::NewProp_name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtom_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GOAP,
		nullptr,
		&NewStructOps,
		"Atom",
		sizeof(FAtom),
		alignof(FAtom),
		Z_Construct_UScriptStruct_FAtom_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtom_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtom_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtom_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtom()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtom_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GOAP();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Atom"), sizeof(FAtom), Get_Z_Construct_UScriptStruct_FAtom_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtom_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtom_Hash() { return 1447145905U; }
	DEFINE_FUNCTION(UGOAPAction::execsetTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_t);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setTarget(Z_Param_t);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGOAPAction::execgetTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->getTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGOAPAction::execgetTargetsList)
	{
		P_GET_OBJECT(APawn,Z_Param_p);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->getTargetsList(Z_Param_p);
		P_NATIVE_END;
	}
	static FName NAME_UGOAPAction_checkProceduralPrecondition = FName(TEXT("checkProceduralPrecondition"));
	bool UGOAPAction::checkProceduralPrecondition(APawn* p)
	{
		GOAPAction_eventcheckProceduralPrecondition_Parms Parms;
		Parms.p=p;
		ProcessEvent(FindFunctionChecked(NAME_UGOAPAction_checkProceduralPrecondition),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGOAPAction_doAction = FName(TEXT("doAction"));
	bool UGOAPAction::doAction(APawn* p)
	{
		GOAPAction_eventdoAction_Parms Parms;
		Parms.p=p;
		ProcessEvent(FindFunctionChecked(NAME_UGOAPAction_doAction),&Parms);
		return !!Parms.ReturnValue;
	}
	void UGOAPAction::StaticRegisterNativesUGOAPAction()
	{
		UClass* Class = UGOAPAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getTarget", &UGOAPAction::execgetTarget },
			{ "getTargetsList", &UGOAPAction::execgetTargetsList },
			{ "setTarget", &UGOAPAction::execsetTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGOAPAction_checkProceduralPrecondition_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_p;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGOAPAction_checkProceduralPrecondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GOAPAction_eventcheckProceduralPrecondition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGOAPAction_checkProceduralPrecondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GOAPAction_eventcheckProceduralPrecondition_Parms), &Z_Construct_UFunction_UGOAPAction_checkProceduralPrecondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGOAPAction_checkProceduralPrecondition_Statics::NewProp_p = { "p", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GOAPAction_eventcheckProceduralPrecondition_Parms, p), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGOAPAction_checkProceduralPrecondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGOAPAction_checkProceduralPrecondition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGOAPAction_checkProceduralPrecondition_Statics::NewProp_p,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGOAPAction_checkProceduralPrecondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "GOAPAction" },
		{ "Comment", "// Optional function to check if it's possible to perform the action.\n" },
		{ "ModuleRelativePath", "Public/GOAPAction.h" },
		{ "ToolTip", "Optional function to check if it's possible to perform the action." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGOAPAction_checkProceduralPrecondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGOAPAction, nullptr, "checkProceduralPrecondition", nullptr, nullptr, sizeof(GOAPAction_eventcheckProceduralPrecondition_Parms), Z_Construct_UFunction_UGOAPAction_checkProceduralPrecondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPAction_checkProceduralPrecondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGOAPAction_checkProceduralPrecondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPAction_checkProceduralPrecondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGOAPAction_checkProceduralPrecondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGOAPAction_checkProceduralPrecondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGOAPAction_doAction_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_p;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGOAPAction_doAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GOAPAction_eventdoAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGOAPAction_doAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GOAPAction_eventdoAction_Parms), &Z_Construct_UFunction_UGOAPAction_doAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGOAPAction_doAction_Statics::NewProp_p = { "p", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GOAPAction_eventdoAction_Parms, p), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGOAPAction_doAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGOAPAction_doAction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGOAPAction_doAction_Statics::NewProp_p,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGOAPAction_doAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "GOAPAction" },
		{ "Comment", "// Performs the action.\n" },
		{ "ModuleRelativePath", "Public/GOAPAction.h" },
		{ "ToolTip", "Performs the action." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGOAPAction_doAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGOAPAction, nullptr, "doAction", nullptr, nullptr, sizeof(GOAPAction_eventdoAction_Parms), Z_Construct_UFunction_UGOAPAction_doAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPAction_doAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGOAPAction_doAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPAction_doAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGOAPAction_doAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGOAPAction_doAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGOAPAction_getTarget_Statics
	{
		struct GOAPAction_eventgetTarget_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGOAPAction_getTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GOAPAction_eventgetTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGOAPAction_getTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGOAPAction_getTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGOAPAction_getTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "GOAPAction" },
		{ "Comment", "// Gets the chosen target from targetList or the one specific in setTarget().\n" },
		{ "ModuleRelativePath", "Public/GOAPAction.h" },
		{ "ToolTip", "Gets the chosen target from targetList or the one specific in setTarget()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGOAPAction_getTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGOAPAction, nullptr, "getTarget", nullptr, nullptr, sizeof(GOAPAction_eventgetTarget_Parms), Z_Construct_UFunction_UGOAPAction_getTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPAction_getTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGOAPAction_getTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPAction_getTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGOAPAction_getTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGOAPAction_getTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGOAPAction_getTargetsList_Statics
	{
		struct GOAPAction_eventgetTargetsList_Parms
		{
			APawn* p;
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_p;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGOAPAction_getTargetsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GOAPAction_eventgetTargetsList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGOAPAction_getTargetsList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGOAPAction_getTargetsList_Statics::NewProp_p = { "p", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GOAPAction_eventgetTargetsList_Parms, p), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGOAPAction_getTargetsList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGOAPAction_getTargetsList_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGOAPAction_getTargetsList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGOAPAction_getTargetsList_Statics::NewProp_p,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGOAPAction_getTargetsList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GOAPAction" },
		{ "Comment", "// Search all actors of targetsType class located in the world.\n" },
		{ "ModuleRelativePath", "Public/GOAPAction.h" },
		{ "ToolTip", "Search all actors of targetsType class located in the world." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGOAPAction_getTargetsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGOAPAction, nullptr, "getTargetsList", nullptr, nullptr, sizeof(GOAPAction_eventgetTargetsList_Parms), Z_Construct_UFunction_UGOAPAction_getTargetsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPAction_getTargetsList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGOAPAction_getTargetsList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPAction_getTargetsList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGOAPAction_getTargetsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGOAPAction_getTargetsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGOAPAction_setTarget_Statics
	{
		struct GOAPAction_eventsetTarget_Parms
		{
			AActor* t;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_t;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGOAPAction_setTarget_Statics::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GOAPAction_eventsetTarget_Parms, t), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGOAPAction_setTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGOAPAction_setTarget_Statics::NewProp_t,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGOAPAction_setTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "GOAPAction" },
		{ "Comment", "// Sets a specific target.\n" },
		{ "ModuleRelativePath", "Public/GOAPAction.h" },
		{ "ToolTip", "Sets a specific target." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGOAPAction_setTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGOAPAction, nullptr, "setTarget", nullptr, nullptr, sizeof(GOAPAction_eventsetTarget_Parms), Z_Construct_UFunction_UGOAPAction_setTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPAction_setTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGOAPAction_setTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPAction_setTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGOAPAction_setTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGOAPAction_setTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGOAPAction_NoRegister()
	{
		return UGOAPAction::StaticClass();
	}
	struct Z_Construct_UClass_UGOAPAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_effects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_effects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_effects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_preconditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_preconditions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_preconditions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetsType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_targetsType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGOAPAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GOAP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGOAPAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGOAPAction_checkProceduralPrecondition, "checkProceduralPrecondition" }, // 198917277
		{ &Z_Construct_UFunction_UGOAPAction_doAction, "doAction" }, // 2332844575
		{ &Z_Construct_UFunction_UGOAPAction_getTarget, "getTarget" }, // 3607817786
		{ &Z_Construct_UFunction_UGOAPAction_getTargetsList, "getTargetsList" }, // 1391990797
		{ &Z_Construct_UFunction_UGOAPAction_setTarget, "setTarget" }, // 902180143
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGOAPAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * GOAPAction class contains every attribute and function needed to define an action.\n * Represent edges in the planner algorithm.\n */" },
		{ "IncludePath", "GOAPAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GOAPAction.h" },
		{ "ToolTip", "GOAPAction class contains every attribute and function needed to define an action.\nRepresent edges in the planner algorithm." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGOAPAction_Statics::NewProp_effects_MetaData[] = {
		{ "Category", "WorldState" },
		{ "Comment", "// Effects caused by the action.\n" },
		{ "ModuleRelativePath", "Public/GOAPAction.h" },
		{ "ToolTip", "Effects caused by the action." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGOAPAction_Statics::NewProp_effects = { "effects", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGOAPAction, effects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGOAPAction_Statics::NewProp_effects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGOAPAction_Statics::NewProp_effects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGOAPAction_Statics::NewProp_effects_Inner = { "effects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtom, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGOAPAction_Statics::NewProp_preconditions_MetaData[] = {
		{ "Category", "WorldState" },
		{ "Comment", "// Conditions needed to perform the action.\n" },
		{ "ModuleRelativePath", "Public/GOAPAction.h" },
		{ "ToolTip", "Conditions needed to perform the action." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGOAPAction_Statics::NewProp_preconditions = { "preconditions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGOAPAction, preconditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGOAPAction_Statics::NewProp_preconditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGOAPAction_Statics::NewProp_preconditions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGOAPAction_Statics::NewProp_preconditions_Inner = { "preconditions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtom, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGOAPAction_Statics::NewProp_targetsType_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "// Object or class type of actor this action's target should have. This can be None if your action doesn't need a target.\n" },
		{ "ModuleRelativePath", "Public/GOAPAction.h" },
		{ "ToolTip", "Object or class type of actor this action's target should have. This can be None if your action doesn't need a target." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGOAPAction_Statics::NewProp_targetsType = { "targetsType", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGOAPAction, targetsType), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGOAPAction_Statics::NewProp_targetsType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGOAPAction_Statics::NewProp_targetsType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGOAPAction_Statics::NewProp_cost_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "// Cost of the action. The planner will take this into account when making the cheapest plan.\n" },
		{ "ModuleRelativePath", "Public/GOAPAction.h" },
		{ "ToolTip", "Cost of the action. The planner will take this into account when making the cheapest plan." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGOAPAction_Statics::NewProp_cost = { "cost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGOAPAction, cost), METADATA_PARAMS(Z_Construct_UClass_UGOAPAction_Statics::NewProp_cost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGOAPAction_Statics::NewProp_cost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGOAPAction_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/GOAPAction.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGOAPAction_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGOAPAction, name), METADATA_PARAMS(Z_Construct_UClass_UGOAPAction_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGOAPAction_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGOAPAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGOAPAction_Statics::NewProp_effects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGOAPAction_Statics::NewProp_effects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGOAPAction_Statics::NewProp_preconditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGOAPAction_Statics::NewProp_preconditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGOAPAction_Statics::NewProp_targetsType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGOAPAction_Statics::NewProp_cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGOAPAction_Statics::NewProp_name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGOAPAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGOAPAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGOAPAction_Statics::ClassParams = {
		&UGOAPAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGOAPAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGOAPAction_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGOAPAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGOAPAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGOAPAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGOAPAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGOAPAction, 2182001278);
	template<> GOAP_API UClass* StaticClass<UGOAPAction>()
	{
		return UGOAPAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGOAPAction(Z_Construct_UClass_UGOAPAction, &UGOAPAction::StaticClass, TEXT("/Script/GOAP"), TEXT("UGOAPAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGOAPAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
