// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCube/MovingCube.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingCube() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MYCUBE_API UClass* Z_Construct_UClass_AMovingCube();
MYCUBE_API UClass* Z_Construct_UClass_AMovingCube_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyCube();
// End Cross Module References

// Begin Class AMovingCube
void AMovingCube::StaticRegisterNativesAMovingCube()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingCube);
UClass* Z_Construct_UClass_AMovingCube_NoRegister()
{
	return AMovingCube::StaticClass();
}
struct Z_Construct_UClass_AMovingCube_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MovingCube.h" },
		{ "ModuleRelativePath", "MovingCube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cube_MetaData[] = {
		{ "Category", "MovingCube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MovingCube.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cube;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingCube>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingCube_Statics::NewProp_Cube = { "Cube", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingCube, Cube), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cube_MetaData), NewProp_Cube_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingCube_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCube_Statics::NewProp_Cube,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCube_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovingCube_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_MyCube,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCube_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingCube_Statics::ClassParams = {
	&AMovingCube::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMovingCube_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCube_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCube_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingCube_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovingCube()
{
	if (!Z_Registration_Info_UClass_AMovingCube.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingCube.OuterSingleton, Z_Construct_UClass_AMovingCube_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovingCube.OuterSingleton;
}
template<> MYCUBE_API UClass* StaticClass<AMovingCube>()
{
	return AMovingCube::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingCube);
AMovingCube::~AMovingCube() {}
// End Class AMovingCube

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyCube_Source_MyCube_MovingCube_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovingCube, AMovingCube::StaticClass, TEXT("AMovingCube"), &Z_Registration_Info_UClass_AMovingCube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingCube), 3716462956U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyCube_Source_MyCube_MovingCube_h_3678819984(TEXT("/Script/MyCube"),
	Z_CompiledInDeferFile_FID_MyCube_Source_MyCube_MovingCube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyCube_Source_MyCube_MovingCube_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
