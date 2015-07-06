#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.AbstractDialogueUI
struct AbstractDialogueUI_t233;
// PixelCrushers.DialogueSystem.AbstractUIRoot
struct AbstractUIRoot_t245;
// PixelCrushers.DialogueSystem.AbstractDialogueUIControls
struct AbstractDialogueUIControls_t229;
// PixelCrushers.DialogueSystem.AbstractUIQTEControls
struct AbstractUIQTEControls_t234;
// PixelCrushers.DialogueSystem.AbstractUIAlertControls
struct AbstractUIAlertControls_t221;
// System.EventHandler`1<PixelCrushers.DialogueSystem.SelectedResponseEventArgs>
struct EventHandler_1_t1194;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.Subtitle
struct Subtitle_t570;
// PixelCrushers.DialogueSystem.AbstractUISubtitleControls
struct AbstractUISubtitleControls_t246;
// PixelCrushers.DialogueSystem.Response[]
struct ResponseU5BU5D_t571;
// System.Object
struct Object_t;
// UnityEngine.Texture2D
struct Texture2D_t90;

// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::.ctor()
extern "C" void AbstractDialogueUI__ctor_m2805 (AbstractDialogueUI_t233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::add_SelectedResponseHandler(System.EventHandler`1<PixelCrushers.DialogueSystem.SelectedResponseEventArgs>)
extern "C" void AbstractDialogueUI_add_SelectedResponseHandler_m3480 (AbstractDialogueUI_t233 * __this, EventHandler_1_t1194 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::remove_SelectedResponseHandler(System.EventHandler`1<PixelCrushers.DialogueSystem.SelectedResponseEventArgs>)
extern "C" void AbstractDialogueUI_remove_SelectedResponseHandler_m3481 (AbstractDialogueUI_t233 * __this, EventHandler_1_t1194 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.AbstractUIRoot PixelCrushers.DialogueSystem.AbstractDialogueUI::get_UIRoot()
// PixelCrushers.DialogueSystem.AbstractDialogueUIControls PixelCrushers.DialogueSystem.AbstractDialogueUI::get_Dialogue()
// PixelCrushers.DialogueSystem.AbstractUIQTEControls PixelCrushers.DialogueSystem.AbstractDialogueUI::get_QTEs()
// PixelCrushers.DialogueSystem.AbstractUIAlertControls PixelCrushers.DialogueSystem.AbstractDialogueUI::get_Alert()
// System.Boolean PixelCrushers.DialogueSystem.AbstractDialogueUI::get_IsOpen()
extern "C" bool AbstractDialogueUI_get_IsOpen_m6275 (AbstractDialogueUI_t233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::set_IsOpen(System.Boolean)
extern "C" void AbstractDialogueUI_set_IsOpen_m6276 (AbstractDialogueUI_t233 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::Awake()
extern "C" void AbstractDialogueUI_Awake_m2806 (AbstractDialogueUI_t233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::Start()
extern "C" void AbstractDialogueUI_Start_m3488 (AbstractDialogueUI_t233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::Open()
extern "C" void AbstractDialogueUI_Open_m3482 (AbstractDialogueUI_t233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::Close()
extern "C" void AbstractDialogueUI_Close_m3483 (AbstractDialogueUI_t233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.AbstractDialogueUI::get_AreNonDialogueControlsVisible()
extern "C" bool AbstractDialogueUI_get_AreNonDialogueControlsVisible_m3489 (AbstractDialogueUI_t233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::ShowAlert(System.String,System.Single)
extern "C" void AbstractDialogueUI_ShowAlert_m2808 (AbstractDialogueUI_t233 * __this, String_t* ___message, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::HideAlert()
extern "C" void AbstractDialogueUI_HideAlert_m3487 (AbstractDialogueUI_t233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::Update()
extern "C" void AbstractDialogueUI_Update_m3490 (AbstractDialogueUI_t233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::ShowSubtitle(PixelCrushers.DialogueSystem.Subtitle)
extern "C" void AbstractDialogueUI_ShowSubtitle_m2810 (AbstractDialogueUI_t233 * __this, Subtitle_t570 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::HideSubtitle(PixelCrushers.DialogueSystem.Subtitle)
extern "C" void AbstractDialogueUI_HideSubtitle_m3484 (AbstractDialogueUI_t233 * __this, Subtitle_t570 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::HideContinueButton(PixelCrushers.DialogueSystem.Subtitle)
extern "C" void AbstractDialogueUI_HideContinueButton_m3491 (AbstractDialogueUI_t233 * __this, Subtitle_t570 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::SetSubtitle(PixelCrushers.DialogueSystem.Subtitle,System.Boolean)
extern "C" void AbstractDialogueUI_SetSubtitle_m3492 (AbstractDialogueUI_t233 * __this, Subtitle_t570 * ___subtitle, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.AbstractUISubtitleControls PixelCrushers.DialogueSystem.AbstractDialogueUI::GetSubtitleControls(PixelCrushers.DialogueSystem.Subtitle)
extern "C" AbstractUISubtitleControls_t246 * AbstractDialogueUI_GetSubtitleControls_m6277 (AbstractDialogueUI_t233 * __this, Subtitle_t570 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::ShowResponses(PixelCrushers.DialogueSystem.Subtitle,PixelCrushers.DialogueSystem.Response[],System.Single)
extern "C" void AbstractDialogueUI_ShowResponses_m2812 (AbstractDialogueUI_t233 * __this, Subtitle_t570 * ___subtitle, ResponseU5BU5D_t571* ___responses, float ___timeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::HideResponses()
extern "C" void AbstractDialogueUI_HideResponses_m2813 (AbstractDialogueUI_t233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::ShowQTEIndicator(System.Int32)
extern "C" void AbstractDialogueUI_ShowQTEIndicator_m3485 (AbstractDialogueUI_t233 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::HideQTEIndicator(System.Int32)
extern "C" void AbstractDialogueUI_HideQTEIndicator_m3486 (AbstractDialogueUI_t233 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::OnClick(System.Object)
extern "C" void AbstractDialogueUI_OnClick_m3493 (AbstractDialogueUI_t233 * __this, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::OnContinue()
extern "C" void AbstractDialogueUI_OnContinue_m2809 (AbstractDialogueUI_t233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::SetPCPortrait(UnityEngine.Texture2D,System.String)
extern "C" void AbstractDialogueUI_SetPCPortrait_m3494 (AbstractDialogueUI_t233 * __this, Texture2D_t90 * ___portraitTexture, String_t* ___portraitName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractDialogueUI::SetActorPortraitTexture(System.String,UnityEngine.Texture2D)
extern "C" void AbstractDialogueUI_SetActorPortraitTexture_m3495 (AbstractDialogueUI_t233 * __this, String_t* ___actorName, Texture2D_t90 * ___portraitTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D PixelCrushers.DialogueSystem.AbstractDialogueUI::GetValidPortraitTexture(System.String,UnityEngine.Texture2D)
extern "C" Texture2D_t90 * AbstractDialogueUI_GetValidPortraitTexture_m2830 (Object_t * __this /* static, unused */, String_t* ___actorName, Texture2D_t90 * ___portraitTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
