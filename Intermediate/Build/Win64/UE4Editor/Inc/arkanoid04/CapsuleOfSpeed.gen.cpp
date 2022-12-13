// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "arkanoid04/CapsuleOfSpeed.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsuleOfSpeed() {}
// Cross Module References
	ARKANOID04_API UClass* Z_Construct_UClass_ACapsuleOfSpeed_NoRegister();
	ARKANOID04_API UClass* Z_Construct_UClass_ACapsuleOfSpeed();
	ARKANOID04_API UClass* Z_Construct_UClass_AGameCapsule();
	UPackage* Z_Construct_UPackage__Script_arkanoid04();
// End Cross Module References
	void ACapsuleOfSpeed::StaticRegisterNativesACapsuleOfSpeed()
	{
	}
	UClass* Z_Construct_UClass_ACapsuleOfSpeed_NoRegister()
	{
		return ACapsuleOfSpeed::StaticClass();
	}
	struct Z_Construct_UClass_ACapsuleOfSpeed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsuleOfSpeed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameCapsule,
		(UObject* (*)())Z_Construct_UPackage__Script_arkanoid04,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsuleOfSpeed_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "CapsuleOfSpeed.h" },
		{ "ModuleRelativePath", "CapsuleOfSpeed.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsuleOfSpeed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsuleOfSpeed>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsuleOfSpeed_Statics::ClassParams = {
		&ACapsuleOfSpeed::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACapsuleOfSpeed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsuleOfSpeed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsuleOfSpeed()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsuleOfSpeed_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsuleOfSpeed, 1700712488);
	template<> ARKANOID04_API UClass* StaticClass<ACapsuleOfSpeed>()
	{
		return ACapsuleOfSpeed::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsuleOfSpeed(Z_Construct_UClass_ACapsuleOfSpeed, &ACapsuleOfSpeed::StaticClass, TEXT("/Script/arkanoid04"), TEXT("ACapsuleOfSpeed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsuleOfSpeed);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
