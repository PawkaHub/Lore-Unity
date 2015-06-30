#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView
struct GUIScrollView_t942;
// System.Action
struct Action_t250;
// PixelCrushers.DialogueSystem.UnityGUI.GUIControl
struct GUIControl_t937;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::.ctor()
extern "C" void GUIScrollView__ctor_m4979 (GUIScrollView_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::add_MeasureContentHandler(System.Action)
extern "C" void GUIScrollView_add_MeasureContentHandler_m4980 (GUIScrollView_t942 * __this, Action_t250 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::remove_MeasureContentHandler(System.Action)
extern "C" void GUIScrollView_remove_MeasureContentHandler_m4981 (GUIScrollView_t942 * __this, Action_t250 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::add_DrawContentHandler(System.Action)
extern "C" void GUIScrollView_add_DrawContentHandler_m4982 (GUIScrollView_t942 * __this, Action_t250 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::remove_DrawContentHandler(System.Action)
extern "C" void GUIScrollView_remove_DrawContentHandler_m4983 (GUIScrollView_t942 * __this, Action_t250 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::get_contentWidth()
extern "C" float GUIScrollView_get_contentWidth_m4984 (GUIScrollView_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::set_contentWidth(System.Single)
extern "C" void GUIScrollView_set_contentWidth_m4985 (GUIScrollView_t942 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::get_contentHeight()
extern "C" float GUIScrollView_get_contentHeight_m4986 (GUIScrollView_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::set_contentHeight(System.Single)
extern "C" void GUIScrollView_set_contentHeight_m4987 (GUIScrollView_t942 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::ResetScrollPosition()
extern "C" void GUIScrollView_ResetScrollPosition_m4988 (GUIScrollView_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::DrawChildren(UnityEngine.Vector2)
extern "C" void GUIScrollView_DrawChildren_m4989 (GUIScrollView_t942 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::GetScrollContentRect()
extern "C" Rect_t201  GUIScrollView_GetScrollContentRect_m4990 (GUIScrollView_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::MeasureChildrenAsContent()
extern "C" void GUIScrollView_MeasureChildrenAsContent_m4991 (GUIScrollView_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::GetChildXMax(PixelCrushers.DialogueSystem.UnityGUI.GUIControl)
extern "C" float GUIScrollView_GetChildXMax_m4992 (GUIScrollView_t942 * __this, GUIControl_t937 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::GetChildYMax(PixelCrushers.DialogueSystem.UnityGUI.GUIControl)
extern "C" float GUIScrollView_GetChildYMax_m4993 (GUIScrollView_t942 * __this, GUIControl_t937 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
