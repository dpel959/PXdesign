// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PxDesginGame/Public/FTTPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFTTPlayerController() {}
// Cross Module References
	PXDESGINGAME_API UClass* Z_Construct_UClass_AFTTPlayerController_NoRegister();
	PXDESGINGAME_API UClass* Z_Construct_UClass_AFTTPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_PxDesginGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AFTTPlayerController::StaticRegisterNativesAFTTPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AFTTPlayerController_NoRegister()
	{
		return AFTTPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AFTTPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestartDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RestartDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoseScreenClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LoseScreenClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinScreenClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WinScreenClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HudClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HudClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hud_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hud;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFTTPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_PxDesginGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFTTPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FTTPlayerController.h" },
		{ "ModuleRelativePath", "Public/FTTPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_RestartDelay_MetaData[] = {
		{ "Category", "FTTPlayerController" },
		{ "ModuleRelativePath", "Public/FTTPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_RestartDelay = { "RestartDelay", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFTTPlayerController, RestartDelay), METADATA_PARAMS(Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_RestartDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_RestartDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_LoseScreenClass_MetaData[] = {
		{ "Category", "FTTPlayerController" },
		{ "ModuleRelativePath", "Public/FTTPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_LoseScreenClass = { "LoseScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFTTPlayerController, LoseScreenClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_LoseScreenClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_LoseScreenClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_WinScreenClass_MetaData[] = {
		{ "Category", "FTTPlayerController" },
		{ "ModuleRelativePath", "Public/FTTPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_WinScreenClass = { "WinScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFTTPlayerController, WinScreenClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_WinScreenClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_WinScreenClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_HudClass_MetaData[] = {
		{ "Category", "FTTPlayerController" },
		{ "ModuleRelativePath", "Public/FTTPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_HudClass = { "HudClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFTTPlayerController, HudClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_HudClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_HudClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_Hud_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FTTPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_Hud = { "Hud", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFTTPlayerController, Hud), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_Hud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_Hud_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFTTPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_RestartDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_LoseScreenClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_WinScreenClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_HudClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFTTPlayerController_Statics::NewProp_Hud,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFTTPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFTTPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFTTPlayerController_Statics::ClassParams = {
		&AFTTPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFTTPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFTTPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFTTPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFTTPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFTTPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFTTPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFTTPlayerController, 1812564494);
	template<> PXDESGINGAME_API UClass* StaticClass<AFTTPlayerController>()
	{
		return AFTTPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFTTPlayerController(Z_Construct_UClass_AFTTPlayerController, &AFTTPlayerController::StaticClass, TEXT("/Script/PxDesginGame"), TEXT("AFTTPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFTTPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
