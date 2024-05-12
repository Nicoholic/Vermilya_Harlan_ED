// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vermilya_Harlan_ED/Public/Examples/ExampleDefultPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExampleDefultPawn() {}
// Cross Module References
	VERMILYA_HARLAN_ED_API UClass* Z_Construct_UClass_AExampleDefultPawn_NoRegister();
	VERMILYA_HARLAN_ED_API UClass* Z_Construct_UClass_AExampleDefultPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Vermilya_Harlan_ED();
// End Cross Module References
	void AExampleDefultPawn::StaticRegisterNativesAExampleDefultPawn()
	{
	}
	UClass* Z_Construct_UClass_AExampleDefultPawn_NoRegister()
	{
		return AExampleDefultPawn::StaticClass();
	}
	struct Z_Construct_UClass_AExampleDefultPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExampleDefultPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Vermilya_Harlan_ED,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExampleDefultPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Examples/ExampleDefultPawn.h" },
		{ "ModuleRelativePath", "Public/Examples/ExampleDefultPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExampleDefultPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExampleDefultPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExampleDefultPawn_Statics::ClassParams = {
		&AExampleDefultPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExampleDefultPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExampleDefultPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExampleDefultPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExampleDefultPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExampleDefultPawn, 2119040764);
	template<> VERMILYA_HARLAN_ED_API UClass* StaticClass<AExampleDefultPawn>()
	{
		return AExampleDefultPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExampleDefultPawn(Z_Construct_UClass_AExampleDefultPawn, &AExampleDefultPawn::StaticClass, TEXT("/Script/Vermilya_Harlan_ED"), TEXT("AExampleDefultPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExampleDefultPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
