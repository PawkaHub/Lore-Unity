#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.ConversationModel
struct ConversationModel_t1101;
// PixelCrushers.DialogueSystem.ConversationState
struct ConversationState_t1096;
// PixelCrushers.DialogueSystem.CharacterInfo
struct CharacterInfo_t628;
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate
struct IsDialogueEntryValidDelegate_t1094;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.DialogueEntry
struct DialogueEntry_t1102;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Response>
struct List_1_t1397;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>
struct List_1_t1116;
// PixelCrushers.DialogueSystem.Actor
struct Actor_t1109;
// PixelCrushers.DialogueSystem.Conversation
struct Conversation_t1118;
// UnityEngine.Texture2D
struct Texture2D_t90;
// PixelCrushers.DialogueSystem.ConditionPriority
#include "DialogueSystem_PixelCrushers_DialogueSystem_ConditionPriorit.h"
// PixelCrushers.DialogueSystem.CharacterType
#include "DialogueSystem_PixelCrushers_DialogueSystem_CharacterType.h"

// System.Void PixelCrushers.DialogueSystem.ConversationModel::.ctor(PixelCrushers.DialogueSystem.DialogueDatabase,System.String,UnityEngine.Transform,UnityEngine.Transform,System.Boolean,PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate,System.Int32,System.Boolean)
extern "C" void ConversationModel__ctor_m5807 (ConversationModel_t1101 * __this, DialogueDatabase_t202 * ___database, String_t* ___title, Transform_t54 * ___actor, Transform_t54 * ___conversant, bool ___allowLuaExceptions, IsDialogueEntryValidDelegate_t1094 * ___isDialogueEntryValid, int32_t ___initialDialogueEntryID, bool ___stopAtFirstValid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationState PixelCrushers.DialogueSystem.ConversationModel::get_FirstState()
extern "C" ConversationState_t1096 * ConversationModel_get_FirstState_m5808 (ConversationModel_t1101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationModel::set_FirstState(PixelCrushers.DialogueSystem.ConversationState)
extern "C" void ConversationModel_set_FirstState_m5809 (ConversationModel_t1101 * __this, ConversationState_t1096 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.CharacterInfo PixelCrushers.DialogueSystem.ConversationModel::get_ActorInfo()
extern "C" CharacterInfo_t628 * ConversationModel_get_ActorInfo_m5810 (ConversationModel_t1101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.CharacterInfo PixelCrushers.DialogueSystem.ConversationModel::get_ConversantInfo()
extern "C" CharacterInfo_t628 * ConversationModel_get_ConversantInfo_m5811 (ConversationModel_t1101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationModel::get_HasValidEntry()
extern "C" bool ConversationModel_get_HasValidEntry_m5812 (ConversationModel_t1101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate PixelCrushers.DialogueSystem.ConversationModel::get_IsDialogueEntryValid()
extern "C" IsDialogueEntryValidDelegate_t1094 * ConversationModel_get_IsDialogueEntryValid_m5813 (ConversationModel_t1101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationModel::set_IsDialogueEntryValid(PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate)
extern "C" void ConversationModel_set_IsDialogueEntryValid_m5814 (ConversationModel_t1101 * __this, IsDialogueEntryValidDelegate_t1094 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationModel::FixFirstStateSequence()
extern "C" void ConversationModel_FixFirstStateSequence_m5815 (ConversationModel_t1101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationModel::IsStartEntryState(PixelCrushers.DialogueSystem.ConversationState)
extern "C" bool ConversationModel_IsStartEntryState_m5816 (ConversationModel_t1101 * __this, ConversationState_t1096 * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationModel::InformParticipants(System.String)
extern "C" void ConversationModel_InformParticipants_m5817 (ConversationModel_t1101 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationState PixelCrushers.DialogueSystem.ConversationModel::GetState(PixelCrushers.DialogueSystem.DialogueEntry,System.Boolean,System.Boolean)
extern "C" ConversationState_t1096 * ConversationModel_GetState_m5818 (ConversationModel_t1101 * __this, DialogueEntry_t1102 * ___entry, bool ___includeLinks, bool ___stopAtFirstValid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationState PixelCrushers.DialogueSystem.ConversationModel::GetState(PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" ConversationState_t1096 * ConversationModel_GetState_m5819 (ConversationModel_t1101 * __this, DialogueEntry_t1102 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationModel::UpdateResponses(PixelCrushers.DialogueSystem.ConversationState)
extern "C" void ConversationModel_UpdateResponses_m5820 (ConversationModel_t1101 * __this, ConversationState_t1096 * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationModel::SetDialogTable(System.Int32)
extern "C" void ConversationModel_SetDialogTable_m5821 (ConversationModel_t1101 * __this, int32_t ___newConversationID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationModel::CheckSequenceField(PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" void ConversationModel_CheckSequenceField_m5822 (ConversationModel_t1101 * __this, DialogueEntry_t1102 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationModel::EvaluateLinks(PixelCrushers.DialogueSystem.DialogueEntry,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Response>,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Response>,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>,System.Boolean)
extern "C" void ConversationModel_EvaluateLinks_m5823 (ConversationModel_t1101 * __this, DialogueEntry_t1102 * ___entry, List_1_t1397 * ___npcResponses, List_1_t1397 * ___pcResponses, List_1_t1116 * ___visited, bool ___stopAtFirstValid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationModel::EvaluateLinksAtPriority(PixelCrushers.DialogueSystem.ConditionPriority,PixelCrushers.DialogueSystem.DialogueEntry,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Response>,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Response>,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>,System.Boolean)
extern "C" void ConversationModel_EvaluateLinksAtPriority_m5824 (ConversationModel_t1101 * __this, int32_t ___priority, DialogueEntry_t1102 * ___entry, List_1_t1397 * ___npcResponses, List_1_t1397 * ___pcResponses, List_1_t1116 * ___visited, bool ___stopAtFirstValid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.ConversationModel::GetActorName(PixelCrushers.DialogueSystem.Actor)
extern "C" String_t* ConversationModel_GetActorName_m5825 (ConversationModel_t1101 * __this, Actor_t1109 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.ConversationModel::GetLinkText(PixelCrushers.DialogueSystem.CharacterType,PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" String_t* ConversationModel_GetLinkText_m5826 (ConversationModel_t1101 * __this, int32_t ___characterType, DialogueEntry_t1102 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationModel::SetParticipants(PixelCrushers.DialogueSystem.Conversation,UnityEngine.Transform,UnityEngine.Transform)
extern "C" void ConversationModel_SetParticipants_m5827 (ConversationModel_t1101 * __this, Conversation_t1118 * ___conversation, Transform_t54 * ___actor, Transform_t54 * ___conversant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.CharacterInfo PixelCrushers.DialogueSystem.ConversationModel::GetCharacterInfo(System.Int32,UnityEngine.Transform)
extern "C" CharacterInfo_t628 * ConversationModel_GetCharacterInfo_m5828 (ConversationModel_t1101 * __this, int32_t ___id, Transform_t54 * ___character, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.CharacterInfo PixelCrushers.DialogueSystem.ConversationModel::GetCharacterInfo(System.Int32)
extern "C" CharacterInfo_t628 * ConversationModel_GetCharacterInfo_m5829 (ConversationModel_t1101 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.ConversationModel::GetCharacterTransform(System.Int32)
extern "C" Transform_t54 * ConversationModel_GetCharacterTransform_m5830 (ConversationModel_t1101 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D PixelCrushers.DialogueSystem.ConversationModel::GetPortrait(UnityEngine.Transform,PixelCrushers.DialogueSystem.Actor)
extern "C" Texture2D_t90 * ConversationModel_GetPortrait_m5831 (ConversationModel_t1101 * __this, Transform_t54 * ___character, Actor_t1109 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D PixelCrushers.DialogueSystem.ConversationModel::GetPortraitByActorName(System.String)
extern "C" Texture2D_t90 * ConversationModel_GetPortraitByActorName_m5832 (ConversationModel_t1101 * __this, String_t* ___actorName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationModel::SetActorPortraitTexture(System.String,UnityEngine.Texture2D)
extern "C" void ConversationModel_SetActorPortraitTexture_m5833 (ConversationModel_t1101 * __this, String_t* ___actorName, Texture2D_t90 * ___portraitTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.ConversationModel::GetPCName()
extern "C" String_t* ConversationModel_GetPCName_m5834 (ConversationModel_t1101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D PixelCrushers.DialogueSystem.ConversationModel::GetPCTexture()
extern "C" Texture2D_t90 * ConversationModel_GetPCTexture_m5835 (ConversationModel_t1101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
