// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "arkanoid04/AntiHelpCapsule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAntiHelpCapsule() {}
// Cross Module References
	ARKANOID04_API UClass* Z_Construct_UClass_AAntiHelpCapsule_NoRegister();
	ARKANOID04_API UClass* Z_Construct_UClass_AAntiHelpCapsule();
	ARKANOID04_API UClass* Z_Construct_UClass_ACapsuleCreator();
	UPackage* Z_Construct_UPackage__Script_arkanoid04();
// End Cross Module References
	void AAntiHelpCapsule::StaticRegisterNativesAAntiHelpCapsule()
	{
	}
	UClass* Z_Construct_UClass_AAntiHelpCapsule_NoRegister()
	{
		return AAntiHelpCapsule::StaticClass();
	}
	struct Z_Construct_UClass_AAntiHelpCapsule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAntiHelpCapsule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACapsuleCreator,
		(UObject* (*)())Z_Construct_UPackage__Script_arkanoid04,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAntiHelpCapsule_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AntiHelpCapsule.h" },
		{ "ModuleRelativePath", "AntiHelpCapsule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAntiHelpCapsule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAntiHelpCapsule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAntiHelpCapsule_Statics::ClassParams = {
		&AAntiHelpCapsule::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAntiHelpCapsule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAntiHelpCapsule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAntiHelpCapsule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAntiHelpCapsule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAntiHelpCapsule, 217941599);
	template<> ARKANOID04_API UClass* StaticClass<AAntiHelpCapsule>()
	{
		return AAntiHelpCapsule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAntiHelpCapsule(Z_Construct_UClass_AAntiHelpCapsule, &AAntiHelpCapsule::StaticClass, TEXT("/Script/arkanoid04"), TEXT("AAntiHelpCapsule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAntiHelpCapsule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
