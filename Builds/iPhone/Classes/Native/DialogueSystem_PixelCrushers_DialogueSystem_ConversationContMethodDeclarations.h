#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.ConversationController
struct ConversationController_t768;
// PixelCrushers.DialogueSystem.CharacterInfo
struct CharacterInfo_t607;
// PixelCrushers.DialogueSystem.ConversationModel
struct ConversationModel_t776;
// PixelCrushers.DialogueSystem.ConversationView
struct ConversationView_t782;
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate
struct IsDialogueEntryValidDelegate_t769;
// System.Action
struct Action_t250;
// PixelCrushers.DialogueSystem.ConversationState
struct ConversationState_t771;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t877;
// PixelCrushers.DialogueSystem.SelectedResponseEventArgs
struct SelectedResponseEventArgs_t876;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t90;

// System.Void PixelCrushers.DialogueSystem.ConversationController::.ctor(PixelCrushers.DialogueSystem.ConversationModel,PixelCrushers.DialogueSystem.ConversationView,System.Boolean,System.Action)
extern "C" void ConversationController__ctor_m3656 (ConversationController_t768 * __this, ConversationModel_t776 * ___model, ConversationView_t782 * ___view, bool ___alwaysForceResponseMenu, Action_t250 * ___endConversationHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationController::get_IsActive()
extern "C" bool ConversationController_get_IsActive_m3657 (ConversationController_t768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::set_IsActive(System.Boolean)
extern "C" void ConversationController_set_IsActive_m3658 (ConversationController_t768 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.CharacterInfo PixelCrushers.DialogueSystem.ConversationController::get_ActorInfo()
extern "C" CharacterInfo_t607 * ConversationController_get_ActorInfo_m3659 (ConversationController_t768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationModel PixelCrushers.DialogueSystem.ConversationController::get_ConversationModel()
extern "C" ConversationModel_t776 * ConversationController_get_ConversationModel_m3660 (ConversationController_t768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ConversationView PixelCrushers.DialogueSystem.ConversationController::get_ConversationView()
extern "C" ConversationView_t782 * ConversationController_get_ConversationView_m3661 (ConversationController_t768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate PixelCrushers.DialogueSystem.ConversationController::get_IsDialogueEntryValid()
extern "C" IsDialogueEntryValidDelegate_t769 * ConversationController_get_IsDialogueEntryValid_m3662 (ConversationController_t768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::set_IsDialogueEntryValid(PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate)
extern "C" void ConversationController_set_IsDialogueEntryValid_m3663 (ConversationController_t768 * __this, IsDialogueEntryValidDelegate_t769 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.CharacterInfo PixelCrushers.DialogueSystem.ConversationController::get_ConversantInfo()
extern "C" CharacterInfo_t607 * ConversationController_get_ConversantInfo_m3664 (ConversationController_t768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::Close()
extern "C" void ConversationController_Close_m3665 (ConversationController_t768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::GotoState(PixelCrushers.DialogueSystem.ConversationState)
extern "C" void ConversationController_GotoState_m3666 (ConversationController_t768 * __this, ConversationState_t771 * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::OnFinishedSubtitle(System.Object,System.EventArgs)
extern "C" void ConversationController_OnFinishedSubtitle_m3667 (ConversationController_t768 * __this, Object_t * ___sender, EventArgs_t877 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::OnSelectedResponse(System.Object,PixelCrushers.DialogueSystem.SelectedResponseEventArgs)
extern "C" void ConversationController_OnSelectedResponse_m3668 (ConversationController_t768 * __this, Object_t * ___sender, SelectedResponseEventArgs_t876 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::GotoFirstResponse()
extern "C" void ConversationController_GotoFirstResponse_m3669 (ConversationController_t768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::UpdateResponses()
extern "C" void ConversationController_UpdateResponses_m3670 (ConversationController_t768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationController::SetActorPortraitTexture(System.String,UnityEngine.Texture2D)
extern "C" void ConversationController_SetActorPortraitTexture_m3671 (ConversationController_t768 * __this, String_t* ___actorName, Texture2D_t90 * ___portraitTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
