// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PxDesginGame/Public/GravityMoveComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGravityMoveComponent() {}
// Cross Module References
	PXDESGINGAME_API UClass* Z_Construct_UClass_UGravityMoveComponent_NoRegister();
	PXDESGINGAME_API UClass* Z_Construct_UClass_UGravityMoveComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PxDesginGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UGravityMoveComponent::StaticRegisterNativesUGravityMoveComponent()
	{
	}
	UClass* Z_Construct_UClass_UGravityMoveComponent_NoRegister()
	{
		return UGravityMoveComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGravityMoveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGravityMoveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PxDesginGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGravityMoveComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GravityMoveComponent.h" },
		{ "ModuleRelativePath", "Public/GravityMoveComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGravityMoveComponent_Statics::NewProp_direction_MetaData[] = {
		{ "Category", "GravityMoveComponent" },
		{ "ModuleRelativePath", "Public/GravityMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGravityMoveComponent_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGravityMoveComponent, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGravityMoveComponent_Statics::NewProp_direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGravityMoveComponent_Statics::NewProp_direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGravityMoveComponent_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "GravityMoveComponent" },
		{ "ModuleRelativePath", "Public/GravityMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGravityMoveComponent_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGravityMoveComponent, speed), METADATA_PARAMS(Z_Construct_UClass_UGravityMoveComponent_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGravityMoveComponent_Statics::NewProp_speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGravityMoveComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGravityMoveComponent_Statics::NewProp_direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGravityMoveComponent_Statics::NewProp_speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGravityMoveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGravityMoveComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGravityMoveComponent_Statics::ClassParams = {
		&UGravityMoveComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGravityMoveComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGravityMoveComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGravityMoveComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGravityMoveComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGravityMoveComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGravityMoveComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGravityMoveComponent, 3797276397);
	template<> PXDESGINGAME_API UClass* StaticClass<UGravityMoveComponent>()
	{
		return UGravityMoveComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGravityMoveComponent(Z_Construct_UClass_UGravityMoveComponent, &UGravityMoveComponent::StaticClass, TEXT("/Script/PxDesginGame"), TEXT("UGravityMoveComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGravityMoveComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
