#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Resources
struct Resources_t4736;
// UnityEngine.Object[]
struct ObjectU5BU5D_t763;
// System.Type
struct Type_t;
// UnityEngine.Object
struct Object_t642;
struct Object_t642_marshaled;
// System.String
struct String_t;

// UnityEngine.Object[] UnityEngine.Resources::FindObjectsOfTypeAll(System.Type)
extern "C" ObjectU5BU5D_t763* Resources_FindObjectsOfTypeAll_m3592 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
extern "C" Object_t642 * Resources_Load_m2717 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C" Object_t642 * Resources_Load_m3463 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
