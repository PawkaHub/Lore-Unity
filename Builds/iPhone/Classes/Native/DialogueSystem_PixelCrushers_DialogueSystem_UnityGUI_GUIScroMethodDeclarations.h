#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView
struct GUIScrollView_t1266;
// System.Action
struct Action_t250;
// PixelCrushers.DialogueSystem.UnityGUI.GUIControl
struct GUIControl_t1261;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::.ctor()
extern "C" void GUIScrollView__ctor_m6825 (GUIScrollView_t1266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::add_MeasureContentHandler(System.Action)
extern "C" void GUIScrollView_add_MeasureContentHandler_m6826 (GUIScrollView_t1266 * __this, Action_t250 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::remove_MeasureContentHandler(System.Action)
extern "C" void GUIScrollView_remove_MeasureContentHandler_m6827 (GUIScrollView_t1266 * __this, Action_t250 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::add_DrawContentHandler(System.Action)
extern "C" void GUIScrollView_add_DrawContentHandler_m6828 (GUIScrollView_t1266 * __this, Action_t250 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::remove_DrawContentHandler(System.Action)
extern "C" void GUIScrollView_remove_DrawContentHandler_m6829 (GUIScrollView_t1266 * __this, Action_t250 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::get_contentWidth()
extern "C" float GUIScrollView_get_contentWidth_m6830 (GUIScrollView_t1266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::set_contentWidth(System.Single)
extern "C" void GUIScrollView_set_contentWidth_m6831 (GUIScrollView_t1266 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::get_contentHeight()
extern "C" float GUIScrollView_get_contentHeight_m6832 (GUIScrollView_t1266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::set_contentHeight(System.Single)
extern "C" void GUIScrollView_set_contentHeight_m6833 (GUIScrollView_t1266 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::ResetScrollPosition()
extern "C" void GUIScrollView_ResetScrollPosition_m6834 (GUIScrollView_t1266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::DrawChildren(UnityEngine.Vector2)
extern "C" void GUIScrollView_DrawChildren_m6835 (GUIScrollView_t1266 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::GetScrollContentRect()
extern "C" Rect_t201  GUIScrollView_GetScrollContentRect_m6836 (GUIScrollView_t1266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::MeasureChildrenAsContent()
extern "C" void GUIScrollView_MeasureChildrenAsContent_m6837 (GUIScrollView_t1266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::GetChildXMax(PixelCrushers.DialogueSystem.UnityGUI.GUIControl)
extern "C" float GUIScrollView_GetChildXMax_m6838 (GUIScrollView_t1266 * __this, GUIControl_t1261 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::GetChildYMax(PixelCrushers.DialogueSystem.UnityGUI.GUIControl)
extern "C" float GUIScrollView_GetChildYMax_m6839 (GUIScrollView_t1266 * __this, GUIControl_t1261 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
