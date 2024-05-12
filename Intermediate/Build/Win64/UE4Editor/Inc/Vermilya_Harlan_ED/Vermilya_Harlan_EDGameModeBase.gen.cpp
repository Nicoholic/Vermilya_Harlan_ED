// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vermilya_Harlan_ED/Public/Actors/Vermilya_Harlan_EDGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVermilya_Harlan_EDGameModeBase() {}
// Cross Module References
	VERMILYA_HARLAN_ED_API UClass* Z_Construct_UClass_AVermilya_Harlan_EDGameModeBase_NoRegister();
	VERMILYA_HARLAN_ED_API UClass* Z_Construct_UClass_AVermilya_Harlan_EDGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Vermilya_Harlan_ED();
// End Cross Module References
	void AVermilya_Harlan_EDGameModeBase::StaticRegisterNativesAVermilya_Harlan_EDGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AVermilya_Harlan_EDGameModeBase_NoRegister()
	{
		return AVermilya_Harlan_EDGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AVermilya_Harlan_EDGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVermilya_Harlan_EDGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Vermilya_Harlan_ED,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVermilya_Harlan_EDGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Actors/Vermilya_Harlan_EDGameModeBase.h" },
		{ "ModuleRelativePath", "Public/Actors/Vermilya_Harlan_EDGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVermilya_Harlan_EDGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVermilya_Harlan_EDGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVermilya_Harlan_EDGameModeBase_Statics::ClassParams = {
		&AVermilya_Harlan_EDGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AVermilya_Harlan_EDGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVermilya_Harlan_EDGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVermilya_Harlan_EDGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVermilya_Harlan_EDGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVermilya_Harlan_EDGameModeBase, 3537193053);
	template<> VERMILYA_HARLAN_ED_API UClass* StaticClass<AVermilya_Harlan_EDGameModeBase>()
	{
		return AVermilya_Harlan_EDGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVermilya_Harlan_EDGameModeBase(Z_Construct_UClass_AVermilya_Harlan_EDGameModeBase, &AVermilya_Harlan_EDGameModeBase::StaticClass, TEXT("/Script/Vermilya_Harlan_ED"), TEXT("AVermilya_Harlan_EDGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVermilya_Harlan_EDGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
