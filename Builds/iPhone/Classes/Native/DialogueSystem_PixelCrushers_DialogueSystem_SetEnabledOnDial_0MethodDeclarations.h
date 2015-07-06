#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent
struct SetEnabledOnDialogueEvent_t1305;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent/SetEnabledAction[]
struct SetEnabledActionU5BU5D_t1304;
// PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent/SetEnabledAction
struct SetEnabledAction_t1303;

// System.Void PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent::.ctor()
extern "C" void SetEnabledOnDialogueEvent__ctor_m6518 (SetEnabledOnDialogueEvent_t1305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void SetEnabledOnDialogueEvent_TryStartActions_m6519 (SetEnabledOnDialogueEvent_t1305 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void SetEnabledOnDialogueEvent_TryEndActions_m6520 (SetEnabledOnDialogueEvent_t1305 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent/SetEnabledAction[],UnityEngine.Transform)
extern "C" void SetEnabledOnDialogueEvent_TryActions_m6521 (SetEnabledOnDialogueEvent_t1305 * __this, SetEnabledActionU5BU5D_t1304* ___actions, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent/SetEnabledAction,UnityEngine.Transform)
extern "C" void SetEnabledOnDialogueEvent_DoAction_m6522 (SetEnabledOnDialogueEvent_t1305 * __this, SetEnabledAction_t1303 * ___action, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
