#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityGUI.ScaledRect
struct ScaledRect_t199;
// PixelCrushers.DialogueSystem.UnityGUI.ScaledValue
struct ScaledValue_t664;
// PixelCrushers.DialogueSystem.UnityGUI.ScaledRectAlignment
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_ScaledR_0.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void PixelCrushers.DialogueSystem.UnityGUI.ScaledRect::.ctor(PixelCrushers.DialogueSystem.UnityGUI.ScaledRectAlignment,PixelCrushers.DialogueSystem.UnityGUI.ScaledRectAlignment,PixelCrushers.DialogueSystem.UnityGUI.ScaledValue,PixelCrushers.DialogueSystem.UnityGUI.ScaledValue,PixelCrushers.DialogueSystem.UnityGUI.ScaledValue,PixelCrushers.DialogueSystem.UnityGUI.ScaledValue,System.Single,System.Single)
extern "C" void ScaledRect__ctor_m3163 (ScaledRect_t199 * __this, int32_t ___origin, int32_t ___alignment, ScaledValue_t664 * ___x, ScaledValue_t664 * ___y, ScaledValue_t664 * ___width, ScaledValue_t664 * ___height, float ___minPixelWidth, float ___minPixelHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.ScaledRect::.ctor(PixelCrushers.DialogueSystem.UnityGUI.ScaledRect)
extern "C" void ScaledRect__ctor_m3144 (ScaledRect_t199 * __this, ScaledRect_t199 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.ScaledRect::.ctor()
extern "C" void ScaledRect__ctor_m7380 (ScaledRect_t199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.ScaledRect::.cctor()
extern "C" void ScaledRect__cctor_m7381 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.UnityGUI.ScaledRect PixelCrushers.DialogueSystem.UnityGUI.ScaledRect::FromOrigin(PixelCrushers.DialogueSystem.UnityGUI.ScaledRectAlignment,PixelCrushers.DialogueSystem.UnityGUI.ScaledValue,PixelCrushers.DialogueSystem.UnityGUI.ScaledValue,System.Single,System.Single)
extern "C" ScaledRect_t199 * ScaledRect_FromOrigin_m2895 (Object_t * __this /* static, unused */, int32_t ___origin, ScaledValue_t664 * ___width, ScaledValue_t664 * ___height, float ___minPixelWidth, float ___minPixelHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect PixelCrushers.DialogueSystem.UnityGUI.ScaledRect::GetPixelRect()
extern "C" Rect_t201  ScaledRect_GetPixelRect_m2902 (ScaledRect_t199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect PixelCrushers.DialogueSystem.UnityGUI.ScaledRect::GetPixelRect(UnityEngine.Vector2)
extern "C" Rect_t201  ScaledRect_GetPixelRect_m7382 (ScaledRect_t199 * __this, Vector2_t97  ___windowSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect PixelCrushers.DialogueSystem.UnityGUI.ScaledRect::GetPixelRect(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Rect_t201  ScaledRect_GetPixelRect_m7383 (ScaledRect_t199 * __this, Vector2_t97  ___windowSize, Vector2_t97  ___defaultSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 PixelCrushers.DialogueSystem.UnityGUI.ScaledRect::GetPixelOrigin(UnityEngine.Vector2)
extern "C" Vector2_t97  ScaledRect_GetPixelOrigin_m7384 (ScaledRect_t199 * __this, Vector2_t97  ___windowSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 PixelCrushers.DialogueSystem.UnityGUI.ScaledRect::GetAlignmentFactor()
extern "C" Vector2_t97  ScaledRect_GetAlignmentFactor_m7385 (ScaledRect_t199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
