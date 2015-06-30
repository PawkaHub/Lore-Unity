#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.Actor
struct Actor_t784;
// PixelCrushers.DialogueSystem.Item
struct Item_t824;
// PixelCrushers.DialogueSystem.Location
struct Location_t826;
// PixelCrushers.DialogueSystem.Variable
struct Variable_t827;
// PixelCrushers.DialogueSystem.Conversation
struct Conversation_t793;
// PixelCrushers.DialogueSystem.DialogueEntry
struct DialogueEntry_t777;
// PixelCrushers.DialogueSystem.Link
struct Link_t806;
// PixelCrushers.DialogueSystem.EmphasisSetting[]
struct EmphasisSettingU5BU5D_t611;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>
struct List_1_t809;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Conversation>
struct List_1_t816;
// PixelCrushers.DialogueSystem.Asset
struct Asset_t785;
// PixelCrushers.DialogueSystem.CharacterType
#include "DialogueSystem_PixelCrushers_DialogueSystem_CharacterType.h"
// PixelCrushers.DialogueSystem.EntrytagFormat
#include "DialogueSystem_PixelCrushers_DialogueSystem_EntrytagFormat.h"

// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::.ctor()
extern "C" void DialogueDatabase__ctor_m3764 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.DialogueDatabase::get_playerID()
extern "C" int32_t DialogueDatabase_get_playerID_m3765 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::IsPlayerID(System.Int32)
extern "C" bool DialogueDatabase_IsPlayerID_m3766 (DialogueDatabase_t202 * __this, int32_t ___actorID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::IsPlayer(System.String)
extern "C" bool DialogueDatabase_IsPlayer_m2744 (DialogueDatabase_t202 * __this, String_t* ___actorName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.CharacterType PixelCrushers.DialogueSystem.DialogueDatabase::GetCharacterType(System.Int32)
extern "C" int32_t DialogueDatabase_GetCharacterType_m3767 (DialogueDatabase_t202 * __this, int32_t ___actorID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Actor PixelCrushers.DialogueSystem.DialogueDatabase::GetActor(System.String)
extern "C" Actor_t784 * DialogueDatabase_GetActor_m3768 (DialogueDatabase_t202 * __this, String_t* ___actorName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Actor PixelCrushers.DialogueSystem.DialogueDatabase::GetActor(System.Int32)
extern "C" Actor_t784 * DialogueDatabase_GetActor_m3769 (DialogueDatabase_t202 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Item PixelCrushers.DialogueSystem.DialogueDatabase::GetItem(System.String)
extern "C" Item_t824 * DialogueDatabase_GetItem_m3770 (DialogueDatabase_t202 * __this, String_t* ___itemName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Item PixelCrushers.DialogueSystem.DialogueDatabase::GetItem(System.Int32)
extern "C" Item_t824 * DialogueDatabase_GetItem_m3771 (DialogueDatabase_t202 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Location PixelCrushers.DialogueSystem.DialogueDatabase::GetLocation(System.String)
extern "C" Location_t826 * DialogueDatabase_GetLocation_m3772 (DialogueDatabase_t202 * __this, String_t* ___locationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Location PixelCrushers.DialogueSystem.DialogueDatabase::GetLocation(System.Int32)
extern "C" Location_t826 * DialogueDatabase_GetLocation_m3773 (DialogueDatabase_t202 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Variable PixelCrushers.DialogueSystem.DialogueDatabase::GetVariable(System.String)
extern "C" Variable_t827 * DialogueDatabase_GetVariable_m3774 (DialogueDatabase_t202 * __this, String_t* ___variableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Variable PixelCrushers.DialogueSystem.DialogueDatabase::GetVariable(System.Int32)
extern "C" Variable_t827 * DialogueDatabase_GetVariable_m3775 (DialogueDatabase_t202 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::AddConversation(PixelCrushers.DialogueSystem.Conversation)
extern "C" void DialogueDatabase_AddConversation_m3776 (DialogueDatabase_t202 * __this, Conversation_t793 * ___conversation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Conversation PixelCrushers.DialogueSystem.DialogueDatabase::GetConversation(System.String)
extern "C" Conversation_t793 * DialogueDatabase_GetConversation_m3777 (DialogueDatabase_t202 * __this, String_t* ___conversationTitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Conversation PixelCrushers.DialogueSystem.DialogueDatabase::GetConversation(System.Int32)
extern "C" Conversation_t793 * DialogueDatabase_GetConversation_m3778 (DialogueDatabase_t202 * __this, int32_t ___conversationID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueEntry PixelCrushers.DialogueSystem.DialogueDatabase::GetDialogueEntry(System.Int32,System.Int32)
extern "C" DialogueEntry_t777 * DialogueDatabase_GetDialogueEntry_m3779 (DialogueDatabase_t202 * __this, int32_t ___conversationID, int32_t ___dialogueEntryID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueEntry PixelCrushers.DialogueSystem.DialogueDatabase::GetDialogueEntry(PixelCrushers.DialogueSystem.Link)
extern "C" DialogueEntry_t777 * DialogueDatabase_GetDialogueEntry_m3780 (DialogueDatabase_t202 * __this, Link_t806 * ___link, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueDatabase::GetLinkText(PixelCrushers.DialogueSystem.Link)
extern "C" String_t* DialogueDatabase_GetLinkText_m3781 (DialogueDatabase_t202 * __this, Link_t806 * ___link, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::Add(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DialogueDatabase_Add_m3782 (DialogueDatabase_t202 * __this, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::AddEmphasisSettings(PixelCrushers.DialogueSystem.EmphasisSetting[])
extern "C" void DialogueDatabase_AddEmphasisSettings_m3783 (DialogueDatabase_t202 * __this, EmphasisSettingU5BU5D_t611* ___newEmphasisSettings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::AddGlobalUserScript(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DialogueDatabase_AddGlobalUserScript_m3784 (DialogueDatabase_t202 * __this, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::Remove(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DialogueDatabase_Remove_m3785 (DialogueDatabase_t202 * __this, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::Remove(PixelCrushers.DialogueSystem.DialogueDatabase,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>)
extern "C" void DialogueDatabase_Remove_m3786 (DialogueDatabase_t202 * __this, DialogueDatabase_t202 * ___database, List_1_t809 * ___keep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::Clear()
extern "C" void DialogueDatabase_Clear_m3787 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::SyncAll()
extern "C" void DialogueDatabase_SyncAll_m3788 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::SyncActors()
extern "C" void DialogueDatabase_SyncActors_m3789 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::SyncItems()
extern "C" void DialogueDatabase_SyncItems_m3790 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::SyncLocations()
extern "C" void DialogueDatabase_SyncLocations_m3791 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::SyncVariables()
extern "C" void DialogueDatabase_SyncVariables_m3792 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::ContainsTitle(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Conversation>,System.String)
extern "C" bool DialogueDatabase_ContainsTitle_m3793 (Object_t * __this /* static, unused */, List_1_t816 * ___conversations, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::Contains(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.Asset)
extern "C" bool DialogueDatabase_Contains_m3794 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___database, Asset_t785 * ___asset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::Contains(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>,PixelCrushers.DialogueSystem.Asset)
extern "C" bool DialogueDatabase_Contains_m3795 (Object_t * __this /* static, unused */, List_1_t809 * ___databaseList, Asset_t785 * ___asset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueDatabase::GetEntrytag(PixelCrushers.DialogueSystem.Conversation,PixelCrushers.DialogueSystem.DialogueEntry,PixelCrushers.DialogueSystem.EntrytagFormat)
extern "C" String_t* DialogueDatabase_GetEntrytag_m3796 (DialogueDatabase_t202 * __this, Conversation_t793 * ___conversation, DialogueEntry_t777 * ___entry, int32_t ___entrytagFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueDatabase::GetEntrytag(System.Int32,System.Int32,PixelCrushers.DialogueSystem.EntrytagFormat)
extern "C" String_t* DialogueDatabase_GetEntrytag_m3797 (DialogueDatabase_t202 * __this, int32_t ___conversationID, int32_t ___dialogueEntryID, int32_t ___entrytagFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::<get_playerID>m__5(PixelCrushers.DialogueSystem.Actor)
extern "C" bool DialogueDatabase_U3Cget_playerIDU3Em__5_m3798 (Object_t * __this /* static, unused */, Actor_t784 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::<SyncActors>m__1C(PixelCrushers.DialogueSystem.Actor)
extern "C" bool DialogueDatabase_U3CSyncActorsU3Em__1C_m3799 (DialogueDatabase_t202 * __this, Actor_t784 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::<SyncItems>m__1D(PixelCrushers.DialogueSystem.Item)
extern "C" bool DialogueDatabase_U3CSyncItemsU3Em__1D_m3800 (DialogueDatabase_t202 * __this, Item_t824 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::<SyncLocations>m__1E(PixelCrushers.DialogueSystem.Location)
extern "C" bool DialogueDatabase_U3CSyncLocationsU3Em__1E_m3801 (DialogueDatabase_t202 * __this, Location_t826 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::<SyncVariables>m__1F(PixelCrushers.DialogueSystem.Variable)
extern "C" bool DialogueDatabase_U3CSyncVariablesU3Em__1F_m3802 (DialogueDatabase_t202 * __this, Variable_t827 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
