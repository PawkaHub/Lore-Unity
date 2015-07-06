#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent
struct SendMessageOnDialogueEvent_t1290;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent/SendMessageAction[]
struct SendMessageActionU5BU5D_t1289;
// PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent/SendMessageAction
struct SendMessageAction_t1288;

// System.Void PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent::.ctor()
extern "C" void SendMessageOnDialogueEvent__ctor_m6488 (SendMessageOnDialogueEvent_t1290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void SendMessageOnDialogueEvent_TryStartActions_m6489 (SendMessageOnDialogueEvent_t1290 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void SendMessageOnDialogueEvent_TryEndActions_m6490 (SendMessageOnDialogueEvent_t1290 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent/SendMessageAction[],UnityEngine.Transform)
extern "C" void SendMessageOnDialogueEvent_TryActions_m6491 (SendMessageOnDialogueEvent_t1290 * __this, SendMessageActionU5BU5D_t1289* ___actions, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent/SendMessageAction,UnityEngine.Transform)
extern "C" void SendMessageOnDialogueEvent_DoAction_m6492 (SendMessageOnDialogueEvent_t1290 * __this, SendMessageAction_t1288 * ___action, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
