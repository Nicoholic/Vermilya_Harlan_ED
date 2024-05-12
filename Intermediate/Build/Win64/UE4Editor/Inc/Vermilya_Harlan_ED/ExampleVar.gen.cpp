// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vermilya_Harlan_ED/Public/Examples/ExampleVar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExampleVar() {}
// Cross Module References
	VERMILYA_HARLAN_ED_API UFunction* Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_VaraibleDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Vermilya_Harlan_ED();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	VERMILYA_HARLAN_ED_API UClass* Z_Construct_UClass_AExampleVar_NoRegister();
	VERMILYA_HARLAN_ED_API UClass* Z_Construct_UClass_AExampleVar();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_VaraibleDelegate__DelegateSignature_Statics
	{
		struct _Script_Vermilya_Harlan_ED_eventVaraibleDelegate_Parms
		{
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_VaraibleDelegate__DelegateSignature_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Vermilya_Harlan_ED_eventVaraibleDelegate_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_VaraibleDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_VaraibleDelegate__DelegateSignature_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_VaraibleDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//decalre delegate type\n//make known our required type\n" },
		{ "ModuleRelativePath", "Public/Examples/ExampleVar.h" },
		{ "ToolTip", "decalre delegate type\nmake known our required type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_VaraibleDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Vermilya_Harlan_ED, nullptr, "VaraibleDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Vermilya_Harlan_ED_eventVaraibleDelegate_Parms), Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_VaraibleDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_VaraibleDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_VaraibleDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_VaraibleDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_VaraibleDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_VaraibleDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AExampleVar::execExampleBoundFuction)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExampleBoundFuction(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void AExampleVar::StaticRegisterNativesAExampleVar()
	{
		UClass* Class = AExampleVar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExampleBoundFuction", &AExampleVar::execExampleBoundFuction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AExampleVar_ExampleBoundFuction_Statics
	{
		struct ExampleVar_eventExampleBoundFuction_Parms
		{
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExampleVar_ExampleBoundFuction_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExampleVar_eventExampleBoundFuction_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExampleVar_ExampleBoundFuction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExampleVar_ExampleBoundFuction_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExampleVar_ExampleBoundFuction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Examples/ExampleVar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExampleVar_ExampleBoundFuction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExampleVar, nullptr, "ExampleBoundFuction", nullptr, nullptr, sizeof(ExampleVar_eventExampleBoundFuction_Parms), Z_Construct_UFunction_AExampleVar_ExampleBoundFuction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExampleVar_ExampleBoundFuction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExampleVar_ExampleBoundFuction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExampleVar_ExampleBoundFuction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExampleVar_ExampleBoundFuction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExampleVar_ExampleBoundFuction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AExampleVar_NoRegister()
	{
		return AExampleVar::StaticClass();
	}
	struct Z_Construct_UClass_AExampleVar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleAnywhere_MetaData[];
#endif
		static void NewProp_VisibleAnywhere_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisibleAnywhere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleDefaultsOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VisibleDefaultsOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleInstanceOnlyOdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VisibleInstanceOnlyOdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleInstanceOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_VisibleInstanceOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditAnywhere_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EditAnywhere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditDefaultsOnlyOdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EditDefaultsOnlyOdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditInstanceOnlyOdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EditInstanceOnlyOdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditDefaultsOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_EditDefaultsOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditInstanceOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditInstanceOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnExampleDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExampleDelegate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ValueArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValueArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointerArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointerArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PointerArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExampleVar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Vermilya_Harlan_ED,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AExampleVar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AExampleVar_ExampleBoundFuction, "ExampleBoundFuction" }, // 3827218999
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExampleVar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Examples/ExampleVar.h" },
		{ "ModuleRelativePath", "Public/Examples/ExampleVar.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExampleVar_Statics::NewProp_VisibleAnywhere_MetaData[] = {
		{ "Category", "Variable|ReadOnly" },
		{ "ModuleRelativePath", "Public/Examples/ExampleVar.h" },
	};
#endif
	void Z_Construct_UClass_AExampleVar_Statics::NewProp_VisibleAnywhere_SetBit(void* Obj)
	{
		((AExampleVar*)Obj)->VisibleAnywhere = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AExampleVar_Statics::NewProp_VisibleAnywhere = { "VisibleAnywhere", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AExampleVar), &Z_Construct_UClass_AExampleVar_Statics::NewProp_VisibleAnywhere_SetBit, METADATA_PARAMS(Z_Construct_UClass_AExampleVar_Statics::NewProp_VisibleAnywhere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExampleVar_Statics::NewProp_VisibleAnywhere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExampleVar_Statics::NewProp_VisibleDefaultsOnly_MetaData[] = {
		{ "Category", "Variable|ReadOnly" },
		{ "ModuleRelativePath", "Public/Examples/ExampleVar.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AExampleVar_Statics::NewProp_VisibleDefaultsOnly = { "VisibleDefaultsOnly", nullptr, (EPropertyFlags)0x0020080000030015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExampleVar, VisibleDefaultsOnly), nullptr, METADATA_PARAMS(Z_Construct_UClass_AExampleVar_Statics::NewProp_VisibleDefaultsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExampleVar_Statics::NewProp_VisibleDefaultsOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExampleVar_Statics::NewProp_VisibleInstanceOnlyOdd_MetaData[] = {
		{ "Category", "Variable|ReadOnly" },
		{ "ModuleRelativePath", "Public/Examples/ExampleVar.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AExampleVar_Statics::NewProp_VisibleInstanceOnlyOdd = { "VisibleInstanceOnlyOdd", nullptr, (EPropertyFlags)0x0020080000020815, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExampleVar, VisibleInstanceOnlyOdd), METADATA_PARAMS(Z_Construct_UClass_AExampleVar_Statics::NewProp_VisibleInstanceOnlyOdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExampleVar_Statics::NewProp_VisibleInstanceOnlyOdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExampleVar_Statics::NewProp_VisibleInstanceOnly_MetaData[] = {
		{ "Category", "Variable|ReadOnly" },
		{ "ModuleRelativePath", "Public/Examples/ExampleVar.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_AExampleVar_Statics::NewProp_VisibleInstanceOnly = { "VisibleInstanceOnly", nullptr, (EPropertyFlags)0x0020080000020815, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExampleVar, VisibleInstanceOnly), METADATA_PARAMS(Z_Construct_UClass_AExampleVar_Statics::NewProp_VisibleInstanceOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExampleVar_Statics::NewProp_VisibleInstanceOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExampleVar_Statics::NewProp_EditAnywhere_MetaData[] = {
		{ "Category", "Variable|ReadWrite" },
		{ "ModuleRelativePath", "Public/Examples/ExampleVar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AExampleVar_Statics::NewProp_EditAnywhere = { "EditAnywhere", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExampleVar, EditAnywhere), METADATA_PARAMS(Z_Construct_UClass_AExampleVar_Statics::NewProp_EditAnywhere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExampleVar_Statics::NewProp_EditAnywhere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExampleVar_Statics::NewProp_EditDefaultsOnlyOdd_MetaData[] = {
		{ "Category", "Variable|ReadWrite" },
		{ "ModuleRelativePath", "Public/Examples/ExampleVar.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AExampleVar_Statics::NewProp_EditDefaultsOnlyOdd = { "EditDefaultsOnlyOdd", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExampleVar, EditDefaultsOnlyOdd), METADATA_PARAMS(Z_Construct_UClass_AExampleVar_Statics::NewProp_EditDefaultsOnlyOdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExampleVar_Statics::NewProp_EditDefaultsOnlyOdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExampleVar_Statics::NewProp_EditInstanceOnlyOdd_MetaData[] = {
		{ "Category", "Variable|ReadWrite" },
		{ "ModuleRelativePath", "Public/Examples/ExampleVar.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AExampleVar_Statics::NewProp_EditInstanceOnlyOdd = { "EditInstanceOnlyOdd", nullptr, (EPropertyFlags)0x0020080000000805, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExampleVar, EditInstanceOnlyOdd), METADATA_PARAMS(Z_Construct_UClass_AExampleVar_Statics::NewProp_EditInstanceOnlyOdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExampleVar_Statics::NewProp_EditInstanceOnlyOdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExampleVar_Statics::NewProp_EditDefaultsOnly_MetaData[] = {
		{ "Category", "Variable|ReadWrite" },
		{ "ModuleRelativePath", "Public/Examples/ExampleVar.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AExampleVar_Statics::NewProp_EditDefaultsOnly = { "EditDefaultsOnly", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExampleVar, EditDefaultsOnly), METADATA_PARAMS(Z_Construct_UClass_AExampleVar_Statics::NewProp_EditDefaultsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExampleVar_Statics::NewProp_EditDefaultsOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExampleVar_Statics::NewProp_EditInstanceOnly_MetaData[] = {
		{ "Category", "Variable|ReadWrite" },
		{ "ModuleRelativePath", "Public/Examples/ExampleVar.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AExampleVar_Statics::NewProp_EditInstanceOnly = { "EditInstanceOnly", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExampleVar, EditInstanceOnly), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AExampleVar_Statics::NewProp_EditInstanceOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExampleVar_Statics::NewProp_EditInstanceOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExampleVar_Statics::NewProp_ClassType_MetaData[] = {
		{ "Category", "Variable|ClassReference" },
		{ "Comment", "//class referance \n" },
		{ "ModuleRelativePath", "Public/Examples/ExampleVar.h" },
		{ "ToolTip", "class referance" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AExampleVar_Statics::NewProp_ClassType = { "ClassType", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExampleVar, ClassType), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AExampleVar_Statics::NewProp_ClassType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExampleVar_Statics::NewProp_ClassType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExampleVar_Statics::NewProp_OnExampleDelegate_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "//create delegate / event dispatcher\n" },
		{ "ModuleRelativePath", "Public/Examples/ExampleVar.h" },
		{ "ToolTip", "create delegate / event dispatcher" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AExampleVar_Statics::NewProp_OnExampleDelegate = { "OnExampleDelegate", nullptr, (EPropertyFlags)0x0020180010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExampleVar, OnExampleDelegate), Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_VaraibleDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AExampleVar_Statics::NewProp_OnExampleDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExampleVar_Statics::NewProp_OnExampleDelegate_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AExampleVar_Statics::NewProp_ValueArray_Inner = { "ValueArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExampleVar_Statics::NewProp_ValueArray_MetaData[] = {
		{ "Category", "Variable|Array" },
		{ "Comment", "//Array \n" },
		{ "ModuleRelativePath", "Public/Examples/ExampleVar.h" },
		{ "ToolTip", "Array" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AExampleVar_Statics::NewProp_ValueArray = { "ValueArray", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExampleVar, ValueArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AExampleVar_Statics::NewProp_ValueArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExampleVar_Statics::NewProp_ValueArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExampleVar_Statics::NewProp_PointerArray_Inner = { "PointerArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExampleVar_Statics::NewProp_PointerArray_MetaData[] = {
		{ "Category", "Variable|Array" },
		{ "ModuleRelativePath", "Public/Examples/ExampleVar.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AExampleVar_Statics::NewProp_PointerArray = { "PointerArray", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExampleVar, PointerArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AExampleVar_Statics::NewProp_PointerArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExampleVar_Statics::NewProp_PointerArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExampleVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVar_Statics::NewProp_VisibleAnywhere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVar_Statics::NewProp_VisibleDefaultsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVar_Statics::NewProp_VisibleInstanceOnlyOdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVar_Statics::NewProp_VisibleInstanceOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVar_Statics::NewProp_EditAnywhere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVar_Statics::NewProp_EditDefaultsOnlyOdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVar_Statics::NewProp_EditInstanceOnlyOdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVar_Statics::NewProp_EditDefaultsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVar_Statics::NewProp_EditInstanceOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVar_Statics::NewProp_ClassType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVar_Statics::NewProp_OnExampleDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVar_Statics::NewProp_ValueArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVar_Statics::NewProp_ValueArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVar_Statics::NewProp_PointerArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVar_Statics::NewProp_PointerArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExampleVar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExampleVar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExampleVar_Statics::ClassParams = {
		&AExampleVar::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AExampleVar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AExampleVar_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExampleVar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExampleVar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExampleVar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExampleVar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExampleVar, 2041391159);
	template<> VERMILYA_HARLAN_ED_API UClass* StaticClass<AExampleVar>()
	{
		return AExampleVar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExampleVar(Z_Construct_UClass_AExampleVar, &AExampleVar::StaticClass, TEXT("/Script/Vermilya_Harlan_ED"), TEXT("AExampleVar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExampleVar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
