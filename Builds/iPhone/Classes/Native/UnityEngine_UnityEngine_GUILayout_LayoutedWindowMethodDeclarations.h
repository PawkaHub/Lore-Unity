#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayout/LayoutedWindow
struct LayoutedWindow_t4708;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t644;
// UnityEngine.GUIContent
struct GUIContent_t566;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t714;
// UnityEngine.GUIStyle
struct GUIStyle_t303;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUILayout/LayoutedWindow::.ctor(UnityEngine.GUI/WindowFunction,UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUILayoutOption[],UnityEngine.GUIStyle)
extern "C" void LayoutedWindow__ctor_m16745 (LayoutedWindow_t4708 * __this, WindowFunction_t644 * ___f, Rect_t201  ____screenRect, GUIContent_t566 * ____content, GUILayoutOptionU5BU5D_t714* ____options, GUIStyle_t303 * ____style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout/LayoutedWindow::DoWindow(System.Int32)
extern "C" void LayoutedWindow_DoWindow_m16746 (LayoutedWindow_t4708 * __this, int32_t ___windowID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
