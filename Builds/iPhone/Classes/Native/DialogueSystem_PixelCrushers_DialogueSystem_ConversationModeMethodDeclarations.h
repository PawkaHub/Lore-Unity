#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.ConversationModel
struct ConversationModel_t1360;
// PixelCrushers.DialogueSystem.ConversationState
struct ConversationState_t1355;
// PixelCrushers.DialogueSystem.CharacterInfo
struct CharacterInfo_t685;
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate
struct IsDialogueEntryValidDelegate_t1353;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.DialogueEntry
struct DialogueEntry_t1361;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Response>
struct List_1_t1656;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>
struct List_1_t1375;
// PixelCrushers.DialogueSystem.Actor
struct Actor_t1368;
// PixelCrushers.DialogueSystem.Conversation
struct Conversation_t1377;
// UnityEngine.Texture2D
struct Texture2D_t90;
// PixelCrushers.DialogueSystem.ConditionPriority
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConditionPriorit.h"
// PixelCrushers.DialogueSystem.CharacterType
#include "DialogueSystem_PixelCrushers_DialogueSystem_CharacterType.h"

// System.Void PixelCrushers.DialogueSystem.ConversationModel::.ctor(PixelCrushers.DialogueSystem.DialogueDatabase,System.String,UnityEngine.Transform,UnityEngine.Transform,System.Boolean,PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate,System.Int32,System.Boolean)
extern "C" void ConversationModel__ctor_m6259 (ConversationModel_t1360 * __this, DialogueDatabase_t202 * ___database, String_t* ___title, Transform_t54 * ___actor, Transform_t54 * ___conversant, bool ___allowLuaExceptions, IsDialogueEntryValidDelegate_t1353 * ___isDialogueEntryValid, int32_t ___initialDialogueEntryID, bool ___stopAtFirstValid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationState PixelCrushers.DialogueSystem.ConversationModel::get_FirstState()
extern "C" ConversationState_t1355 * ConversationModel_get_FirstState_m6260 (ConversationModel_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationModel::set_FirstState(PixelCrushers.DialogueSystem.ConversationState)
extern "C" void ConversationModel_set_FirstState_m6261 (ConversationModel_t1360 * __this, ConversationState_t1355 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.CharacterInfo PixelCrushers.DialogueSystem.ConversationModel::get_ActorInfo()
extern "C" CharacterInfo_t685 * ConversationModel_get_ActorInfo_m6262 (ConversationModel_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.CharacterInfo PixelCrushers.DialogueSystem.ConversationModel::get_ConversantInfo()
extern "C" CharacterInfo_t685 * ConversationModel_get_ConversantInfo_m6263 (ConversationModel_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationModel::get_HasValidEntry()
extern "C" bool ConversationModel_get_HasValidEntry_m6264 (ConversationModel_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate PixelCrushers.DialogueSystem.ConversationModel::get_IsDialogueEntryValid()
extern "C" IsDialogueEntryValidDelegate_t1353 * ConversationModel_get_IsDialogueEntryValid_m6265 (ConversationModel_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationModel::set_IsDialogueEntryValid(PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate)
extern "C" void ConversationModel_set_IsDialogueEntryValid_m6266 (ConversationModel_t1360 * __this, IsDialogueEntryValidDelegate_t1353 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationModel::FixFirstStateSequence()
extern "C" void ConversationModel_FixFirstStateSequence_m6267 (ConversationModel_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationModel::IsStartEntryState(PixelCrushers.DialogueSystem.ConversationState)
extern "C" bool ConversationModel_IsStartEntryState_m6268 (ConversationModel_t1360 * __this, ConversationState_t1355 * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationModel::InformParticipants(System.String)
extern "C" void ConversationModel_InformParticipants_m6269 (ConversationModel_t1360 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationState PixelCrushers.DialogueSystem.ConversationModel::GetState(PixelCrushers.DialogueSystem.DialogueEntry,System.Boolean,System.Boolean)
extern "C" ConversationState_t1355 * ConversationModel_GetState_m6270 (ConversationModel_t1360 * __this, DialogueEntry_t1361 * ___entry, bool ___includeLinks, bool ___stopAtFirstValid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationState PixelCrushers.DialogueSystem.ConversationModel::GetState(PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" ConversationState_t1355 * ConversationModel_GetState_m6271 (ConversationModel_t1360 * __this, DialogueEntry_t1361 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationModel::UpdateResponses(PixelCrushers.DialogueSystem.ConversationState)
extern "C" void ConversationModel_UpdateResponses_m6272 (ConversationModel_t1360 * __this, ConversationState_t1355 * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationModel::SetDialogTable(System.Int32)
extern "C" void ConversationModel_SetDialogTable_m6273 (ConversationModel_t1360 * __this, int32_t ___newConversationID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationModel::CheckSequenceField(PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" void ConversationModel_CheckSequenceField_m6274 (ConversationModel_t1360 * __this, DialogueEntry_t1361 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationModel::EvaluateLinks(PixelCrushers.DialogueSystem.DialogueEntry,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Response>,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Response>,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>,System.Boolean)
extern "C" void ConversationModel_EvaluateLinks_m6275 (ConversationModel_t1360 * __this, DialogueEntry_t1361 * ___entry, List_1_t1656 * ___npcResponses, List_1_t1656 * ___pcResponses, List_1_t1375 * ___visited, bool ___stopAtFirstValid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationModel::EvaluateLinksAtPriority(PixelCrushers.DialogueSystem.ConditionPriority,PixelCrushers.DialogueSystem.DialogueEntry,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Response>,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Response>,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>,System.Boolean)
extern "C" void ConversationModel_EvaluateLinksAtPriority_m6276 (ConversationModel_t1360 * __this, int32_t ___priority, DialogueEntry_t1361 * ___entry, List_1_t1656 * ___npcResponses, List_1_t1656 * ___pcResponses, List_1_t1375 * ___visited, bool ___stopAtFirstValid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.ConversationModel::GetActorName(PixelCrushers.DialogueSystem.Actor)
extern "C" String_t* ConversationModel_GetActorName_m6277 (ConversationModel_t1360 * __this, Actor_t1368 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.ConversationModel::GetLinkText(PixelCrushers.DialogueSystem.CharacterType,PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" String_t* ConversationModel_GetLinkText_m6278 (ConversationModel_t1360 * __this, int32_t ___characterType, DialogueEntry_t1361 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationModel::SetParticipants(PixelCrushers.DialogueSystem.Conversation,UnityEngine.Transform,UnityEngine.Transform)
extern "C" void ConversationModel_SetParticipants_m6279 (ConversationModel_t1360 * __this, Conversation_t1377 * ___conversation, Transform_t54 * ___actor, Transform_t54 * ___conversant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.CharacterInfo PixelCrushers.DialogueSystem.ConversationModel::GetCharacterInfo(System.Int32,UnityEngine.Transform)
extern "C" CharacterInfo_t685 * ConversationModel_GetCharacterInfo_m6280 (ConversationModel_t1360 * __this, int32_t ___id, Transform_t54 * ___character, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.CharacterInfo PixelCrushers.DialogueSystem.ConversationModel::GetCharacterInfo(System.Int32)
extern "C" CharacterInfo_t685 * ConversationModel_GetCharacterInfo_m6281 (ConversationModel_t1360 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.ConversationModel::GetCharacterTransform(System.Int32)
extern "C" Transform_t54 * ConversationModel_GetCharacterTransform_m6282 (ConversationModel_t1360 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D PixelCrushers.DialogueSystem.ConversationModel::GetPortrait(UnityEngine.Transform,PixelCrushers.DialogueSystem.Actor)
extern "C" Texture2D_t90 * ConversationModel_GetPortrait_m6283 (ConversationModel_t1360 * __this, Transform_t54 * ___character, Actor_t1368 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D PixelCrushers.DialogueSystem.ConversationModel::GetPortraitByActorName(System.String)
extern "C" Texture2D_t90 * ConversationModel_GetPortraitByActorName_m6284 (ConversationModel_t1360 * __this, String_t* ___actorName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationModel::SetActorPortraitTexture(System.String,UnityEngine.Texture2D)
extern "C" void ConversationModel_SetActorPortraitTexture_m6285 (ConversationModel_t1360 * __this, String_t* ___actorName, Texture2D_t90 * ___portraitTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.ConversationModel::GetPCName()
extern "C" String_t* ConversationModel_GetPCName_m6286 (ConversationModel_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D PixelCrushers.DialogueSystem.ConversationModel::GetPCTexture()
extern "C" Texture2D_t90 * ConversationModel_GetPCTexture_m6287 (ConversationModel_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
