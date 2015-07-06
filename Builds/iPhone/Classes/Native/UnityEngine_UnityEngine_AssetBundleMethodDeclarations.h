#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AssetBundle
struct AssetBundle_t1396;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t584;
struct Object_t584_marshaled;
// System.Type
struct Type_t;
// UnityEngine.Object[]
struct ObjectU5BU5D_t694;

// System.Boolean UnityEngine.AssetBundle::Contains(System.String)
extern "C" bool AssetBundle_Contains_m7115 (AssetBundle_t1396 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String)
extern "C" Object_t584 * AssetBundle_LoadAsset_m7117 (AssetBundle_t1396 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
extern "C" Object_t584 * AssetBundle_LoadAsset_m16147 (AssetBundle_t1396 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern "C" Object_t584 * AssetBundle_LoadAsset_Internal_m16148 (AssetBundle_t1396 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)
extern "C" ObjectU5BU5D_t694* AssetBundle_LoadAssetWithSubAssets_Internal_m16149 (AssetBundle_t1396 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
