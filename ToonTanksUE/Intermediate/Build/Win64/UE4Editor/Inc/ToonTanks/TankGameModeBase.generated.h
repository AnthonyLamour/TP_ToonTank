// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOONTANKS_TankGameModeBase_generated_h
#error "TankGameModeBase.generated.h already included, missing '#pragma once' in TankGameModeBase.h"
#endif
#define TOONTANKS_TankGameModeBase_generated_h

#define ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_SPARSE_DATA
#define ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_RPC_WRAPPERS
#define ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_EVENT_PARMS \
	struct TankGameModeBase_eventGameOver_Parms \
	{ \
		bool PlayerWon; \
	};


#define ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_CALLBACK_WRAPPERS
#define ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankGameModeBase(); \
	friend struct Z_Construct_UClass_ATankGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATankGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(ATankGameModeBase)


#define ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATankGameModeBase(); \
	friend struct Z_Construct_UClass_ATankGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATankGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(ATankGameModeBase)


#define ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankGameModeBase(ATankGameModeBase&&); \
	NO_API ATankGameModeBase(const ATankGameModeBase&); \
public:


#define ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankGameModeBase(ATankGameModeBase&&); \
	NO_API ATankGameModeBase(const ATankGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankGameModeBase)


#define ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_12_PROLOG \
	ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_EVENT_PARMS


#define ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_SPARSE_DATA \
	ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_RPC_WRAPPERS \
	ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_CALLBACK_WRAPPERS \
	ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_INCLASS \
	ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_SPARSE_DATA \
	ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_CALLBACK_WRAPPERS \
	ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class ATankGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToonTanksUE_Source_ToonTanks_GameModes_TankGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS