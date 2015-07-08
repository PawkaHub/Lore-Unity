#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityGUI.GUIControl
struct GUIControl_t1520;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.UnityGUI.GUIControl>
struct List_1_t1610;
// System.String
struct String_t;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::.ctor()
extern "C" void GUIControl__ctor_m7210 (GUIControl_t1520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect PixelCrushers.DialogueSystem.UnityGUI.GUIControl::get_rect()
extern "C" Rect_t201  GUIControl_get_rect_m7211 (GUIControl_t1520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::set_rect(UnityEngine.Rect)
extern "C" void GUIControl_set_rect_m7212 (GUIControl_t1520 * __this, Rect_t201  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 PixelCrushers.DialogueSystem.UnityGUI.GUIControl::get_Offset()
extern "C" Vector2_t97  GUIControl_get_Offset_m7213 (GUIControl_t1520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::set_Offset(UnityEngine.Vector2)
extern "C" void GUIControl_set_Offset_m7214 (GUIControl_t1520 * __this, Vector2_t97  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.UnityGUI.GUIControl> PixelCrushers.DialogueSystem.UnityGUI.GUIControl::get_Children()
extern "C" List_1_t1610 * GUIControl_get_Children_m7215 (GUIControl_t1520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUIControl::get_NeedToUpdateLayout()
extern "C" bool GUIControl_get_NeedToUpdateLayout_m7216 (GUIControl_t1520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::set_NeedToUpdateLayout(System.Boolean)
extern "C" void GUIControl_set_NeedToUpdateLayout_m7217 (GUIControl_t1520 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 PixelCrushers.DialogueSystem.UnityGUI.GUIControl::get_WindowSize()
extern "C" Vector2_t97  GUIControl_get_WindowSize_m7218 (GUIControl_t1520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::set_WindowSize(UnityEngine.Vector2)
extern "C" void GUIControl_set_WindowSize_m7219 (GUIControl_t1520 * __this, Vector2_t97  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUIControl::get_IsNavigationEnabled()
extern "C" bool GUIControl_get_IsNavigationEnabled_m7220 (GUIControl_t1520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.UnityGUI.GUIControl::get_FullName()
extern "C" String_t* GUIControl_get_FullName_m7221 (GUIControl_t1520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 PixelCrushers.DialogueSystem.UnityGUI.GUIControl::get_dRect()
extern "C" Vector2_t97  GUIControl_get_dRect_m7222 (GUIControl_t1520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::set_dRect(UnityEngine.Vector2)
extern "C" void GUIControl_set_dRect_m7223 (GUIControl_t1520 * __this, Vector2_t97  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::Awake()
extern "C" void GUIControl_Awake_m7224 (GUIControl_t1520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::OnEnable()
extern "C" void GUIControl_OnEnable_m7225 (GUIControl_t1520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::Draw(UnityEngine.Vector2)
extern "C" void GUIControl_Draw_m7226 (GUIControl_t1520 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::DrawSelf(UnityEngine.Vector2)
extern "C" void GUIControl_DrawSelf_m7227 (GUIControl_t1520 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::DrawChildren(UnityEngine.Vector2)
extern "C" void GUIControl_DrawChildren_m7228 (GUIControl_t1520 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::Update()
extern "C" void GUIControl_Update_m7229 (GUIControl_t1520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::Refresh(UnityEngine.Vector2)
extern "C" void GUIControl_Refresh_m7230 (GUIControl_t1520 * __this, Vector2_t97  ___windowSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::Refresh()
extern "C" void GUIControl_Refresh_m7231 (GUIControl_t1520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::UpdateLayout()
extern "C" void GUIControl_UpdateLayout_m7232 (GUIControl_t1520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::UpdateLayoutSelf()
extern "C" void GUIControl_UpdateLayoutSelf_m7233 (GUIControl_t1520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::AutoSizeSelf()
extern "C" void GUIControl_AutoSizeSelf_m7234 (GUIControl_t1520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::FitSelf()
extern "C" void GUIControl_FitSelf_m7235 (GUIControl_t1520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::UpdateLayoutChildren()
extern "C" void GUIControl_UpdateLayoutChildren_m7236 (GUIControl_t1520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::UpdateLayoutChild(PixelCrushers.DialogueSystem.UnityGUI.GUIControl,UnityEngine.Vector2)
extern "C" void GUIControl_UpdateLayoutChild_m7237 (GUIControl_t1520 * __this, GUIControl_t1520 * ___child, Vector2_t97  ___childWindowSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::FitChildren()
extern "C" void GUIControl_FitChildren_m7238 (GUIControl_t1520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::FindChildren()
extern "C" void GUIControl_FindChildren_m7239 (GUIControl_t1520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIControl::SortChildren()
extern "C" void GUIControl_SortChildren_m7240 (GUIControl_t1520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.UnityGUI.GUIControl::<SortChildren>m__35(PixelCrushers.DialogueSystem.UnityGUI.GUIControl,PixelCrushers.DialogueSystem.UnityGUI.GUIControl)
extern "C" int32_t GUIControl_U3CSortChildrenU3Em__35_m7241 (Object_t * __this /* static, unused */, GUIControl_t1520 * ___x, GUIControl_t1520 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
