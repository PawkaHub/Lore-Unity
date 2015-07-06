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
struct Actor_t1109;
// PixelCrushers.DialogueSystem.Item
struct Item_t1149;
// PixelCrushers.DialogueSystem.Location
struct Location_t1151;
// PixelCrushers.DialogueSystem.Variable
struct Variable_t1152;
// PixelCrushers.DialogueSystem.Conversation
struct Conversation_t1118;
// PixelCrushers.DialogueSystem.DialogueEntry
struct DialogueEntry_t1102;
// PixelCrushers.DialogueSystem.Link
struct Link_t1131;
// PixelCrushers.DialogueSystem.EmphasisSetting[]
struct EmphasisSettingU5BU5D_t632;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>
struct List_1_t1134;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Conversation>
struct List_1_t1141;
// PixelCrushers.DialogueSystem.Asset
struct Asset_t1110;
// PixelCrushers.DialogueSystem.CharacterType
#include "DialogueSystem_PixelCrushers_DialogueSystem_CharacterType.h"
// PixelCrushers.DialogueSystem.EntrytagFormat
#include "DialogueSystem_PixelCrushers_DialogueSystem_EntrytagFormat.h"

// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::.ctor()
extern "C" void DialogueDatabase__ctor_m5600 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.DialogueDatabase::get_playerID()
extern "C" int32_t DialogueDatabase_get_playerID_m5601 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::IsPlayerID(System.Int32)
extern "C" bool DialogueDatabase_IsPlayerID_m5602 (DialogueDatabase_t202 * __this, int32_t ___actorID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::IsPlayer(System.String)
extern "C" bool DialogueDatabase_IsPlayer_m2831 (DialogueDatabase_t202 * __this, String_t* ___actorName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.CharacterType PixelCrushers.DialogueSystem.DialogueDatabase::GetCharacterType(System.Int32)
extern "C" int32_t DialogueDatabase_GetCharacterType_m5603 (DialogueDatabase_t202 * __this, int32_t ___actorID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Actor PixelCrushers.DialogueSystem.DialogueDatabase::GetActor(System.String)
extern "C" Actor_t1109 * DialogueDatabase_GetActor_m5604 (DialogueDatabase_t202 * __this, String_t* ___actorName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Actor PixelCrushers.DialogueSystem.DialogueDatabase::GetActor(System.Int32)
extern "C" Actor_t1109 * DialogueDatabase_GetActor_m5605 (DialogueDatabase_t202 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Item PixelCrushers.DialogueSystem.DialogueDatabase::GetItem(System.String)
extern "C" Item_t1149 * DialogueDatabase_GetItem_m5606 (DialogueDatabase_t202 * __this, String_t* ___itemName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Item PixelCrushers.DialogueSystem.DialogueDatabase::GetItem(System.Int32)
extern "C" Item_t1149 * DialogueDatabase_GetItem_m5607 (DialogueDatabase_t202 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Location PixelCrushers.DialogueSystem.DialogueDatabase::GetLocation(System.String)
extern "C" Location_t1151 * DialogueDatabase_GetLocation_m5608 (DialogueDatabase_t202 * __this, String_t* ___locationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Location PixelCrushers.DialogueSystem.DialogueDatabase::GetLocation(System.Int32)
extern "C" Location_t1151 * DialogueDatabase_GetLocation_m5609 (DialogueDatabase_t202 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Variable PixelCrushers.DialogueSystem.DialogueDatabase::GetVariable(System.String)
extern "C" Variable_t1152 * DialogueDatabase_GetVariable_m5610 (DialogueDatabase_t202 * __this, String_t* ___variableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Variable PixelCrushers.DialogueSystem.DialogueDatabase::GetVariable(System.Int32)
extern "C" Variable_t1152 * DialogueDatabase_GetVariable_m5611 (DialogueDatabase_t202 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::AddConversation(PixelCrushers.DialogueSystem.Conversation)
extern "C" void DialogueDatabase_AddConversation_m5612 (DialogueDatabase_t202 * __this, Conversation_t1118 * ___conversation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Conversation PixelCrushers.DialogueSystem.DialogueDatabase::GetConversation(System.String)
extern "C" Conversation_t1118 * DialogueDatabase_GetConversation_m5613 (DialogueDatabase_t202 * __this, String_t* ___conversationTitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Conversation PixelCrushers.DialogueSystem.DialogueDatabase::GetConversation(System.Int32)
extern "C" Conversation_t1118 * DialogueDatabase_GetConversation_m5614 (DialogueDatabase_t202 * __this, int32_t ___conversationID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueEntry PixelCrushers.DialogueSystem.DialogueDatabase::GetDialogueEntry(System.Int32,System.Int32)
extern "C" DialogueEntry_t1102 * DialogueDatabase_GetDialogueEntry_m5615 (DialogueDatabase_t202 * __this, int32_t ___conversationID, int32_t ___dialogueEntryID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueEntry PixelCrushers.DialogueSystem.DialogueDatabase::GetDialogueEntry(PixelCrushers.DialogueSystem.Link)
extern "C" DialogueEntry_t1102 * DialogueDatabase_GetDialogueEntry_m5616 (DialogueDatabase_t202 * __this, Link_t1131 * ___link, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueDatabase::GetLinkText(PixelCrushers.DialogueSystem.Link)
extern "C" String_t* DialogueDatabase_GetLinkText_m5617 (DialogueDatabase_t202 * __this, Link_t1131 * ___link, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::Add(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DialogueDatabase_Add_m5618 (DialogueDatabase_t202 * __this, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::AddEmphasisSettings(PixelCrushers.DialogueSystem.EmphasisSetting[])
extern "C" void DialogueDatabase_AddEmphasisSettings_m5619 (DialogueDatabase_t202 * __this, EmphasisSettingU5BU5D_t632* ___newEmphasisSettings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::AddGlobalUserScript(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DialogueDatabase_AddGlobalUserScript_m5620 (DialogueDatabase_t202 * __this, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::Remove(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DialogueDatabase_Remove_m5621 (DialogueDatabase_t202 * __this, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::Remove(PixelCrushers.DialogueSystem.DialogueDatabase,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>)
extern "C" void DialogueDatabase_Remove_m5622 (DialogueDatabase_t202 * __this, DialogueDatabase_t202 * ___database, List_1_t1134 * ___keep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::Clear()
extern "C" void DialogueDatabase_Clear_m5623 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::SyncAll()
extern "C" void DialogueDatabase_SyncAll_m5624 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::SyncActors()
extern "C" void DialogueDatabase_SyncActors_m5625 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::SyncItems()
extern "C" void DialogueDatabase_SyncItems_m5626 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::SyncLocations()
extern "C" void DialogueDatabase_SyncLocations_m5627 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::SyncVariables()
extern "C" void DialogueDatabase_SyncVariables_m5628 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::ContainsTitle(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Conversation>,System.String)
extern "C" bool DialogueDatabase_ContainsTitle_m5629 (Object_t * __this /* static, unused */, List_1_t1141 * ___conversations, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::Contains(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.Asset)
extern "C" bool DialogueDatabase_Contains_m5630 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___database, Asset_t1110 * ___asset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::Contains(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>,PixelCrushers.DialogueSystem.Asset)
extern "C" bool DialogueDatabase_Contains_m5631 (Object_t * __this /* static, unused */, List_1_t1134 * ___databaseList, Asset_t1110 * ___asset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueDatabase::GetEntrytag(PixelCrushers.DialogueSystem.Conversation,PixelCrushers.DialogueSystem.DialogueEntry,PixelCrushers.DialogueSystem.EntrytagFormat)
extern "C" String_t* DialogueDatabase_GetEntrytag_m5632 (DialogueDatabase_t202 * __this, Conversation_t1118 * ___conversation, DialogueEntry_t1102 * ___entry, int32_t ___entrytagFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueDatabase::GetEntrytag(System.Int32,System.Int32,PixelCrushers.DialogueSystem.EntrytagFormat)
extern "C" String_t* DialogueDatabase_GetEntrytag_m5633 (DialogueDatabase_t202 * __this, int32_t ___conversationID, int32_t ___dialogueEntryID, int32_t ___entrytagFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::<get_playerID>m__5(PixelCrushers.DialogueSystem.Actor)
extern "C" bool DialogueDatabase_U3Cget_playerIDU3Em__5_m5634 (Object_t * __this /* static, unused */, Actor_t1109 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::<SyncActors>m__1C(PixelCrushers.DialogueSystem.Actor)
extern "C" bool DialogueDatabase_U3CSyncActorsU3Em__1C_m5635 (DialogueDatabase_t202 * __this, Actor_t1109 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::<SyncItems>m__1D(PixelCrushers.DialogueSystem.Item)
extern "C" bool DialogueDatabase_U3CSyncItemsU3Em__1D_m5636 (DialogueDatabase_t202 * __this, Item_t1149 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::<SyncLocations>m__1E(PixelCrushers.DialogueSystem.Location)
extern "C" bool DialogueDatabase_U3CSyncLocationsU3Em__1E_m5637 (DialogueDatabase_t202 * __this, Location_t1151 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::<SyncVariables>m__1F(PixelCrushers.DialogueSystem.Variable)
extern "C" bool DialogueDatabase_U3CSyncVariablesU3Em__1F_m5638 (DialogueDatabase_t202 * __this, Variable_t1152 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
