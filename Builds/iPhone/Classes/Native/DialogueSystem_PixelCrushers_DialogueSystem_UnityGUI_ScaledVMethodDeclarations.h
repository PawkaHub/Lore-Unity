#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityGUI.ScaledValue
struct ScaledValue_t664;
// PixelCrushers.DialogueSystem.UnityGUI.ValueScale
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_ValueSc.h"

// System.Void PixelCrushers.DialogueSystem.UnityGUI.ScaledValue::.ctor(PixelCrushers.DialogueSystem.UnityGUI.ValueScale,System.Single)
extern "C" void ScaledValue__ctor_m7386 (ScaledValue_t664 * __this, int32_t ___scale, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.ScaledValue::.ctor(PixelCrushers.DialogueSystem.UnityGUI.ScaledValue)
extern "C" void ScaledValue__ctor_m7387 (ScaledValue_t664 * __this, ScaledValue_t664 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.ScaledValue::.ctor()
extern "C" void ScaledValue__ctor_m7388 (ScaledValue_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.ScaledValue::.cctor()
extern "C" void ScaledValue__cctor_m7389 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.ScaledValue::GetPixelValue(System.Single)
extern "C" float ScaledValue_GetPixelValue_m7390 (ScaledValue_t664 * __this, float ___windowSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.UnityGUI.ScaledValue PixelCrushers.DialogueSystem.UnityGUI.ScaledValue::FromPixelValue(System.Single)
extern "C" ScaledValue_t664 * ScaledValue_FromPixelValue_m2894 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.UnityGUI.ScaledValue PixelCrushers.DialogueSystem.UnityGUI.ScaledValue::FromNormalizedValue(System.Single)
extern "C" ScaledValue_t664 * ScaledValue_FromNormalizedValue_m3162 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
