#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.EmphasisSetting
struct EmphasisSetting_t1403;
// System.String
struct String_t;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void PixelCrushers.DialogueSystem.EmphasisSetting::.ctor(UnityEngine.Color,System.Boolean,System.Boolean,System.Boolean)
extern "C" void EmphasisSetting__ctor_m6143 (EmphasisSetting_t1403 * __this, Color_t121  ___color, bool ___bold, bool ___italic, bool ___underline, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.EmphasisSetting::.ctor(System.String,System.String)
extern "C" void EmphasisSetting__ctor_m6144 (EmphasisSetting_t1403 * __this, String_t* ___colorCode, String_t* ___styleCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.EmphasisSetting::get_IsEmpty()
extern "C" bool EmphasisSetting_get_IsEmpty_m6145 (EmphasisSetting_t1403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
