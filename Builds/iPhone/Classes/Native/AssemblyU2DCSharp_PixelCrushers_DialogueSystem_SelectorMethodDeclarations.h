#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.Selector
struct Selector_t277;
// PixelCrushers.DialogueSystem.Usable
struct Usable_t279;
// UnityEngine.GUIStyle
struct GUIStyle_t303;
// PixelCrushers.DialogueSystem.SelectedUsableObjectDelegate
struct SelectedUsableObjectDelegate_t304;
// PixelCrushers.DialogueSystem.DeselectedUsableObjectDelegate
struct DeselectedUsableObjectDelegate_t305;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PixelCrushers.DialogueSystem.Selector::.ctor()
extern "C" void Selector__ctor_m1206 (Selector_t277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Selector::.cctor()
extern "C" void Selector__cctor_m1207 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Selector::add_SelectedUsableObject(PixelCrushers.DialogueSystem.SelectedUsableObjectDelegate)
extern "C" void Selector_add_SelectedUsableObject_m1208 (Selector_t277 * __this, SelectedUsableObjectDelegate_t304 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Selector::remove_SelectedUsableObject(PixelCrushers.DialogueSystem.SelectedUsableObjectDelegate)
extern "C" void Selector_remove_SelectedUsableObject_m1209 (Selector_t277 * __this, SelectedUsableObjectDelegate_t304 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Selector::add_DeselectedUsableObject(PixelCrushers.DialogueSystem.DeselectedUsableObjectDelegate)
extern "C" void Selector_add_DeselectedUsableObject_m1210 (Selector_t277 * __this, DeselectedUsableObjectDelegate_t305 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Selector::remove_DeselectedUsableObject(PixelCrushers.DialogueSystem.DeselectedUsableObjectDelegate)
extern "C" void Selector_remove_DeselectedUsableObject_m1211 (Selector_t277 * __this, DeselectedUsableObjectDelegate_t305 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PixelCrushers.DialogueSystem.Selector::get_CustomPosition()
extern "C" Vector3_t53  Selector_get_CustomPosition_m1212 (Selector_t277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Selector::set_CustomPosition(UnityEngine.Vector3)
extern "C" void Selector_set_CustomPosition_m1213 (Selector_t277 * __this, Vector3_t53  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Usable PixelCrushers.DialogueSystem.Selector::get_CurrentUsable()
extern "C" Usable_t279 * Selector_get_CurrentUsable_m1214 (Selector_t277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.Selector::get_CurrentDistance()
extern "C" float Selector_get_CurrentDistance_m1215 (Selector_t277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.Selector::get_GuiStyle()
extern "C" GUIStyle_t303 * Selector_get_GuiStyle_m1216 (Selector_t277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Selector::Update()
extern "C" void Selector_Update_m1217 (Selector_t277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Selector::Run2DRaycast()
extern "C" void Selector_Run2DRaycast_m1218 (Selector_t277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Selector::Run3DRaycast()
extern "C" void Selector_Run3DRaycast_m1219 (Selector_t277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Selector::DeselectTarget()
extern "C" void Selector_DeselectTarget_m1220 (Selector_t277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Selector::IsUseButtonDown()
extern "C" bool Selector_IsUseButtonDown_m1221 (Selector_t277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PixelCrushers.DialogueSystem.Selector::GetSelectionPoint()
extern "C" Vector3_t53  Selector_GetSelectionPoint_m1222 (Selector_t277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Selector::OnGUI()
extern "C" void Selector_OnGUI_m1223 (Selector_t277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Selector::SetGuiStyle()
extern "C" void Selector_SetGuiStyle_m1224 (Selector_t277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Selector::OnDrawGizmos()
extern "C" void Selector_OnDrawGizmos_m1225 (Selector_t277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
