#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.LinkTools
struct LinkTools_t1182;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// PixelCrushers.DialogueSystem.Conversation
struct Conversation_t1118;
// PixelCrushers.DialogueSystem.DialogueEntry
struct DialogueEntry_t1102;

// System.Void PixelCrushers.DialogueSystem.LinkTools::SortOutgoingLinks(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.Conversation)
extern "C" void LinkTools_SortOutgoingLinks_m5804 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___database, Conversation_t1118 * ___conversation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LinkTools::SortOutgoingLinks(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" void LinkTools_SortOutgoingLinks_m5805 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___database, DialogueEntry_t1102 * ___dialogueEntry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.LinkTools::IsPassthroughOnFalse(PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" bool LinkTools_IsPassthroughOnFalse_m5806 (Object_t * __this /* static, unused */, DialogueEntry_t1102 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
