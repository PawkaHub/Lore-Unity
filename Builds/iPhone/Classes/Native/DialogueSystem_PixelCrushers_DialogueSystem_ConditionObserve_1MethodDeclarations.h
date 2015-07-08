#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.ConditionObserver
struct ConditionObserver_t1588;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// UnityEngine.GameObject
struct GameObject_t49;
// System.String
struct String_t;

// System.Void PixelCrushers.DialogueSystem.ConditionObserver::.ctor()
extern "C" void ConditionObserver__ctor_m7087 (ConditionObserver_t1588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::Start()
extern "C" void ConditionObserver_Start_m7088 (ConditionObserver_t1588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::OnEnable()
extern "C" void ConditionObserver_OnEnable_m7089 (ConditionObserver_t1588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::OnDisable()
extern "C" void ConditionObserver_OnDisable_m7090 (ConditionObserver_t1588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::StartObserving()
extern "C" void ConditionObserver_StartObserving_m7091 (ConditionObserver_t1588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::StopObserving()
extern "C" void ConditionObserver_StopObserving_m7092 (ConditionObserver_t1588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.ConditionObserver::Observe()
extern "C" Object_t * ConditionObserver_Observe_m7093 (ConditionObserver_t1588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::Check()
extern "C" void ConditionObserver_Check_m7094 (ConditionObserver_t1588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::Check(UnityEngine.GameObject)
extern "C" void ConditionObserver_Check_m7095 (ConditionObserver_t1588 * __this, GameObject_t49 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::Check(System.String)
extern "C" void ConditionObserver_Check_m7096 (ConditionObserver_t1588 * __this, String_t* ___gameObjectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::Fire()
extern "C" void ConditionObserver_Fire_m7097 (ConditionObserver_t1588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
