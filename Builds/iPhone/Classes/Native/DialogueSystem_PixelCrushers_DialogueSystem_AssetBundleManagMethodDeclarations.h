#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.AssetBundleManager
struct AssetBundleManager_t1347;
// UnityEngine.AssetBundle
struct AssetBundle_t1655;
// UnityEngine.Object
struct Object_t642;
struct Object_t642_marshaled;
// System.String
struct String_t;

// System.Void PixelCrushers.DialogueSystem.AssetBundleManager::.ctor()
extern "C" void AssetBundleManager__ctor_m5748 (AssetBundleManager_t1347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AssetBundleManager::RegisterAssetBundle(UnityEngine.AssetBundle)
extern "C" void AssetBundleManager_RegisterAssetBundle_m5749 (AssetBundleManager_t1347 * __this, AssetBundle_t1655 * ___bundle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AssetBundleManager::UnregisterAssetBundle(UnityEngine.AssetBundle)
extern "C" void AssetBundleManager_UnregisterAssetBundle_m5750 (AssetBundleManager_t1347 * __this, AssetBundle_t1655 * ___bundle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object PixelCrushers.DialogueSystem.AssetBundleManager::Load(System.String)
extern "C" Object_t642 * AssetBundleManager_Load_m5751 (AssetBundleManager_t1347 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object PixelCrushers.DialogueSystem.AssetBundleManager::LoadFromBundle(UnityEngine.AssetBundle,System.String)
extern "C" Object_t642 * AssetBundleManager_LoadFromBundle_m5752 (AssetBundleManager_t1347 * __this, AssetBundle_t1655 * ___bundle, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
