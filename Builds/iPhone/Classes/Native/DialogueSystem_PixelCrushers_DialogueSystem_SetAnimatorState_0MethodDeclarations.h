#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent
struct SetAnimatorStateOnDialogueEvent_t975;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent/SetAnimatorStateAction[]
struct SetAnimatorStateActionU5BU5D_t974;
// PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent/SetAnimatorStateAction
struct SetAnimatorStateAction_t973;

// System.Void PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent::.ctor()
extern "C" void SetAnimatorStateOnDialogueEvent__ctor_m4660 (SetAnimatorStateOnDialogueEvent_t975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void SetAnimatorStateOnDialogueEvent_TryStartActions_m4661 (SetAnimatorStateOnDialogueEvent_t975 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void SetAnimatorStateOnDialogueEvent_TryEndActions_m4662 (SetAnimatorStateOnDialogueEvent_t975 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent/SetAnimatorStateAction[],UnityEngine.Transform)
extern "C" void SetAnimatorStateOnDialogueEvent_TryActions_m4663 (SetAnimatorStateOnDialogueEvent_t975 * __this, SetAnimatorStateActionU5BU5D_t974* ___actions, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.SetAnimatorStateOnDialogueEvent/SetAnimatorStateAction,UnityEngine.Transform)
extern "C" void SetAnimatorStateOnDialogueEvent_DoAction_m4664 (SetAnimatorStateOnDialogueEvent_t975 * __this, SetAnimatorStateAction_t973 * ___action, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
