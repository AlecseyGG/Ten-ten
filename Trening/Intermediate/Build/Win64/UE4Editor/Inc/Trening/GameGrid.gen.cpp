// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trening/GameGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameGrid() {}
// Cross Module References
	TRENING_API UClass* Z_Construct_UClass_AGameGrid_NoRegister();
	TRENING_API UClass* Z_Construct_UClass_AGameGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Trening();
// End Cross Module References
	void AGameGrid::StaticRegisterNativesAGameGrid()
	{
	}
	UClass* Z_Construct_UClass_AGameGrid_NoRegister()
	{
		return AGameGrid::StaticClass();
	}
	struct Z_Construct_UClass_AGameGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Trening,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameGrid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameGrid.h" },
		{ "ModuleRelativePath", "GameGrid.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameGrid_Statics::ClassParams = {
		&AGameGrid::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGameGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameGrid, 2867864208);
	template<> TRENING_API UClass* StaticClass<AGameGrid>()
	{
		return AGameGrid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameGrid(Z_Construct_UClass_AGameGrid, &AGameGrid::StaticClass, TEXT("/Script/Trening"), TEXT("AGameGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
