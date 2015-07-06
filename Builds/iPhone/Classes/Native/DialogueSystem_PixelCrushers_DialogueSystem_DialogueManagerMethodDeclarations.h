#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.DialogueManager
struct DialogueManager_t607;
// PixelCrushers.DialogueSystem.DialogueSystemController
struct DialogueSystemController_t631;
// PixelCrushers.DialogueSystem.DatabaseManager
struct DatabaseManager_t1092;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// PixelCrushers.DialogueSystem.IDialogueUI
struct IDialogueUI_t746;
// PixelCrushers.DialogueSystem.DisplaySettings
struct DisplaySettings_t626;
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
// PixelCrushers.DialogueSystem.DialogueDebug/DebugLevel
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueDebug_De.h"
// PixelCrushers.DialogueSystem.DatabaseResetOptions
#include "DialogueSystem_PixelCrushers_DialogueSystem_DatabaseResetOpt.h"
// PixelCrushers.DialogueSystem.LuaWatchFrequency
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaWatchFrequenc.h"

// System.Void PixelCrushers.DialogueSystem.DialogueManager::.cctor()
extern "C" void DialogueManager__cctor_m5302 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueSystemController PixelCrushers.DialogueSystem.DialogueManager::get_Instance()
extern "C" DialogueSystemController_t631 * DialogueManager_get_Instance_m2795 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueManager::get_HasInstance()
extern "C" bool DialogueManager_get_HasInstance_m5303 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DatabaseManager PixelCrushers.DialogueSystem.DialogueManager::get_DatabaseManager()
extern "C" DatabaseManager_t1092 * DialogueManager_get_DatabaseManager_m5304 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueDatabase PixelCrushers.DialogueSystem.DialogueManager::get_MasterDatabase()
extern "C" DialogueDatabase_t202 * DialogueManager_get_MasterDatabase_m2796 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IDialogueUI PixelCrushers.DialogueSystem.DialogueManager::get_DialogueUI()
extern "C" Object_t * DialogueManager_get_DialogueUI_m5305 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::set_DialogueUI(PixelCrushers.DialogueSystem.IDialogueUI)
extern "C" void DialogueManager_set_DialogueUI_m5306 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DisplaySettings PixelCrushers.DialogueSystem.DialogueManager::get_DisplaySettings()
extern "C" DisplaySettings_t626 * DialogueManager_get_DisplaySettings_m2781 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueManager::get_IsConversationActive()
extern "C" bool DialogueManager_get_IsConversationActive_m2726 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate PixelCrushers.DialogueSystem.DialogueManager::get_IsDialogueEntryValid()
extern "C" IsDialogueEntryValidDelegate_t1094 * DialogueManager_get_IsDialogueEntryValid_m5307 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::set_IsDialogueEntryValid(PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate)
extern "C" void DialogueManager_set_IsDialogueEntryValid_m5308 (Object_t * __this /* static, unused */, IsDialogueEntryValidDelegate_t1094 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.DialogueManager::get_CurrentActor()
extern "C" Transform_t54 * DialogueManager_get_CurrentActor_m5309 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.DialogueManager::get_CurrentConversant()
extern "C" Transform_t54 * DialogueManager_get_CurrentConversant_m5310 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationState PixelCrushers.DialogueSystem.DialogueManager::get_CurrentConversationState()
extern "C" ConversationState_t1096 * DialogueManager_get_CurrentConversationState_m5311 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueManager::get_LastConversationStarted()
extern "C" String_t* DialogueManager_get_LastConversationStarted_m5312 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationController PixelCrushers.DialogueSystem.DialogueManager::get_ConversationController()
extern "C" ConversationController_t1093 * DialogueManager_get_ConversationController_m5313 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationModel PixelCrushers.DialogueSystem.DialogueManager::get_ConversationModel()
extern "C" ConversationModel_t1101 * DialogueManager_get_ConversationModel_m5314 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationView PixelCrushers.DialogueSystem.DialogueManager::get_ConversationView()
extern "C" ConversationView_t1107 * DialogueManager_get_ConversationView_m5315 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueDebug/DebugLevel PixelCrushers.DialogueSystem.DialogueManager::get_DebugLevel()
extern "C" int32_t DialogueManager_get_DebugLevel_m2742 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::set_DebugLevel(PixelCrushers.DialogueSystem.DialogueDebug/DebugLevel)
extern "C" void DialogueManager_set_DebugLevel_m2743 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueManager::get_AllowLuaExceptions()
extern "C" bool DialogueManager_get_AllowLuaExceptions_m5316 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::set_AllowLuaExceptions(System.Boolean)
extern "C" void DialogueManager_set_AllowLuaExceptions_m5317 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::SetLanguage(System.String)
extern "C" void DialogueManager_SetLanguage_m5318 (Object_t * __this /* static, unused */, String_t* ___language, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::AddDatabase(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DialogueManager_AddDatabase_m2744 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::RemoveDatabase(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DialogueManager_RemoveDatabase_m2745 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::ResetDatabase(PixelCrushers.DialogueSystem.DatabaseResetOptions)
extern "C" void DialogueManager_ResetDatabase_m5319 (Object_t * __this /* static, unused */, int32_t ___databaseResetOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::PreloadMasterDatabase()
extern "C" void DialogueManager_PreloadMasterDatabase_m5320 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::PreloadDialogueUI()
extern "C" void DialogueManager_PreloadDialogueUI_m5321 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueManager::ConversationHasValidEntry(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" bool DialogueManager_ConversationHasValidEntry_m5322 (Object_t * __this /* static, unused */, String_t* ___title, Transform_t54 * ___actor, Transform_t54 * ___conversant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueManager::ConversationHasValidEntry(System.String,UnityEngine.Transform)
extern "C" bool DialogueManager_ConversationHasValidEntry_m5323 (Object_t * __this /* static, unused */, String_t* ___title, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueManager::ConversationHasValidEntry(System.String)
extern "C" bool DialogueManager_ConversationHasValidEntry_m5324 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::StartConversation(System.String,UnityEngine.Transform,UnityEngine.Transform,System.Int32)
extern "C" void DialogueManager_StartConversation_m5325 (Object_t * __this /* static, unused */, String_t* ___title, Transform_t54 * ___actor, Transform_t54 * ___conversant, int32_t ___initialDialogueEntryID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::StartConversation(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" void DialogueManager_StartConversation_m5326 (Object_t * __this /* static, unused */, String_t* ___title, Transform_t54 * ___actor, Transform_t54 * ___conversant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::StartConversation(System.String,UnityEngine.Transform)
extern "C" void DialogueManager_StartConversation_m5327 (Object_t * __this /* static, unused */, String_t* ___title, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::StartConversation(System.String)
extern "C" void DialogueManager_StartConversation_m5328 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::StopConversation()
extern "C" void DialogueManager_StopConversation_m5329 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::UpdateResponses()
extern "C" void DialogueManager_UpdateResponses_m5330 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::Bark(System.String,UnityEngine.Transform,UnityEngine.Transform,PixelCrushers.DialogueSystem.BarkHistory)
extern "C" void DialogueManager_Bark_m5331 (Object_t * __this /* static, unused */, String_t* ___conversationTitle, Transform_t54 * ___speaker, Transform_t54 * ___listener, BarkHistory_t1099 * ___barkHistory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::Bark(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" void DialogueManager_Bark_m5332 (Object_t * __this /* static, unused */, String_t* ___conversationTitle, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::Bark(System.String,UnityEngine.Transform)
extern "C" void DialogueManager_Bark_m5333 (Object_t * __this /* static, unused */, String_t* ___conversationTitle, Transform_t54 * ___speaker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::Bark(System.String,UnityEngine.Transform,PixelCrushers.DialogueSystem.BarkHistory)
extern "C" void DialogueManager_Bark_m5334 (Object_t * __this /* static, unused */, String_t* ___conversationTitle, Transform_t54 * ___speaker, BarkHistory_t1099 * ___barkHistory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::ShowAlert(System.String,System.Single)
extern "C" void DialogueManager_ShowAlert_m5335 (Object_t * __this /* static, unused */, String_t* ___message, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::ShowAlert(System.String)
extern "C" void DialogueManager_ShowAlert_m2724 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::CheckAlerts()
extern "C" void DialogueManager_CheckAlerts_m5336 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueManager::GetLocalizedText(System.String)
extern "C" String_t* DialogueManager_GetLocalizedText_m5337 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueManager::PlaySequence(System.String,UnityEngine.Transform,UnityEngine.Transform,System.Boolean,System.Boolean)
extern "C" Sequencer_t618 * DialogueManager_PlaySequence_m5338 (Object_t * __this /* static, unused */, String_t* ___sequence, Transform_t54 * ___speaker, Transform_t54 * ___listener, bool ___informParticipants, bool ___destroyWhenDone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueManager::PlaySequence(System.String,UnityEngine.Transform,UnityEngine.Transform,System.Boolean)
extern "C" Sequencer_t618 * DialogueManager_PlaySequence_m5339 (Object_t * __this /* static, unused */, String_t* ___sequence, Transform_t54 * ___speaker, Transform_t54 * ___listener, bool ___informParticipants, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueManager::PlaySequence(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" Sequencer_t618 * DialogueManager_PlaySequence_m5340 (Object_t * __this /* static, unused */, String_t* ___sequence, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueManager::PlaySequence(System.String)
extern "C" Sequencer_t618 * DialogueManager_PlaySequence_m3398 (Object_t * __this /* static, unused */, String_t* ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::StopSequence(PixelCrushers.DialogueSystem.Sequencer)
extern "C" void DialogueManager_StopSequence_m5341 (Object_t * __this /* static, unused */, Sequencer_t618 * ___sequencer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::Pause()
extern "C" void DialogueManager_Pause_m5342 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::Unpause()
extern "C" void DialogueManager_Unpause_m5343 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::UseDialogueUI(UnityEngine.GameObject)
extern "C" void DialogueManager_UseDialogueUI_m5344 (Object_t * __this /* static, unused */, GameObject_t49 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::SetPortrait(System.String,System.String)
extern "C" void DialogueManager_SetPortrait_m5345 (Object_t * __this /* static, unused */, String_t* ___actorName, String_t* ___portraitName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::AddLuaObserver(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void DialogueManager_AddLuaObserver_m3403 (Object_t * __this /* static, unused */, String_t* ___luaExpression, int32_t ___frequency, LuaChangedDelegate_t724 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::RemoveLuaObserver(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void DialogueManager_RemoveLuaObserver_m5346 (Object_t * __this /* static, unused */, String_t* ___luaExpression, int32_t ___frequency, LuaChangedDelegate_t724 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::RemoveAllObservers(PixelCrushers.DialogueSystem.LuaWatchFrequency)
extern "C" void DialogueManager_RemoveAllObservers_m5347 (Object_t * __this /* static, unused */, int32_t ___frequency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::RemoveAllObservers()
extern "C" void DialogueManager_RemoveAllObservers_m5348 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::RegisterAssetBundle(UnityEngine.AssetBundle)
extern "C" void DialogueManager_RegisterAssetBundle_m5349 (Object_t * __this /* static, unused */, AssetBundle_t1396 * ___bundle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::UnregisterAssetBundle(UnityEngine.AssetBundle)
extern "C" void DialogueManager_UnregisterAssetBundle_m5350 (Object_t * __this /* static, unused */, AssetBundle_t1396 * ___bundle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object PixelCrushers.DialogueSystem.DialogueManager::LoadAsset(System.String)
extern "C" Object_t584 * DialogueManager_LoadAsset_m5351 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueSystemController PixelCrushers.DialogueSystem.DialogueManager::FindOrCreateInstance()
extern "C" DialogueSystemController_t631 * DialogueManager_FindOrCreateInstance_m5352 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
