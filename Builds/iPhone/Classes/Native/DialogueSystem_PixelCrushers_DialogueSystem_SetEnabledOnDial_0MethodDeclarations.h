#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent
struct SetEnabledOnDialogueEvent_t1564;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent/SetEnabledAction[]
struct SetEnabledActionU5BU5D_t1563;
// PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent/SetEnabledAction
struct SetEnabledAction_t1562;

// System.Void PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent::.ctor()
extern "C" void SetEnabledOnDialogueEvent__ctor_m6966 (SetEnabledOnDialogueEvent_t1564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void SetEnabledOnDialogueEvent_TryStartActions_m6967 (SetEnabledOnDialogueEvent_t1564 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void SetEnabledOnDialogueEvent_TryEndActions_m6968 (SetEnabledOnDialogueEvent_t1564 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent/SetEnabledAction[],UnityEngine.Transform)
extern "C" void SetEnabledOnDialogueEvent_TryActions_m6969 (SetEnabledOnDialogueEvent_t1564 * __this, SetEnabledActionU5BU5D_t1563* ___actions, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent/SetEnabledAction,UnityEngine.Transform)
extern "C" void SetEnabledOnDialogueEvent_DoAction_m6970 (SetEnabledOnDialogueEvent_t1564 * __this, SetEnabledAction_t1562 * ___action, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
