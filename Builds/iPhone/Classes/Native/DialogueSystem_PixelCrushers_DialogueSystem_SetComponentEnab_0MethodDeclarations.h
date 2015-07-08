#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent
struct SetComponentEnabledOnDialogueEvent_t1561;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent/SetComponentEnabledAction[]
struct SetComponentEnabledActionU5BU5D_t1560;
// PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent/SetComponentEnabledAction
struct SetComponentEnabledAction_t1559;

// System.Void PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent::.ctor()
extern "C" void SetComponentEnabledOnDialogueEvent__ctor_m6960 (SetComponentEnabledOnDialogueEvent_t1561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void SetComponentEnabledOnDialogueEvent_TryStartActions_m6961 (SetComponentEnabledOnDialogueEvent_t1561 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void SetComponentEnabledOnDialogueEvent_TryEndActions_m6962 (SetComponentEnabledOnDialogueEvent_t1561 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent/SetComponentEnabledAction[],UnityEngine.Transform)
extern "C" void SetComponentEnabledOnDialogueEvent_TryActions_m6963 (SetComponentEnabledOnDialogueEvent_t1561 * __this, SetComponentEnabledActionU5BU5D_t1560* ___actions, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.SetComponentEnabledOnDialogueEvent/SetComponentEnabledAction,UnityEngine.Transform)
extern "C" void SetComponentEnabledOnDialogueEvent_DoAction_m6964 (SetComponentEnabledOnDialogueEvent_t1561 * __this, SetComponentEnabledAction_t1559 * ___action, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
