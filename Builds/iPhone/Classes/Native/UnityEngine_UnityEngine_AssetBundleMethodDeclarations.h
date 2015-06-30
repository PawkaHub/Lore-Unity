#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AssetBundle
struct AssetBundle_t1073;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t563;
struct Object_t563_marshaled;
// System.Type
struct Type_t;
// UnityEngine.Object[]
struct ObjectU5BU5D_t677;

// System.Boolean UnityEngine.AssetBundle::Contains(System.String)
extern "C" bool AssetBundle_Contains_m5261 (AssetBundle_t1073 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String)
extern "C" Object_t563 * AssetBundle_LoadAsset_m5263 (AssetBundle_t1073 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
extern "C" Object_t563 * AssetBundle_LoadAsset_m12268 (AssetBundle_t1073 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern "C" Object_t563 * AssetBundle_LoadAsset_Internal_m12269 (AssetBundle_t1073 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)
extern "C" ObjectU5BU5D_t677* AssetBundle_LoadAssetWithSubAssets_Internal_m12270 (AssetBundle_t1073 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
