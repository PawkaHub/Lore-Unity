#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.ConditionObserver
struct ConditionObserver_t1329;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// UnityEngine.GameObject
struct GameObject_t49;
// System.String
struct String_t;

// System.Void PixelCrushers.DialogueSystem.ConditionObserver::.ctor()
extern "C" void ConditionObserver__ctor_m6639 (ConditionObserver_t1329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::Start()
extern "C" void ConditionObserver_Start_m6640 (ConditionObserver_t1329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::OnEnable()
extern "C" void ConditionObserver_OnEnable_m6641 (ConditionObserver_t1329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::OnDisable()
extern "C" void ConditionObserver_OnDisable_m6642 (ConditionObserver_t1329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::StartObserving()
extern "C" void ConditionObserver_StartObserving_m6643 (ConditionObserver_t1329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::StopObserving()
extern "C" void ConditionObserver_StopObserving_m6644 (ConditionObserver_t1329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.ConditionObserver::Observe()
extern "C" Object_t * ConditionObserver_Observe_m6645 (ConditionObserver_t1329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::Check()
extern "C" void ConditionObserver_Check_m6646 (ConditionObserver_t1329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::Check(UnityEngine.GameObject)
extern "C" void ConditionObserver_Check_m6647 (ConditionObserver_t1329 * __this, GameObject_t49 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::Check(System.String)
extern "C" void ConditionObserver_Check_m6648 (ConditionObserver_t1329 * __this, String_t* ___gameObjectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConditionObserver::Fire()
extern "C" void ConditionObserver_Fire_m6649 (ConditionObserver_t1329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
