// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovingCube.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYCUBE_MovingCube_generated_h
#error "MovingCube.generated.h already included, missing '#pragma once' in MovingCube.h"
#endif
#define MYCUBE_MovingCube_generated_h

#define FID_MyCube_Source_MyCube_MovingCube_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingCube(); \
	friend struct Z_Construct_UClass_AMovingCube_Statics; \
public: \
	DECLARE_CLASS(AMovingCube, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyCube"), NO_API) \
	DECLARE_SERIALIZER(AMovingCube)


#define FID_MyCube_Source_MyCube_MovingCube_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMovingCube(AMovingCube&&); \
	AMovingCube(const AMovingCube&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingCube); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingCube); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingCube) \
	NO_API virtual ~AMovingCube();


#define FID_MyCube_Source_MyCube_MovingCube_h_9_PROLOG
#define FID_MyCube_Source_MyCube_MovingCube_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyCube_Source_MyCube_MovingCube_h_12_INCLASS_NO_PURE_DECLS \
	FID_MyCube_Source_MyCube_MovingCube_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYCUBE_API UClass* StaticClass<class AMovingCube>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyCube_Source_MyCube_MovingCube_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
