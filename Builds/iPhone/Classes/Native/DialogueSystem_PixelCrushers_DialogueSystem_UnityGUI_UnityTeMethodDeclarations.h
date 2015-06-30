#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI
struct UnityTextFieldUI_t1063;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.AcceptedTextDelegate
struct AcceptedTextDelegate_t248;
// System.Object
struct Object_t;
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::.ctor()
extern "C" void UnityTextFieldUI__ctor_m5153 (UnityTextFieldUI_t1063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::Awake()
extern "C" void UnityTextFieldUI_Awake_m5154 (UnityTextFieldUI_t1063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::StartTextInput(System.String,System.String,System.Int32,PixelCrushers.DialogueSystem.AcceptedTextDelegate)
extern "C" void UnityTextFieldUI_StartTextInput_m5155 (UnityTextFieldUI_t1063 * __this, String_t* ___labelText, String_t* ___text, int32_t ___maxLength, AcceptedTextDelegate_t248 * ___acceptedText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::OnGUI()
extern "C" void UnityTextFieldUI_OnGUI_m5156 (UnityTextFieldUI_t1063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::IsAcceptKey()
extern "C" bool UnityTextFieldUI_IsAcceptKey_m5157 (UnityTextFieldUI_t1063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::IsKeyCodeReturn(UnityEngine.KeyCode)
extern "C" bool UnityTextFieldUI_IsKeyCodeReturn_m5158 (UnityTextFieldUI_t1063 * __this, int32_t ___keyCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::CancelTextInput()
extern "C" void UnityTextFieldUI_CancelTextInput_m5159 (UnityTextFieldUI_t1063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::AcceptTextInput()
extern "C" void UnityTextFieldUI_AcceptTextInput_m5160 (UnityTextFieldUI_t1063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::OnAccept(System.Object)
extern "C" void UnityTextFieldUI_OnAccept_m5161 (UnityTextFieldUI_t1063 * __this, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::OnCancel(System.Object)
extern "C" void UnityTextFieldUI_OnCancel_m5162 (UnityTextFieldUI_t1063 * __this, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::Show()
extern "C" void UnityTextFieldUI_Show_m5163 (UnityTextFieldUI_t1063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::Hide()
extern "C" void UnityTextFieldUI_Hide_m5164 (UnityTextFieldUI_t1063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityTextFieldUI::SetControlsActive(System.Boolean)
extern "C" void UnityTextFieldUI_SetControlsActive_m5165 (UnityTextFieldUI_t1063 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
