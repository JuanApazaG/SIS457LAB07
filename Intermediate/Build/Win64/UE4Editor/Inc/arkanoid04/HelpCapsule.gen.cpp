// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "arkanoid04/HelpCapsule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHelpCapsule() {}
// Cross Module References
	ARKANOID04_API UClass* Z_Construct_UClass_AHelpCapsule_NoRegister();
	ARKANOID04_API UClass* Z_Construct_UClass_AHelpCapsule();
	ARKANOID04_API UClass* Z_Construct_UClass_ACapsuleCreator();
	UPackage* Z_Construct_UPackage__Script_arkanoid04();
// End Cross Module References
	void AHelpCapsule::StaticRegisterNativesAHelpCapsule()
	{
	}
	UClass* Z_Construct_UClass_AHelpCapsule_NoRegister()
	{
		return AHelpCapsule::StaticClass();
	}
	struct Z_Construct_UClass_AHelpCapsule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHelpCapsule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACapsuleCreator,
		(UObject* (*)())Z_Construct_UPackage__Script_arkanoid04,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelpCapsule_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HelpCapsule.h" },
		{ "ModuleRelativePath", "HelpCapsule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHelpCapsule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHelpCapsule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHelpCapsule_Statics::ClassParams = {
		&AHelpCapsule::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AHelpCapsule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHelpCapsule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHelpCapsule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHelpCapsule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHelpCapsule, 2762190177);
	template<> ARKANOID04_API UClass* StaticClass<AHelpCapsule>()
	{
		return AHelpCapsule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHelpCapsule(Z_Construct_UClass_AHelpCapsule, &AHelpCapsule::StaticClass, TEXT("/Script/arkanoid04"), TEXT("AHelpCapsule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHelpCapsule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
