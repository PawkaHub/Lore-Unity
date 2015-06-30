#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.ConversationView
struct ConversationView_t782;
// System.EventHandler
struct EventHandler_t874;
// System.EventHandler`1<PixelCrushers.DialogueSystem.SelectedResponseEventArgs>
struct EventHandler_1_t869;
// PixelCrushers.DialogueSystem.IDialogueUI
struct IDialogueUI_t720;
// PixelCrushers.DialogueSystem.Sequencer
struct Sequencer_t597;
// PixelCrushers.DialogueSystem.DisplaySettings
struct DisplaySettings_t605;
// PixelCrushers.DialogueSystem.DialogueEntrySpokenDelegate
struct DialogueEntrySpokenDelegate_t873;
// PixelCrushers.DialogueSystem.Subtitle
struct Subtitle_t552;
// PixelCrushers.DialogueSystem.Response[]
struct ResponseU5BU5D_t553;
// System.String
struct String_t;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.SelectedResponseEventArgs
struct SelectedResponseEventArgs_t876;
// PixelCrushers.DialogueSystem.CharacterInfo
struct CharacterInfo_t607;
// UnityEngine.Texture2D
struct Texture2D_t90;

// System.Void PixelCrushers.DialogueSystem.ConversationView::.ctor()
extern "C" void ConversationView__ctor_m4147 (ConversationView_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::add_FinishedSubtitleHandler(System.EventHandler)
extern "C" void ConversationView_add_FinishedSubtitleHandler_m4148 (ConversationView_t782 * __this, EventHandler_t874 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::remove_FinishedSubtitleHandler(System.EventHandler)
extern "C" void ConversationView_remove_FinishedSubtitleHandler_m4149 (ConversationView_t782 * __this, EventHandler_t874 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::add_SelectedResponseHandler(System.EventHandler`1<PixelCrushers.DialogueSystem.SelectedResponseEventArgs>)
extern "C" void ConversationView_add_SelectedResponseHandler_m4150 (ConversationView_t782 * __this, EventHandler_1_t869 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::remove_SelectedResponseHandler(System.EventHandler`1<PixelCrushers.DialogueSystem.SelectedResponseEventArgs>)
extern "C" void ConversationView_remove_SelectedResponseHandler_m4151 (ConversationView_t782 * __this, EventHandler_1_t869 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::Initialize(PixelCrushers.DialogueSystem.IDialogueUI,PixelCrushers.DialogueSystem.Sequencer,PixelCrushers.DialogueSystem.DisplaySettings,PixelCrushers.DialogueSystem.DialogueEntrySpokenDelegate)
extern "C" void ConversationView_Initialize_m4152 (ConversationView_t782 * __this, Object_t * ___ui, Sequencer_t597 * ___sequencer, DisplaySettings_t605 * ___displaySettings, DialogueEntrySpokenDelegate_t873 * ___dialogueEntrySpokenHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::Close()
extern "C" void ConversationView_Close_m4153 (ConversationView_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::Update()
extern "C" void ConversationView_Update_m4154 (ConversationView_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::Cancelled()
extern "C" bool ConversationView_Cancelled_m4155 (ConversationView_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::IsSubtitleCancelKeyDown()
extern "C" bool ConversationView_IsSubtitleCancelKeyDown_m4156 (ConversationView_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::IsConversationCancelKeyDown()
extern "C" bool ConversationView_IsConversationCancelKeyDown_m4157 (ConversationView_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::StartSubtitle(PixelCrushers.DialogueSystem.Subtitle,System.Boolean,System.Boolean)
extern "C" void ConversationView_StartSubtitle_m4158 (ConversationView_t782 * __this, Subtitle_t552 * ___subtitle, bool ___isPCResponseMenuNext, bool ___isPCAutoResponseNext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::ShouldWaitForContinueButton(PixelCrushers.DialogueSystem.Subtitle,System.Boolean,System.Boolean)
extern "C" bool ConversationView_ShouldWaitForContinueButton_m4159 (ConversationView_t782 * __this, Subtitle_t552 * ___subtitle, bool ___isPCResponseMenuNext, bool ___isPCAutoResponseNext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::ShouldShowContinueButton(System.Boolean,System.Boolean)
extern "C" bool ConversationView_ShouldShowContinueButton_m4160 (ConversationView_t782 * __this, bool ___isPCResponseMenuNext, bool ___isPCAutoResponseNext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::ShowLastNPCSubtitle()
extern "C" void ConversationView_ShowLastNPCSubtitle_m4161 (ConversationView_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::ShouldShowLastNPCSubtitle()
extern "C" bool ConversationView_ShouldShowLastNPCSubtitle_m4162 (ConversationView_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::ShouldShowLastPCSubtitle()
extern "C" bool ConversationView_ShouldShowLastPCSubtitle_m4163 (ConversationView_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::ShouldShowSubtitle(PixelCrushers.DialogueSystem.Subtitle)
extern "C" bool ConversationView_ShouldShowSubtitle_m4164 (ConversationView_t782 * __this, Subtitle_t552 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::OnConversationContinue()
extern "C" void ConversationView_OnConversationContinue_m4165 (ConversationView_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::OnCancelSubtitle()
extern "C" void ConversationView_OnCancelSubtitle_m4166 (ConversationView_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::FinishSubtitle()
extern "C" void ConversationView_FinishSubtitle_m4167 (ConversationView_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::OnFinishedSubtitle()
extern "C" void ConversationView_OnFinishedSubtitle_m4168 (ConversationView_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::StartResponses(PixelCrushers.DialogueSystem.Subtitle,PixelCrushers.DialogueSystem.Response[])
extern "C" void ConversationView_StartResponses_m4169 (ConversationView_t782 * __this, Subtitle_t552 * ___subtitle, ResponseU5BU5D_t553* ___responses, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::PlayResponseMenuSequence(System.String)
extern "C" void ConversationView_PlayResponseMenuSequence_m4170 (ConversationView_t782 * __this, String_t* ___responseMenuSequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::StopResponseMenuSequence()
extern "C" void ConversationView_StopResponseMenuSequence_m4171 (ConversationView_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::OnCancelResponseMenu()
extern "C" void ConversationView_OnCancelResponseMenu_m4172 (ConversationView_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::OnSelectedResponse(System.Object,PixelCrushers.DialogueSystem.SelectedResponseEventArgs)
extern "C" void ConversationView_OnSelectedResponse_m4173 (ConversationView_t782 * __this, Object_t * ___sender, SelectedResponseEventArgs_t876 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::SelectResponse(PixelCrushers.DialogueSystem.SelectedResponseEventArgs)
extern "C" void ConversationView_SelectResponse_m4174 (ConversationView_t782 * __this, SelectedResponseEventArgs_t876 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.ConversationView::GetDefaultSequence(PixelCrushers.DialogueSystem.Subtitle)
extern "C" String_t* ConversationView_GetDefaultSequence_m4175 (ConversationView_t782 * __this, Subtitle_t552 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.ConversationView::GetDefaultSubtitleDuration(System.String)
extern "C" float ConversationView_GetDefaultSubtitleDuration_m4176 (ConversationView_t782 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.ConversationView::PreprocessSequence(PixelCrushers.DialogueSystem.Subtitle)
extern "C" String_t* ConversationView_PreprocessSequence_m4177 (ConversationView_t782 * __this, Subtitle_t552 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::NotifyParticipantsOnConversationLine(PixelCrushers.DialogueSystem.Subtitle)
extern "C" void ConversationView_NotifyParticipantsOnConversationLine_m4178 (ConversationView_t782 * __this, Subtitle_t552 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::NotifyOnResponseMenu(PixelCrushers.DialogueSystem.Response[])
extern "C" void ConversationView_NotifyOnResponseMenu_m4179 (ConversationView_t782 * __this, ResponseU5BU5D_t553* ___responses, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView::CharacterInfoHasValidTransform(PixelCrushers.DialogueSystem.CharacterInfo)
extern "C" bool ConversationView_CharacterInfoHasValidTransform_m4180 (ConversationView_t782 * __this, CharacterInfo_t607 * ___characterInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::SetPCPortrait(UnityEngine.Texture2D,System.String)
extern "C" void ConversationView_SetPCPortrait_m4181 (ConversationView_t782 * __this, Texture2D_t90 * ___pcTexture, String_t* ___pcName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationView::SetActorPortraitTexture(System.String,UnityEngine.Texture2D)
extern "C" void ConversationView_SetActorPortraitTexture_m4182 (ConversationView_t782 * __this, String_t* ___actorName, Texture2D_t90 * ___portraitTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
