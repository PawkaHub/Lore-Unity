#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.Conversation
struct Conversation_t1118;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.ChatMapper.Conversation
struct Conversation_t1164;
// PixelCrushers.DialogueSystem.ChatMapper.DialogEntry
struct DialogEntry_t1166;
// PixelCrushers.DialogueSystem.DialogueEntry
struct DialogueEntry_t1102;
// PixelCrushers.DialogueSystem.Link
struct Link_t1131;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>
struct List_1_t1116;
// PixelCrushers.DialogueSystem.ConditionPriority
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConditionPriorit.h"

// System.Void PixelCrushers.DialogueSystem.Conversation::.ctor()
extern "C" void Conversation__ctor_m5538 (Conversation_t1118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Conversation::.ctor(PixelCrushers.DialogueSystem.Conversation)
extern "C" void Conversation__ctor_m5539 (Conversation_t1118 * __this, Conversation_t1118 * ___sourceConversation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Conversation::.ctor(PixelCrushers.DialogueSystem.ChatMapper.Conversation)
extern "C" void Conversation__ctor_m5540 (Conversation_t1118 * __this, Conversation_t1164 * ___chatMapperConversation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Conversation::get_Title()
extern "C" String_t* Conversation_get_Title_m5541 (Conversation_t1118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Conversation::set_Title(System.String)
extern "C" void Conversation_set_Title_m5542 (Conversation_t1118 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Conversation::get_Description()
extern "C" String_t* Conversation_get_Description_m5543 (Conversation_t1118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Conversation::set_Description(System.String)
extern "C" void Conversation_set_Description_m5544 (Conversation_t1118 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.Conversation::get_ActorID()
extern "C" int32_t Conversation_get_ActorID_m5545 (Conversation_t1118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Conversation::set_ActorID(System.Int32)
extern "C" void Conversation_set_ActorID_m5546 (Conversation_t1118 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.Conversation::get_ConversantID()
extern "C" int32_t Conversation_get_ConversantID_m5547 (Conversation_t1118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Conversation::set_ConversantID(System.Int32)
extern "C" void Conversation_set_ConversantID_m5548 (Conversation_t1118 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Conversation::Assign(PixelCrushers.DialogueSystem.ChatMapper.Conversation)
extern "C" void Conversation_Assign_m5549 (Conversation_t1118 * __this, Conversation_t1164 * ___chatMapperConversation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Conversation::AddConversationDialogueEntry(PixelCrushers.DialogueSystem.ChatMapper.DialogEntry)
extern "C" void Conversation_AddConversationDialogueEntry_m5550 (Conversation_t1118 * __this, DialogEntry_t1166 * ___chatMapperEntry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueEntry PixelCrushers.DialogueSystem.Conversation::GetDialogueEntry(System.String)
extern "C" DialogueEntry_t1102 * Conversation_GetDialogueEntry_m5551 (Conversation_t1118 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueEntry PixelCrushers.DialogueSystem.Conversation::GetDialogueEntry(System.Int32)
extern "C" DialogueEntry_t1102 * Conversation_GetDialogueEntry_m5552 (Conversation_t1118 * __this, int32_t ___dialogueEntryID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueEntry PixelCrushers.DialogueSystem.Conversation::GetFirstDialogueEntry()
extern "C" DialogueEntry_t1102 * Conversation_GetFirstDialogueEntry_m5553 (Conversation_t1118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Conversation::SplitPipesIntoEntries()
extern "C" void Conversation_SplitPipesIntoEntries_m5554 (Conversation_t1118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Conversation::SplitEntryAtPipes(System.Int32,System.String)
extern "C" void Conversation_SplitEntryAtPipes_m5555 (Conversation_t1118 * __this, int32_t ___originalEntryIndex, String_t* ___dialogueText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueEntry PixelCrushers.DialogueSystem.Conversation::AddNewDialogueEntry(PixelCrushers.DialogueSystem.DialogueEntry,System.String,System.Int32)
extern "C" DialogueEntry_t1102 * Conversation_AddNewDialogueEntry_m5556 (Conversation_t1118 * __this, DialogueEntry_t1102 * ___originalEntry, String_t* ___dialogueText, int32_t ___partNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.Conversation::GetHighestDialogueEntryID()
extern "C" int32_t Conversation_GetHighestDialogueEntryID_m5557 (Conversation_t1118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Link PixelCrushers.DialogueSystem.Conversation::NewLink(PixelCrushers.DialogueSystem.DialogueEntry,PixelCrushers.DialogueSystem.DialogueEntry,PixelCrushers.DialogueSystem.ConditionPriority)
extern "C" Link_t1131 * Conversation_NewLink_m5558 (Conversation_t1118 * __this, DialogueEntry_t1102 * ___origin, DialogueEntry_t1102 * ___destination, int32_t ___priority, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry> PixelCrushers.DialogueSystem.Conversation::CopyDialogueEntries(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>)
extern "C" List_1_t1116 * Conversation_CopyDialogueEntries_m5559 (Conversation_t1118 * __this, List_1_t1116 * ___sourceEntries, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Conversation::<GetFirstDialogueEntry>m__4(PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" bool Conversation_U3CGetFirstDialogueEntryU3Em__4_m5560 (Object_t * __this /* static, unused */, DialogueEntry_t1102 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
