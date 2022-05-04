// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PxDesginGame/Public/FTTPlayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFTTPlayerCharacter() {}
// Cross Module References
	PXDESGINGAME_API UEnum* Z_Construct_UEnum_PxDesginGame_PlayerBulletType();
	UPackage* Z_Construct_UPackage__Script_PxDesginGame();
	PXDESGINGAME_API UClass* Z_Construct_UClass_AFTTPlayerCharacter_NoRegister();
	PXDESGINGAME_API UClass* Z_Construct_UClass_AFTTPlayerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent();
	PXDESGINGAME_API UClass* Z_Construct_UClass_AGun_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	static UEnum* PlayerBulletType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PxDesginGame_PlayerBulletType, Z_Construct_UPackage__Script_PxDesginGame(), TEXT("PlayerBulletType"));
		}
		return Singleton;
	}
	template<> PXDESGINGAME_API UEnum* StaticEnum<PlayerBulletType>()
	{
		return PlayerBulletType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_PlayerBulletType(PlayerBulletType_StaticEnum, TEXT("/Script/PxDesginGame"), TEXT("PlayerBulletType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PxDesginGame_PlayerBulletType_Hash() { return 2919842301U; }
	UEnum* Z_Construct_UEnum_PxDesginGame_PlayerBulletType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PxDesginGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("PlayerBulletType"), 0, Get_Z_Construct_UEnum_PxDesginGame_PlayerBulletType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PlayerBulletType::UP", (int64)PlayerBulletType::UP },
				{ "PlayerBulletType::DOWN", (int64)PlayerBulletType::DOWN },
				{ "PlayerBulletType::RIGHT", (int64)PlayerBulletType::RIGHT },
				{ "PlayerBulletType::LEFT", (int64)PlayerBulletType::LEFT },
				{ "PlayerBulletType::FORWARD", (int64)PlayerBulletType::FORWARD },
				{ "PlayerBulletType::BACKWARD", (int64)PlayerBulletType::BACKWARD },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BACKWARD.Name", "PlayerBulletType::BACKWARD" },
				{ "BlueprintType", "true" },
				{ "DOWN.Name", "PlayerBulletType::DOWN" },
				{ "FORWARD.Name", "PlayerBulletType::FORWARD" },
				{ "LEFT.Name", "PlayerBulletType::LEFT" },
				{ "ModuleRelativePath", "Public/FTTPlayerCharacter.h" },
				{ "RIGHT.Name", "PlayerBulletType::RIGHT" },
				{ "UP.Name", "PlayerBulletType::UP" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PxDesginGame,
				nullptr,
				"PlayerBulletType",
				"PlayerBulletType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(AFTTPlayerCharacter::execGetHeatlthPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHeatlthPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFTTPlayerCharacter::execIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFTTPlayerCharacter::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_GET_STRUCT_REF(FDamageEvent,Z_Param_Out_DamageEvent);
		P_GET_OBJECT(AController,Z_Param_EventInstigator);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->TakeDamage(Z_Param_DamageAmount,Z_Param_Out_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	void AFTTPlayerCharacter::StaticRegisterNativesAFTTPlayerCharacter()
	{
		UClass* Class = AFTTPlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeatlthPercent", &AFTTPlayerCharacter::execGetHeatlthPercent },
			{ "IsDead", &AFTTPlayerCharacter::execIsDead },
			{ "TakeDamage", &AFTTPlayerCharacter::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFTTPlayerCharacter_GetHeatlthPercent_Statics
	{
		struct FTTPlayerCharacter_eventGetHeatlthPercent_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFTTPlayerCharacter_GetHeatlthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTTPlayerCharacter_eventGetHeatlthPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFTTPlayerCharacter_GetHeatlthPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFTTPlayerCharacter_GetHeatlthPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFTTPlayerCharacter_GetHeatlthPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FTTPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFTTPlayerCharacter_GetHeatlthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFTTPlayerCharacter, nullptr, "GetHeatlthPercent", nullptr, nullptr, sizeof(FTTPlayerCharacter_eventGetHeatlthPercent_Parms), Z_Construct_UFunction_AFTTPlayerCharacter_GetHeatlthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFTTPlayerCharacter_GetHeatlthPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFTTPlayerCharacter_GetHeatlthPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFTTPlayerCharacter_GetHeatlthPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFTTPlayerCharacter_GetHeatlthPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFTTPlayerCharacter_GetHeatlthPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFTTPlayerCharacter_IsDead_Statics
	{
		struct FTTPlayerCharacter_eventIsDead_Parms
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
	void Z_Construct_UFunction_AFTTPlayerCharacter_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FTTPlayerCharacter_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFTTPlayerCharacter_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTTPlayerCharacter_eventIsDead_Parms), &Z_Construct_UFunction_AFTTPlayerCharacter_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFTTPlayerCharacter_IsDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFTTPlayerCharacter_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFTTPlayerCharacter_IsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FTTPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFTTPlayerCharacter_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFTTPlayerCharacter, nullptr, "IsDead", nullptr, nullptr, sizeof(FTTPlayerCharacter_eventIsDead_Parms), Z_Construct_UFunction_AFTTPlayerCharacter_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFTTPlayerCharacter_IsDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFTTPlayerCharacter_IsDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFTTPlayerCharacter_IsDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFTTPlayerCharacter_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFTTPlayerCharacter_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage_Statics
	{
		struct FTTPlayerCharacter_eventTakeDamage_Parms
		{
			float DamageAmount;
			FDamageEvent DamageEvent;
			AController* EventInstigator;
			AActor* DamageCauser;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageEvent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTTPlayerCharacter_eventTakeDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTTPlayerCharacter_eventTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTTPlayerCharacter_eventTakeDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage_Statics::NewProp_DamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage_Statics::NewProp_DamageEvent = { "DamageEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTTPlayerCharacter_eventTakeDamage_Parms, DamageEvent), Z_Construct_UScriptStruct_FDamageEvent, METADATA_PARAMS(Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage_Statics::NewProp_DamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage_Statics::NewProp_DamageEvent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTTPlayerCharacter_eventTakeDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage_Statics::NewProp_EventInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage_Statics::NewProp_DamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage_Statics::NewProp_DamageAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// TakeDamage Function Override\n" },
		{ "ModuleRelativePath", "Public/FTTPlayerCharacter.h" },
		{ "ToolTip", "TakeDamage Function Override" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFTTPlayerCharacter, nullptr, "TakeDamage", nullptr, nullptr, sizeof(FTTPlayerCharacter_eventTakeDamage_Parms), Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFTTPlayerCharacter_NoRegister()
	{
		return AFTTPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFTTPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bulletType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bulletType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsShooting_MetaData[];
#endif
		static void NewProp_IsShooting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsShooting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GunClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Death_MetaData[];
#endif
		static void NewProp_Death_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Death;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFTTPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PxDesginGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFTTPlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFTTPlayerCharacter_GetHeatlthPercent, "GetHeatlthPercent" }, // 3010168734
		{ &Z_Construct_UFunction_AFTTPlayerCharacter_IsDead, "IsDead" }, // 1276129966
		{ &Z_Construct_UFunction_AFTTPlayerCharacter_TakeDamage, "TakeDamage" }, // 3266165964
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFTTPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FTTPlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/FTTPlayerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_bulletType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Bullet" },
		{ "Comment", "// BulleType\n" },
		{ "ModuleRelativePath", "Public/FTTPlayerCharacter.h" },
		{ "ToolTip", "BulleType" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_bulletType = { "bulletType", nullptr, (EPropertyFlags)0x0040000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFTTPlayerCharacter, bulletType), Z_Construct_UEnum_PxDesginGame_PlayerBulletType, METADATA_PARAMS(Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_bulletType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_bulletType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_bulletType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_IsShooting_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/FTTPlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_IsShooting_SetBit(void* Obj)
	{
		((AFTTPlayerCharacter*)Obj)->IsShooting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_IsShooting = { "IsShooting", nullptr, (EPropertyFlags)0x0040000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFTTPlayerCharacter), &Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_IsShooting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_IsShooting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_IsShooting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "FTTPlayerCharacter" },
		{ "ModuleRelativePath", "Public/FTTPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFTTPlayerCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "FTTPlayerCharacter" },
		{ "Comment", "// HP\n" },
		{ "ModuleRelativePath", "Public/FTTPlayerCharacter.h" },
		{ "ToolTip", "HP" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFTTPlayerCharacter, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_Gun_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Gun" },
		{ "Comment", "// ???? ???? ????\xc5\xb0?? ??????\n" },
		{ "ModuleRelativePath", "Public/FTTPlayerCharacter.h" },
		{ "ToolTip", "???? ???? ????\xc5\xb0?? ??????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_Gun = { "Gun", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFTTPlayerCharacter, Gun), Z_Construct_UClass_AGun_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_GunClass_MetaData[] = {
		{ "Category", "Gun" },
		{ "Comment", "// ???? \xc5\xac???? ????\n" },
		{ "ModuleRelativePath", "Public/FTTPlayerCharacter.h" },
		{ "ToolTip", "???? \xc5\xac???? ????" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_GunClass = { "GunClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFTTPlayerCharacter, GunClass), Z_Construct_UClass_AGun_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_GunClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_GunClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_Death_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Death" },
		{ "ModuleRelativePath", "Public/FTTPlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_Death_SetBit(void* Obj)
	{
		((AFTTPlayerCharacter*)Obj)->Death = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_Death = { "Death", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFTTPlayerCharacter), &Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_Death_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_Death_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_Death_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_RotationRate_MetaData[] = {
		{ "Category", "FTTPlayerCharacter" },
		{ "ModuleRelativePath", "Public/FTTPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFTTPlayerCharacter, RotationRate), METADATA_PARAMS(Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_RotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_RotationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FTTPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFTTPlayerCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "Comment", "// VARIABLE\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FTTPlayerCharacter.h" },
		{ "ToolTip", "VARIABLE" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFTTPlayerCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_SpringArm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFTTPlayerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_bulletType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_bulletType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_IsShooting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_GunClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_Death,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_RotationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFTTPlayerCharacter_Statics::NewProp_SpringArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFTTPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFTTPlayerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFTTPlayerCharacter_Statics::ClassParams = {
		&AFTTPlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFTTPlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFTTPlayerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFTTPlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFTTPlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFTTPlayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFTTPlayerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFTTPlayerCharacter, 2574515584);
	template<> PXDESGINGAME_API UClass* StaticClass<AFTTPlayerCharacter>()
	{
		return AFTTPlayerCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFTTPlayerCharacter(Z_Construct_UClass_AFTTPlayerCharacter, &AFTTPlayerCharacter::StaticClass, TEXT("/Script/PxDesginGame"), TEXT("AFTTPlayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFTTPlayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
