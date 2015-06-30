#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.BarkDialogueUI
struct BarkDialogueUI_t870;
// System.EventHandler`1<PixelCrushers.DialogueSystem.SelectedResponseEventArgs>
struct EventHandler_1_t869;
// PixelCrushers.DialogueSystem.Subtitle
struct Subtitle_t552;
// PixelCrushers.DialogueSystem.Response[]
struct ResponseU5BU5D_t553;
// System.String
struct String_t;

// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::.ctor()
extern "C" void BarkDialogueUI__ctor_m4127 (BarkDialogueUI_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::add_SelectedResponseHandler(System.EventHandler`1<PixelCrushers.DialogueSystem.SelectedResponseEventArgs>)
extern "C" void BarkDialogueUI_add_SelectedResponseHandler_m4128 (BarkDialogueUI_t870 * __this, EventHandler_1_t869 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::remove_SelectedResponseHandler(System.EventHandler`1<PixelCrushers.DialogueSystem.SelectedResponseEventArgs>)
extern "C" void BarkDialogueUI_remove_SelectedResponseHandler_m4129 (BarkDialogueUI_t870 * __this, EventHandler_1_t869 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::Open()
extern "C" void BarkDialogueUI_Open_m4130 (BarkDialogueUI_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::Close()
extern "C" void BarkDialogueUI_Close_m4131 (BarkDialogueUI_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::ShowSubtitle(PixelCrushers.DialogueSystem.Subtitle)
extern "C" void BarkDialogueUI_ShowSubtitle_m4132 (BarkDialogueUI_t870 * __this, Subtitle_t552 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::HideSubtitle(PixelCrushers.DialogueSystem.Subtitle)
extern "C" void BarkDialogueUI_HideSubtitle_m4133 (BarkDialogueUI_t870 * __this, Subtitle_t552 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::ShowResponses(PixelCrushers.DialogueSystem.Subtitle,PixelCrushers.DialogueSystem.Response[],System.Single)
extern "C" void BarkDialogueUI_ShowResponses_m4134 (BarkDialogueUI_t870 * __this, Subtitle_t552 * ___subtitle, ResponseU5BU5D_t553* ___responses, float ___timeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::HideResponses()
extern "C" void BarkDialogueUI_HideResponses_m4135 (BarkDialogueUI_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::ShowQTEIndicator(System.Int32)
extern "C" void BarkDialogueUI_ShowQTEIndicator_m4136 (BarkDialogueUI_t870 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::HideQTEIndicator(System.Int32)
extern "C" void BarkDialogueUI_HideQTEIndicator_m4137 (BarkDialogueUI_t870 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::ShowAlert(System.String,System.Single)
extern "C" void BarkDialogueUI_ShowAlert_m4138 (BarkDialogueUI_t870 * __this, String_t* ___message, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::HideAlert()
extern "C" void BarkDialogueUI_HideAlert_m4139 (BarkDialogueUI_t870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
