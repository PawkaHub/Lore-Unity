#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.DialogueManager
struct DialogueManager_t586;
// PixelCrushers.DialogueSystem.DialogueSystemController
struct DialogueSystemController_t610;
// PixelCrushers.DialogueSystem.DatabaseManager
struct DatabaseManager_t767;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// PixelCrushers.DialogueSystem.IDialogueUI
struct IDialogueUI_t720;
// PixelCrushers.DialogueSystem.DisplaySettings
struct DisplaySettings_t605;
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate
struct IsDialogueEntryValidDelegate_t769;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.ConversationState
struct ConversationState_t771;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.ConversationController
struct ConversationController_t768;
// PixelCrushers.DialogueSystem.ConversationModel
struct ConversationModel_t776;
// PixelCrushers.DialogueSystem.ConversationView
struct ConversationView_t782;
// PixelCrushers.DialogueSystem.BarkHistory
struct BarkHistory_t774;
// PixelCrushers.DialogueSystem.Sequencer
struct Sequencer_t597;
// UnityEngine.GameObject
struct GameObject_t49;
// PixelCrushers.DialogueSystem.LuaChangedDelegate
struct LuaChangedDelegate_t757;
// UnityEngine.AssetBundle
struct AssetBundle_t1073;
// UnityEngine.Object
struct Object_t563;
struct Object_t563_marshaled;
// PixelCrushers.DialogueSystem.DialogueDebug/DebugLevel
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueDebug_De.h"
// PixelCrushers.DialogueSystem.DatabaseResetOptions
#include "DialogueSystem_PixelCrushers_DialogueSystem_DatabaseResetOpt.h"
// PixelCrushers.DialogueSystem.LuaWatchFrequency
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaWatchFrequenc.h"

