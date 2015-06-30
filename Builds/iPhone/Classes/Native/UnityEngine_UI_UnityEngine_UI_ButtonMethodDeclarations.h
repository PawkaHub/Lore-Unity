#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t220;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t624;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t633;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t613;
// System.Collections.IEnumerator
struct IEnumerator_t74;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m8395 (Button_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t624 * Button_get_onClick_m2806 (Button_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m8396 (Button_t220 * __this, ButtonClickedEvent_t624 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m8397 (Button_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m8398 (Button_t220 * __this, PointerEventData_t633 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m8399 (Button_t220 * __this, BaseEventData_t613 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m8400 (Button_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
