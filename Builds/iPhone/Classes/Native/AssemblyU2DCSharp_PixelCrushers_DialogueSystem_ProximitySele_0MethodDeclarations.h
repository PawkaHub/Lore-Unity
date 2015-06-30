#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.ProximitySelector
struct ProximitySelector_t278;
// PixelCrushers.DialogueSystem.Usable
struct Usable_t279;
// UnityEngine.GUIStyle
struct GUIStyle_t303;
// PixelCrushers.DialogueSystem.SelectedUsableObjectDelegate
struct SelectedUsableObjectDelegate_t304;
// PixelCrushers.DialogueSystem.DeselectedUsableObjectDelegate
struct DeselectedUsableObjectDelegate_t305;
// UnityEngine.Collider
struct Collider_t194;
// UnityEngine.Collider2D
struct Collider2D_t195;
// UnityEngine.GameObject
struct GameObject_t49;

// System.Void PixelCrushers.DialogueSystem.ProximitySelector::.ctor()
extern "C" void ProximitySelector__ctor_m1160 (ProximitySelector_t278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ProximitySelector::add_SelectedUsableObject(PixelCrushers.DialogueSystem.SelectedUsableObjectDelegate)
extern "C" void ProximitySelector_add_SelectedUsableObject_m1161 (ProximitySelector_t278 * __this, SelectedUsableObjectDelegate_t304 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ProximitySelector::remove_SelectedUsableObject(PixelCrushers.DialogueSystem.SelectedUsableObjectDelegate)
extern "C" void ProximitySelector_remove_SelectedUsableObject_m1162 (ProximitySelector_t278 * __this, SelectedUsableObjectDelegate_t304 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ProximitySelector::add_DeselectedUsableObject(PixelCrushers.DialogueSystem.DeselectedUsableObjectDelegate)
extern "C" void ProximitySelector_add_DeselectedUsableObject_m1163 (ProximitySelector_t278 * __this, DeselectedUsableObjectDelegate_t305 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ProximitySelector::remove_DeselectedUsableObject(PixelCrushers.DialogueSystem.DeselectedUsableObjectDelegate)
extern "C" void ProximitySelector_remove_DeselectedUsableObject_m1164 (ProximitySelector_t278 * __this, DeselectedUsableObjectDelegate_t305 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Usable PixelCrushers.DialogueSystem.ProximitySelector::get_CurrentUsable()
extern "C" Usable_t279 * ProximitySelector_get_CurrentUsable_m1165 (ProximitySelector_t278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.ProximitySelector::get_GuiStyle()
extern "C" GUIStyle_t303 * ProximitySelector_get_GuiStyle_m1166 (ProximitySelector_t278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ProximitySelector::Update()
extern "C" void ProximitySelector_Update_m1167 (ProximitySelector_t278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ProximitySelector::IsUseButtonDown()
extern "C" bool ProximitySelector_IsUseButtonDown_m1168 (ProximitySelector_t278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ProximitySelector::IsTouchDown()
extern "C" bool ProximitySelector_IsTouchDown_m1169 (ProximitySelector_t278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ProximitySelector::OnTriggerEnter(UnityEngine.Collider)
extern "C" void ProximitySelector_OnTriggerEnter_m1170 (ProximitySelector_t278 * __this, Collider_t194 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ProximitySelector::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void ProximitySelector_OnTriggerEnter2D_m1171 (ProximitySelector_t278 * __this, Collider2D_t195 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ProximitySelector::OnTriggerExit(UnityEngine.Collider)
extern "C" void ProximitySelector_OnTriggerExit_m1172 (ProximitySelector_t278 * __this, Collider_t194 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ProximitySelector::OnTriggerExit2D(UnityEngine.Collider2D)
extern "C" void ProximitySelector_OnTriggerExit2D_m1173 (ProximitySelector_t278 * __this, Collider2D_t195 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ProximitySelector::CheckTriggerEnter(UnityEngine.GameObject)
extern "C" void ProximitySelector_CheckTriggerEnter_m1174 (ProximitySelector_t278 * __this, GameObject_t49 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ProximitySelector::CheckTriggerExit(UnityEngine.GameObject)
extern "C" void ProximitySelector_CheckTriggerExit_m1175 (ProximitySelector_t278 * __this, GameObject_t49 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ProximitySelector::SetCurrentUsable(PixelCrushers.DialogueSystem.Usable)
extern "C" void ProximitySelector_SetCurrentUsable_m1176 (ProximitySelector_t278 * __this, Usable_t279 * ___usable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ProximitySelector::OnGUI()
extern "C" void ProximitySelector_OnGUI_m1177 (ProximitySelector_t278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ProximitySelector::SetGuiStyle()
extern "C" void ProximitySelector_SetGuiStyle_m1178 (ProximitySelector_t278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
