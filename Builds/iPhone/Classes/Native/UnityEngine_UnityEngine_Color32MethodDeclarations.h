#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Color32
struct Color32_t89;
// System.String
struct String_t;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" void Color32__ctor_m5314 (Color32_t89 * __this, uint8_t ___r, uint8_t ___g, uint8_t ___b, uint8_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Color32::ToString()
extern "C" String_t* Color32_ToString_m17005 (Color32_t89 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 UnityEngine.Color32::Lerp(UnityEngine.Color32,UnityEngine.Color32,System.Single)
extern "C" Color32_t89  Color32_Lerp_m2826 (Object_t * __this /* static, unused */, Color32_t89  ___a, Color32_t89  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
extern "C" Color32_t89  Color32_op_Implicit_m2704 (Object_t * __this /* static, unused */, Color_t121  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
extern "C" Color_t121  Color32_op_Implicit_m2843 (Object_t * __this /* static, unused */, Color32_t89  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
