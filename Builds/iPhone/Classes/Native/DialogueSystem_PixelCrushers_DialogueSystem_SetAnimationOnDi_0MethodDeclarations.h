#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent
struct SetAnimationOnDialogueEvent_t1296;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent/SetAnimationAction[]
struct SetAnimationActionU5BU5D_t1295;
// PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent/SetAnimationAction
struct SetAnimationAction_t1294;

// System.Void PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent::.ctor()
extern "C" void SetAnimationOnDialogueEvent__ctor_m6500 (SetAnimationOnDialogueEvent_t1296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void SetAnimationOnDialogueEvent_TryStartActions_m6501 (SetAnimationOnDialogueEvent_t1296 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void SetAnimationOnDialogueEvent_TryEndActions_m6502 (SetAnimationOnDialogueEvent_t1296 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent/SetAnimationAction[],UnityEngine.Transform)
extern "C" void SetAnimationOnDialogueEvent_TryActions_m6503 (SetAnimationOnDialogueEvent_t1296 * __this, SetAnimationActionU5BU5D_t1295* ___actions, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.SetAnimationOnDialogueEvent/SetAnimationAction,UnityEngine.Transform)
extern "C" void SetAnimationOnDialogueEvent_DoAction_m6504 (SetAnimationOnDialogueEvent_t1296 * __this, SetAnimationAction_t1294 * ___action, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
