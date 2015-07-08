#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityGUI.Navigation
struct Navigation_t1609;
// System.String
struct String_t;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void PixelCrushers.DialogueSystem.UnityGUI.Navigation::.ctor()
extern "C" void Navigation__ctor_m7398 (Navigation_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.UnityGUI.Navigation::get_FocusedControlName()
extern "C" String_t* Navigation_get_FocusedControlName_m7399 (Navigation_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.Navigation::get_IsCurrentValid()
extern "C" bool Navigation_get_IsCurrentValid_m7400 (Navigation_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.Navigation::get_IsOrderArrayValid()
extern "C" bool Navigation_get_IsOrderArrayValid_m7401 (Navigation_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.Navigation::get_IsClicked()
extern "C" bool Navigation_get_IsClicked_m7402 (Navigation_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.Navigation::FocusFirstControl()
extern "C" void Navigation_FocusFirstControl_m7403 (Navigation_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.Navigation::CheckNavigationInput(UnityEngine.Vector2)
extern "C" void Navigation_CheckNavigationInput_m7404 (Navigation_t1609 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.Navigation::NavigateToMousePosition(UnityEngine.Vector2)
extern "C" void Navigation_NavigateToMousePosition_m7405 (Navigation_t1609 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.Navigation::Navigate(System.Int32)
extern "C" void Navigation_Navigate_m7406 (Navigation_t1609 * __this, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.UnityGUI.Navigation::NextControlIndex(System.Int32)
extern "C" int32_t Navigation_NextControlIndex_m7407 (Navigation_t1609 * __this, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.Navigation::CheckMouseWheel()
extern "C" void Navigation_CheckMouseWheel_m7408 (Navigation_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.Navigation::IsNextControlInputDown(System.Single)
extern "C" bool Navigation_IsNextControlInputDown_m7409 (Navigation_t1609 * __this, float ___axisValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.Navigation::IsPreviousControlInputDown(System.Single)
extern "C" bool Navigation_IsPreviousControlInputDown_m7410 (Navigation_t1609 * __this, float ___axisValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.Navigation::GetNavigationAxis()
extern "C" float Navigation_GetNavigationAxis_m7411 (Navigation_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
