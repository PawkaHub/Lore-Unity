#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityUITimer
struct UnityUITimer_t243;
// System.Action
struct Action_t250;
// System.Collections.IEnumerator
struct IEnumerator_t74;

// System.Void PixelCrushers.DialogueSystem.UnityUITimer::.ctor()
extern "C" void UnityUITimer__ctor_m938 (UnityUITimer_t243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUITimer::StartCountdown(System.Single,System.Action)
extern "C" void UnityUITimer_StartCountdown_m939 (UnityUITimer_t243 * __this, float ___duration, Action_t250 * ___timeoutHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.UnityUITimer::Countdown(System.Single,System.Action)
extern "C" Object_t * UnityUITimer_Countdown_m940 (UnityUITimer_t243 * __this, float ___duration, Action_t250 * ___timeoutHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUITimer::OnDisable()
extern "C" void UnityUITimer_OnDisable_m941 (UnityUITimer_t243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
