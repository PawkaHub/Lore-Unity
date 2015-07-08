#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.Sequencer
struct Sequencer_t675;
// UnityEngine.GameObject
struct GameObject_t49;
// UnityEngine.Camera
struct Camera_t384;
// UnityEngine.Transform
struct Transform_t54;
// System.String
struct String_t;
// System.Action
struct Action_t250;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.String[]
struct StringU5BU5D_t20;
// System.Type
struct Type_t;
// PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand
struct QueuedSequencerCommand_t1464;
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand
struct SequencerCommand_t209;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void PixelCrushers.DialogueSystem.Sequencer::.ctor()
extern "C" void Sequencer__ctor_m6502 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::.cctor()
extern "C" void Sequencer__cctor_m6503 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::add_FinishedSequenceHandler(System.Action)
extern "C" void Sequencer_add_FinishedSequenceHandler_m6504 (Sequencer_t675 * __this, Action_t250 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::remove_FinishedSequenceHandler(System.Action)
extern "C" void Sequencer_remove_FinishedSequenceHandler_m6505 (Sequencer_t675 * __this, Action_t250 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::get_IsPlaying()
extern "C" bool Sequencer_get_IsPlaying_m6506 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PixelCrushers.DialogueSystem.Sequencer::get_CameraAngles()
extern "C" GameObject_t49 * Sequencer_get_CameraAngles_m6507 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera PixelCrushers.DialogueSystem.Sequencer::get_SequencerCamera()
extern "C" Camera_t384 * Sequencer_get_SequencerCamera_m6508 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.Sequencer::get_SequencerCameraTransform()
extern "C" Transform_t54 * Sequencer_get_SequencerCameraTransform_m6509 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.Sequencer::get_Speaker()
extern "C" Transform_t54 * Sequencer_get_Speaker_m6510 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.Sequencer::get_Listener()
extern "C" Transform_t54 * Sequencer_get_Listener_m6511 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PixelCrushers.DialogueSystem.Sequencer::get_OriginalCameraPosition()
extern "C" Vector3_t53  Sequencer_get_OriginalCameraPosition_m6512 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion PixelCrushers.DialogueSystem.Sequencer::get_OriginalCameraRotation()
extern "C" Quaternion_t69  Sequencer_get_OriginalCameraRotation_m6513 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Sequencer::get_entrytag()
extern "C" String_t* Sequencer_get_entrytag_m6514 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::set_entrytag(System.String)
extern "C" void Sequencer_set_entrytag_m6515 (Sequencer_t675 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::Message(System.String)
extern "C" void Sequencer_Message_m2925 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::UseCamera(UnityEngine.Camera,UnityEngine.GameObject)
extern "C" void Sequencer_UseCamera_m6516 (Sequencer_t675 * __this, Camera_t384 * ___sequencerCamera, GameObject_t49 * ___cameraAngles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::UseCamera(UnityEngine.Camera,UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" void Sequencer_UseCamera_m6517 (Sequencer_t675 * __this, Camera_t384 * ___sequencerCamera, GameObject_t49 * ___alternateSequencerCameraObject, GameObject_t49 * ___cameraAngles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::GetCameraAngles()
extern "C" void Sequencer_GetCameraAngles_m6518 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::GetCamera()
extern "C" void Sequencer_GetCamera_m6519 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::DestroyCamera()
extern "C" void Sequencer_DestroyCamera_m6520 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.Sequencer::RestoreCamera()
extern "C" Object_t * Sequencer_RestoreCamera_m6521 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::SwitchCamera(UnityEngine.Camera)
extern "C" void Sequencer_SwitchCamera_m6522 (Sequencer_t675 * __this, Camera_t384 * ___newCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::TakeCameraControl()
extern "C" void Sequencer_TakeCameraControl_m6523 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::ReleaseCameraControl()
extern "C" void Sequencer_ReleaseCameraControl_m6524 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::Open()
extern "C" void Sequencer_Open_m6525 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::Close()
extern "C" void Sequencer_Close_m6526 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::OnDestroy()
extern "C" void Sequencer_OnDestroy_m6527 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::Update()
extern "C" void Sequencer_Update_m6528 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::FinishSequence()
extern "C" void Sequencer_FinishSequence_m6529 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::SetParticipants(UnityEngine.Transform,UnityEngine.Transform)
extern "C" void Sequencer_SetParticipants_m6530 (Sequencer_t675 * __this, Transform_t54 * ___speaker, Transform_t54 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::InformParticipants(System.String)
extern "C" void Sequencer_InformParticipants_m6531 (Sequencer_t675 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::PlaySequence(System.String)
extern "C" void Sequencer_PlaySequence_m6532 (Sequencer_t675 * __this, String_t* ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::PlaySequence(System.String,System.Boolean,System.Boolean)
extern "C" void Sequencer_PlaySequence_m6533 (Sequencer_t675 * __this, String_t* ___sequence, bool ___informParticipants, bool ___destroyWhenDone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::PlaySequence(System.String,UnityEngine.Transform,UnityEngine.Transform,System.Boolean,System.Boolean)
extern "C" void Sequencer_PlaySequence_m6534 (Sequencer_t675 * __this, String_t* ___sequence, Transform_t54 * ___speaker, Transform_t54 * ___listener, bool ___informParticipants, bool ___destroyWhenDone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::PlayCommand(System.String,System.Boolean,System.Single,System.String,System.String,System.String[])
extern "C" void Sequencer_PlayCommand_m6535 (Sequencer_t675 * __this, String_t* ___commandName, bool ___required, float ___time, String_t* ___message, String_t* ___endMessage, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::IsTimePaused()
extern "C" bool Sequencer_IsTimePaused_m6536 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::ActivateCommand(System.String,System.String,System.String[])
extern "C" void Sequencer_ActivateCommand_m6537 (Sequencer_t675 * __this, String_t* ___commandName, String_t* ___endMessage, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type PixelCrushers.DialogueSystem.Sequencer::FindSequencerCommandType(System.String)
extern "C" Type_t * Sequencer_FindSequencerCommandType_m6538 (Sequencer_t675 * __this, String_t* ___commandName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type PixelCrushers.DialogueSystem.Sequencer::FindSequencerCommandType(System.String,System.String)
extern "C" Type_t * Sequencer_FindSequencerCommandType_m6539 (Sequencer_t675 * __this, String_t* ___commandName, String_t* ___assemblyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type PixelCrushers.DialogueSystem.Sequencer::FindSequencerCommandType(System.String,System.String,System.String)
extern "C" Type_t * Sequencer_FindSequencerCommandType_m6540 (Sequencer_t675 * __this, String_t* ___namespacePrefix, String_t* ___commandName, String_t* ___assemblyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.Sequencer::SendTimedSequencerMessage(System.String,System.Single)
extern "C" Object_t * Sequencer_SendTimedSequencerMessage_m6541 (Sequencer_t675 * __this, String_t* ___endMessage, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::ActivateCommand(PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand)
extern "C" void Sequencer_ActivateCommand_m6542 (Sequencer_t675 * __this, QueuedSequencerCommand_t1464 * ___queuedCommand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::CheckQueuedCommands()
extern "C" void Sequencer_CheckQueuedCommands_m6543 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::OnSequencerMessage(System.String)
extern "C" void Sequencer_OnSequencerMessage_m6544 (Sequencer_t675 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::CheckActiveCommands()
extern "C" void Sequencer_CheckActiveCommands_m6545 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::Stop()
extern "C" void Sequencer_Stop_m6546 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::StopQueued()
extern "C" void Sequencer_StopQueued_m6547 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::StopActive()
extern "C" void Sequencer_StopActive_m6548 (Sequencer_t675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleCommandInternally(System.String,System.String[],System.Single&)
extern "C" bool Sequencer_HandleCommandInternally_m6549 (Sequencer_t675 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, float* ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::TryHandleCameraInternally(System.String,System.String[])
extern "C" bool Sequencer_TryHandleCameraInternally_m6550 (Sequencer_t675 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleAnimationInternally(System.String,System.String[],System.Single&)
extern "C" bool Sequencer_HandleAnimationInternally_m6551 (Sequencer_t675 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, float* ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleAnimatorControllerInternally(System.String,System.String[])
extern "C" bool Sequencer_HandleAnimatorControllerInternally_m6552 (Sequencer_t675 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::TryHandleAnimatorLayerInternally(System.String,System.String[])
extern "C" bool Sequencer_TryHandleAnimatorLayerInternally_m6553 (Sequencer_t675 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleAnimatorBoolInternally(System.String,System.String[])
extern "C" bool Sequencer_HandleAnimatorBoolInternally_m6554 (Sequencer_t675 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleAnimatorIntInternally(System.String,System.String[])
extern "C" bool Sequencer_HandleAnimatorIntInternally_m6555 (Sequencer_t675 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::TryHandleAnimatorFloatInternally(System.String,System.String[])
extern "C" bool Sequencer_TryHandleAnimatorFloatInternally_m6556 (Sequencer_t675 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleAnimatorTriggerInternally(System.String,System.String[])
extern "C" bool Sequencer_HandleAnimatorTriggerInternally_m6557 (Sequencer_t675 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleAnimatorPlayInternally(System.String,System.String[])
extern "C" bool Sequencer_HandleAnimatorPlayInternally_m6558 (Sequencer_t675 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleAudioInternally(System.String,System.String[])
extern "C" bool Sequencer_HandleAudioInternally_m6559 (Sequencer_t675 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::TryHandleMoveToInternally(System.String,System.String[])
extern "C" bool Sequencer_TryHandleMoveToInternally_m6560 (Sequencer_t675 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::TryHandleLookAtInternally(System.String,System.String[])
extern "C" bool Sequencer_TryHandleLookAtInternally_m6561 (Sequencer_t675 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Sequencer::DoLookAt(UnityEngine.Transform,UnityEngine.Vector3,System.Boolean)
extern "C" void Sequencer_DoLookAt_m6562 (Sequencer_t675 * __this, Transform_t54 * ___subject, Vector3_t53  ___position, bool ___yAxisOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleSendMessageInternally(System.String,System.String[])
extern "C" bool Sequencer_HandleSendMessageInternally_m6563 (Sequencer_t675 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleSetActiveInternally(System.String,System.String[])
extern "C" bool Sequencer_HandleSetActiveInternally_m6564 (Sequencer_t675 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleSetEnabledInternally(System.String,System.String[])
extern "C" bool Sequencer_HandleSetEnabledInternally_m6565 (Sequencer_t675 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleSetPortraitInternally(System.String,System.String[])
extern "C" bool Sequencer_HandleSetPortraitInternally_m6566 (Sequencer_t675 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::HandleShowAlertInternally(System.String,System.String[])
extern "C" bool Sequencer_HandleShowAlertInternally_m6567 (Sequencer_t675 * __this, String_t* ___commandName, StringU5BU5D_t20* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Sequencer::<CheckActiveCommands>m__30(PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand)
extern "C" bool Sequencer_U3CCheckActiveCommandsU3Em__30_m6568 (Object_t * __this /* static, unused */, SequencerCommand_t209 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
