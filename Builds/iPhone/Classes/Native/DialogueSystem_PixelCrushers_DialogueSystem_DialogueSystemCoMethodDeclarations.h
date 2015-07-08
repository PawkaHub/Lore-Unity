#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.DialogueSystemController
struct DialogueSystemController_t688;
// PixelCrushers.DialogueSystem.DatabaseManager
struct DatabaseManager_t1351;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// PixelCrushers.DialogueSystem.IDialogueUI
struct IDialogueUI_t840;
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
// UnityEngine.Texture2D
struct Texture2D_t90;
// PixelCrushers.DialogueSystem.Subtitle
struct Subtitle_t623;
// System.Collections.IEnumerator
struct IEnumerator_t74;
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
// PixelCrushers.DialogueSystem.DatabaseResetOptions
#include "DialogueSystem_PixelCrushers_DialogueSystem_DatabaseResetOpt.h"
// PixelCrushers.DialogueSystem.LuaWatchFrequency
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaWatchFrequenc.h"

// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::.ctor()
extern "C" void DialogueSystemController__ctor_m5823 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::.cctor()
extern "C" void DialogueSystemController__cctor_m5824 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DatabaseManager PixelCrushers.DialogueSystem.DialogueSystemController::get_DatabaseManager()
extern "C" DatabaseManager_t1351 * DialogueSystemController_get_DatabaseManager_m5825 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueDatabase PixelCrushers.DialogueSystem.DialogueSystemController::get_MasterDatabase()
extern "C" DialogueDatabase_t202 * DialogueSystemController_get_MasterDatabase_m5826 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IDialogueUI PixelCrushers.DialogueSystem.DialogueSystemController::get_DialogueUI()
extern "C" Object_t * DialogueSystemController_get_DialogueUI_m5827 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_DialogueUI(PixelCrushers.DialogueSystem.IDialogueUI)
extern "C" void DialogueSystemController_set_DialogueUI_m5828 (DialogueSystemController_t688 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate PixelCrushers.DialogueSystem.DialogueSystemController::get_IsDialogueEntryValid()
extern "C" IsDialogueEntryValidDelegate_t1353 * DialogueSystemController_get_IsDialogueEntryValid_m5829 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_IsDialogueEntryValid(PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate)
extern "C" void DialogueSystemController_set_IsDialogueEntryValid_m5830 (DialogueSystemController_t688 * __this, IsDialogueEntryValidDelegate_t1353 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::get_IsConversationActive()
extern "C" bool DialogueSystemController_get_IsConversationActive_m5831 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.DialogueSystemController::get_CurrentActor()
extern "C" Transform_t54 * DialogueSystemController_get_CurrentActor_m5832 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_CurrentActor(UnityEngine.Transform)
extern "C" void DialogueSystemController_set_CurrentActor_m5833 (DialogueSystemController_t688 * __this, Transform_t54 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.DialogueSystemController::get_CurrentConversant()
extern "C" Transform_t54 * DialogueSystemController_get_CurrentConversant_m5834 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_CurrentConversant(UnityEngine.Transform)
extern "C" void DialogueSystemController_set_CurrentConversant_m5835 (DialogueSystemController_t688 * __this, Transform_t54 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationState PixelCrushers.DialogueSystem.DialogueSystemController::get_CurrentConversationState()
extern "C" ConversationState_t1355 * DialogueSystemController_get_CurrentConversationState_m5836 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_CurrentConversationState(PixelCrushers.DialogueSystem.ConversationState)
extern "C" void DialogueSystemController_set_CurrentConversationState_m5837 (DialogueSystemController_t688 * __this, ConversationState_t1355 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueSystemController::get_LastConversationStarted()
extern "C" String_t* DialogueSystemController_get_LastConversationStarted_m5838 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_LastConversationStarted(System.String)
extern "C" void DialogueSystemController_set_LastConversationStarted_m5839 (DialogueSystemController_t688 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationController PixelCrushers.DialogueSystem.DialogueSystemController::get_ConversationController()
extern "C" ConversationController_t1352 * DialogueSystemController_get_ConversationController_m5840 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationModel PixelCrushers.DialogueSystem.DialogueSystemController::get_ConversationModel()
extern "C" ConversationModel_t1360 * DialogueSystemController_get_ConversationModel_m5841 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationView PixelCrushers.DialogueSystem.DialogueSystemController::get_ConversationView()
extern "C" ConversationView_t1366 * DialogueSystemController_get_ConversationView_m5842 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::get_AllowLuaExceptions()
extern "C" bool DialogueSystemController_get_AllowLuaExceptions_m5843 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_AllowLuaExceptions(System.Boolean)
extern "C" void DialogueSystemController_set_AllowLuaExceptions_m5844 (DialogueSystemController_t688 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::get_WarnIfActorAndConversantSame()
extern "C" bool DialogueSystemController_get_WarnIfActorAndConversantSame_m5845 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_WarnIfActorAndConversantSame(System.Boolean)
extern "C" void DialogueSystemController_set_WarnIfActorAndConversantSame_m5846 (DialogueSystemController_t688 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::OnDestroy()
extern "C" void DialogueSystemController_OnDestroy_m5847 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Awake()
extern "C" void DialogueSystemController_Awake_m5848 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Start()
extern "C" void DialogueSystemController_Start_m5849 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::InitializeDisplaySettings()
extern "C" void DialogueSystemController_InitializeDisplaySettings_m5850 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::SetLanguage(System.String)
extern "C" void DialogueSystemController_SetLanguage_m5851 (DialogueSystemController_t688 * __this, String_t* ___language, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::CheckDebugLevel()
extern "C" void DialogueSystemController_CheckDebugLevel_m5852 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::InitializeDatabase()
extern "C" void DialogueSystemController_InitializeDatabase_m5853 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::AddDatabase(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DialogueSystemController_AddDatabase_m5854 (DialogueSystemController_t688 * __this, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::RemoveDatabase(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DialogueSystemController_RemoveDatabase_m5855 (DialogueSystemController_t688 * __this, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::ResetDatabase(PixelCrushers.DialogueSystem.DatabaseResetOptions)
extern "C" void DialogueSystemController_ResetDatabase_m5856 (DialogueSystemController_t688 * __this, int32_t ___databaseResetOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::PreloadMasterDatabase()
extern "C" void DialogueSystemController_PreloadMasterDatabase_m5857 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::PreloadDialogueUI()
extern "C" void DialogueSystemController_PreloadDialogueUI_m5858 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::ConversationHasValidEntry(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" bool DialogueSystemController_ConversationHasValidEntry_m5859 (DialogueSystemController_t688 * __this, String_t* ___title, Transform_t54 * ___actor, Transform_t54 * ___conversant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::ConversationHasValidEntry(System.String,UnityEngine.Transform)
extern "C" bool DialogueSystemController_ConversationHasValidEntry_m5860 (DialogueSystemController_t688 * __this, String_t* ___title, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::ConversationHasValidEntry(System.String)
extern "C" bool DialogueSystemController_ConversationHasValidEntry_m5861 (DialogueSystemController_t688 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::PreloadResources()
extern "C" void DialogueSystemController_PreloadResources_m5862 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::StartConversation(System.String,UnityEngine.Transform,UnityEngine.Transform,System.Int32)
extern "C" void DialogueSystemController_StartConversation_m5863 (DialogueSystemController_t688 * __this, String_t* ___title, Transform_t54 * ___actor, Transform_t54 * ___conversant, int32_t ___initialDialogueEntryID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::StartConversation(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" void DialogueSystemController_StartConversation_m5864 (DialogueSystemController_t688 * __this, String_t* ___title, Transform_t54 * ___actor, Transform_t54 * ___conversant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::StartConversation(System.String,UnityEngine.Transform)
extern "C" void DialogueSystemController_StartConversation_m5865 (DialogueSystemController_t688 * __this, String_t* ___title, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::StartConversation(System.String)
extern "C" void DialogueSystemController_StartConversation_m5866 (DialogueSystemController_t688 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::StopConversation()
extern "C" void DialogueSystemController_StopConversation_m5867 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::UpdateResponses()
extern "C" void DialogueSystemController_UpdateResponses_m5868 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::SetPortrait(System.String,System.String)
extern "C" void DialogueSystemController_SetPortrait_m5869 (DialogueSystemController_t688 * __this, String_t* ___actorName, String_t* ___portraitName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::SetActorPortraitTexture(System.String,UnityEngine.Texture2D)
extern "C" void DialogueSystemController_SetActorPortraitTexture_m5870 (DialogueSystemController_t688 * __this, String_t* ___actorName, Texture2D_t90 * ___portraitTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::SetConversationUI(UnityEngine.Transform)
extern "C" void DialogueSystemController_SetConversationUI_m5871 (DialogueSystemController_t688 * __this, Transform_t54 * ___conversant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::RestoreOriginalUI()
extern "C" void DialogueSystemController_RestoreOriginalUI_m5872 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::OnDialogueEntrySpoken(PixelCrushers.DialogueSystem.Subtitle)
extern "C" void DialogueSystemController_OnDialogueEntrySpoken_m5873 (DialogueSystemController_t688 * __this, Subtitle_t623 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::OnEndConversation()
extern "C" void DialogueSystemController_OnEndConversation_m5874 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::OnConversationTimeout()
extern "C" void DialogueSystemController_OnConversationTimeout_m5875 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.DialogueSystemController::ChooseFirstResponseAfterOneFrame()
extern "C" Object_t * DialogueSystemController_ChooseFirstResponseAfterOneFrame_m5876 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Bark(System.String,UnityEngine.Transform,UnityEngine.Transform,PixelCrushers.DialogueSystem.BarkHistory)
extern "C" void DialogueSystemController_Bark_m5877 (DialogueSystemController_t688 * __this, String_t* ___conversationTitle, Transform_t54 * ___speaker, Transform_t54 * ___listener, BarkHistory_t1358 * ___barkHistory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Bark(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" void DialogueSystemController_Bark_m5878 (DialogueSystemController_t688 * __this, String_t* ___conversationTitle, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Bark(System.String,UnityEngine.Transform)
extern "C" void DialogueSystemController_Bark_m5879 (DialogueSystemController_t688 * __this, String_t* ___conversationTitle, Transform_t54 * ___speaker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Bark(System.String,UnityEngine.Transform,PixelCrushers.DialogueSystem.BarkHistory)
extern "C" void DialogueSystemController_Bark_m5880 (DialogueSystemController_t688 * __this, String_t* ___conversationTitle, Transform_t54 * ___speaker, BarkHistory_t1358 * ___barkHistory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::ShowAlert(System.String,System.Single)
extern "C" void DialogueSystemController_ShowAlert_m5881 (DialogueSystemController_t688 * __this, String_t* ___message, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::ShowAlert(System.String)
extern "C" void DialogueSystemController_ShowAlert_m5882 (DialogueSystemController_t688 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::CheckAlerts()
extern "C" void DialogueSystemController_CheckAlerts_m5883 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.DialogueSystemController::MonitorAlerts()
extern "C" Object_t * DialogueSystemController_MonitorAlerts_m5884 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueSystemController::GetLocalizedText(System.String)
extern "C" String_t* DialogueSystemController_GetLocalizedText_m5885 (DialogueSystemController_t688 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueSystemController::PlaySequence(System.String,UnityEngine.Transform,UnityEngine.Transform,System.Boolean,System.Boolean)
extern "C" Sequencer_t675 * DialogueSystemController_PlaySequence_m5886 (DialogueSystemController_t688 * __this, String_t* ___sequence, Transform_t54 * ___speaker, Transform_t54 * ___listener, bool ___informParticipants, bool ___destroyWhenDone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueSystemController::PlaySequence(System.String,UnityEngine.Transform,UnityEngine.Transform,System.Boolean)
extern "C" Sequencer_t675 * DialogueSystemController_PlaySequence_m5887 (DialogueSystemController_t688 * __this, String_t* ___sequence, Transform_t54 * ___speaker, Transform_t54 * ___listener, bool ___informParticipants, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueSystemController::PlaySequence(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" Sequencer_t675 * DialogueSystemController_PlaySequence_m5888 (DialogueSystemController_t688 * __this, String_t* ___sequence, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueSystemController::PlaySequence(System.String)
extern "C" Sequencer_t675 * DialogueSystemController_PlaySequence_m5889 (DialogueSystemController_t688 * __this, String_t* ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::StopSequence(PixelCrushers.DialogueSystem.Sequencer)
extern "C" void DialogueSystemController_StopSequence_m5890 (DialogueSystemController_t688 * __this, Sequencer_t675 * ___sequencer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Pause()
extern "C" void DialogueSystemController_Pause_m5891 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Unpause()
extern "C" void DialogueSystemController_Unpause_m5892 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::BroadcastDialogueSystemMessage(System.String)
extern "C" void DialogueSystemController_BroadcastDialogueSystemMessage_m5893 (DialogueSystemController_t688 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::UseDialogueUI(UnityEngine.GameObject)
extern "C" void DialogueSystemController_UseDialogueUI_m5894 (DialogueSystemController_t688 * __this, GameObject_t49 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IDialogueUI PixelCrushers.DialogueSystem.DialogueSystemController::GetDialogueUI()
extern "C" Object_t * DialogueSystemController_GetDialogueUI_m5895 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::SetDialogueUI(PixelCrushers.DialogueSystem.IDialogueUI)
extern "C" void DialogueSystemController_SetDialogueUI_m5896 (DialogueSystemController_t688 * __this, Object_t * ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::ValidateCurrentDialogueUI()
extern "C" void DialogueSystemController_ValidateCurrentDialogueUI_m5897 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::GetDialogueUIFromDisplaySettings()
extern "C" void DialogueSystemController_GetDialogueUIFromDisplaySettings_m5898 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IDialogueUI PixelCrushers.DialogueSystem.DialogueSystemController::LoadDefaultDialogueUI()
extern "C" Object_t * DialogueSystemController_LoadDefaultDialogueUI_m5899 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IDialogueUI PixelCrushers.DialogueSystem.DialogueSystemController::LoadDialogueUIPrefab(UnityEngine.GameObject)
extern "C" Object_t * DialogueSystemController_LoadDialogueUIPrefab_m5900 (DialogueSystemController_t688 * __this, GameObject_t49 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueSystemController::GetNewSequencer()
extern "C" Sequencer_t675 * DialogueSystemController_GetNewSequencer_m5901 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::AddLuaObserver(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void DialogueSystemController_AddLuaObserver_m5902 (DialogueSystemController_t688 * __this, String_t* ___luaExpression, int32_t ___frequency, LuaChangedDelegate_t807 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.DialogueSystemController::AddLuaObserverAfterStart(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" Object_t * DialogueSystemController_AddLuaObserverAfterStart_m5903 (DialogueSystemController_t688 * __this, String_t* ___luaExpression, int32_t ___frequency, LuaChangedDelegate_t807 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::RemoveLuaObserver(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void DialogueSystemController_RemoveLuaObserver_m5904 (DialogueSystemController_t688 * __this, String_t* ___luaExpression, int32_t ___frequency, LuaChangedDelegate_t807 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::RemoveAllObservers(PixelCrushers.DialogueSystem.LuaWatchFrequency)
extern "C" void DialogueSystemController_RemoveAllObservers_m5905 (DialogueSystemController_t688 * __this, int32_t ___frequency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::RemoveAllObservers()
extern "C" void DialogueSystemController_RemoveAllObservers_m5906 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Update()
extern "C" void DialogueSystemController_Update_m5907 (DialogueSystemController_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::RegisterAssetBundle(UnityEngine.AssetBundle)
extern "C" void DialogueSystemController_RegisterAssetBundle_m5908 (DialogueSystemController_t688 * __this, AssetBundle_t1655 * ___bundle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::UnregisterAssetBundle(UnityEngine.AssetBundle)
extern "C" void DialogueSystemController_UnregisterAssetBundle_m5909 (DialogueSystemController_t688 * __this, AssetBundle_t1655 * ___bundle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object PixelCrushers.DialogueSystem.DialogueSystemController::LoadAsset(System.String)
extern "C" Object_t642 * DialogueSystemController_LoadAsset_m5910 (DialogueSystemController_t688 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
