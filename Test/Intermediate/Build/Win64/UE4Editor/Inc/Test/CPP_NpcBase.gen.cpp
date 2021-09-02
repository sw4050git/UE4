// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test/CPP_NpcBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_NpcBase() {}
// Cross Module References
	TEST_API UClass* Z_Construct_UClass_ACPP_NpcBase_NoRegister();
	TEST_API UClass* Z_Construct_UClass_ACPP_NpcBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Test();
// End Cross Module References
	void ACPP_NpcBase::StaticRegisterNativesACPP_NpcBase()
	{
	}
	UClass* Z_Construct_UClass_ACPP_NpcBase_NoRegister()
	{
		return ACPP_NpcBase::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_NpcBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_NpcBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_NpcBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CPP_NpcBase.h" },
		{ "ModuleRelativePath", "CPP_NpcBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_NpcBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_NpcBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPP_NpcBase_Statics::ClassParams = {
		&ACPP_NpcBase::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_NpcBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_NpcBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_NpcBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPP_NpcBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPP_NpcBase, 402171055);
	template<> TEST_API UClass* StaticClass<ACPP_NpcBase>()
	{
		return ACPP_NpcBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPP_NpcBase(Z_Construct_UClass_ACPP_NpcBase, &ACPP_NpcBase::StaticClass, TEXT("/Script/Test"), TEXT("ACPP_NpcBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_NpcBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
