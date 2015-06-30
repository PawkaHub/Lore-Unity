#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent
struct SetComponentEnabledOnDialogueEvent_t978;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent/SetComponentEnabledAction[]
struct SetComponentEnabledActionU5BU5D_t977;
// PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent/SetComponentEnabledAction
struct SetComponentEnabledAction_t976;

// System.Void PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent::.ctor()
extern "C" void SetComponentEnabledOnDialogueEvent__ctor_m4666 (SetComponentEnabledOnDialogueEvent_t978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void SetComponentEnabledOnDialogueEvent_TryStartActions_m4667 (SetComponentEnabledOnDialogueEvent_t978 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void SetComponentEnabledOnDialogueEvent_TryEndActions_m4668 (SetComponentEnabledOnDialogueEvent_t978 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent/SetComponentEnabledAction[],UnityEngine.Transform)
extern "C" void SetComponentEnabledOnDialogueEvent_TryActions_m4669 (SetComponentEnabledOnDialogueEvent_t978 * __this, SetComponentEnabledActionU5BU5D_t977* ___actions, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent/SetComponentEnabledAction,UnityEngine.Transform)
extern "C" void SetComponentEnabledOnDialogueEvent_DoAction_m4670 (SetComponentEnabledOnDialogueEvent_t978 * __this, SetComponentEnabledAction_t976 * ___action, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
