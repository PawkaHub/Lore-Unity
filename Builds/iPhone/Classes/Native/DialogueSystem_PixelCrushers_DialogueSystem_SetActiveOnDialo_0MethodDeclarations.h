#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent
struct SetActiveOnDialogueEvent_t1293;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent/SetActiveAction[]
struct SetActiveActionU5BU5D_t1292;
// PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent/SetActiveAction
struct SetActiveAction_t1291;

// System.Void PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent::.ctor()
extern "C" void SetActiveOnDialogueEvent__ctor_m6494 (SetActiveOnDialogueEvent_t1293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void SetActiveOnDialogueEvent_TryStartActions_m6495 (SetActiveOnDialogueEvent_t1293 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void SetActiveOnDialogueEvent_TryEndActions_m6496 (SetActiveOnDialogueEvent_t1293 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent/SetActiveAction[],UnityEngine.Transform)
extern "C" void SetActiveOnDialogueEvent_TryActions_m6497 (SetActiveOnDialogueEvent_t1293 * __this, SetActiveActionU5BU5D_t1292* ___actions, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.SetActiveOnDialogueEvent/SetActiveAction,UnityEngine.Transform)
extern "C" void SetActiveOnDialogueEvent_DoAction_m6498 (SetActiveOnDialogueEvent_t1293 * __this, SetActiveAction_t1291 * ___action, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
