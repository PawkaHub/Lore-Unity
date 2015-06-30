#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent
struct SetEnabledOnDialogueEvent_t981;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent/SetEnabledAction[]
struct SetEnabledActionU5BU5D_t980;
// PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent/SetEnabledAction
struct SetEnabledAction_t979;

// System.Void PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent::.ctor()
extern "C" void SetEnabledOnDialogueEvent__ctor_m4672 (SetEnabledOnDialogueEvent_t981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void SetEnabledOnDialogueEvent_TryStartActions_m4673 (SetEnabledOnDialogueEvent_t981 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void SetEnabledOnDialogueEvent_TryEndActions_m4674 (SetEnabledOnDialogueEvent_t981 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent/SetEnabledAction[],UnityEngine.Transform)
extern "C" void SetEnabledOnDialogueEvent_TryActions_m4675 (SetEnabledOnDialogueEvent_t981 * __this, SetEnabledActionU5BU5D_t980* ___actions, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.SetEnabledOnDialogueEvent/SetEnabledAction,UnityEngine.Transform)
extern "C" void SetEnabledOnDialogueEvent_DoAction_m4676 (SetEnabledOnDialogueEvent_t981 * __this, SetEnabledAction_t979 * ___action, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
