// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vermilya_Harlan_ED/Public/Examples/ExampleActorWithUserInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExampleActorWithUserInterface() {}
// Cross Module References
	VERMILYA_HARLAN_ED_API UClass* Z_Construct_UClass_AExampleActorWithUserInterface_NoRegister();
	VERMILYA_HARLAN_ED_API UClass* Z_Construct_UClass_AExampleActorWithUserInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Vermilya_Harlan_ED();
	VERMILYA_HARLAN_ED_API UClass* Z_Construct_UClass_UExampleInterface_NoRegister();
// End Cross Module References
	void AExampleActorWithUserInterface::StaticRegisterNativesAExampleActorWithUserInterface()
	{
	}
	UClass* Z_Construct_UClass_AExampleActorWithUserInterface_NoRegister()
	{
		return AExampleActorWithUserInterface::StaticClass();
	}
	struct Z_Construct_UClass_AExampleActorWithUserInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExampleActorWithUserInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Vermilya_Harlan_ED,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExampleActorWithUserInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Examples/ExampleActorWithUserInterface.h" },
		{ "ModuleRelativePath", "Public/Examples/ExampleActorWithUserInterface.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AExampleActorWithUserInterface_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UExampleInterface_NoRegister, (int32)VTABLE_OFFSET(AExampleActorWithUserInterface, IExampleInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExampleActorWithUserInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExampleActorWithUserInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExampleActorWithUserInterface_Statics::ClassParams = {
		&AExampleActorWithUserInterface::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExampleActorWithUserInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExampleActorWithUserInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExampleActorWithUserInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExampleActorWithUserInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExampleActorWithUserInterface, 1757868198);
	template<> VERMILYA_HARLAN_ED_API UClass* StaticClass<AExampleActorWithUserInterface>()
	{
		return AExampleActorWithUserInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExampleActorWithUserInterface(Z_Construct_UClass_AExampleActorWithUserInterface, &AExampleActorWithUserInterface::StaticClass, TEXT("/Script/Vermilya_Harlan_ED"), TEXT("AExampleActorWithUserInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExampleActorWithUserInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
