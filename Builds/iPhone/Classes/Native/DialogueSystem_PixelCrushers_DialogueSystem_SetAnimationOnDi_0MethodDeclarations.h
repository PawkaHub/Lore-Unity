#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent
struct SetAnimationOnDialogueEvent_t972;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent/SetAnimationAction[]
struct SetAnimationActionU5BU5D_t971;
// PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent/SetAnimationAction
struct SetAnimationAction_t970;

// System.Void PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent::.ctor()
extern "C" void SetAnimationOnDialogueEvent__ctor_m4654 (SetAnimationOnDialogueEvent_t972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void SetAnimationOnDialogueEvent_TryStartActions_m4655 (SetAnimationOnDialogueEvent_t972 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void SetAnimationOnDialogueEvent_TryEndActions_m4656 (SetAnimationOnDialogueEvent_t972 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent/SetAnimationAction[],UnityEngine.Transform)
extern "C" void SetAnimationOnDialogueEvent_TryActions_m4657 (SetAnimationOnDialogueEvent_t972 * __this, SetAnimationActionU5BU5D_t971* ___actions, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent/SetAnimationAction,UnityEngine.Transform)
extern "C" void SetAnimationOnDialogueEvent_DoAction_m4658 (SetAnimationOnDialogueEvent_t972 * __this, SetAnimationAction_t970 * ___action, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
