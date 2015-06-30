#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityGUI.TimerEffect
struct TimerEffect_t1049;
// System.Action
struct Action_t250;
// System.Collections.IEnumerator
struct IEnumerator_t74;

// System.Void PixelCrushers.DialogueSystem.UnityGUI.TimerEffect::.ctor()
extern "C" void TimerEffect__ctor_m5065 (TimerEffect_t1049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.TimerEffect::add_TimeoutHandler(System.Action)
extern "C" void TimerEffect_add_TimeoutHandler_m5066 (TimerEffect_t1049 * __this, Action_t250 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.TimerEffect::remove_TimeoutHandler(System.Action)
extern "C" void TimerEffect_remove_TimeoutHandler_m5067 (TimerEffect_t1049 * __this, Action_t250 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.UnityGUI.TimerEffect::Play()
extern "C" Object_t * TimerEffect_Play_m5068 (TimerEffect_t1049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
