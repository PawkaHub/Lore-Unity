#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.LinkTools
struct LinkTools_t1441;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// PixelCrushers.DialogueSystem.Conversation
struct Conversation_t1377;
// PixelCrushers.DialogueSystem.DialogueEntry
struct DialogueEntry_t1361;

// System.Void PixelCrushers.DialogueSystem.LinkTools::SortOutgoingLinks(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.Conversation)
extern "C" void LinkTools_SortOutgoingLinks_m6256 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___database, Conversation_t1377 * ___conversation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LinkTools::SortOutgoingLinks(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" void LinkTools_SortOutgoingLinks_m6257 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___database, DialogueEntry_t1361 * ___dialogueEntry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.LinkTools::IsPassthroughOnFalse(PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" bool LinkTools_IsPassthroughOnFalse_m6258 (Object_t * __this /* static, unused */, DialogueEntry_t1361 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
