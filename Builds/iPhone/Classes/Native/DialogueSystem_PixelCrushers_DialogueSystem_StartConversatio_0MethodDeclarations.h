#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent
struct StartConversationOnDialogueEvent_t1313;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction[]
struct ConversationActionU5BU5D_t1312;
// PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction
struct ConversationAction_t1311;

// System.Void PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent::.ctor()
extern "C" void StartConversationOnDialogueEvent__ctor_m6540 (StartConversationOnDialogueEvent_t1313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent::TryStartActions(UnityEngine.Transform)
extern "C" void StartConversationOnDialogueEvent_TryStartActions_m6541 (StartConversationOnDialogueEvent_t1313 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent::TryEndActions(UnityEngine.Transform)
extern "C" void StartConversationOnDialogueEvent_TryEndActions_m6542 (StartConversationOnDialogueEvent_t1313 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent::TryActions(PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction[],UnityEngine.Transform)
extern "C" void StartConversationOnDialogueEvent_TryActions_m6543 (StartConversationOnDialogueEvent_t1313 * __this, ConversationActionU5BU5D_t1312* ___actions, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent::DoAction(PixelCrushers.DialogueSystem.StartConversationOnDialogueEvent/ConversationAction,UnityEngine.Transform)
extern "C" void StartConversationOnDialogueEvent_DoAction_m6544 (StartConversationOnDialogueEvent_t1313 * __this, ConversationAction_t1311 * ___action, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
