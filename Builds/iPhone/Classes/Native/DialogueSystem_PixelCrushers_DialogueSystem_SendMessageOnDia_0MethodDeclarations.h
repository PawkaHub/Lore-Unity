#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent
struct SendMessageOnDialogueEvent_t1549;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent/SendMessageAction[]
struct SendMessageActionU5BU5D_t1548;
// PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent/SendMessageAction
struct SendMessageAction_t1547;

// System.Void PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent::.ctor()
extern "C" void SendMessageOnDialogueEvent__ctor_m6936 (SendMessageOnDialogueEvent_t1549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void SendMessageOnDialogueEvent_TryStartActions_m6937 (SendMessageOnDialogueEvent_t1549 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void SendMessageOnDialogueEvent_TryEndActions_m6938 (SendMessageOnDialogueEvent_t1549 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent/SendMessageAction[],UnityEngine.Transform)
extern "C" void SendMessageOnDialogueEvent_TryActions_m6939 (SendMessageOnDialogueEvent_t1549 * __this, SendMessageActionU5BU5D_t1548* ___actions, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent/SendMessageAction,UnityEngine.Transform)
extern "C" void SendMessageOnDialogueEvent_DoAction_m6940 (SendMessageOnDialogueEvent_t1549 * __this, SendMessageAction_t1547 * ___action, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
