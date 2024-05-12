// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vermilya_Harlan_ED/Public/Examples/ExampleInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExampleInterface() {}
// Cross Module References
	VERMILYA_HARLAN_ED_API UClass* Z_Construct_UClass_UExampleInterface_NoRegister();
	VERMILYA_HARLAN_ED_API UClass* Z_Construct_UClass_UExampleInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Vermilya_Harlan_ED();
// End Cross Module References
	DEFINE_FUNCTION(IExampleInterface::execBlueprintCallable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlueprintCallable();
		P_NATIVE_END;
	}
	void UExampleInterface::StaticRegisterNativesUExampleInterface()
	{
		UClass* Class = UExampleInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlueprintCallable", &IExampleInterface::execBlueprintCallable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExampleInterface_BlueprintCallable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExampleInterface_BlueprintCallable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Examples/ExampleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExampleInterface_BlueprintCallable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExampleInterface, nullptr, "BlueprintCallable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExampleInterface_BlueprintCallable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExampleInterface_BlueprintCallable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExampleInterface_BlueprintCallable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExampleInterface_BlueprintCallable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExampleInterface_NoRegister()
	{
		return UExampleInterface::StaticClass();
	}
	struct Z_Construct_UClass_UExampleInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExampleInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Vermilya_Harlan_ED,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExampleInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExampleInterface_BlueprintCallable, "BlueprintCallable" }, // 2739900464
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExampleInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Examples/ExampleInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExampleInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IExampleInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExampleInterface_Statics::ClassParams = {
		&UExampleInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UExampleInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExampleInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExampleInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExampleInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExampleInterface, 3513254367);
	template<> VERMILYA_HARLAN_ED_API UClass* StaticClass<UExampleInterface>()
	{
		return UExampleInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExampleInterface(Z_Construct_UClass_UExampleInterface, &UExampleInterface::StaticClass, TEXT("/Script/Vermilya_Harlan_ED"), TEXT("UExampleInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExampleInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
