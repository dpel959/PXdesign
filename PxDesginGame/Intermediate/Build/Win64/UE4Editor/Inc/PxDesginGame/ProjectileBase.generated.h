// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PXDESGINGAME_ProjectileBase_generated_h
#error "ProjectileBase.generated.h already included, missing '#pragma once' in ProjectileBase.h"
#endif
#define PXDESGINGAME_ProjectileBase_generated_h

#define PxDesginGame_Source_PxDesginGame_Public_ProjectileBase_h_28_SPARSE_DATA
#define PxDesginGame_Source_PxDesginGame_Public_ProjectileBase_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PxDesginGame_Source_PxDesginGame_Public_ProjectileBase_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PxDesginGame_Source_PxDesginGame_Public_ProjectileBase_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileBase(); \
	friend struct Z_Construct_UClass_AProjectileBase_Statics; \
public: \
	DECLARE_CLASS(AProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PxDesginGame"), NO_API) \
	DECLARE_SERIALIZER(AProjectileBase)


#define PxDesginGame_Source_PxDesginGame_Public_ProjectileBase_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAProjectileBase(); \
	friend struct Z_Construct_UClass_AProjectileBase_Statics; \
public: \
	DECLARE_CLASS(AProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PxDesginGame"), NO_API) \
	DECLARE_SERIALIZER(AProjectileBase)


#define PxDesginGame_Source_PxDesginGame_Public_ProjectileBase_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectileBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileBase(AProjectileBase&&); \
	NO_API AProjectileBase(const AProjectileBase&); \
public:


#define PxDesginGame_Source_PxDesginGame_Public_ProjectileBase_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileBase(AProjectileBase&&); \
	NO_API AProjectileBase(const AProjectileBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileBase)


#define PxDesginGame_Source_PxDesginGame_Public_ProjectileBase_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AProjectileBase, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AProjectileBase, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(AProjectileBase, DamageType); } \
	FORCEINLINE static uint32 __PPO__ImpactEffect() { return STRUCT_OFFSET(AProjectileBase, ImpactEffect); } \
	FORCEINLINE static uint32 __PPO__ImpactSound() { return STRUCT_OFFSET(AProjectileBase, ImpactSound); } \
	FORCEINLINE static uint32 __PPO__MovementSpeed() { return STRUCT_OFFSET(AProjectileBase, MovementSpeed); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(AProjectileBase, Damage); } \
	FORCEINLINE static uint32 __PPO__gravityEffectSpeed() { return STRUCT_OFFSET(AProjectileBase, gravityEffectSpeed); } \
	FORCEINLINE static uint32 __PPO__bulletType() { return STRUCT_OFFSET(AProjectileBase, bulletType); }


#define PxDesginGame_Source_PxDesginGame_Public_ProjectileBase_h_25_PROLOG
#define PxDesginGame_Source_PxDesginGame_Public_ProjectileBase_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PxDesginGame_Source_PxDesginGame_Public_ProjectileBase_h_28_PRIVATE_PROPERTY_OFFSET \
	PxDesginGame_Source_PxDesginGame_Public_ProjectileBase_h_28_SPARSE_DATA \
	PxDesginGame_Source_PxDesginGame_Public_ProjectileBase_h_28_RPC_WRAPPERS \
	PxDesginGame_Source_PxDesginGame_Public_ProjectileBase_h_28_INCLASS \
	PxDesginGame_Source_PxDesginGame_Public_ProjectileBase_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PxDesginGame_Source_PxDesginGame_Public_ProjectileBase_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PxDesginGame_Source_PxDesginGame_Public_ProjectileBase_h_28_PRIVATE_PROPERTY_OFFSET \
	PxDesginGame_Source_PxDesginGame_Public_ProjectileBase_h_28_SPARSE_DATA \
	PxDesginGame_Source_PxDesginGame_Public_ProjectileBase_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	PxDesginGame_Source_PxDesginGame_Public_ProjectileBase_h_28_INCLASS_NO_PURE_DECLS \
	PxDesginGame_Source_PxDesginGame_Public_ProjectileBase_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PXDESGINGAME_API UClass* StaticClass<class AProjectileBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PxDesginGame_Source_PxDesginGame_Public_ProjectileBase_h


#define FOREACH_ENUM_BULLETTYPE(op) \
	op(BulletType::UP) \
	op(BulletType::DOWN) \
	op(BulletType::RIGHT) \
	op(BulletType::LEFT) \
	op(BulletType::FORWARD) \
	op(BulletType::BACKWARD) 

enum class BulletType;
template<> PXDESGINGAME_API UEnum* StaticEnum<BulletType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
