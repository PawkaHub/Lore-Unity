#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityGUI.Navigation
struct Navigation_t1026;
// System.String
struct String_t;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void PixelCrushers.DialogueSystem.UnityGUI.Navigation::.ctor()
extern "C" void Navigation__ctor_m5097 (Navigation_t1026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.UnityGUI.Navigation::get_FocusedControlName()
extern "C" String_t* Navigation_get_FocusedControlName_m5098 (Navigation_t1026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.Navigation::get_IsCurrentValid()
extern "C" bool Navigation_get_IsCurrentValid_m5099 (Navigation_t1026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.Navigation::get_IsOrderArrayValid()
extern "C" bool Navigation_get_IsOrderArrayValid_m5100 (Navigation_t1026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.Navigation::get_IsClicked()
extern "C" bool Navigation_get_IsClicked_m5101 (Navigation_t1026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.Navigation::FocusFirstControl()
extern "C" void Navigation_FocusFirstControl_m5102 (Navigation_t1026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.Navigation::CheckNavigationInput(UnityEngine.Vector2)
extern "C" void Navigation_CheckNavigationInput_m5103 (Navigation_t1026 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.Navigation::NavigateToMousePosition(UnityEngine.Vector2)
extern "C" void Navigation_NavigateToMousePosition_m5104 (Navigation_t1026 * __this, Vector2_t97  ___relativeMousePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.Navigation::Navigate(System.Int32)
extern "C" void Navigation_Navigate_m5105 (Navigation_t1026 * __this, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.UnityGUI.Navigation::NextControlIndex(System.Int32)
extern "C" int32_t Navigation_NextControlIndex_m5106 (Navigation_t1026 * __this, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.Navigation::CheckMouseWheel()
extern "C" void Navigation_CheckMouseWheel_m5107 (Navigation_t1026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.Navigation::IsNextControlInputDown(System.Single)
extern "C" bool Navigation_IsNextControlInputDown_m5108 (Navigation_t1026 * __this, float ___axisValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.Navigation::IsPreviousControlInputDown(System.Single)
extern "C" bool Navigation_IsPreviousControlInputDown_m5109 (Navigation_t1026 * __this, float ___axisValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityGUI.Navigation::GetNavigationAxis()
extern "C" float Navigation_GetNavigationAxis_m5110 (Navigation_t1026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
