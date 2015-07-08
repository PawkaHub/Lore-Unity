#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.DialogueManager
struct DialogueManager_t665;
// PixelCrushers.DialogueSystem.DialogueSystemController
struct DialogueSystemController_t688;
// PixelCrushers.DialogueSystem.DatabaseManager
struct DatabaseManager_t1351;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// PixelCrushers.DialogueSystem.IDialogueUI
struct IDialogueUI_t840;
// PixelCrushers.DialogueSystem.DisplaySettings
struct DisplaySettings_t683;
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate
struct IsDialogueEntryValidDelegate_t1353;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.ConversationState
struct ConversationState_t1355;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.ConversationController
struct ConversationController_t1352;
// PixelCrushers.DialogueSystem.ConversationModel
struct ConversationModel_t1360;
// PixelCrushers.DialogueSystem.ConversationView
struct ConversationView_t1366;
// PixelCrushers.DialogueSystem.BarkHistory
struct BarkHistory_t1358;
// PixelCrushers.DialogueSystem.Sequencer
struct Sequencer_t675;
// UnityEngine.GameObject
struct GameObject_t49;
// PixelCrushers.DialogueSystem.LuaChangedDelegate
struct LuaChangedDelegate_t807;
// UnityEngine.AssetBundle
struct AssetBundle_t1655;
// UnityEngine.Object
struct Object_t642;
struct Object_t642_marshaled;
// PixelCrushers.DialogueSystem.DialogueDebug/DebugLevel
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueDebug_De.h"
// PixelCrushers.DialogueSystem.DatabaseResetOptions
#include "DialogueSystem_PixelCrushers_DialogueSystem_DatabaseResetOpt.h"
// PixelCrushers.DialogueSystem.LuaWatchFrequency
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaWatchFrequenc.h"

