#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityGUI.GUIWindow
struct GUIWindow_t1617;
// UnityEngine.GUIStyle
struct GUIStyle_t303;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIWindow::.ctor()
extern "C" void GUIWindow__ctor_m7313 (GUIWindow_t1617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.UnityGUI.GUIWindow::get_DefaultGUIStyle()
extern "C" GUIStyle_t303 * GUIWindow_get_DefaultGUIStyle_m7314 (GUIWindow_t1617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIWindow::DrawSelf(UnityEngine.Vector2)
extern "C" void GUIWindow_DrawSelf_m7315 (GUIWindow_t1617 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIWindow::DrawChildren(UnityEngine.Vector2)
extern "C" void GUIWindow_DrawChildren_m7316 (GUIWindow_t1617 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.GUIWindow::WindowFunction(System.Int32)
extern "C" void GUIWindow_WindowFunction_m7317 (GUIWindow_t1617 * __this, int32_t ___windowID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
