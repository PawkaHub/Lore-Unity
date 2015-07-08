#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.BarkDialogueUI
struct BarkDialogueUI_t1454;
// System.EventHandler`1<PixelCrushers.DialogueSystem.SelectedResponseEventArgs>
struct EventHandler_1_t1453;
// PixelCrushers.DialogueSystem.Subtitle
struct Subtitle_t623;
// PixelCrushers.DialogueSystem.Response[]
struct ResponseU5BU5D_t624;
// System.String
struct String_t;

// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::.ctor()
extern "C" void BarkDialogueUI__ctor_m6423 (BarkDialogueUI_t1454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::add_SelectedResponseHandler(System.EventHandler`1<PixelCrushers.DialogueSystem.SelectedResponseEventArgs>)
extern "C" void BarkDialogueUI_add_SelectedResponseHandler_m6424 (BarkDialogueUI_t1454 * __this, EventHandler_1_t1453 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::remove_SelectedResponseHandler(System.EventHandler`1<PixelCrushers.DialogueSystem.SelectedResponseEventArgs>)
extern "C" void BarkDialogueUI_remove_SelectedResponseHandler_m6425 (BarkDialogueUI_t1454 * __this, EventHandler_1_t1453 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::Open()
extern "C" void BarkDialogueUI_Open_m6426 (BarkDialogueUI_t1454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::Close()
extern "C" void BarkDialogueUI_Close_m6427 (BarkDialogueUI_t1454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::ShowSubtitle(PixelCrushers.DialogueSystem.Subtitle)
extern "C" void BarkDialogueUI_ShowSubtitle_m6428 (BarkDialogueUI_t1454 * __this, Subtitle_t623 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::HideSubtitle(PixelCrushers.DialogueSystem.Subtitle)
extern "C" void BarkDialogueUI_HideSubtitle_m6429 (BarkDialogueUI_t1454 * __this, Subtitle_t623 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::ShowResponses(PixelCrushers.DialogueSystem.Subtitle,PixelCrushers.DialogueSystem.Response[],System.Single)
extern "C" void BarkDialogueUI_ShowResponses_m6430 (BarkDialogueUI_t1454 * __this, Subtitle_t623 * ___subtitle, ResponseU5BU5D_t624* ___responses, float ___timeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::HideResponses()
extern "C" void BarkDialogueUI_HideResponses_m6431 (BarkDialogueUI_t1454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::ShowQTEIndicator(System.Int32)
extern "C" void BarkDialogueUI_ShowQTEIndicator_m6432 (BarkDialogueUI_t1454 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::HideQTEIndicator(System.Int32)
extern "C" void BarkDialogueUI_HideQTEIndicator_m6433 (BarkDialogueUI_t1454 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::ShowAlert(System.String,System.Single)
extern "C" void BarkDialogueUI_ShowAlert_m6434 (BarkDialogueUI_t1454 * __this, String_t* ___message, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.BarkDialogueUI::HideAlert()
extern "C" void BarkDialogueUI_HideAlert_m6435 (BarkDialogueUI_t1454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
