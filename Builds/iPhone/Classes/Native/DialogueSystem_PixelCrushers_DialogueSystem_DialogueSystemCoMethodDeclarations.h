#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.DialogueSystemController
struct DialogueSystemController_t610;
// PixelCrushers.DialogueSystem.DatabaseManager
struct DatabaseManager_t767;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// PixelCrushers.DialogueSystem.IDialogueUI
struct IDialogueUI_t720;
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
// UnityEngine.Texture2D
struct Texture2D_t90;
// PixelCrushers.DialogueSystem.Subtitle
struct Subtitle_t552;
// System.Collections.IEnumerator
struct IEnumerator_t74;
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
// PixelCrushers.DialogueSystem.DatabaseResetOptions
#include "DialogueSystem_PixelCrushers_DialogueSystem_DatabaseResetOpt.h"
// PixelCrushers.DialogueSystem.LuaWatchFrequency
#include "DialogueSystem_PixelCrushers_DialogueSystem_LuaWatchFrequenc.h"

// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::.ctor()
extern "C" void DialogueSystemController__ctor_m3535 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::.cctor()
extern "C" void DialogueSystemController__cctor_m3536 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DatabaseManager PixelCrushers.DialogueSystem.DialogueSystemController::get_DatabaseManager()
extern "C" DatabaseManager_t767 * DialogueSystemController_get_DatabaseManager_m3537 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueDatabase PixelCrushers.DialogueSystem.DialogueSystemController::get_MasterDatabase()
extern "C" DialogueDatabase_t202 * DialogueSystemController_get_MasterDatabase_m3538 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IDialogueUI PixelCrushers.DialogueSystem.DialogueSystemController::get_DialogueUI()
extern "C" Object_t * DialogueSystemController_get_DialogueUI_m3539 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_DialogueUI(PixelCrushers.DialogueSystem.IDialogueUI)
extern "C" void DialogueSystemController_set_DialogueUI_m3540 (DialogueSystemController_t610 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate PixelCrushers.DialogueSystem.DialogueSystemController::get_IsDialogueEntryValid()
extern "C" IsDialogueEntryValidDelegate_t769 * DialogueSystemController_get_IsDialogueEntryValid_m3541 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_IsDialogueEntryValid(PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate)
extern "C" void DialogueSystemController_set_IsDialogueEntryValid_m3542 (DialogueSystemController_t610 * __this, IsDialogueEntryValidDelegate_t769 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::get_IsConversationActive()
extern "C" bool DialogueSystemController_get_IsConversationActive_m3543 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.DialogueSystemController::get_CurrentActor()
extern "C" Transform_t54 * DialogueSystemController_get_CurrentActor_m3544 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_CurrentActor(UnityEngine.Transform)
extern "C" void DialogueSystemController_set_CurrentActor_m3545 (DialogueSystemController_t610 * __this, Transform_t54 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.DialogueSystemController::get_CurrentConversant()
extern "C" Transform_t54 * DialogueSystemController_get_CurrentConversant_m3546 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_CurrentConversant(UnityEngine.Transform)
extern "C" void DialogueSystemController_set_CurrentConversant_m3547 (DialogueSystemController_t610 * __this, Transform_t54 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationState PixelCrushers.DialogueSystem.DialogueSystemController::get_CurrentConversationState()
extern "C" ConversationState_t771 * DialogueSystemController_get_CurrentConversationState_m3548 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_CurrentConversationState(PixelCrushers.DialogueSystem.ConversationState)
extern "C" void DialogueSystemController_set_CurrentConversationState_m3549 (DialogueSystemController_t610 * __this, ConversationState_t771 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueSystemController::get_LastConversationStarted()
extern "C" String_t* DialogueSystemController_get_LastConversationStarted_m3550 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_LastConversationStarted(System.String)
extern "C" void DialogueSystemController_set_LastConversationStarted_m3551 (DialogueSystemController_t610 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationController PixelCrushers.DialogueSystem.DialogueSystemController::get_ConversationController()
extern "C" ConversationController_t768 * DialogueSystemController_get_ConversationController_m3552 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationModel PixelCrushers.DialogueSystem.DialogueSystemController::get_ConversationModel()
extern "C" ConversationModel_t776 * DialogueSystemController_get_ConversationModel_m3553 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationView PixelCrushers.DialogueSystem.DialogueSystemController::get_ConversationView()
extern "C" ConversationView_t782 * DialogueSystemController_get_ConversationView_m3554 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::get_AllowLuaExceptions()
extern "C" bool DialogueSystemController_get_AllowLuaExceptions_m3555 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_AllowLuaExceptions(System.Boolean)
extern "C" void DialogueSystemController_set_AllowLuaExceptions_m3556 (DialogueSystemController_t610 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::get_WarnIfActorAndConversantSame()
extern "C" bool DialogueSystemController_get_WarnIfActorAndConversantSame_m3557 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::set_WarnIfActorAndConversantSame(System.Boolean)
extern "C" void DialogueSystemController_set_WarnIfActorAndConversantSame_m3558 (DialogueSystemController_t610 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::OnDestroy()
extern "C" void DialogueSystemController_OnDestroy_m3559 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Awake()
extern "C" void DialogueSystemController_Awake_m3560 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Start()
extern "C" void DialogueSystemController_Start_m3561 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::InitializeDisplaySettings()
extern "C" void DialogueSystemController_InitializeDisplaySettings_m3562 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::SetLanguage(System.String)
extern "C" void DialogueSystemController_SetLanguage_m3563 (DialogueSystemController_t610 * __this, String_t* ___language, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::CheckDebugLevel()
extern "C" void DialogueSystemController_CheckDebugLevel_m3564 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::InitializeDatabase()
extern "C" void DialogueSystemController_InitializeDatabase_m3565 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::AddDatabase(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DialogueSystemController_AddDatabase_m3566 (DialogueSystemController_t610 * __this, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::RemoveDatabase(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DialogueSystemController_RemoveDatabase_m3567 (DialogueSystemController_t610 * __this, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::ResetDatabase(PixelCrushers.DialogueSystem.DatabaseResetOptions)
extern "C" void DialogueSystemController_ResetDatabase_m3568 (DialogueSystemController_t610 * __this, int32_t ___databaseResetOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::PreloadMasterDatabase()
extern "C" void DialogueSystemController_PreloadMasterDatabase_m3569 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::PreloadDialogueUI()
extern "C" void DialogueSystemController_PreloadDialogueUI_m3570 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::ConversationHasValidEntry(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" bool DialogueSystemController_ConversationHasValidEntry_m3571 (DialogueSystemController_t610 * __this, String_t* ___title, Transform_t54 * ___actor, Transform_t54 * ___conversant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::ConversationHasValidEntry(System.String,UnityEngine.Transform)
extern "C" bool DialogueSystemController_ConversationHasValidEntry_m3572 (DialogueSystemController_t610 * __this, String_t* ___title, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::ConversationHasValidEntry(System.String)
extern "C" bool DialogueSystemController_ConversationHasValidEntry_m3573 (DialogueSystemController_t610 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::PreloadResources()
extern "C" void DialogueSystemController_PreloadResources_m3574 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::StartConversation(System.String,UnityEngine.Transform,UnityEngine.Transform,System.Int32)
extern "C" void DialogueSystemController_StartConversation_m3575 (DialogueSystemController_t610 * __this, String_t* ___title, Transform_t54 * ___actor, Transform_t54 * ___conversant, int32_t ___initialDialogueEntryID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::StartConversation(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" void DialogueSystemController_StartConversation_m3576 (DialogueSystemController_t610 * __this, String_t* ___title, Transform_t54 * ___actor, Transform_t54 * ___conversant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::StartConversation(System.String,UnityEngine.Transform)
extern "C" void DialogueSystemController_StartConversation_m3577 (DialogueSystemController_t610 * __this, String_t* ___title, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::StartConversation(System.String)
extern "C" void DialogueSystemController_StartConversation_m3578 (DialogueSystemController_t610 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::StopConversation()
extern "C" void DialogueSystemController_StopConversation_m3579 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::UpdateResponses()
extern "C" void DialogueSystemController_UpdateResponses_m3580 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::SetPortrait(System.String,System.String)
extern "C" void DialogueSystemController_SetPortrait_m3581 (DialogueSystemController_t610 * __this, String_t* ___actorName, String_t* ___portraitName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::SetActorPortraitTexture(System.String,UnityEngine.Texture2D)
extern "C" void DialogueSystemController_SetActorPortraitTexture_m3582 (DialogueSystemController_t610 * __this, String_t* ___actorName, Texture2D_t90 * ___portraitTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::SetConversationUI(UnityEngine.Transform)
extern "C" void DialogueSystemController_SetConversationUI_m3583 (DialogueSystemController_t610 * __this, Transform_t54 * ___conversant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::RestoreOriginalUI()
extern "C" void DialogueSystemController_RestoreOriginalUI_m3584 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::OnDialogueEntrySpoken(PixelCrushers.DialogueSystem.Subtitle)
extern "C" void DialogueSystemController_OnDialogueEntrySpoken_m3585 (DialogueSystemController_t610 * __this, Subtitle_t552 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::OnEndConversation()
extern "C" void DialogueSystemController_OnEndConversation_m3586 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::OnConversationTimeout()
extern "C" void DialogueSystemController_OnConversationTimeout_m3587 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.DialogueSystemController::ChooseFirstResponseAfterOneFrame()
extern "C" Object_t * DialogueSystemController_ChooseFirstResponseAfterOneFrame_m3588 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Bark(System.String,UnityEngine.Transform,UnityEngine.Transform,PixelCrushers.DialogueSystem.BarkHistory)
extern "C" void DialogueSystemController_Bark_m3589 (DialogueSystemController_t610 * __this, String_t* ___conversationTitle, Transform_t54 * ___speaker, Transform_t54 * ___listener, BarkHistory_t774 * ___barkHistory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Bark(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" void DialogueSystemController_Bark_m3590 (DialogueSystemController_t610 * __this, String_t* ___conversationTitle, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Bark(System.String,UnityEngine.Transform)
extern "C" void DialogueSystemController_Bark_m3591 (DialogueSystemController_t610 * __this, String_t* ___conversationTitle, Transform_t54 * ___speaker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Bark(System.String,UnityEngine.Transform,PixelCrushers.DialogueSystem.BarkHistory)
extern "C" void DialogueSystemController_Bark_m3592 (DialogueSystemController_t610 * __this, String_t* ___conversationTitle, Transform_t54 * ___speaker, BarkHistory_t774 * ___barkHistory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::ShowAlert(System.String,System.Single)
extern "C" void DialogueSystemController_ShowAlert_m3593 (DialogueSystemController_t610 * __this, String_t* ___message, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::ShowAlert(System.String)
extern "C" void DialogueSystemController_ShowAlert_m3594 (DialogueSystemController_t610 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::CheckAlerts()
extern "C" void DialogueSystemController_CheckAlerts_m3595 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.DialogueSystemController::MonitorAlerts()
extern "C" Object_t * DialogueSystemController_MonitorAlerts_m3596 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueSystemController::GetLocalizedText(System.String)
extern "C" String_t* DialogueSystemController_GetLocalizedText_m3597 (DialogueSystemController_t610 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueSystemController::PlaySequence(System.String,UnityEngine.Transform,UnityEngine.Transform,System.Boolean,System.Boolean)
extern "C" Sequencer_t597 * DialogueSystemController_PlaySequence_m3598 (DialogueSystemController_t610 * __this, String_t* ___sequence, Transform_t54 * ___speaker, Transform_t54 * ___listener, bool ___informParticipants, bool ___destroyWhenDone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueSystemController::PlaySequence(System.String,UnityEngine.Transform,UnityEngine.Transform,System.Boolean)
extern "C" Sequencer_t597 * DialogueSystemController_PlaySequence_m3599 (DialogueSystemController_t610 * __this, String_t* ___sequence, Transform_t54 * ___speaker, Transform_t54 * ___listener, bool ___informParticipants, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueSystemController::PlaySequence(System.String,UnityEngine.Transform,UnityEngine.Transform)
extern "C" Sequencer_t597 * DialogueSystemController_PlaySequence_m3600 (DialogueSystemController_t610 * __this, String_t* ___sequence, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueSystemController::PlaySequence(System.String)
extern "C" Sequencer_t597 * DialogueSystemController_PlaySequence_m3601 (DialogueSystemController_t610 * __this, String_t* ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::StopSequence(PixelCrushers.DialogueSystem.Sequencer)
extern "C" void DialogueSystemController_StopSequence_m3602 (DialogueSystemController_t610 * __this, Sequencer_t597 * ___sequencer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Pause()
extern "C" void DialogueSystemController_Pause_m3603 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Unpause()
extern "C" void DialogueSystemController_Unpause_m3604 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::BroadcastDialogueSystemMessage(System.String)
extern "C" void DialogueSystemController_BroadcastDialogueSystemMessage_m3605 (DialogueSystemController_t610 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::UseDialogueUI(UnityEngine.GameObject)
extern "C" void DialogueSystemController_UseDialogueUI_m3606 (DialogueSystemController_t610 * __this, GameObject_t49 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IDialogueUI PixelCrushers.DialogueSystem.DialogueSystemController::GetDialogueUI()
extern "C" Object_t * DialogueSystemController_GetDialogueUI_m3607 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::SetDialogueUI(PixelCrushers.DialogueSystem.IDialogueUI)
extern "C" void DialogueSystemController_SetDialogueUI_m3608 (DialogueSystemController_t610 * __this, Object_t * ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::ValidateCurrentDialogueUI()
extern "C" void DialogueSystemController_ValidateCurrentDialogueUI_m3609 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::GetDialogueUIFromDisplaySettings()
extern "C" void DialogueSystemController_GetDialogueUIFromDisplaySettings_m3610 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IDialogueUI PixelCrushers.DialogueSystem.DialogueSystemController::LoadDefaultDialogueUI()
extern "C" Object_t * DialogueSystemController_LoadDefaultDialogueUI_m3611 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IDialogueUI PixelCrushers.DialogueSystem.DialogueSystemController::LoadDialogueUIPrefab(UnityEngine.GameObject)
extern "C" Object_t * DialogueSystemController_LoadDialogueUIPrefab_m3612 (DialogueSystemController_t610 * __this, GameObject_t49 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Sequencer PixelCrushers.DialogueSystem.DialogueSystemController::GetNewSequencer()
extern "C" Sequencer_t597 * DialogueSystemController_GetNewSequencer_m3613 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::AddLuaObserver(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void DialogueSystemController_AddLuaObserver_m3614 (DialogueSystemController_t610 * __this, String_t* ___luaExpression, int32_t ___frequency, LuaChangedDelegate_t757 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.DialogueSystemController::AddLuaObserverAfterStart(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" Object_t * DialogueSystemController_AddLuaObserverAfterStart_m3615 (DialogueSystemController_t610 * __this, String_t* ___luaExpression, int32_t ___frequency, LuaChangedDelegate_t757 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::RemoveLuaObserver(System.String,PixelCrushers.DialogueSystem.LuaWatchFrequency,PixelCrushers.DialogueSystem.LuaChangedDelegate)
extern "C" void DialogueSystemController_RemoveLuaObserver_m3616 (DialogueSystemController_t610 * __this, String_t* ___luaExpression, int32_t ___frequency, LuaChangedDelegate_t757 * ___luaChangedHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::RemoveAllObservers(PixelCrushers.DialogueSystem.LuaWatchFrequency)
extern "C" void DialogueSystemController_RemoveAllObservers_m3617 (DialogueSystemController_t610 * __this, int32_t ___frequency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::RemoveAllObservers()
extern "C" void DialogueSystemController_RemoveAllObservers_m3618 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::Update()
extern "C" void DialogueSystemController_Update_m3619 (DialogueSystemController_t610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::RegisterAssetBundle(UnityEngine.AssetBundle)
extern "C" void DialogueSystemController_RegisterAssetBundle_m3620 (DialogueSystemController_t610 * __this, AssetBundle_t1073 * ___bundle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueSystemController::UnregisterAssetBundle(UnityEngine.AssetBundle)
extern "C" void DialogueSystemController_UnregisterAssetBundle_m3621 (DialogueSystemController_t610 * __this, AssetBundle_t1073 * ___bundle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object PixelCrushers.DialogueSystem.DialogueSystemController::LoadAsset(System.String)
extern "C" Object_t563 * DialogueSystemController_LoadAsset_m3622 (DialogueSystemController_t610 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
