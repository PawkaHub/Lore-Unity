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
struct Actor_t1368;
// PixelCrushers.DialogueSystem.Item
struct Item_t1408;
// PixelCrushers.DialogueSystem.Location
struct Location_t1410;
// PixelCrushers.DialogueSystem.Variable
struct Variable_t1411;
// PixelCrushers.DialogueSystem.Conversation
struct Conversation_t1377;
// PixelCrushers.DialogueSystem.DialogueEntry
struct DialogueEntry_t1361;
// PixelCrushers.DialogueSystem.Link
struct Link_t1390;
// PixelCrushers.DialogueSystem.EmphasisSetting[]
struct EmphasisSettingU5BU5D_t689;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>
struct List_1_t1393;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Conversation>
struct List_1_t1400;
// PixelCrushers.DialogueSystem.Asset
struct Asset_t1369;
// PixelCrushers.DialogueSystem.CharacterType
#include "DialogueSystem_PixelCrushers_DialogueSystem_CharacterType.h"
// PixelCrushers.DialogueSystem.EntrytagFormat
#include "DialogueSystem_PixelCrushers_DialogueSystem_EntrytagFormat.h"

// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::.ctor()
extern "C" void DialogueDatabase__ctor_m6052 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.DialogueDatabase::get_playerID()
extern "C" int32_t DialogueDatabase_get_playerID_m6053 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::IsPlayerID(System.Int32)
extern "C" bool DialogueDatabase_IsPlayerID_m6054 (DialogueDatabase_t202 * __this, int32_t ___actorID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::IsPlayer(System.String)
extern "C" bool DialogueDatabase_IsPlayer_m3003 (DialogueDatabase_t202 * __this, String_t* ___actorName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.CharacterType PixelCrushers.DialogueSystem.DialogueDatabase::GetCharacterType(System.Int32)
extern "C" int32_t DialogueDatabase_GetCharacterType_m6055 (DialogueDatabase_t202 * __this, int32_t ___actorID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Actor PixelCrushers.DialogueSystem.DialogueDatabase::GetActor(System.String)
extern "C" Actor_t1368 * DialogueDatabase_GetActor_m6056 (DialogueDatabase_t202 * __this, String_t* ___actorName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Actor PixelCrushers.DialogueSystem.DialogueDatabase::GetActor(System.Int32)
extern "C" Actor_t1368 * DialogueDatabase_GetActor_m6057 (DialogueDatabase_t202 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Item PixelCrushers.DialogueSystem.DialogueDatabase::GetItem(System.String)
extern "C" Item_t1408 * DialogueDatabase_GetItem_m6058 (DialogueDatabase_t202 * __this, String_t* ___itemName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Item PixelCrushers.DialogueSystem.DialogueDatabase::GetItem(System.Int32)
extern "C" Item_t1408 * DialogueDatabase_GetItem_m6059 (DialogueDatabase_t202 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Location PixelCrushers.DialogueSystem.DialogueDatabase::GetLocation(System.String)
extern "C" Location_t1410 * DialogueDatabase_GetLocation_m6060 (DialogueDatabase_t202 * __this, String_t* ___locationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Location PixelCrushers.DialogueSystem.DialogueDatabase::GetLocation(System.Int32)
extern "C" Location_t1410 * DialogueDatabase_GetLocation_m6061 (DialogueDatabase_t202 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Variable PixelCrushers.DialogueSystem.DialogueDatabase::GetVariable(System.String)
extern "C" Variable_t1411 * DialogueDatabase_GetVariable_m6062 (DialogueDatabase_t202 * __this, String_t* ___variableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Variable PixelCrushers.DialogueSystem.DialogueDatabase::GetVariable(System.Int32)
extern "C" Variable_t1411 * DialogueDatabase_GetVariable_m6063 (DialogueDatabase_t202 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::AddConversation(PixelCrushers.DialogueSystem.Conversation)
extern "C" void DialogueDatabase_AddConversation_m6064 (DialogueDatabase_t202 * __this, Conversation_t1377 * ___conversation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Conversation PixelCrushers.DialogueSystem.DialogueDatabase::GetConversation(System.String)
extern "C" Conversation_t1377 * DialogueDatabase_GetConversation_m6065 (DialogueDatabase_t202 * __this, String_t* ___conversationTitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Conversation PixelCrushers.DialogueSystem.DialogueDatabase::GetConversation(System.Int32)
extern "C" Conversation_t1377 * DialogueDatabase_GetConversation_m6066 (DialogueDatabase_t202 * __this, int32_t ___conversationID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueEntry PixelCrushers.DialogueSystem.DialogueDatabase::GetDialogueEntry(System.Int32,System.Int32)
extern "C" DialogueEntry_t1361 * DialogueDatabase_GetDialogueEntry_m6067 (DialogueDatabase_t202 * __this, int32_t ___conversationID, int32_t ___dialogueEntryID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueEntry PixelCrushers.DialogueSystem.DialogueDatabase::GetDialogueEntry(PixelCrushers.DialogueSystem.Link)
extern "C" DialogueEntry_t1361 * DialogueDatabase_GetDialogueEntry_m6068 (DialogueDatabase_t202 * __this, Link_t1390 * ___link, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueDatabase::GetLinkText(PixelCrushers.DialogueSystem.Link)
extern "C" String_t* DialogueDatabase_GetLinkText_m6069 (DialogueDatabase_t202 * __this, Link_t1390 * ___link, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::Add(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DialogueDatabase_Add_m6070 (DialogueDatabase_t202 * __this, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::AddEmphasisSettings(PixelCrushers.DialogueSystem.EmphasisSetting[])
extern "C" void DialogueDatabase_AddEmphasisSettings_m6071 (DialogueDatabase_t202 * __this, EmphasisSettingU5BU5D_t689* ___newEmphasisSettings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::AddGlobalUserScript(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DialogueDatabase_AddGlobalUserScript_m6072 (DialogueDatabase_t202 * __this, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::Remove(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DialogueDatabase_Remove_m6073 (DialogueDatabase_t202 * __this, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::Remove(PixelCrushers.DialogueSystem.DialogueDatabase,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>)
extern "C" void DialogueDatabase_Remove_m6074 (DialogueDatabase_t202 * __this, DialogueDatabase_t202 * ___database, List_1_t1393 * ___keep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::Clear()
extern "C" void DialogueDatabase_Clear_m6075 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::SyncAll()
extern "C" void DialogueDatabase_SyncAll_m6076 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::SyncActors()
extern "C" void DialogueDatabase_SyncActors_m6077 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::SyncItems()
extern "C" void DialogueDatabase_SyncItems_m6078 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::SyncLocations()
extern "C" void DialogueDatabase_SyncLocations_m6079 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueDatabase::SyncVariables()
extern "C" void DialogueDatabase_SyncVariables_m6080 (DialogueDatabase_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::ContainsTitle(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Conversation>,System.String)
extern "C" bool DialogueDatabase_ContainsTitle_m6081 (Object_t * __this /* static, unused */, List_1_t1400 * ___conversations, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::Contains(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.Asset)
extern "C" bool DialogueDatabase_Contains_m6082 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___database, Asset_t1369 * ___asset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::Contains(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>,PixelCrushers.DialogueSystem.Asset)
extern "C" bool DialogueDatabase_Contains_m6083 (Object_t * __this /* static, unused */, List_1_t1393 * ___databaseList, Asset_t1369 * ___asset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueDatabase::GetEntrytag(PixelCrushers.DialogueSystem.Conversation,PixelCrushers.DialogueSystem.DialogueEntry,PixelCrushers.DialogueSystem.EntrytagFormat)
extern "C" String_t* DialogueDatabase_GetEntrytag_m6084 (DialogueDatabase_t202 * __this, Conversation_t1377 * ___conversation, DialogueEntry_t1361 * ___entry, int32_t ___entrytagFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueDatabase::GetEntrytag(System.Int32,System.Int32,PixelCrushers.DialogueSystem.EntrytagFormat)
extern "C" String_t* DialogueDatabase_GetEntrytag_m6085 (DialogueDatabase_t202 * __this, int32_t ___conversationID, int32_t ___dialogueEntryID, int32_t ___entrytagFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::<get_playerID>m__5(PixelCrushers.DialogueSystem.Actor)
extern "C" bool DialogueDatabase_U3Cget_playerIDU3Em__5_m6086 (Object_t * __this /* static, unused */, Actor_t1368 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::<SyncActors>m__1C(PixelCrushers.DialogueSystem.Actor)
extern "C" bool DialogueDatabase_U3CSyncActorsU3Em__1C_m6087 (DialogueDatabase_t202 * __this, Actor_t1368 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::<SyncItems>m__1D(PixelCrushers.DialogueSystem.Item)
extern "C" bool DialogueDatabase_U3CSyncItemsU3Em__1D_m6088 (DialogueDatabase_t202 * __this, Item_t1408 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::<SyncLocations>m__1E(PixelCrushers.DialogueSystem.Location)
extern "C" bool DialogueDatabase_U3CSyncLocationsU3Em__1E_m6089 (DialogueDatabase_t202 * __this, Location_t1410 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase::<SyncVariables>m__1F(PixelCrushers.DialogueSystem.Variable)
extern "C" bool DialogueDatabase_U3CSyncVariablesU3Em__1F_m6090 (DialogueDatabase_t202 * __this, Variable_t1411 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
