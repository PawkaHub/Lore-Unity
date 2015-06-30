#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent
struct StartConversationOnDialogueEvent_t989;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction[]
struct ConversationActionU5BU5D_t988;
// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction
struct ConversationAction_t987;

// System.Void PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent::.ctor()
extern "C" void StartConversationOnDialogueEvent__ctor_m4694 (StartConversationOnDialogueEvent_t989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void StartConversationOnDialogueEvent_TryStartActions_m4695 (StartConversationOnDialogueEvent_t989 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void StartConversationOnDialogueEvent_TryEndActions_m4696 (StartConversationOnDialogueEvent_t989 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction[],UnityEngine.Transform)
extern "C" void StartConversationOnDialogueEvent_TryActions_m4697 (StartConversationOnDialogueEvent_t989 * __this, ConversationActionU5BU5D_t988* ___actions, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction,UnityEngine.Transform)
extern "C" void StartConversationOnDialogueEvent_DoAction_m4698 (StartConversationOnDialogueEvent_t989 * __this, ConversationAction_t987 * ___action, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
