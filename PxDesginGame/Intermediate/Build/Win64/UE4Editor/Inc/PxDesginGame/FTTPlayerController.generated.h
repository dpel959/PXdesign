// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PXDESGINGAME_FTTPlayerController_generated_h
#error "FTTPlayerController.generated.h already included, missing '#pragma once' in FTTPlayerController.h"
#endif
#define PXDESGINGAME_FTTPlayerController_generated_h

#define PxDesginGame_Source_PxDesginGame_Public_FTTPlayerController_h_15_SPARSE_DATA
#define PxDesginGame_Source_PxDesginGame_Public_FTTPlayerController_h_15_RPC_WRAPPERS
#define PxDesginGame_Source_PxDesginGame_Public_FTTPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define PxDesginGame_Source_PxDesginGame_Public_FTTPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFTTPlayerController(); \
	friend struct Z_Construct_UClass_AFTTPlayerController_Statics; \
public: \
	DECLARE_CLASS(AFTTPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PxDesginGame"), NO_API) \
	DECLARE_SERIALIZER(AFTTPlayerController)


#define PxDesginGame_Source_PxDesginGame_Public_FTTPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFTTPlayerController(); \
	friend struct Z_Construct_UClass_AFTTPlayerController_Statics; \
public: \
	DECLARE_CLASS(AFTTPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PxDesginGame"), NO_API) \
	DECLARE_SERIALIZER(AFTTPlayerController)


#define PxDesginGame_Source_PxDesginGame_Public_FTTPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFTTPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFTTPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFTTPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFTTPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFTTPlayerController(AFTTPlayerController&&); \
	NO_API AFTTPlayerController(const AFTTPlayerController&); \
public:


#define PxDesginGame_Source_PxDesginGame_Public_FTTPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFTTPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFTTPlayerController(AFTTPlayerController&&); \
	NO_API AFTTPlayerController(const AFTTPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFTTPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFTTPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFTTPlayerController)


#define PxDesginGame_Source_PxDesginGame_Public_FTTPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Hud() { return STRUCT_OFFSET(AFTTPlayerController, Hud); } \
	FORCEINLINE static uint32 __PPO__HudClass() { return STRUCT_OFFSET(AFTTPlayerController, HudClass); } \
	FORCEINLINE static uint32 __PPO__WinScreenClass() { return STRUCT_OFFSET(AFTTPlayerController, WinScreenClass); } \
	FORCEINLINE static uint32 __PPO__LoseScreenClass() { return STRUCT_OFFSET(AFTTPlayerController, LoseScreenClass); } \
	FORCEINLINE static uint32 __PPO__RestartDelay() { return STRUCT_OFFSET(AFTTPlayerController, RestartDelay); }


#define PxDesginGame_Source_PxDesginGame_Public_FTTPlayerController_h_12_PROLOG
#define PxDesginGame_Source_PxDesginGame_Public_FTTPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PxDesginGame_Source_PxDesginGame_Public_FTTPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	PxDesginGame_Source_PxDesginGame_Public_FTTPlayerController_h_15_SPARSE_DATA \
	PxDesginGame_Source_PxDesginGame_Public_FTTPlayerController_h_15_RPC_WRAPPERS \
	PxDesginGame_Source_PxDesginGame_Public_FTTPlayerController_h_15_INCLASS \
	PxDesginGame_Source_PxDesginGame_Public_FTTPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PxDesginGame_Source_PxDesginGame_Public_FTTPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PxDesginGame_Source_PxDesginGame_Public_FTTPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	PxDesginGame_Source_PxDesginGame_Public_FTTPlayerController_h_15_SPARSE_DATA \
	PxDesginGame_Source_PxDesginGame_Public_FTTPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PxDesginGame_Source_PxDesginGame_Public_FTTPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	PxDesginGame_Source_PxDesginGame_Public_FTTPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PXDESGINGAME_API UClass* StaticClass<class AFTTPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PxDesginGame_Source_PxDesginGame_Public_FTTPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
