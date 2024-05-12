// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FRotator;
#ifdef VERMILYA_HARLAN_ED_ExampleFuction_generated_h
#error "ExampleFuction.generated.h already included, missing '#pragma once' in ExampleFuction.h"
#endif
#define VERMILYA_HARLAN_ED_ExampleFuction_generated_h

#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_SPARSE_DATA
#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_RPC_WRAPPERS \
	virtual void BluePrintNativeEvent_Implementation(); \
 \
	DECLARE_FUNCTION(execBluePrintNativeEvent); \
	DECLARE_FUNCTION(execBlueprintCallable); \
	DECLARE_FUNCTION(execPureFunction);


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BluePrintNativeEvent_Implementation(); \
 \
	DECLARE_FUNCTION(execBluePrintNativeEvent); \
	DECLARE_FUNCTION(execBlueprintCallable); \
	DECLARE_FUNCTION(execPureFunction);


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_EVENT_PARMS \
	struct ExampleFuction_eventMultipleReturnValues_Parms \
	{ \
		AActor* actor1; \
		FRotator rotation; \
		AActor* actor2; \
		int32 index; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ExampleFuction_eventMultipleReturnValues_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_CALLBACK_WRAPPERS
#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExampleFuction(); \
	friend struct Z_Construct_UClass_AExampleFuction_Statics; \
public: \
	DECLARE_CLASS(AExampleFuction, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Vermilya_Harlan_ED"), NO_API) \
	DECLARE_SERIALIZER(AExampleFuction)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAExampleFuction(); \
	friend struct Z_Construct_UClass_AExampleFuction_Statics; \
public: \
	DECLARE_CLASS(AExampleFuction, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Vermilya_Harlan_ED"), NO_API) \
	DECLARE_SERIALIZER(AExampleFuction)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExampleFuction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExampleFuction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExampleFuction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExampleFuction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExampleFuction(AExampleFuction&&); \
	NO_API AExampleFuction(const AExampleFuction&); \
public:


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExampleFuction(AExampleFuction&&); \
	NO_API AExampleFuction(const AExampleFuction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExampleFuction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExampleFuction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExampleFuction)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_PRIVATE_PROPERTY_OFFSET
#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_9_PROLOG \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_EVENT_PARMS


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_PRIVATE_PROPERTY_OFFSET \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_SPARSE_DATA \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_RPC_WRAPPERS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_CALLBACK_WRAPPERS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_INCLASS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_PRIVATE_PROPERTY_OFFSET \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_SPARSE_DATA \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_CALLBACK_WRAPPERS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_INCLASS_NO_PURE_DECLS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VERMILYA_HARLAN_ED_API UClass* StaticClass<class AExampleFuction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleFuction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
