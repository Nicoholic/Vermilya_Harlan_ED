// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVermilya_Harlan_ED_init() {}
	VERMILYA_HARLAN_ED_API UFunction* Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_OnHealthChanged__DelegateSignature();
	VERMILYA_HARLAN_ED_API UFunction* Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_Delegate__DelegateSignature();
	VERMILYA_HARLAN_ED_API UFunction* Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_VaraibleDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Vermilya_Harlan_ED()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_OnHealthChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_Delegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_VaraibleDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/Vermilya_Harlan_ED",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x44A7A27A,
				0x114A9C26,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
