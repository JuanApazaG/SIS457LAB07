// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "arkanoid04/CapsuleCreator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsuleCreator() {}
// Cross Module References
	ARKANOID04_API UClass* Z_Construct_UClass_ACapsuleCreator_NoRegister();
	ARKANOID04_API UClass* Z_Construct_UClass_ACapsuleCreator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_arkanoid04();
// End Cross Module References
	void ACapsuleCreator::StaticRegisterNativesACapsuleCreator()
	{
	}
	UClass* Z_Construct_UClass_ACapsuleCreator_NoRegister()
	{
		return ACapsuleCreator::StaticClass();
	}
	struct Z_Construct_UClass_ACapsuleCreator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsuleCreator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_arkanoid04,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsuleCreator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CapsuleCreator.h" },
		{ "ModuleRelativePath", "CapsuleCreator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsuleCreator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsuleCreator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsuleCreator_Statics::ClassParams = {
		&ACapsuleCreator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACapsuleCreator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsuleCreator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsuleCreator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsuleCreator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsuleCreator, 3442950866);
	template<> ARKANOID04_API UClass* StaticClass<ACapsuleCreator>()
	{
		return ACapsuleCreator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsuleCreator(Z_Construct_UClass_ACapsuleCreator, &ACapsuleCreator::StaticClass, TEXT("/Script/arkanoid04"), TEXT("ACapsuleCreator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsuleCreator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
