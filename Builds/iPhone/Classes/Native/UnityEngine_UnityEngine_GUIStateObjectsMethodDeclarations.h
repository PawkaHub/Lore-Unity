#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIStateObjects
struct GUIStateObjects_t4851;
// System.Object
struct Object_t;
// System.Type
struct Type_t;

// System.Void UnityEngine.GUIStateObjects::.cctor()
extern "C" void GUIStateObjects__cctor_m17791 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.GUIStateObjects::GetStateObject(System.Type,System.Int32)
extern "C" Object_t * GUIStateObjects_GetStateObject_m17792 (Object_t * __this /* static, unused */, Type_t * ___t, int32_t ___controlID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
