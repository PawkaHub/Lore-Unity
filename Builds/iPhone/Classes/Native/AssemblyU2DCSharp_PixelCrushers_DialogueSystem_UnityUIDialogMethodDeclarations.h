#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityUIDialogueUI
struct UnityUIDialogueUI_t223;
// PixelCrushers.DialogueSystem.AbstractUIRoot
struct AbstractUIRoot_t245;
// PixelCrushers.DialogueSystem.AbstractDialogueUIControls
struct AbstractDialogueUIControls_t229;
// PixelCrushers.DialogueSystem.AbstractUIQTEControls
struct AbstractUIQTEControls_t234;
// PixelCrushers.DialogueSystem.AbstractUIAlertControls
struct AbstractUIAlertControls_t221;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.Subtitle
struct Subtitle_t570;
// PixelCrushers.DialogueSystem.Response[]
struct ResponseU5BU5D_t571;

// System.Void PixelCrushers.DialogueSystem.UnityUIDialogueUI::.ctor()
extern "C" void UnityUIDialogueUI__ctor_m860 (UnityUIDialogueUI_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.AbstractUIRoot PixelCrushers.DialogueSystem.UnityUIDialogueUI::get_UIRoot()
extern "C" AbstractUIRoot_t245 * UnityUIDialogueUI_get_UIRoot_m861 (UnityUIDialogueUI_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.AbstractDialogueUIControls PixelCrushers.DialogueSystem.UnityUIDialogueUI::get_Dialogue()
extern "C" AbstractDialogueUIControls_t229 * UnityUIDialogueUI_get_Dialogue_m862 (UnityUIDialogueUI_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.AbstractUIQTEControls PixelCrushers.DialogueSystem.UnityUIDialogueUI::get_QTEs()
extern "C" AbstractUIQTEControls_t234 * UnityUIDialogueUI_get_QTEs_m863 (UnityUIDialogueUI_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.AbstractUIAlertControls PixelCrushers.DialogueSystem.UnityUIDialogueUI::get_Alert()
extern "C" AbstractUIAlertControls_t221 * UnityUIDialogueUI_get_Alert_m864 (UnityUIDialogueUI_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIDialogueUI::Awake()
extern "C" void UnityUIDialogueUI_Awake_m865 (UnityUIDialogueUI_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIDialogueUI::FindControls()
extern "C" void UnityUIDialogueUI_FindControls_m866 (UnityUIDialogueUI_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIDialogueUI::ShowAlert(System.String,System.Single)
extern "C" void UnityUIDialogueUI_ShowAlert_m867 (UnityUIDialogueUI_t223 * __this, String_t* ___message, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIDialogueUI::OnContinue()
extern "C" void UnityUIDialogueUI_OnContinue_m868 (UnityUIDialogueUI_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIDialogueUI::ShowSubtitle(PixelCrushers.DialogueSystem.Subtitle)
extern "C" void UnityUIDialogueUI_ShowSubtitle_m869 (UnityUIDialogueUI_t223 * __this, Subtitle_t570 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIDialogueUI::CheckSubtitleAutoFocus(PixelCrushers.DialogueSystem.Subtitle)
extern "C" void UnityUIDialogueUI_CheckSubtitleAutoFocus_m870 (UnityUIDialogueUI_t223 * __this, Subtitle_t570 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIDialogueUI::ShowResponses(PixelCrushers.DialogueSystem.Subtitle,PixelCrushers.DialogueSystem.Response[],System.Single)
extern "C" void UnityUIDialogueUI_ShowResponses_m871 (UnityUIDialogueUI_t223 * __this, Subtitle_t570 * ___subtitle, ResponseU5BU5D_t571* ___responses, float ___timeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIDialogueUI::CheckResponseMenuAutoFocus()
extern "C" void UnityUIDialogueUI_CheckResponseMenuAutoFocus_m872 (UnityUIDialogueUI_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIDialogueUI::HideResponses()
extern "C" void UnityUIDialogueUI_HideResponses_m873 (UnityUIDialogueUI_t223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
