#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.ConversationState
struct ConversationState_t1355;
// PixelCrushers.DialogueSystem.Response
struct Response_t235;
// PixelCrushers.DialogueSystem.Subtitle
struct Subtitle_t623;
// PixelCrushers.DialogueSystem.Response[]
struct ResponseU5BU5D_t624;

// System.Void PixelCrushers.DialogueSystem.ConversationState::.ctor(PixelCrushers.DialogueSystem.Subtitle,PixelCrushers.DialogueSystem.Response[],PixelCrushers.DialogueSystem.Response[],System.Boolean)
extern "C" void ConversationState__ctor_m6405 (ConversationState_t1355 * __this, Subtitle_t623 * ___subtitle, ResponseU5BU5D_t624* ___npcResponses, ResponseU5BU5D_t624* ___pcResponses, bool ___isGroup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationState::get_HasNPCResponse()
extern "C" bool ConversationState_get_HasNPCResponse_m6406 (ConversationState_t1355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Response PixelCrushers.DialogueSystem.ConversationState::get_FirstNPCResponse()
extern "C" Response_t235 * ConversationState_get_FirstNPCResponse_m6407 (ConversationState_t1355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationState::get_HasPCResponses()
extern "C" bool ConversationState_get_HasPCResponses_m6408 (ConversationState_t1355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationState::get_HasPCAutoResponse()
extern "C" bool ConversationState_get_HasPCAutoResponse_m6409 (ConversationState_t1355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Response PixelCrushers.DialogueSystem.ConversationState::get_PCAutoResponse()
extern "C" Response_t235 * ConversationState_get_PCAutoResponse_m6410 (ConversationState_t1355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationState::get_HasAnyResponses()
extern "C" bool ConversationState_get_HasAnyResponses_m6411 (ConversationState_t1355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationState::get_IsGroup()
extern "C" bool ConversationState_get_IsGroup_m6412 (ConversationState_t1355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationState::set_IsGroup(System.Boolean)
extern "C" void ConversationState_set_IsGroup_m6413 (ConversationState_t1355 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
