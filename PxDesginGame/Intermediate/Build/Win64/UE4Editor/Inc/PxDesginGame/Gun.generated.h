// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PXDESGINGAME_Gun_generated_h
#error "Gun.generated.h already included, missing '#pragma once' in Gun.h"
#endif
#define PXDESGINGAME_Gun_generated_h

#define PxDesginGame_Source_PxDesginGame_Public_Gun_h_15_SPARSE_DATA
#define PxDesginGame_Source_PxDesginGame_Public_Gun_h_15_RPC_WRAPPERS
#define PxDesginGame_Source_PxDesginGame_Public_Gun_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define PxDesginGame_Source_PxDesginGame_Public_Gun_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGun(); \
	friend struct Z_Construct_UClass_AGun_Statics; \
public: \
	DECLARE_CLASS(AGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PxDesginGame"), NO_API) \
	DECLARE_SERIALIZER(AGun)


#define PxDesginGame_Source_PxDesginGame_Public_Gun_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGun(); \
	friend struct Z_Construct_UClass_AGun_Statics; \
public: \
	DECLARE_CLASS(AGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PxDesginGame"), NO_API) \
	DECLARE_SERIALIZER(AGun)


#define PxDesginGame_Source_PxDesginGame_Public_Gun_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGun(AGun&&); \
	NO_API AGun(const AGun&); \
public:


#define PxDesginGame_Source_PxDesginGame_Public_Gun_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGun(AGun&&); \
	NO_API AGun(const AGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGun)


#define PxDesginGame_Source_PxDesginGame_Public_Gun_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(AGun, Root); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AGun, Mesh); } \
	FORCEINLINE static uint32 __PPO__MuzzleFlash() { return STRUCT_OFFSET(AGun, MuzzleFlash); } \
	FORCEINLINE static uint32 __PPO__MaxRange() { return STRUCT_OFFSET(AGun, MaxRange); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(AGun, Damage); } \
	FORCEINLINE static uint32 __PPO__MuzzleSound() { return STRUCT_OFFSET(AGun, MuzzleSound); } \
	FORCEINLINE static uint32 __PPO__ProjectileBaseClass() { return STRUCT_OFFSET(AGun, ProjectileBaseClass); } \
	FORCEINLINE static uint32 __PPO__ProjectileSpawnPoint() { return STRUCT_OFFSET(AGun, ProjectileSpawnPoint); } \
	FORCEINLINE static uint32 __PPO__bulletType() { return STRUCT_OFFSET(AGun, bulletType); }


#define PxDesginGame_Source_PxDesginGame_Public_Gun_h_12_PROLOG
#define PxDesginGame_Source_PxDesginGame_Public_Gun_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PxDesginGame_Source_PxDesginGame_Public_Gun_h_15_PRIVATE_PROPERTY_OFFSET \
	PxDesginGame_Source_PxDesginGame_Public_Gun_h_15_SPARSE_DATA \
	PxDesginGame_Source_PxDesginGame_Public_Gun_h_15_RPC_WRAPPERS \
	PxDesginGame_Source_PxDesginGame_Public_Gun_h_15_INCLASS \
	PxDesginGame_Source_PxDesginGame_Public_Gun_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PxDesginGame_Source_PxDesginGame_Public_Gun_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PxDesginGame_Source_PxDesginGame_Public_Gun_h_15_PRIVATE_PROPERTY_OFFSET \
	PxDesginGame_Source_PxDesginGame_Public_Gun_h_15_SPARSE_DATA \
	PxDesginGame_Source_PxDesginGame_Public_Gun_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PxDesginGame_Source_PxDesginGame_Public_Gun_h_15_INCLASS_NO_PURE_DECLS \
	PxDesginGame_Source_PxDesginGame_Public_Gun_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PXDESGINGAME_API UClass* StaticClass<class AGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PxDesginGame_Source_PxDesginGame_Public_Gun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
