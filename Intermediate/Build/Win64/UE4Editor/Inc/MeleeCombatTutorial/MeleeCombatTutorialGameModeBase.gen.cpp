// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeleeCombatTutorial/MeleeCombatTutorialGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeCombatTutorialGameModeBase() {}
// Cross Module References
	MELEECOMBATTUTORIAL_API UClass* Z_Construct_UClass_AMeleeCombatTutorialGameModeBase_NoRegister();
	MELEECOMBATTUTORIAL_API UClass* Z_Construct_UClass_AMeleeCombatTutorialGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MeleeCombatTutorial();
// End Cross Module References
	void AMeleeCombatTutorialGameModeBase::StaticRegisterNativesAMeleeCombatTutorialGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMeleeCombatTutorialGameModeBase_NoRegister()
	{
		return AMeleeCombatTutorialGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMeleeCombatTutorialGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeleeCombatTutorialGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MeleeCombatTutorial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeleeCombatTutorialGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MeleeCombatTutorialGameModeBase.h" },
		{ "ModuleRelativePath", "MeleeCombatTutorialGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeleeCombatTutorialGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeleeCombatTutorialGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMeleeCombatTutorialGameModeBase_Statics::ClassParams = {
		&AMeleeCombatTutorialGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMeleeCombatTutorialGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeCombatTutorialGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeleeCombatTutorialGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMeleeCombatTutorialGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMeleeCombatTutorialGameModeBase, 2100266299);
	template<> MELEECOMBATTUTORIAL_API UClass* StaticClass<AMeleeCombatTutorialGameModeBase>()
	{
		return AMeleeCombatTutorialGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeleeCombatTutorialGameModeBase(Z_Construct_UClass_AMeleeCombatTutorialGameModeBase, &AMeleeCombatTutorialGameModeBase::StaticClass, TEXT("/Script/MeleeCombatTutorial"), TEXT("AMeleeCombatTutorialGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeleeCombatTutorialGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
