#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.DialogueSystemController
struct DialogueSystemController_t631;
// PixelCrushers.DialogueSystem.DatabaseManager
struct DatabaseManager_t1092;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// PixelCrushers.DialogueSystem.IDialogueUI
struct IDialogueUI_t746;
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate
struct IsDialogueEntryValidDelegate_t1094;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.ConversationState
struct ConversationState_t1096;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.ConversationController
struct ConversationController_t1093;
// PixelCrushers.DialogueSystem.ConversationModel
struct ConversationModel_t1101;
// PixelCrushers.DialogueSystem.ConversationView
struct ConversationView_t1107;
// UnityEngine.Texture2D
struct Texture2D_t90;
// PixelCrushers.DialogueSystem.Subtitle
struct Subtitle_t570;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// PixelCrushers.DialogueSystem.BarkHistory
struct BarkHistory_t1099;
// PixelCrushers.DialogueSystem.Sequencer
struct Sequencer_t618;
// UnityEngine.GameObject
struct GameObject_t49;
// PixelCrushers.DialogueSystem.LuaChangedDelegate
struct LuaChangedDelegate_t724;
// UnityEngine.AssetBundle
struct AssetBundle_t1396;
// UnityEngine.Object
struct Object_t584;
struct Object_t584_marshaled;
// PixelCrushers.DialogueSystem.DatabaseResetOptions
#include "DialogueSystem_PixelCrushers_DialogueSystem_DatabaseResetOpt.h"
// PixelCrushers.DialogueSystem.LuaWatchFrequency
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaWatchFrequenc.h"

// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::.ctor()
extern "C" void DialogueSystemController__ctor_m5371 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::.cctor()
extern "C" void DialogueSystemController__cctor_m5372 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DatabaseManager PixelCrushers.DialogueSystem.DialogueSystemController::get_DatabaseManager()
extern "C" DatabaseManager_t1092 * DialogueSystemController_get_DatabaseManager_m5373 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueDatabase PixelCrushers.DialogueSystem.DialogueSystemController::get_MasterDatabase()
extern "C" DialogueDatabase_t202 * DialogueSystemController_get_MasterDatabase_m5374 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IDialogueUI PixelCrushers.DialogueSystem.DialogueSystemController::get_DialogueUI()
extern "C" Object_t * DialogueSystemController_get_DialogueUI_m5375 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_DialogueUI(PixelCrushers.DialogueSystem.IDialogueUI)
extern "C" void DialogueSystemController_set_DialogueUI_m5376 (DialogueSystemController_t631 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate PixelCrushers.DialogueSystem.DialogueSystemController::get_IsDialogueEntryValid()
extern "C" IsDialogueEntryValidDelegate_t1094 * DialogueSystemController_get_IsDialogueEntryValid_m5377 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_IsDialogueEntryValid(PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate)
extern "C" void DialogueSystemController_set_IsDialogueEntryValid_m5378 (DialogueSystemController_t631 * __this, IsDialogueEntryValidDelegate_t1094 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::get_IsConversationActive()
extern "C" bool DialogueSystemController_get_IsConversationActive_m5379 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.DialogueSystemController::get_CurrentActor()
extern "C" Transform_t54 * DialogueSystemController_get_CurrentActor_m5380 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_CurrentActor(UnityEngine.Transform)
extern "C" void DialogueSystemController_set_CurrentActor_m5381 (DialogueSystemController_t631 * __this, Transform_t54 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.DialogueSystemController::get_CurrentConversant()
extern "C" Transform_t54 * DialogueSystemController_get_CurrentConversant_m5382 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_CurrentConversant(UnityEngine.Transform)
extern "C" void DialogueSystemController_set_CurrentConversant_m5383 (DialogueSystemController_t631 * __this, Transform_t54 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationState PixelCrushers.DialogueSystem.DialogueSystemController::get_CurrentConversationState()
extern "C" ConversationState_t1096 * DialogueSystemController_get_CurrentConversationState_m5384 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_CurrentConversationState(PixelCrushers.DialogueSystem.ConversationState)
extern "C" void DialogueSystemController_set_CurrentConversationState_m5385 (DialogueSystemController_t631 * __this, ConversationState_t1096 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueSystemController::get_LastConversationStarted()
extern "C" String_t* DialogueSystemController_get_LastConversationStarted_m5386 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_LastConversationStarted(System.String)
extern "C" void DialogueSystemController_set_LastConversationStarted_m5387 (DialogueSystemController_t631 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationController PixelCrushers.DialogueSystem.DialogueSystemController::get_ConversationController()
extern "C" ConversationController_t1093 * DialogueSystemController_get_ConversationController_m5388 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationModel PixelCrushers.DialogueSystem.DialogueSystemController::get_ConversationModel()
extern "C" ConversationModel_t1101 * DialogueSystemController_get_ConversationModel_m5389 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationView PixelCrushers.DialogueSystem.DialogueSystemController::get_ConversationView()
extern "C" ConversationView_t1107 * DialogueSystemController_get_ConversationView_m5390 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::get_AllowLuaExceptions()
extern "C" bool DialogueSystemController_get_AllowLuaExceptions_m5391 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_AllowLuaExceptions(System.Boolean)
extern "C" void DialogueSystemController_set_AllowLuaExceptions_m5392 (DialogueSystemController_t631 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::get_WarnIfActorAndConversantSame()
extern "C" bool DialogueSystemController_get_WarnIfActorAndConversantSame_m5393 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_WarnIfActorAndConversantSame(System.Boolean)
extern "C" void DialogueSystemController_set_WarnIfActorAndConversantSame_m5394 (DialogueSystemController_t631 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::OnDestroy()
extern "C" void DialogueSystemController_OnDestroy_m5395 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Awake()
extern "C" void DialogueSystemController_Awake_m5396 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Start()
extern "C" void DialogueSystemController_Start_m5397 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::InitializeDisplaySettings()
extern "C" void DialogueSystemController_InitializeDisplaySettings_m5398 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::SetLanguage(System.String)
extern "C" void DialogueSystemController_SetLanguage_m5399 (DialogueSystemController_t631 * __this, String_t* ___language, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::CheckDebugLevel()
extern "C" void DialogueSystemController_CheckDebugLevel_m5400 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::InitializeDatabase()
extern "C" void DialogueSystemController_InitializeDatabase_m5401 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::AddDatabase(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DialogueSystemController_AddDatabase_m5402 (DialogueSystemController_t631 * __this, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::RemoveDatabase(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DialogueSystemController_RemoveDatabase_m5403 (DialogueSystemController_t631 * __this, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::ResetDatabase(PixelCrushers.DialogueSystem.DatabaseResetOptions)
extern "C" void DialogueSystemController_ResetDatabase_m5404 (DialogueSystemController_t631 * __this, int32_t ___databaseResetOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::PreloadMasterDatabase()
extern "C" void DialogueSystemController_PreloadMasterDatabase_m5405 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::PreloadDialogueUI()
extern "C" void DialogueSystemController_PreloadDialogueUI_m5406 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::ConversationHasValidEntry(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" bool DialogueSystemController_ConversationHasValidEntry_m5407 (DialogueSystemController_t631 * __this, String_t* ___title, Transform_t54 * ___actor, Transform_t54 * ___conversant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::ConversationHasValidEntry(System.String,UnityEngine.Transform)
extern "C" bool DialogueSystemController_ConversationHasValidEntry_m5408 (DialogueSystemController_t631 * __this, String_t* ___title, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::ConversationHasValidEntry(System.String)
extern "C" bool DialogueSystemController_ConversationHasValidEntry_m5409 (DialogueSystemController_t631 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::PreloadResources()
extern "C" void DialogueSystemController_PreloadResources_m5410 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::StartConversation(System.String,UnityEngine.Transform,UnityEngine.Transform,System.Int32)
extern "C" void DialogueSystemController_StartConversation_m5411 (DialogueSystemController_t631 * __this, String_t* ___title, Transform_t54 * ___actor, Transform_t54 * ___conversant, int32_t ___initialDialogueEntryID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::StartConversation(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" void DialogueSystemController_StartConversation_m5412 (DialogueSystemController_t631 * __this, String_t* ___title, Transform_t54 * ___actor, Transform_t54 * ___conversant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::StartConversation(System.String,UnityEngine.Transform)
extern "C" void DialogueSystemController_StartConversation_m5413 (DialogueSystemController_t631 * __this, String_t* ___title, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::StartConversation(System.String)
extern "C" void DialogueSystemController_StartConversation_m5414 (DialogueSystemController_t631 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::StopConversation()
extern "C" void DialogueSystemController_StopConversation_m5415 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::UpdateResponses()
extern "C" void DialogueSystemController_UpdateResponses_m5416 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::SetPortrait(System.String,System.String)
extern "C" void DialogueSystemController_SetPortrait_m5417 (DialogueSystemController_t631 * __this, String_t* ___actorName, String_t* ___portraitName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::SetActorPortraitTexture(System.String,UnityEngine.Texture2D)
extern "C" void DialogueSystemController_SetActorPortraitTexture_m5418 (DialogueSystemController_t631 * __this, String_t* ___actorName, Texture2D_t90 * ___portraitTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::SetConversationUI(UnityEngine.Transform)
extern "C" void DialogueSystemController_SetConversationUI_m5419 (DialogueSystemController_t631 * __this, Transform_t54 * ___conversant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::RestoreOriginalUI()
extern "C" void DialogueSystemController_RestoreOriginalUI_m5420 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::OnDialogueEntrySpoken(PixelCrushers.DialogueSystem.Subtitle)
extern "C" void DialogueSystemController_OnDialogueEntrySpoken_m5421 (DialogueSystemController_t631 * __this, Subtitle_t570 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::OnEndConversation()
extern "C" void DialogueSystemController_OnEndConversation_m5422 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::OnConversationTimeout()
extern "C" void DialogueSystemController_OnConversationTimeout_m5423 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.DialogueSystemController::ChooseFirstResponseAfterOneFrame()
extern "C" Object_t * DialogueSystemController_ChooseFirstResponseAfterOneFrame_m5424 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Bark(System.String,UnityEngine.Transform,UnityEngine.Transform,PixelCrushers.DialogueSystem.BarkHistory)
extern "C" void DialogueSystemController_Bark_m5425 (DialogueSystemController_t631 * __this, String_t* ___conversationTitle, Transform_t54 * ___speaker, Transform_t54 * ___listener, BarkHistory_t1099 * ___barkHistory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Bark(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" void DialogueSystemController_Bark_m5426 (DialogueSystemController_t631 * __this, String_t* ___conversationTitle, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Bark(System.String,UnityEngine.Transform)
extern "C" void DialogueSystemController_Bark_m5427 (DialogueSystemController_t631 * __this, String_t* ___conversationTitle, Transform_t54 * ___speaker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Bark(System.String,UnityEngine.Transform,PixelCrushers.DialogueSystem.BarkHistory)
extern "C" void DialogueSystemController_Bark_m5428 (DialogueSystemController_t631 * __this, String_t* ___conversationTitle, Transform_t54 * ___speaker, BarkHistory_t1099 * ___barkHistory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::ShowAlert(System.String,System.Single)
extern "C" void DialogueSystemController_ShowAlert_m5429 (DialogueSystemController_t631 * __this, String_t* ___message, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::ShowAlert(System.String)
extern "C" void DialogueSystemController_ShowAlert_m5430 (DialogueSystemController_t631 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::CheckAlerts()
extern "C" void DialogueSystemController_CheckAlerts_m5431 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.DialogueSystemController::MonitorAlerts()
extern "C" Object_t * DialogueSystemController_MonitorAlerts_m5432 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueSystemController::GetLocalizedText(System.String)
extern "C" String_t* DialogueSystemController_GetLocalizedText_m5433 (DialogueSystemController_t631 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueSystemController::PlaySequence(System.String,UnityEngine.Transform,UnityEngine.Transform,System.Boolean,System.Boolean)
extern "C" Sequencer_t618 * DialogueSystemController_PlaySequence_m5434 (DialogueSystemController_t631 * __this, String_t* ___sequence, Transform_t54 * ___speaker, Transform_t54 * ___listener, bool ___informParticipants, bool ___destroyWhenDone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueSystemController::PlaySequence(System.String,UnityEngine.Transform,UnityEngine.Transform,System.Boolean)
extern "C" Sequencer_t618 * DialogueSystemController_PlaySequence_m5435 (DialogueSystemController_t631 * __this, String_t* ___sequence, Transform_t54 * ___speaker, Transform_t54 * ___listener, bool ___informParticipants, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueSystemController::PlaySequence(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" Sequencer_t618 * DialogueSystemController_PlaySequence_m5436 (DialogueSystemController_t631 * __this, String_t* ___sequence, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueSystemController::PlaySequence(System.String)
extern "C" Sequencer_t618 * DialogueSystemController_PlaySequence_m5437 (DialogueSystemController_t631 * __this, String_t* ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::StopSequence(PixelCrushers.DialogueSystem.Sequencer)
extern "C" void DialogueSystemController_StopSequence_m5438 (DialogueSystemController_t631 * __this, Sequencer_t618 * ___sequencer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Pause()
extern "C" void DialogueSystemController_Pause_m5439 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Unpause()
extern "C" void DialogueSystemController_Unpause_m5440 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::BroadcastDialogueSystemMessage(System.String)
extern "C" void DialogueSystemController_BroadcastDialogueSystemMessage_m5441 (DialogueSystemController_t631 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::UseDialogueUI(UnityEngine.GameObject)
extern "C" void DialogueSystemController_UseDialogueUI_m5442 (DialogueSystemController_t631 * __this, GameObject_t49 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IDialogueUI PixelCrushers.DialogueSystem.DialogueSystemController::GetDialogueUI()
extern "C" Object_t * DialogueSystemController_GetDialogueUI_m5443 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::SetDialogueUI(PixelCrushers.DialogueSystem.IDialogueUI)
extern "C" void DialogueSystemController_SetDialogueUI_m5444 (DialogueSystemController_t631 * __this, Object_t * ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::ValidateCurrentDialogueUI()
extern "C" void DialogueSystemController_ValidateCurrentDialogueUI_m5445 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::GetDialogueUIFromDisplaySettings()
extern "C" void DialogueSystemController_GetDialogueUIFromDisplaySettings_m5446 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IDialogueUI PixelCrushers.DialogueSystem.DialogueSystemController::LoadDefaultDialogueUI()
extern "C" Object_t * DialogueSystemController_LoadDefaultDialogueUI_m5447 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IDialogueUI PixelCrushers.DialogueSystem.DialogueSystemController::LoadDialogueUIPrefab(UnityEngine.GameObject)
extern "C" Object_t * DialogueSystemController_LoadDialogueUIPrefab_m5448 (DialogueSystemController_t631 * __this, GameObject_t49 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueSystemController::GetNewSequencer()
extern "C" Sequencer_t618 * DialogueSystemController_GetNewSequencer_m5449 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::AddLuaObserver(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void DialogueSystemController_AddLuaObserver_m5450 (DialogueSystemController_t631 * __this, String_t* ___luaExpression, int32_t ___frequency, LuaChangedDelegate_t724 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.DialogueSystemController::AddLuaObserverAfterStart(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" Object_t * DialogueSystemController_AddLuaObserverAfterStart_m5451 (DialogueSystemController_t631 * __this, String_t* ___luaExpression, int32_t ___frequency, LuaChangedDelegate_t724 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::RemoveLuaObserver(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void DialogueSystemController_RemoveLuaObserver_m5452 (DialogueSystemController_t631 * __this, String_t* ___luaExpression, int32_t ___frequency, LuaChangedDelegate_t724 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::RemoveAllObservers(PixelCrushers.DialogueSystem.LuaWatchFrequency)
extern "C" void DialogueSystemController_RemoveAllObservers_m5453 (DialogueSystemController_t631 * __this, int32_t ___frequency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::RemoveAllObservers()
extern "C" void DialogueSystemController_RemoveAllObservers_m5454 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Update()
extern "C" void DialogueSystemController_Update_m5455 (DialogueSystemController_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::RegisterAssetBundle(UnityEngine.AssetBundle)
extern "C" void DialogueSystemController_RegisterAssetBundle_m5456 (DialogueSystemController_t631 * __this, AssetBundle_t1396 * ___bundle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::UnregisterAssetBundle(UnityEngine.AssetBundle)
extern "C" void DialogueSystemController_UnregisterAssetBundle_m5457 (DialogueSystemController_t631 * __this, AssetBundle_t1396 * ___bundle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object PixelCrushers.DialogueSystem.DialogueSystemController::LoadAsset(System.String)
extern "C" Object_t584 * DialogueSystemController_LoadAsset_m5458 (DialogueSystemController_t631 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
