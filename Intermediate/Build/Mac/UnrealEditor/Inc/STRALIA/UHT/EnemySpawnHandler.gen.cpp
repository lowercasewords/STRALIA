// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STRALIA/Public/EnemySpawnHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpawnHandler() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
STRALIA_API UClass* Z_Construct_UClass_AEnemySpawnHandler();
STRALIA_API UClass* Z_Construct_UClass_AEnemySpawnHandler_NoRegister();
UPackage* Z_Construct_UPackage__Script_STRALIA();
// End Cross Module References

// Begin Class AEnemySpawnHandler
void AEnemySpawnHandler::StaticRegisterNativesAEnemySpawnHandler()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemySpawnHandler);
UClass* Z_Construct_UClass_AEnemySpawnHandler_NoRegister()
{
	return AEnemySpawnHandler::StaticClass();
}
struct Z_Construct_UClass_AEnemySpawnHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EnemySpawnHandler.h" },
		{ "ModuleRelativePath", "Public/EnemySpawnHandler.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemySpawnHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemySpawnHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_STRALIA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawnHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemySpawnHandler_Statics::ClassParams = {
	&AEnemySpawnHandler::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawnHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemySpawnHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemySpawnHandler()
{
	if (!Z_Registration_Info_UClass_AEnemySpawnHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemySpawnHandler.OuterSingleton, Z_Construct_UClass_AEnemySpawnHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemySpawnHandler.OuterSingleton;
}
template<> STRALIA_API UClass* StaticClass<AEnemySpawnHandler>()
{
	return AEnemySpawnHandler::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemySpawnHandler);
AEnemySpawnHandler::~AEnemySpawnHandler() {}
// End Class AEnemySpawnHandler

// Begin Registration
struct Z_CompiledInDeferFile_FID_arturagalarian_Documents_Unreal_Projects_STRALIA_Source_STRALIA_Public_EnemySpawnHandler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemySpawnHandler, AEnemySpawnHandler::StaticClass, TEXT("AEnemySpawnHandler"), &Z_Registration_Info_UClass_AEnemySpawnHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemySpawnHandler), 1506200947U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_arturagalarian_Documents_Unreal_Projects_STRALIA_Source_STRALIA_Public_EnemySpawnHandler_h_1929809670(TEXT("/Script/STRALIA"),
	Z_CompiledInDeferFile_FID_arturagalarian_Documents_Unreal_Projects_STRALIA_Source_STRALIA_Public_EnemySpawnHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_arturagalarian_Documents_Unreal_Projects_STRALIA_Source_STRALIA_Public_EnemySpawnHandler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
