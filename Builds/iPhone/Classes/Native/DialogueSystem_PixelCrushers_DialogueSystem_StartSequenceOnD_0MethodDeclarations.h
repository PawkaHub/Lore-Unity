#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent
struct StartSequenceOnDialogueEvent_t992;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent/SequenceAction[]
struct SequenceActionU5BU5D_t991;
// PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent/SequenceAction
struct SequenceAction_t990;

// System.Void PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent::.ctor()
extern "C" void StartSequenceOnDialogueEvent__ctor_m4700 (StartSequenceOnDialogueEvent_t992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void StartSequenceOnDialogueEvent_TryStartActions_m4701 (StartSequenceOnDialogueEvent_t992 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void StartSequenceOnDialogueEvent_TryEndActions_m4702 (StartSequenceOnDialogueEvent_t992 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent/SequenceAction[],UnityEngine.Transform)
extern "C" void StartSequenceOnDialogueEvent_TryActions_m4703 (StartSequenceOnDialogueEvent_t992 * __this, SequenceActionU5BU5D_t991* ___actions, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.StartSequenceOnDialogueEvent/SequenceAction,UnityEngine.Transform)
extern "C" void StartSequenceOnDialogueEvent_DoAction_m4704 (StartSequenceOnDialogueEvent_t992 * __this, SequenceAction_t990 * ___action, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
