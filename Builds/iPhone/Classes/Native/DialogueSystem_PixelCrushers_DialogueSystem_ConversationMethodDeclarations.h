#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.Conversation
struct Conversation_t793;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.ChatMapper.Conversation
struct Conversation_t839;
// PixelCrushers.DialogueSystem.ChatMapper.DialogEntry
struct DialogEntry_t841;
// PixelCrushers.DialogueSystem.DialogueEntry
struct DialogueEntry_t777;
// PixelCrushers.DialogueSystem.Link
struct Link_t806;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>
struct List_1_t791;
// PixelCrushers.DialogueSystem.ConditionPriority
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConditionPriorit.h"

// System.Void PixelCrushers.DialogueSystem.Conversation::.ctor()
extern "C" void Conversation__ctor_m3702 (Conversation_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Conversation::.ctor(PixelCrushers.DialogueSystem.Conversation)
extern "C" void Conversation__ctor_m3703 (Conversation_t793 * __this, Conversation_t793 * ___sourceConversation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Conversation::.ctor(PixelCrushers.DialogueSystem.ChatMapper.Conversation)
extern "C" void Conversation__ctor_m3704 (Conversation_t793 * __this, Conversation_t839 * ___chatMapperConversation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Conversation::get_Title()
extern "C" String_t* Conversation_get_Title_m3705 (Conversation_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Conversation::set_Title(System.String)
extern "C" void Conversation_set_Title_m3706 (Conversation_t793 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Conversation::get_Description()
extern "C" String_t* Conversation_get_Description_m3707 (Conversation_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Conversation::set_Description(System.String)
extern "C" void Conversation_set_Description_m3708 (Conversation_t793 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.Conversation::get_ActorID()
extern "C" int32_t Conversation_get_ActorID_m3709 (Conversation_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Conversation::set_ActorID(System.Int32)
extern "C" void Conversation_set_ActorID_m3710 (Conversation_t793 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.Conversation::get_ConversantID()
extern "C" int32_t Conversation_get_ConversantID_m3711 (Conversation_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Conversation::set_ConversantID(System.Int32)
extern "C" void Conversation_set_ConversantID_m3712 (Conversation_t793 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Conversation::Assign(PixelCrushers.DialogueSystem.ChatMapper.Conversation)
extern "C" void Conversation_Assign_m3713 (Conversation_t793 * __this, Conversation_t839 * ___chatMapperConversation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Conversation::AddConversationDialogueEntry(PixelCrushers.DialogueSystem.ChatMapper.DialogEntry)
extern "C" void Conversation_AddConversationDialogueEntry_m3714 (Conversation_t793 * __this, DialogEntry_t841 * ___chatMapperEntry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueEntry PixelCrushers.DialogueSystem.Conversation::GetDialogueEntry(System.String)
extern "C" DialogueEntry_t777 * Conversation_GetDialogueEntry_m3715 (Conversation_t793 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueEntry PixelCrushers.DialogueSystem.Conversation::GetDialogueEntry(System.Int32)
extern "C" DialogueEntry_t777 * Conversation_GetDialogueEntry_m3716 (Conversation_t793 * __this, int32_t ___dialogueEntryID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueEntry PixelCrushers.DialogueSystem.Conversation::GetFirstDialogueEntry()
extern "C" DialogueEntry_t777 * Conversation_GetFirstDialogueEntry_m3717 (Conversation_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Conversation::SplitPipesIntoEntries()
extern "C" void Conversation_SplitPipesIntoEntries_m3718 (Conversation_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Conversation::SplitEntryAtPipes(System.Int32,System.String)
extern "C" void Conversation_SplitEntryAtPipes_m3719 (Conversation_t793 * __this, int32_t ___originalEntryIndex, String_t* ___dialogueText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueEntry PixelCrushers.DialogueSystem.Conversation::AddNewDialogueEntry(PixelCrushers.DialogueSystem.DialogueEntry,System.String,System.Int32)
extern "C" DialogueEntry_t777 * Conversation_AddNewDialogueEntry_m3720 (Conversation_t793 * __this, DialogueEntry_t777 * ___originalEntry, String_t* ___dialogueText, int32_t ___partNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.Conversation::GetHighestDialogueEntryID()
extern "C" int32_t Conversation_GetHighestDialogueEntryID_m3721 (Conversation_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Link PixelCrushers.DialogueSystem.Conversation::NewLink(PixelCrushers.DialogueSystem.DialogueEntry,PixelCrushers.DialogueSystem.DialogueEntry,PixelCrushers.DialogueSystem.ConditionPriority)
extern "C" Link_t806 * Conversation_NewLink_m3722 (Conversation_t793 * __this, DialogueEntry_t777 * ___origin, DialogueEntry_t777 * ___destination, int32_t ___priority, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry> PixelCrushers.DialogueSystem.Conversation::CopyDialogueEntries(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>)
extern "C" List_1_t791 * Conversation_CopyDialogueEntries_m3723 (Conversation_t793 * __this, List_1_t791 * ___sourceEntries, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Conversation::<GetFirstDialogueEntry>m__4(PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" bool Conversation_U3CGetFirstDialogueEntryU3Em__4_m3724 (Object_t * __this /* static, unused */, DialogueEntry_t777 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