// System.Void PixelCrushers.DialogueSystem.DialogueManager::.cctor()
extern "C" void DialogueManager__cctor_m5753 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueSystemController PixelCrushers.DialogueSystem.DialogueManager::get_Instance()
extern "C" DialogueSystemController_t688 * DialogueManager_get_Instance_m2967 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueManager::get_HasInstance()
extern "C" bool DialogueManager_get_HasInstance_m5754 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DatabaseManager PixelCrushers.DialogueSystem.DialogueManager::get_DatabaseManager()
extern "C" DatabaseManager_t1351 * DialogueManager_get_DatabaseManager_m5755 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueDatabase PixelCrushers.DialogueSystem.DialogueManager::get_MasterDatabase()
extern "C" DialogueDatabase_t202 * DialogueManager_get_MasterDatabase_m2968 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IDialogueUI PixelCrushers.DialogueSystem.DialogueManager::get_DialogueUI()
extern "C" Object_t * DialogueManager_get_DialogueUI_m5756 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::set_DialogueUI(PixelCrushers.DialogueSystem.IDialogueUI)
extern "C" void DialogueManager_set_DialogueUI_m5757 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DisplaySettings PixelCrushers.DialogueSystem.DialogueManager::get_DisplaySettings()
extern "C" DisplaySettings_t683 * DialogueManager_get_DisplaySettings_m2953 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueManager::get_IsConversationActive()
extern "C" bool DialogueManager_get_IsConversationActive_m2898 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate PixelCrushers.DialogueSystem.DialogueManager::get_IsDialogueEntryValid()
extern "C" IsDialogueEntryValidDelegate_t1353 * DialogueManager_get_IsDialogueEntryValid_m5758 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::set_IsDialogueEntryValid(PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate)
extern "C" void DialogueManager_set_IsDialogueEntryValid_m5759 (Object_t * __this /* static, unused */, IsDialogueEntryValidDelegate_t1353 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.DialogueManager::get_CurrentActor()
extern "C" Transform_t54 * DialogueManager_get_CurrentActor_m5760 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.DialogueManager::get_CurrentConversant()
extern "C" Transform_t54 * DialogueManager_get_CurrentConversant_m5761 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationState PixelCrushers.DialogueSystem.DialogueManager::get_CurrentConversationState()
extern "C" ConversationState_t1355 * DialogueManager_get_CurrentConversationState_m5762 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueManager::get_LastConversationStarted()
extern "C" String_t* DialogueManager_get_LastConversationStarted_m5763 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationController PixelCrushers.DialogueSystem.DialogueManager::get_ConversationController()
extern "C" ConversationController_t1352 * DialogueManager_get_ConversationController_m5764 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationModel PixelCrushers.DialogueSystem.DialogueManager::get_ConversationModel()
extern "C" ConversationModel_t1360 * DialogueManager_get_ConversationModel_m5765 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationView PixelCrushers.DialogueSystem.DialogueManager::get_ConversationView()
extern "C" ConversationView_t1366 * DialogueManager_get_ConversationView_m5766 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueDebug/DebugLevel PixelCrushers.DialogueSystem.DialogueManager::get_DebugLevel()
extern "C" int32_t DialogueManager_get_DebugLevel_m2914 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::set_DebugLevel(PixelCrushers.DialogueSystem.DialogueDebug/DebugLevel)
extern "C" void DialogueManager_set_DebugLevel_m2915 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueManager::get_AllowLuaExceptions()
extern "C" bool DialogueManager_get_AllowLuaExceptions_m5767 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::set_AllowLuaExceptions(System.Boolean)
extern "C" void DialogueManager_set_AllowLuaExceptions_m5768 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::SetLanguage(System.String)
extern "C" void DialogueManager_SetLanguage_m5769 (Object_t * __this /* static, unused */, String_t* ___language, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::AddDatabase(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DialogueManager_AddDatabase_m2916 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::RemoveDatabase(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DialogueManager_RemoveDatabase_m2917 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::ResetDatabase(PixelCrushers.DialogueSystem.DatabaseResetOptions)
extern "C" void DialogueManager_ResetDatabase_m5770 (Object_t * __this /* static, unused */, int32_t ___databaseResetOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::PreloadMasterDatabase()
extern "C" void DialogueManager_PreloadMasterDatabase_m5771 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::PreloadDialogueUI()
extern "C" void DialogueManager_PreloadDialogueUI_m5772 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueManager::ConversationHasValidEntry(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" bool DialogueManager_ConversationHasValidEntry_m5773 (Object_t * __this /* static, unused */, String_t* ___title, Transform_t54 * ___actor, Transform_t54 * ___conversant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueManager::ConversationHasValidEntry(System.String,UnityEngine.Transform)
extern "C" bool DialogueManager_ConversationHasValidEntry_m5774 (Object_t * __this /* static, unused */, String_t* ___title, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueManager::ConversationHasValidEntry(System.String)
extern "C" bool DialogueManager_ConversationHasValidEntry_m5775 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::StartConversation(System.String,UnityEngine.Transform,UnityEngine.Transform,System.Int32)
extern "C" void DialogueManager_StartConversation_m5776 (Object_t * __this /* static, unused */, String_t* ___title, Transform_t54 * ___actor, Transform_t54 * ___conversant, int32_t ___initialDialogueEntryID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::StartConversation(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" void DialogueManager_StartConversation_m5777 (Object_t * __this /* static, unused */, String_t* ___title, Transform_t54 * ___actor, Transform_t54 * ___conversant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::StartConversation(System.String,UnityEngine.Transform)
extern "C" void DialogueManager_StartConversation_m5778 (Object_t * __this /* static, unused */, String_t* ___title, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::StartConversation(System.String)
extern "C" void DialogueManager_StartConversation_m5779 (Object_t * __this /* static, unused */, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::StopConversation()
extern "C" void DialogueManager_StopConversation_m5780 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::UpdateResponses()
extern "C" void DialogueManager_UpdateResponses_m5781 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::Bark(System.String,UnityEngine.Transform,UnityEngine.Transform,PixelCrushers.DialogueSystem.BarkHistory)
extern "C" void DialogueManager_Bark_m5782 (Object_t * __this /* static, unused */, String_t* ___conversationTitle, Transform_t54 * ___speaker, Transform_t54 * ___listener, BarkHistory_t1358 * ___barkHistory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::Bark(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" void DialogueManager_Bark_m5783 (Object_t * __this /* static, unused */, String_t* ___conversationTitle, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::Bark(System.String,UnityEngine.Transform)
extern "C" void DialogueManager_Bark_m5784 (Object_t * __this /* static, unused */, String_t* ___conversationTitle, Transform_t54 * ___speaker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::Bark(System.String,UnityEngine.Transform,PixelCrushers.DialogueSystem.BarkHistory)
extern "C" void DialogueManager_Bark_m5785 (Object_t * __this /* static, unused */, String_t* ___conversationTitle, Transform_t54 * ___speaker, BarkHistory_t1358 * ___barkHistory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::ShowAlert(System.String,System.Single)
extern "C" void DialogueManager_ShowAlert_m5786 (Object_t * __this /* static, unused */, String_t* ___message, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::ShowAlert(System.String)
extern "C" void DialogueManager_ShowAlert_m2896 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::CheckAlerts()
extern "C" void DialogueManager_CheckAlerts_m5787 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueManager::GetLocalizedText(System.String)
extern "C" String_t* DialogueManager_GetLocalizedText_m5788 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueManager::PlaySequence(System.String,UnityEngine.Transform,UnityEngine.Transform,System.Boolean,System.Boolean)
extern "C" Sequencer_t675 * DialogueManager_PlaySequence_m5789 (Object_t * __this /* static, unused */, String_t* ___sequence, Transform_t54 * ___speaker, Transform_t54 * ___listener, bool ___informParticipants, bool ___destroyWhenDone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueManager::PlaySequence(System.String,UnityEngine.Transform,UnityEngine.Transform,System.Boolean)
extern "C" Sequencer_t675 * DialogueManager_PlaySequence_m5790 (Object_t * __this /* static, unused */, String_t* ___sequence, Transform_t54 * ___speaker, Transform_t54 * ___listener, bool ___informParticipants, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueManager::PlaySequence(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" Sequencer_t675 * DialogueManager_PlaySequence_m5791 (Object_t * __this /* static, unused */, String_t* ___sequence, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueManager::PlaySequence(System.String)
extern "C" Sequencer_t675 * DialogueManager_PlaySequence_m5792 (Object_t * __this /* static, unused */, String_t* ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::StopSequence(PixelCrushers.DialogueSystem.Sequencer)
extern "C" void DialogueManager_StopSequence_m5793 (Object_t * __this /* static, unused */, Sequencer_t675 * ___sequencer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::Pause()
extern "C" void DialogueManager_Pause_m5794 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::Unpause()
extern "C" void DialogueManager_Unpause_m5795 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::UseDialogueUI(UnityEngine.GameObject)
extern "C" void DialogueManager_UseDialogueUI_m5796 (Object_t * __this /* static, unused */, GameObject_t49 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::SetPortrait(System.String,System.String)
extern "C" void DialogueManager_SetPortrait_m5797 (Object_t * __this /* static, unused */, String_t* ___actorName, String_t* ___portraitName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::AddLuaObserver(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void DialogueManager_AddLuaObserver_m3767 (Object_t * __this /* static, unused */, String_t* ___luaExpression, int32_t ___frequency, LuaChangedDelegate_t807 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::RemoveLuaObserver(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void DialogueManager_RemoveLuaObserver_m5798 (Object_t * __this /* static, unused */, String_t* ___luaExpression, int32_t ___frequency, LuaChangedDelegate_t807 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::RemoveAllObservers(PixelCrushers.DialogueSystem.LuaWatchFrequency)
extern "C" void DialogueManager_RemoveAllObservers_m5799 (Object_t * __this /* static, unused */, int32_t ___frequency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::RemoveAllObservers()
extern "C" void DialogueManager_RemoveAllObservers_m5800 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::RegisterAssetBundle(UnityEngine.AssetBundle)
extern "C" void DialogueManager_RegisterAssetBundle_m5801 (Object_t * __this /* static, unused */, AssetBundle_t1655 * ___bundle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueManager::UnregisterAssetBundle(UnityEngine.AssetBundle)
extern "C" void DialogueManager_UnregisterAssetBundle_m5802 (Object_t * __this /* static, unused */, AssetBundle_t1655 * ___bundle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object PixelCrushers.DialogueSystem.DialogueManager::LoadAsset(System.String)
extern "C" Object_t642 * DialogueManager_LoadAsset_m5803 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueSystemController PixelCrushers.DialogueSystem.DialogueManager::FindOrCreateInstance()
extern "C" DialogueSystemController_t688 * DialogueManager_FindOrCreateInstance_m5804 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