// System.Void PixelCrushers.DialogueSystem.DialogueManager::.cctor()
extern "C" void DialogueManager__cctor_m3464 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueSystemController PixelCrushers.DialogueSystem.DialogueManager::get_Instance()
extern "C" DialogueSystemController_t610 * DialogueManager_get_Instance_m2708 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueManager::get_HasInstance()
extern "C" bool DialogueManager_get_HasInstance_m3465 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DatabaseManager PixelCrushers.DialogueSystem.DialogueManager::get_DatabaseManager()
extern "C" DatabaseManager_t767 * DialogueManager_get_DatabaseManager_m3466 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueDatabase PixelCrushers.DialogueSystem.DialogueManager::get_MasterDatabase()
extern "C" DialogueDatabase_t202 * DialogueManager_get_MasterDatabase_m2709 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IDialogueUI PixelCrushers.DialogueSystem.DialogueManager::get_DialogueUI()
extern "C" Object_t * DialogueManager_get_DialogueUI_m3467 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::set_DialogueUI(PixelCrushers.DialogueSystem.IDialogueUI)
extern "C" void DialogueManager_set_DialogueUI_m3468 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DisplaySettings PixelCrushers.DialogueSystem.DialogueManager::get_DisplaySettings()
extern "C" DisplaySettings_t605 * DialogueManager_get_DisplaySettings_m2694 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueManager::get_IsConversationActive()
extern "C" bool DialogueManager_get_IsConversationActive_m2639 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate PixelCrushers.DialogueSystem.DialogueManager::get_IsDialogueEntryValid()
extern "C" IsDialogueEntryValidDelegate_t769 * DialogueManager_get_IsDialogueEntryValid_m3469 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::set_IsDialogueEntryValid(PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate)
extern "C" void DialogueManager_set_IsDialogueEntryValid_m3470 (Object_t * __this /* static, unused */, IsDialogueEntryValidDelegate_t769 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.DialogueManager::get_CurrentActor()
extern "C" Transform_t54 * DialogueManager_get_CurrentActor_m3471 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.DialogueManager::get_CurrentConversant()
extern "C" Transform_t54 * DialogueManager_get_CurrentConversant_m3472 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationState PixelCrushers.DialogueSystem.DialogueManager::get_CurrentConversationState()
extern "C" ConversationState_t771 * DialogueManager_get_CurrentConversationState_m3473 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueManager::get_LastConversationStarted()
extern "C" String_t* DialogueManager_get_LastConversationStarted_m3474 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationController PixelCrushers.DialogueSystem.DialogueManager::get_ConversationController()
extern "C" ConversationController_t768 * DialogueManager_get_ConversationController_m3475 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationModel PixelCrushers.DialogueSystem.DialogueManager::get_ConversationModel()
extern "C" ConversationModel_t776 * DialogueManager_get_ConversationModel_m3476 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationView PixelCrushers.DialogueSystem.DialogueManager::get_ConversationView()
extern "C" ConversationView_t782 * DialogueManager_get_ConversationView_m3477 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueDebug/DebugLevel PixelCrushers.DialogueSystem.DialogueManager::get_DebugLevel()
extern "C" int32_t DialogueManager_get_DebugLevel_m2655 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::set_DebugLevel(PixelCrushers.DialogueSystem.DialogueDebug/DebugLevel)
extern "C" void DialogueManager_set_DebugLevel_m2656 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueManager::get_AllowLuaExceptions()
extern "C" bool DialogueManager_get_AllowLuaExceptions_m3478 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::set_AllowLuaExceptions(System.Boolean)
extern "C" void DialogueManager_set_AllowLuaExceptions_m3479 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::SetLanguage(System.String)
extern "C" void DialogueManager_SetLanguage_m3480 (Object_t * __this /* static, unused */, String_t* ___language, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::AddDatabase(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DialogueManager_AddDatabase_m2657 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::RemoveDatabase(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DialogueManager_RemoveDatabase_m2658 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::ResetDatabase(PixelCrushers.DialogueSystem.DatabaseResetOptions)
extern "C" void DialogueManager_ResetDatabase_m3481 (Object_t * __this /* static, unused */, int32_t ___databaseResetOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::PreloadMasterDatabase()
extern "C" void DialogueManager_PreloadMasterDatabase_m3482 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::PreloadDialogueUI()
extern "C" void DialogueManager_PreloadDialogueUI_m3483 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueManager::ConversationHasValidEntry(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" bool DialogueManager_ConversationHasValidEntry_m3484 (Object_t * __this /* static, unused */, String_t* ___title, Transform_t54 * ___actor, Transform_t54 * ___conversant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueManager::ConversationHasValidEntry(System.String,UnityEngine.Transform)
extern "C" bool DialogueManager_ConversationHasValidEntry_m3485 (Object_t * __this /* static, unused */, String_t* ___title, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueManager::ConversationHasValidEntry(System.String)
extern "C" bool DialogueManager_ConversationHasValidEntry_m3486 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::StartConversation(System.String,UnityEngine.Transform,UnityEngine.Transform,System.Int32)
extern "C" void DialogueManager_StartConversation_m3487 (Object_t * __this /* static, unused */, String_t* ___title, Transform_t54 * ___actor, Transform_t54 * ___conversant, int32_t ___initialDialogueEntryID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::StartConversation(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" void DialogueManager_StartConversation_m3488 (Object_t * __this /* static, unused */, String_t* ___title, Transform_t54 * ___actor, Transform_t54 * ___conversant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::StartConversation(System.String,UnityEngine.Transform)
extern "C" void DialogueManager_StartConversation_m3489 (Object_t * __this /* static, unused */, String_t* ___title, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::StartConversation(System.String)
extern "C" void DialogueManager_StartConversation_m3490 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::StopConversation()
extern "C" void DialogueManager_StopConversation_m3491 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::UpdateResponses()
extern "C" void DialogueManager_UpdateResponses_m3492 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::Bark(System.String,UnityEngine.Transform,UnityEngine.Transform,PixelCrushers.DialogueSystem.BarkHistory)
extern "C" void DialogueManager_Bark_m3493 (Object_t * __this /* static, unused */, String_t* ___conversationTitle, Transform_t54 * ___speaker, Transform_t54 * ___listener, BarkHistory_t774 * ___barkHistory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::Bark(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" void DialogueManager_Bark_m3494 (Object_t * __this /* static, unused */, String_t* ___conversationTitle, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::Bark(System.String,UnityEngine.Transform)
extern "C" void DialogueManager_Bark_m3495 (Object_t * __this /* static, unused */, String_t* ___conversationTitle, Transform_t54 * ___speaker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::Bark(System.String,UnityEngine.Transform,PixelCrushers.DialogueSystem.BarkHistory)
extern "C" void DialogueManager_Bark_m3496 (Object_t * __this /* static, unused */, String_t* ___conversationTitle, Transform_t54 * ___speaker, BarkHistory_t774 * ___barkHistory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::ShowAlert(System.String,System.Single)
extern "C" void DialogueManager_ShowAlert_m3497 (Object_t * __this /* static, unused */, String_t* ___message, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::ShowAlert(System.String)
extern "C" void DialogueManager_ShowAlert_m2637 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::CheckAlerts()
extern "C" void DialogueManager_CheckAlerts_m3498 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueManager::GetLocalizedText(System.String)
extern "C" String_t* DialogueManager_GetLocalizedText_m3499 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueManager::PlaySequence(System.String,UnityEngine.Transform,UnityEngine.Transform,System.Boolean,System.Boolean)
extern "C" Sequencer_t597 * DialogueManager_PlaySequence_m3500 (Object_t * __this /* static, unused */, String_t* ___sequence, Transform_t54 * ___speaker, Transform_t54 * ___listener, bool ___informParticipants, bool ___destroyWhenDone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueManager::PlaySequence(System.String,UnityEngine.Transform,UnityEngine.Transform,System.Boolean)
extern "C" Sequencer_t597 * DialogueManager_PlaySequence_m3501 (Object_t * __this /* static, unused */, String_t* ___sequence, Transform_t54 * ___speaker, Transform_t54 * ___listener, bool ___informParticipants, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueManager::PlaySequence(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" Sequencer_t597 * DialogueManager_PlaySequence_m3502 (Object_t * __this /* static, unused */, String_t* ___sequence, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueManager::PlaySequence(System.String)
extern "C" Sequencer_t597 * DialogueManager_PlaySequence_m3503 (Object_t * __this /* static, unused */, String_t* ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::StopSequence(PixelCrushers.DialogueSystem.Sequencer)
extern "C" void DialogueManager_StopSequence_m3504 (Object_t * __this /* static, unused */, Sequencer_t597 * ___sequencer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::Pause()
extern "C" void DialogueManager_Pause_m3505 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::Unpause()
extern "C" void DialogueManager_Unpause_m3506 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::UseDialogueUI(UnityEngine.GameObject)
extern "C" void DialogueManager_UseDialogueUI_m3507 (Object_t * __this /* static, unused */, GameObject_t49 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::SetPortrait(System.String,System.String)
extern "C" void DialogueManager_SetPortrait_m3508 (Object_t * __this /* static, unused */, String_t* ___actorName, String_t* ___portraitName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::AddLuaObserver(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void DialogueManager_AddLuaObserver_m3509 (Object_t * __this /* static, unused */, String_t* ___luaExpression, int32_t ___frequency, LuaChangedDelegate_t757 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::RemoveLuaObserver(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void DialogueManager_RemoveLuaObserver_m3510 (Object_t * __this /* static, unused */, String_t* ___luaExpression, int32_t ___frequency, LuaChangedDelegate_t757 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::RemoveAllObservers(PixelCrushers.DialogueSystem.LuaWatchFrequency)
extern "C" void DialogueManager_RemoveAllObservers_m3511 (Object_t * __this /* static, unused */, int32_t ___frequency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::RemoveAllObservers()
extern "C" void DialogueManager_RemoveAllObservers_m3512 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::RegisterAssetBundle(UnityEngine.AssetBundle)
extern "C" void DialogueManager_RegisterAssetBundle_m3513 (Object_t * __this /* static, unused */, AssetBundle_t1073 * ___bundle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::UnregisterAssetBundle(UnityEngine.AssetBundle)
extern "C" void DialogueManager_UnregisterAssetBundle_m3514 (Object_t * __this /* static, unused */, AssetBundle_t1073 * ___bundle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object PixelCrushers.DialogueSystem.DialogueManager::LoadAsset(System.String)
extern "C" Object_t563 * DialogueManager_LoadAsset_m3515 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueSystemController PixelCrushers.DialogueSystem.DialogueManager::FindOrCreateInstance()
extern "C" DialogueSystemController_t610 * DialogueManager_FindOrCreateInstance_m3516 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
