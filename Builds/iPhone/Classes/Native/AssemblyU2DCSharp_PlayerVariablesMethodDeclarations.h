#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerVariables
struct PlayerVariables_t415;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t48;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void PlayerVariables::.ctor()
extern "C" void PlayerVariables__ctor_m1561 (PlayerVariables_t415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerVariables::.cctor()
extern "C" void PlayerVariables__cctor_m1562 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color PlayerVariables::GetColor(System.Int32)
extern "C" Color_t121  PlayerVariables_GetColor_m1563 (Object_t * __this /* static, unused */, int32_t ___playerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlayerVariables::GetColorName(System.Int32)
extern "C" String_t* PlayerVariables_GetColorName_m1564 (Object_t * __this /* static, unused */, int32_t ___playerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material PlayerVariables::GetMaterial(UnityEngine.Material,System.Int32)
extern "C" Material_t48 * PlayerVariables_GetMaterial_m1565 (Object_t * __this /* static, unused */, Material_t48 * ___original, int32_t ___playerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
