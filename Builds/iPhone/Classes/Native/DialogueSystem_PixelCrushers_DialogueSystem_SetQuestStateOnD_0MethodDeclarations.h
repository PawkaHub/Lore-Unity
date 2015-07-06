#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent
struct SetQuestStateOnDialogueEvent_t1308;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent/SetQuestStateAction[]
struct SetQuestStateActionU5BU5D_t1307;
// PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent/SetQuestStateAction
struct SetQuestStateAction_t1306;

// System.Void PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent::.ctor()
extern "C" void SetQuestStateOnDialogueEvent__ctor_m6524 (SetQuestStateOnDialogueEvent_t1308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void SetQuestStateOnDialogueEvent_TryStartActions_m6525 (SetQuestStateOnDialogueEvent_t1308 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void SetQuestStateOnDialogueEvent_TryEndActions_m6526 (SetQuestStateOnDialogueEvent_t1308 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent/SetQuestStateAction[],UnityEngine.Transform)
extern "C" void SetQuestStateOnDialogueEvent_TryActions_m6527 (SetQuestStateOnDialogueEvent_t1308 * __this, SetQuestStateActionU5BU5D_t1307* ___actions, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.SetQuestStateOnDialogueEvent/SetQuestStateAction,UnityEngine.Transform)
extern "C" void SetQuestStateOnDialogueEvent_DoAction_m6528 (SetQuestStateOnDialogueEvent_t1308 * __this, SetQuestStateAction_t1306 * ___action, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
