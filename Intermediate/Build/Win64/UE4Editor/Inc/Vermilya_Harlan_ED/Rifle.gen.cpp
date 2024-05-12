// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vermilya_Harlan_ED/Public/Actors/Rifle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRifle() {}
// Cross Module References
	VERMILYA_HARLAN_ED_API UFunction* Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_Delegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Vermilya_Harlan_ED();
	VERMILYA_HARLAN_ED_API UClass* Z_Construct_UClass_ARifle_NoRegister();
	VERMILYA_HARLAN_ED_API UClass* Z_Construct_UClass_ARifle();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_Delegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_Delegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Vermilya_Harlan_ED, nullptr, "Delegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_Delegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_Delegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_Delegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_Delegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ARifle::execIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IsDead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARifle::execAttackAnimSync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackAnimSync();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARifle::execActionStopped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActionStopped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARifle::execCanShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanShoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARifle::execShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shoot();
		P_NATIVE_END;
	}
	void ARifle::StaticRegisterNativesARifle()
	{
		UClass* Class = ARifle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActionStopped", &ARifle::execActionStopped },
			{ "AttackAnimSync", &ARifle::execAttackAnimSync },
			{ "CanShoot", &ARifle::execCanShoot },
			{ "IsDead", &ARifle::execIsDead },
			{ "Shoot", &ARifle::execShoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARifle_ActionStopped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifle_ActionStopped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARifle_ActionStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARifle, nullptr, "ActionStopped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARifle_ActionStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifle_ActionStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARifle_ActionStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARifle_ActionStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARifle_AttackAnimSync_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifle_AttackAnimSync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARifle_AttackAnimSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARifle, nullptr, "AttackAnimSync", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARifle_AttackAnimSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifle_AttackAnimSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARifle_AttackAnimSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARifle_AttackAnimSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARifle_CanShoot_Statics
	{
		struct Rifle_eventCanShoot_Parms
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
	void Z_Construct_UFunction_ARifle_CanShoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Rifle_eventCanShoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARifle_CanShoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Rifle_eventCanShoot_Parms), &Z_Construct_UFunction_ARifle_CanShoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARifle_CanShoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARifle_CanShoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifle_CanShoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARifle_CanShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARifle, nullptr, "CanShoot", nullptr, nullptr, sizeof(Rifle_eventCanShoot_Parms), Z_Construct_UFunction_ARifle_CanShoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifle_CanShoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARifle_CanShoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifle_CanShoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARifle_CanShoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARifle_CanShoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARifle_IsDead_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifle_IsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARifle_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARifle, nullptr, "IsDead", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARifle_IsDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifle_IsDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARifle_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARifle_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARifle_Shoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARifle_Shoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARifle_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARifle, nullptr, "Shoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARifle_Shoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARifle_Shoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARifle_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARifle_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARifle_NoRegister()
	{
		return ARifle::StaticClass();
	}
	struct Z_Construct_UClass_ARifle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rifleActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_rifleActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shootRifle_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_shootRifle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fAgent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_fAgent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isAlive_MetaData[];
#endif
		static void NewProp_isAlive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAlive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletionMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletionMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpawnSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shootDelay_MetaData[];
#endif
		static void NewProp_shootDelay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shootDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shotTimerFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_shotTimerFloat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARifle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Vermilya_Harlan_ED,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARifle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARifle_ActionStopped, "ActionStopped" }, // 4023874142
		{ &Z_Construct_UFunction_ARifle_AttackAnimSync, "AttackAnimSync" }, // 1701976674
		{ &Z_Construct_UFunction_ARifle_CanShoot, "CanShoot" }, // 2994019737
		{ &Z_Construct_UFunction_ARifle_IsDead, "IsDead" }, // 1084282491
		{ &Z_Construct_UFunction_ARifle_Shoot, "Shoot" }, // 1018368561
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Rifle.h" },
		{ "ModuleRelativePath", "Public/Actors/Rifle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifle_Statics::NewProp_rifleActor_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/Actors/Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARifle_Statics::NewProp_rifleActor = { "rifleActor", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifle, rifleActor), Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_Delegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARifle_Statics::NewProp_rifleActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifle_Statics::NewProp_rifleActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifle_Statics::NewProp_shootRifle_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/Actors/Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARifle_Statics::NewProp_shootRifle = { "shootRifle", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifle, shootRifle), Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_Delegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARifle_Statics::NewProp_shootRifle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifle_Statics::NewProp_shootRifle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifle_Statics::NewProp_fAgent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARifle_Statics::NewProp_fAgent = { "fAgent", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifle, fAgent), Z_Construct_UDelegateFunction_Vermilya_Harlan_ED_Delegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARifle_Statics::NewProp_fAgent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifle_Statics::NewProp_fAgent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifle_Statics::NewProp_isAlive_MetaData[] = {
		{ "Category", "Rifle" },
		{ "ModuleRelativePath", "Public/Actors/Rifle.h" },
	};
#endif
	void Z_Construct_UClass_ARifle_Statics::NewProp_isAlive_SetBit(void* Obj)
	{
		((ARifle*)Obj)->isAlive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARifle_Statics::NewProp_isAlive = { "isAlive", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARifle), &Z_Construct_UClass_ARifle_Statics::NewProp_isAlive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARifle_Statics::NewProp_isAlive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifle_Statics::NewProp_isAlive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifle_Statics::NewProp_SkeletionMesh_MetaData[] = {
		{ "Category", "Rifle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARifle_Statics::NewProp_SkeletionMesh = { "SkeletionMesh", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifle, SkeletionMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARifle_Statics::NewProp_SkeletionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifle_Statics::NewProp_SkeletionMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifle_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Rifle" },
		{ "ModuleRelativePath", "Public/Actors/Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARifle_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifle, ProjectileClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARifle_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifle_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifle_Statics::NewProp_pawn_MetaData[] = {
		{ "Category", "Rifle" },
		{ "ModuleRelativePath", "Public/Actors/Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARifle_Statics::NewProp_pawn = { "pawn", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifle, pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARifle_Statics::NewProp_pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifle_Statics::NewProp_pawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifle_Statics::NewProp_SpawnSocketName_MetaData[] = {
		{ "Category", "Rifle" },
		{ "ModuleRelativePath", "Public/Actors/Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ARifle_Statics::NewProp_SpawnSocketName = { "SpawnSocketName", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifle, SpawnSocketName), METADATA_PARAMS(Z_Construct_UClass_ARifle_Statics::NewProp_SpawnSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifle_Statics::NewProp_SpawnSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifle_Statics::NewProp_shootDelay_MetaData[] = {
		{ "Category", "Rifle" },
		{ "ModuleRelativePath", "Public/Actors/Rifle.h" },
	};
#endif
	void Z_Construct_UClass_ARifle_Statics::NewProp_shootDelay_SetBit(void* Obj)
	{
		((ARifle*)Obj)->shootDelay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARifle_Statics::NewProp_shootDelay = { "shootDelay", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARifle), &Z_Construct_UClass_ARifle_Statics::NewProp_shootDelay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARifle_Statics::NewProp_shootDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifle_Statics::NewProp_shootDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifle_Statics::NewProp_shotTimerFloat_MetaData[] = {
		{ "Category", "Rifle" },
		{ "ModuleRelativePath", "Public/Actors/Rifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARifle_Statics::NewProp_shotTimerFloat = { "shotTimerFloat", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifle, shotTimerFloat), METADATA_PARAMS(Z_Construct_UClass_ARifle_Statics::NewProp_shotTimerFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifle_Statics::NewProp_shotTimerFloat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARifle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifle_Statics::NewProp_rifleActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifle_Statics::NewProp_shootRifle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifle_Statics::NewProp_fAgent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifle_Statics::NewProp_isAlive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifle_Statics::NewProp_SkeletionMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifle_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifle_Statics::NewProp_pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifle_Statics::NewProp_SpawnSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifle_Statics::NewProp_shootDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifle_Statics::NewProp_shotTimerFloat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARifle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARifle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARifle_Statics::ClassParams = {
		&ARifle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARifle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARifle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARifle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARifle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARifle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARifle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARifle, 695519010);
	template<> VERMILYA_HARLAN_ED_API UClass* StaticClass<ARifle>()
	{
		return ARifle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARifle(Z_Construct_UClass_ARifle, &ARifle::StaticClass, TEXT("/Script/Vermilya_Harlan_ED"), TEXT("ARifle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARifle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
