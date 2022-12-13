// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "arkanoid04/CapsuleOfMultiplication.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsuleOfMultiplication() {}
// Cross Module References
	ARKANOID04_API UClass* Z_Construct_UClass_ACapsuleOfMultiplication_NoRegister();
	ARKANOID04_API UClass* Z_Construct_UClass_ACapsuleOfMultiplication();
	ARKANOID04_API UClass* Z_Construct_UClass_AGameCapsule();
	UPackage* Z_Construct_UPackage__Script_arkanoid04();
// End Cross Module References
	void ACapsuleOfMultiplication::StaticRegisterNativesACapsuleOfMultiplication()
	{
	}
	UClass* Z_Construct_UClass_ACapsuleOfMultiplication_NoRegister()
	{
		return ACapsuleOfMultiplication::StaticClass();
	}
	struct Z_Construct_UClass_ACapsuleOfMultiplication_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsuleOfMultiplication_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameCapsule,
		(UObject* (*)())Z_Construct_UPackage__Script_arkanoid04,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsuleOfMultiplication_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "CapsuleOfMultiplication.h" },
		{ "ModuleRelativePath", "CapsuleOfMultiplication.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsuleOfMultiplication_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsuleOfMultiplication>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsuleOfMultiplication_Statics::ClassParams = {
		&ACapsuleOfMultiplication::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACapsuleOfMultiplication_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsuleOfMultiplication_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsuleOfMultiplication()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsuleOfMultiplication_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsuleOfMultiplication, 3175972804);
	template<> ARKANOID04_API UClass* StaticClass<ACapsuleOfMultiplication>()
	{
		return ACapsuleOfMultiplication::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsuleOfMultiplication(Z_Construct_UClass_ACapsuleOfMultiplication, &ACapsuleOfMultiplication::StaticClass, TEXT("/Script/arkanoid04"), TEXT("ACapsuleOfMultiplication"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsuleOfMultiplication);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
