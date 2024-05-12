// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef VERMILYA_HARLAN_ED_ExampleVar_generated_h
#error "ExampleVar.generated.h already included, missing '#pragma once' in ExampleVar.h"
#endif
#define VERMILYA_HARLAN_ED_ExampleVar_generated_h

#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h_14_DELEGATE \
struct _Script_Vermilya_Harlan_ED_eventVaraibleDelegate_Parms \
{ \
	AActor* OtherActor; \
}; \
static inline void FVaraibleDelegate_DelegateWrapper(const FMulticastScriptDelegate& VaraibleDelegate, AActor* OtherActor) \
{ \
	_Script_Vermilya_Harlan_ED_eventVaraibleDelegate_Parms Parms; \
	Parms.OtherActor=OtherActor; \
	VaraibleDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h_19_SPARSE_DATA
#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExampleBoundFuction);


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExampleBoundFuction);


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExampleVar(); \
	friend struct Z_Construct_UClass_AExampleVar_Statics; \
public: \
	DECLARE_CLASS(AExampleVar, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Vermilya_Harlan_ED"), NO_API) \
	DECLARE_SERIALIZER(AExampleVar)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAExampleVar(); \
	friend struct Z_Construct_UClass_AExampleVar_Statics; \
public: \
	DECLARE_CLASS(AExampleVar, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Vermilya_Harlan_ED"), NO_API) \
	DECLARE_SERIALIZER(AExampleVar)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExampleVar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExampleVar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExampleVar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExampleVar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExampleVar(AExampleVar&&); \
	NO_API AExampleVar(const AExampleVar&); \
public:


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExampleVar(AExampleVar&&); \
	NO_API AExampleVar(const AExampleVar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExampleVar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExampleVar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExampleVar)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VisibleAnywhere() { return STRUCT_OFFSET(AExampleVar, VisibleAnywhere); } \
	FORCEINLINE static uint32 __PPO__VisibleDefaultsOnly() { return STRUCT_OFFSET(AExampleVar, VisibleDefaultsOnly); } \
	FORCEINLINE static uint32 __PPO__VisibleInstanceOnlyOdd() { return STRUCT_OFFSET(AExampleVar, VisibleInstanceOnlyOdd); } \
	FORCEINLINE static uint32 __PPO__VisibleInstanceOnly() { return STRUCT_OFFSET(AExampleVar, VisibleInstanceOnly); } \
	FORCEINLINE static uint32 __PPO__EditAnywhere() { return STRUCT_OFFSET(AExampleVar, EditAnywhere); } \
	FORCEINLINE static uint32 __PPO__EditDefaultsOnlyOdd() { return STRUCT_OFFSET(AExampleVar, EditDefaultsOnlyOdd); } \
	FORCEINLINE static uint32 __PPO__EditInstanceOnlyOdd() { return STRUCT_OFFSET(AExampleVar, EditInstanceOnlyOdd); } \
	FORCEINLINE static uint32 __PPO__EditDefaultsOnly() { return STRUCT_OFFSET(AExampleVar, EditDefaultsOnly); } \
	FORCEINLINE static uint32 __PPO__EditInstanceOnly() { return STRUCT_OFFSET(AExampleVar, EditInstanceOnly); } \
	FORCEINLINE static uint32 __PPO__ClassType() { return STRUCT_OFFSET(AExampleVar, ClassType); } \
	FORCEINLINE static uint32 __PPO__OnExampleDelegate() { return STRUCT_OFFSET(AExampleVar, OnExampleDelegate); } \
	FORCEINLINE static uint32 __PPO__ValueArray() { return STRUCT_OFFSET(AExampleVar, ValueArray); } \
	FORCEINLINE static uint32 __PPO__PointerArray() { return STRUCT_OFFSET(AExampleVar, PointerArray); }


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h_16_PROLOG
#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h_19_PRIVATE_PROPERTY_OFFSET \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h_19_SPARSE_DATA \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h_19_RPC_WRAPPERS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h_19_INCLASS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h_19_PRIVATE_PROPERTY_OFFSET \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h_19_SPARSE_DATA \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h_19_INCLASS_NO_PURE_DECLS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VERMILYA_HARLAN_ED_API UClass* StaticClass<class AExampleVar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleVar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
