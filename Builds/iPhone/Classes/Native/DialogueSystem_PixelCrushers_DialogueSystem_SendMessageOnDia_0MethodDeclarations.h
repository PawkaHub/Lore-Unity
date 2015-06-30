#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent
struct SendMessageOnDialogueEvent_t966;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent/SendMessageAction[]
struct SendMessageActionU5BU5D_t965;
// PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent/SendMessageAction
struct SendMessageAction_t964;

// System.Void PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent::.ctor()
extern "C" void SendMessageOnDialogueEvent__ctor_m4642 (SendMessageOnDialogueEvent_t966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void SendMessageOnDialogueEvent_TryStartActions_m4643 (SendMessageOnDialogueEvent_t966 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void SendMessageOnDialogueEvent_TryEndActions_m4644 (SendMessageOnDialogueEvent_t966 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent/SendMessageAction[],UnityEngine.Transform)
extern "C" void SendMessageOnDialogueEvent_TryActions_m4645 (SendMessageOnDialogueEvent_t966 * __this, SendMessageActionU5BU5D_t965* ___actions, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.SendMessageOnDialogueEvent/SendMessageAction,UnityEngine.Transform)
extern "C" void SendMessageOnDialogueEvent_DoAction_m4646 (SendMessageOnDialogueEvent_t966 * __this, SendMessageAction_t964 * ___action, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
