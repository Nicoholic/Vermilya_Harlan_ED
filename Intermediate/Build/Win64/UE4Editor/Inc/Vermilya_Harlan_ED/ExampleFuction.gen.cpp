// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vermilya_Harlan_ED/Public/Examples/ExampleFuction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExampleFuction() {}
// Cross Module References
	VERMILYA_HARLAN_ED_API UClass* Z_Construct_UClass_AExampleFuction_NoRegister();
	VERMILYA_HARLAN_ED_API UClass* Z_Construct_UClass_AExampleFuction();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Vermilya_Harlan_ED();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AExampleFuction::execBluePrintNativeEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BluePrintNativeEvent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExampleFuction::execBlueprintCallable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlueprintCallable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExampleFuction::execPureFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->PureFunction();
		P_NATIVE_END;
	}
	static FName NAME_AExampleFuction_BluePrintImplementableEvent = FName(TEXT("BluePrintImplementableEvent"));
	void AExampleFuction::BluePrintImplementableEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_AExampleFuction_BluePrintImplementableEvent),NULL);
	}
	static FName NAME_AExampleFuction_BluePrintNativeEvent = FName(TEXT("BluePrintNativeEvent"));
	void AExampleFuction::BluePrintNativeEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_AExampleFuction_BluePrintNativeEvent),NULL);
	}
	static FName NAME_AExampleFuction_MultipleReturnValues = FName(TEXT("MultipleReturnValues"));
	bool AExampleFuction::MultipleReturnValues(AActor* actor1, FRotator rotation, AActor*& actor2, int32& index)
	{
		ExampleFuction_eventMultipleReturnValues_Parms Parms;
		Parms.actor1=actor1;
		Parms.rotation=rotation;
		Parms.actor2=actor2;
		Parms.index=index;
		ProcessEvent(FindFunctionChecked(NAME_AExampleFuction_MultipleReturnValues),&Parms);
		actor2=Parms.actor2;
		index=Parms.index;
		return !!Parms.ReturnValue;
	}
	void AExampleFuction::StaticRegisterNativesAExampleFuction()
	{
		UClass* Class = AExampleFuction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlueprintCallable", &AExampleFuction::execBlueprintCallable },
			{ "BluePrintNativeEvent", &AExampleFuction::execBluePrintNativeEvent },
			{ "PureFunction", &AExampleFuction::execPureFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AExampleFuction_BlueprintCallable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExampleFuction_BlueprintCallable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Examples/ExampleFuction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExampleFuction_BlueprintCallable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExampleFuction, nullptr, "BlueprintCallable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExampleFuction_BlueprintCallable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExampleFuction_BlueprintCallable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExampleFuction_BlueprintCallable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExampleFuction_BlueprintCallable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExampleFuction_BluePrintImplementableEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExampleFuction_BluePrintImplementableEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Examples/ExampleFuction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExampleFuction_BluePrintImplementableEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExampleFuction, nullptr, "BluePrintImplementableEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExampleFuction_BluePrintImplementableEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExampleFuction_BluePrintImplementableEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExampleFuction_BluePrintImplementableEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExampleFuction_BluePrintImplementableEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExampleFuction_BluePrintNativeEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExampleFuction_BluePrintNativeEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Examples/ExampleFuction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExampleFuction_BluePrintNativeEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExampleFuction, nullptr, "BluePrintNativeEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExampleFuction_BluePrintNativeEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExampleFuction_BluePrintNativeEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExampleFuction_BluePrintNativeEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExampleFuction_BluePrintNativeEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExampleFuction_MultipleReturnValues_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor2;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExampleFuction_MultipleReturnValues_Statics::NewProp_actor1 = { "actor1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExampleFuction_eventMultipleReturnValues_Parms, actor1), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AExampleFuction_MultipleReturnValues_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExampleFuction_eventMultipleReturnValues_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExampleFuction_MultipleReturnValues_Statics::NewProp_actor2 = { "actor2", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExampleFuction_eventMultipleReturnValues_Parms, actor2), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AExampleFuction_MultipleReturnValues_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExampleFuction_eventMultipleReturnValues_Parms, index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AExampleFuction_MultipleReturnValues_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExampleFuction_eventMultipleReturnValues_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AExampleFuction_MultipleReturnValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExampleFuction_eventMultipleReturnValues_Parms), &Z_Construct_UFunction_AExampleFuction_MultipleReturnValues_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExampleFuction_MultipleReturnValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExampleFuction_MultipleReturnValues_Statics::NewProp_actor1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExampleFuction_MultipleReturnValues_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExampleFuction_MultipleReturnValues_Statics::NewProp_actor2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExampleFuction_MultipleReturnValues_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExampleFuction_MultipleReturnValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExampleFuction_MultipleReturnValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Examples/ExampleFuction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExampleFuction_MultipleReturnValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExampleFuction, nullptr, "MultipleReturnValues", nullptr, nullptr, sizeof(ExampleFuction_eventMultipleReturnValues_Parms), Z_Construct_UFunction_AExampleFuction_MultipleReturnValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExampleFuction_MultipleReturnValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC80800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExampleFuction_MultipleReturnValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExampleFuction_MultipleReturnValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExampleFuction_MultipleReturnValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExampleFuction_MultipleReturnValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExampleFuction_PureFunction_Statics
	{
		struct ExampleFuction_eventPureFunction_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExampleFuction_PureFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExampleFuction_eventPureFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExampleFuction_PureFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExampleFuction_PureFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExampleFuction_PureFunction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//pure Fuction \n" },
		{ "ModuleRelativePath", "Public/Examples/ExampleFuction.h" },
		{ "ToolTip", "pure Fuction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExampleFuction_PureFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExampleFuction, nullptr, "PureFunction", nullptr, nullptr, sizeof(ExampleFuction_eventPureFunction_Parms), Z_Construct_UFunction_AExampleFuction_PureFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExampleFuction_PureFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExampleFuction_PureFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExampleFuction_PureFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExampleFuction_PureFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExampleFuction_PureFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AExampleFuction_NoRegister()
	{
		return AExampleFuction::StaticClass();
	}
	struct Z_Construct_UClass_AExampleFuction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExampleFuction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Vermilya_Harlan_ED,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AExampleFuction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AExampleFuction_BlueprintCallable, "BlueprintCallable" }, // 3052619880
		{ &Z_Construct_UFunction_AExampleFuction_BluePrintImplementableEvent, "BluePrintImplementableEvent" }, // 3436915003
		{ &Z_Construct_UFunction_AExampleFuction_BluePrintNativeEvent, "BluePrintNativeEvent" }, // 3917169186
		{ &Z_Construct_UFunction_AExampleFuction_MultipleReturnValues, "MultipleReturnValues" }, // 2336213734
		{ &Z_Construct_UFunction_AExampleFuction_PureFunction, "PureFunction" }, // 2985162490
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExampleFuction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Examples/ExampleFuction.h" },
		{ "ModuleRelativePath", "Public/Examples/ExampleFuction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExampleFuction_Statics::NewProp_ClassType_MetaData[] = {
		{ "Category", "ExampleFuction" },
		{ "ModuleRelativePath", "Public/Examples/ExampleFuction.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AExampleFuction_Statics::NewProp_ClassType = { "ClassType", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExampleFuction, ClassType), Z_Construct_UClass_ACharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AExampleFuction_Statics::NewProp_ClassType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExampleFuction_Statics::NewProp_ClassType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExampleFuction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleFuction_Statics::NewProp_ClassType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExampleFuction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExampleFuction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExampleFuction_Statics::ClassParams = {
		&AExampleFuction::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AExampleFuction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AExampleFuction_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExampleFuction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExampleFuction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExampleFuction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExampleFuction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExampleFuction, 4252180336);
	template<> VERMILYA_HARLAN_ED_API UClass* StaticClass<AExampleFuction>()
	{
		return AExampleFuction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExampleFuction(Z_Construct_UClass_AExampleFuction, &AExampleFuction::StaticClass, TEXT("/Script/Vermilya_Harlan_ED"), TEXT("AExampleFuction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExampleFuction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
