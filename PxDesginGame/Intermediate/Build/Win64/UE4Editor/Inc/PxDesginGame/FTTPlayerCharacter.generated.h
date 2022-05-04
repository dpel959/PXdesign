// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDamageEvent;
class AController;
class AActor;
#ifdef PXDESGINGAME_FTTPlayerCharacter_generated_h
#error "FTTPlayerCharacter.generated.h already included, missing '#pragma once' in FTTPlayerCharacter.h"
#endif
#define PXDESGINGAME_FTTPlayerCharacter_generated_h

#define PxDesginGame_Source_PxDesginGame_Public_FTTPlayerCharacter_h_28_SPARSE_DATA
#define PxDesginGame_Source_PxDesginGame_Public_FTTPlayerCharacter_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHeatlthPercent); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execTakeDamage);


#define PxDesginGame_Source_PxDesginGame_Public_FTTPlayerCharacter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHeatlthPercent); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execTakeDamage);


#define PxDesginGame_Source_PxDesginGame_Public_FTTPlayerCharacter_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFTTPlayerCharacter(); \
	friend struct Z_Construct_UClass_AFTTPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AFTTPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PxDesginGame"), NO_API) \
	DECLARE_SERIALIZER(AFTTPlayerCharacter)


#define PxDesginGame_Source_PxDesginGame_Public_FTTPlayerCharacter_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAFTTPlayerCharacter(); \
	friend struct Z_Construct_UClass_AFTTPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AFTTPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PxDesginGame"), NO_API) \
	DECLARE_SERIALIZER(AFTTPlayerCharacter)


#define PxDesginGame_Source_PxDesginGame_Public_FTTPlayerCharacter_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFTTPlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFTTPlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFTTPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFTTPlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFTTPlayerCharacter(AFTTPlayerCharacter&&); \
	NO_API AFTTPlayerCharacter(const AFTTPlayerCharacter&); \
public:


#define PxDesginGame_Source_PxDesginGame_Public_FTTPlayerCharacter_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFTTPlayerCharacter(AFTTPlayerCharacter&&); \
	NO_API AFTTPlayerCharacter(const AFTTPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFTTPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFTTPlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFTTPlayerCharacter)


#define PxDesginGame_Source_PxDesginGame_Public_FTTPlayerCharacter_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AFTTPlayerCharacter, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AFTTPlayerCharacter, Camera); } \
	FORCEINLINE static uint32 __PPO__RotationRate() { return STRUCT_OFFSET(AFTTPlayerCharacter, RotationRate); } \
	FORCEINLINE static uint32 __PPO__Death() { return STRUCT_OFFSET(AFTTPlayerCharacter, Death); } \
	FORCEINLINE static uint32 __PPO__GunClass() { return STRUCT_OFFSET(AFTTPlayerCharacter, GunClass); } \
	FORCEINLINE static uint32 __PPO__Gun() { return STRUCT_OFFSET(AFTTPlayerCharacter, Gun); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(AFTTPlayerCharacter, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AFTTPlayerCharacter, Health); } \
	FORCEINLINE static uint32 __PPO__IsShooting() { return STRUCT_OFFSET(AFTTPlayerCharacter, IsShooting); } \
	FORCEINLINE static uint32 __PPO__bulletType() { return STRUCT_OFFSET(AFTTPlayerCharacter, bulletType); }


#define PxDesginGame_Source_PxDesginGame_Public_FTTPlayerCharacter_h_25_PROLOG
#define PxDesginGame_Source_PxDesginGame_Public_FTTPlayerCharacter_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PxDesginGame_Source_PxDesginGame_Public_FTTPlayerCharacter_h_28_PRIVATE_PROPERTY_OFFSET \
	PxDesginGame_Source_PxDesginGame_Public_FTTPlayerCharacter_h_28_SPARSE_DATA \
	PxDesginGame_Source_PxDesginGame_Public_FTTPlayerCharacter_h_28_RPC_WRAPPERS \
	PxDesginGame_Source_PxDesginGame_Public_FTTPlayerCharacter_h_28_INCLASS \
	PxDesginGame_Source_PxDesginGame_Public_FTTPlayerCharacter_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PxDesginGame_Source_PxDesginGame_Public_FTTPlayerCharacter_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PxDesginGame_Source_PxDesginGame_Public_FTTPlayerCharacter_h_28_PRIVATE_PROPERTY_OFFSET \
	PxDesginGame_Source_PxDesginGame_Public_FTTPlayerCharacter_h_28_SPARSE_DATA \
	PxDesginGame_Source_PxDesginGame_Public_FTTPlayerCharacter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	PxDesginGame_Source_PxDesginGame_Public_FTTPlayerCharacter_h_28_INCLASS_NO_PURE_DECLS \
	PxDesginGame_Source_PxDesginGame_Public_FTTPlayerCharacter_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PXDESGINGAME_API UClass* StaticClass<class AFTTPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PxDesginGame_Source_PxDesginGame_Public_FTTPlayerCharacter_h


#define FOREACH_ENUM_PLAYERBULLETTYPE(op) \
	op(PlayerBulletType::UP) \
	op(PlayerBulletType::DOWN) \
	op(PlayerBulletType::RIGHT) \
	op(PlayerBulletType::LEFT) \
	op(PlayerBulletType::FORWARD) \
	op(PlayerBulletType::BACKWARD) 

enum class PlayerBulletType : uint8;
template<> PXDESGINGAME_API UEnum* StaticEnum<PlayerBulletType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
