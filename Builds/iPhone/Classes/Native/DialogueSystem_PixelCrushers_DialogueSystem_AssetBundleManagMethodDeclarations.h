#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.AssetBundleManager
struct AssetBundleManager_t763;
// UnityEngine.AssetBundle
struct AssetBundle_t1073;
// UnityEngine.Object
struct Object_t563;
struct Object_t563_marshaled;
// System.String
struct String_t;

// System.Void PixelCrushers.DialogueSystem.AssetBundleManager::.ctor()
extern "C" void AssetBundleManager__ctor_m3459 (AssetBundleManager_t763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AssetBundleManager::RegisterAssetBundle(UnityEngine.AssetBundle)
extern "C" void AssetBundleManager_RegisterAssetBundle_m3460 (AssetBundleManager_t763 * __this, AssetBundle_t1073 * ___bundle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AssetBundleManager::UnregisterAssetBundle(UnityEngine.AssetBundle)
extern "C" void AssetBundleManager_UnregisterAssetBundle_m3461 (AssetBundleManager_t763 * __this, AssetBundle_t1073 * ___bundle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object PixelCrushers.DialogueSystem.AssetBundleManager::Load(System.String)
extern "C" Object_t563 * AssetBundleManager_Load_m3462 (AssetBundleManager_t763 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object PixelCrushers.DialogueSystem.AssetBundleManager::LoadFromBundle(UnityEngine.AssetBundle,System.String)
extern "C" Object_t563 * AssetBundleManager_LoadFromBundle_m3463 (AssetBundleManager_t763 * __this, AssetBundle_t1073 * ___bundle, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
