// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vermilya_Harlan_ED/Public/Both/CharacterAnimation.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAnimation() {}
// Cross Module References
	VERMILYA_HARLAN_ED_API UClass* Z_Construct_UClass_UCharacterAnimation_NoRegister();
	VERMILYA_HARLAN_ED_API UClass* Z_Construct_UClass_UCharacterAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Vermilya_Harlan_ED();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterAnimation::execDeadAnimation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_percent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeadAnimation_Implementation(Z_Param_percent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterAnimation::execHurtAnimation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_percent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HurtAnimation_Implementation(Z_Param_percent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterAnimation::execPreviewUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreviewUpdate_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterAnimation::execAttackAnim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackAnim_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UCharacterAnimation_AttackAnim = FName(TEXT("AttackAnim"));
	void UCharacterAnimation::AttackAnim()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCharacterAnimation_AttackAnim),NULL);
	}
	static FName NAME_UCharacterAnimation_DeadAnimation = FName(TEXT("DeadAnimation"));
	void UCharacterAnimation::DeadAnimation(float percent)
	{
		CharacterAnimation_eventDeadAnimation_Parms Parms;
		Parms.percent=percent;
		ProcessEvent(FindFunctionChecked(NAME_UCharacterAnimation_DeadAnimation),&Parms);
	}
	static FName NAME_UCharacterAnimation_HurtAnimation = FName(TEXT("HurtAnimation"));
	void UCharacterAnimation::HurtAnimation(float percent)
	{
		CharacterAnimation_eventHurtAnimation_Parms Parms;
		Parms.percent=percent;
		ProcessEvent(FindFunctionChecked(NAME_UCharacterAnimation_HurtAnimation),&Parms);
	}
	static FName NAME_UCharacterAnimation_PreviewUpdate = FName(TEXT("PreviewUpdate"));
	void UCharacterAnimation::PreviewUpdate()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCharacterAnimation_PreviewUpdate),NULL);
	}
	void UCharacterAnimation::StaticRegisterNativesUCharacterAnimation()
	{
		UClass* Class = UCharacterAnimation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackAnim", &UCharacterAnimation::execAttackAnim },
			{ "DeadAnimation", &UCharacterAnimation::execDeadAnimation },
			{ "HurtAnimation", &UCharacterAnimation::execHurtAnimation },
			{ "PreviewUpdate", &UCharacterAnimation::execPreviewUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterAnimation_AttackAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterAnimation_AttackAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAnimation_AttackAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAnimation, nullptr, "AttackAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterAnimation_AttackAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimation_AttackAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterAnimation_AttackAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterAnimation_AttackAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterAnimation_DeadAnimation_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterAnimation_DeadAnimation_Statics::NewProp_percent = { "percent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterAnimation_eventDeadAnimation_Parms, percent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAnimation_DeadAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAnimation_DeadAnimation_Statics::NewProp_percent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterAnimation_DeadAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAnimation_DeadAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAnimation, nullptr, "DeadAnimation", nullptr, nullptr, sizeof(CharacterAnimation_eventDeadAnimation_Parms), Z_Construct_UFunction_UCharacterAnimation_DeadAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimation_DeadAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterAnimation_DeadAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimation_DeadAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterAnimation_DeadAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterAnimation_DeadAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterAnimation_HurtAnimation_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterAnimation_HurtAnimation_Statics::NewProp_percent = { "percent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterAnimation_eventHurtAnimation_Parms, percent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAnimation_HurtAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAnimation_HurtAnimation_Statics::NewProp_percent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterAnimation_HurtAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAnimation_HurtAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAnimation, nullptr, "HurtAnimation", nullptr, nullptr, sizeof(CharacterAnimation_eventHurtAnimation_Parms), Z_Construct_UFunction_UCharacterAnimation_HurtAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimation_HurtAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterAnimation_HurtAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimation_HurtAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterAnimation_HurtAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterAnimation_HurtAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterAnimation_PreviewUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterAnimation_PreviewUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAnimation_PreviewUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAnimation, nullptr, "PreviewUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterAnimation_PreviewUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimation_PreviewUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterAnimation_PreviewUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterAnimation_PreviewUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterAnimation_NoRegister()
	{
		return UCharacterAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackAnime_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackAnime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HurtAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HurtAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MultiDeathAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiDeathAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MultiDeathAssets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Vermilya_Harlan_ED,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterAnimation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterAnimation_AttackAnim, "AttackAnim" }, // 3613120540
		{ &Z_Construct_UFunction_UCharacterAnimation_DeadAnimation, "DeadAnimation" }, // 2422562162
		{ &Z_Construct_UFunction_UCharacterAnimation_HurtAnimation, "HurtAnimation" }, // 1536250544
		{ &Z_Construct_UFunction_UCharacterAnimation_PreviewUpdate, "PreviewUpdate" }, // 3914317655
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Both/CharacterAnimation.h" },
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimation, Velocity), METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_AttackAnime_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_AttackAnime = { "AttackAnime", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimation, AttackAnime), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_AttackAnime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_AttackAnime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_HurtAsset_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_HurtAsset = { "HurtAsset", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimation, HurtAsset), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_HurtAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_HurtAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DeathAsset_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DeathAsset = { "DeathAsset", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimation, DeathAsset), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DeathAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DeathAsset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_MultiDeathAssets_Inner = { "MultiDeathAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_MultiDeathAssets_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_MultiDeathAssets = { "MultiDeathAssets", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAnimation, MultiDeathAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_MultiDeathAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_MultiDeathAssets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_AttackAnime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_HurtAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DeathAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_MultiDeathAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_MultiDeathAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAnimation_Statics::ClassParams = {
		&UCharacterAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterAnimation, 3349450501);
	template<> VERMILYA_HARLAN_ED_API UClass* StaticClass<UCharacterAnimation>()
	{
		return UCharacterAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterAnimation(Z_Construct_UClass_UCharacterAnimation, &UCharacterAnimation::StaticClass, TEXT("/Script/Vermilya_Harlan_ED"), TEXT("UCharacterAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
