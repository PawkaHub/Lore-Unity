#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent
struct SetAnimatorStateOnDialogueEvent_t1299;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent/SetAnimatorStateAction[]
struct SetAnimatorStateActionU5BU5D_t1298;
// PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent/SetAnimatorStateAction
struct SetAnimatorStateAction_t1297;

// System.Void PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent::.ctor()
extern "C" void SetAnimatorStateOnDialogueEvent__ctor_m6506 (SetAnimatorStateOnDialogueEvent_t1299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void SetAnimatorStateOnDialogueEvent_TryStartActions_m6507 (SetAnimatorStateOnDialogueEvent_t1299 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void SetAnimatorStateOnDialogueEvent_TryEndActions_m6508 (SetAnimatorStateOnDialogueEvent_t1299 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent/SetAnimatorStateAction[],UnityEngine.Transform)
extern "C" void SetAnimatorStateOnDialogueEvent_TryActions_m6509 (SetAnimatorStateOnDialogueEvent_t1299 * __this, SetAnimatorStateActionU5BU5D_t1298* ___actions, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent/SetAnimatorStateAction,UnityEngine.Transform)
extern "C" void SetAnimatorStateOnDialogueEvent_DoAction_m6510 (SetAnimatorStateOnDialogueEvent_t1299 * __this, SetAnimatorStateAction_t1297 * ___action, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
