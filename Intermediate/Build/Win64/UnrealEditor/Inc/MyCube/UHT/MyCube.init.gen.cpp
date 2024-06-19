// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCube_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyCube;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyCube()
	{
		if (!Z_Registration_Info_UPackage__Script_MyCube.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyCube",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xF69C3DB4,
				0xB65A3983,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyCube.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyCube.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyCube(Z_Construct_UPackage__Script_MyCube, TEXT("/Script/MyCube"), Z_Registration_Info_UPackage__Script_MyCube, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF69C3DB4, 0xB65A3983));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
