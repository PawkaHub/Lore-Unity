#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent
struct SetActiveOnDialogueEvent_t969;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent/SetActiveAction[]
struct SetActiveActionU5BU5D_t968;
// PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent/SetActiveAction
struct SetActiveAction_t967;

// System.Void PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent::.ctor()
extern "C" void SetActiveOnDialogueEvent__ctor_m4648 (SetActiveOnDialogueEvent_t969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void SetActiveOnDialogueEvent_TryStartActions_m4649 (SetActiveOnDialogueEvent_t969 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void SetActiveOnDialogueEvent_TryEndActions_m4650 (SetActiveOnDialogueEvent_t969 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent/SetActiveAction[],UnityEngine.Transform)
extern "C" void SetActiveOnDialogueEvent_TryActions_m4651 (SetActiveOnDialogueEvent_t969 * __this, SetActiveActionU5BU5D_t968* ___actions, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent/SetActiveAction,UnityEngine.Transform)
extern "C" void SetActiveOnDialogueEvent_DoAction_m4652 (SetActiveOnDialogueEvent_t969 * __this, SetActiveAction_t967 * ___action, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
