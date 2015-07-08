#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView
struct GUIScrollView_t1525;
// System.Action
struct Action_t250;
// PixelCrushers.DialogueSystem.UnityGUI.GUIControl
struct GUIControl_t1520;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::.ctor()
extern "C" void GUIScrollView__ctor_m7273 (GUIScrollView_t1525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::add_MeasureContentHandler(System.Action)
extern "C" void GUIScrollView_add_MeasureContentHandler_m7274 (GUIScrollView_t1525 * __this, Action_t250 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::remove_MeasureContentHandler(System.Action)
extern "C" void GUIScrollView_remove_MeasureContentHandler_m7275 (GUIScrollView_t1525 * __this, Action_t250 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::add_DrawContentHandler(System.Action)
extern "C" void GUIScrollView_add_DrawContentHandler_m7276 (GUIScrollView_t1525 * __this, Action_t250 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::remove_DrawContentHandler(System.Action)
extern "C" void GUIScrollView_remove_DrawContentHandler_m7277 (GUIScrollView_t1525 * __this, Action_t250 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::get_contentWidth()
extern "C" float GUIScrollView_get_contentWidth_m7278 (GUIScrollView_t1525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::set_contentWidth(System.Single)
extern "C" void GUIScrollView_set_contentWidth_m7279 (GUIScrollView_t1525 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::get_contentHeight()
extern "C" float GUIScrollView_get_contentHeight_m7280 (GUIScrollView_t1525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::set_contentHeight(System.Single)
extern "C" void GUIScrollView_set_contentHeight_m7281 (GUIScrollView_t1525 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::ResetScrollPosition()
extern "C" void GUIScrollView_ResetScrollPosition_m7282 (GUIScrollView_t1525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::DrawChildren(UnityEngine.Vector2)
extern "C" void GUIScrollView_DrawChildren_m7283 (GUIScrollView_t1525 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::GetScrollContentRect()
extern "C" Rect_t201  GUIScrollView_GetScrollContentRect_m7284 (GUIScrollView_t1525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::MeasureChildrenAsContent()
extern "C" void GUIScrollView_MeasureChildrenAsContent_m7285 (GUIScrollView_t1525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::GetChildXMax(PixelCrushers.DialogueSystem.UnityGUI.GUIControl)
extern "C" float GUIScrollView_GetChildXMax_m7286 (GUIScrollView_t1525 * __this, GUIControl_t1520 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::GetChildYMax(PixelCrushers.DialogueSystem.UnityGUI.GUIControl)
extern "C" float GUIScrollView_GetChildYMax_m7287 (GUIScrollView_t1525 * __this, GUIControl_t1520 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
