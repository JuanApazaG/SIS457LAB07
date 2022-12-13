// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "arkanoid04/GameCapsule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameCapsule() {}
// Cross Module References
	ARKANOID04_API UClass* Z_Construct_UClass_AGameCapsule_NoRegister();
	ARKANOID04_API UClass* Z_Construct_UClass_AGameCapsule();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_arkanoid04();
// End Cross Module References
	void AGameCapsule::StaticRegisterNativesAGameCapsule()
	{
	}
	UClass* Z_Construct_UClass_AGameCapsule_NoRegister()
	{
		return AGameCapsule::StaticClass();
	}
	struct Z_Construct_UClass_AGameCapsule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameCapsule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_arkanoid04,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCapsule_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "GameCapsule.h" },
		{ "ModuleRelativePath", "GameCapsule.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameCapsule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameCapsule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameCapsule_Statics::ClassParams = {
		&AGameCapsule::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameCapsule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameCapsule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameCapsule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameCapsule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameCapsule, 2527225516);
	template<> ARKANOID04_API UClass* StaticClass<AGameCapsule>()
	{
		return AGameCapsule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameCapsule(Z_Construct_UClass_AGameCapsule, &AGameCapsule::StaticClass, TEXT("/Script/arkanoid04"), TEXT("AGameCapsule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameCapsule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
