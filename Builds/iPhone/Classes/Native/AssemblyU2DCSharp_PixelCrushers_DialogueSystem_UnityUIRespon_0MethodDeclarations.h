#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityUIResponseMenuControls
struct UnityUIResponseMenuControls_t228;
// PixelCrushers.DialogueSystem.AbstractUISubtitleControls
struct AbstractUISubtitleControls_t246;
// UnityEngine.Texture2D
struct Texture2D_t90;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.Response[]
struct ResponseU5BU5D_t571;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.UnityUIResponseButton
struct UnityUIResponseButton_t236;
// PixelCrushers.DialogueSystem.Response
struct Response_t235;

// System.Void PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::.ctor()
extern "C" void UnityUIResponseMenuControls__ctor_m897 (UnityUIResponseMenuControls_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::SetPCPortrait(UnityEngine.Texture2D,System.String)
extern "C" void UnityUIResponseMenuControls_SetPCPortrait_m898 (UnityUIResponseMenuControls_t228 * __this, Texture2D_t90 * ___portraitTexture, String_t* ___portraitName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::SetActorPortraitTexture(System.String,UnityEngine.Texture2D)
extern "C" void UnityUIResponseMenuControls_SetActorPortraitTexture_m899 (UnityUIResponseMenuControls_t228 * __this, String_t* ___actorName, Texture2D_t90 * ___portraitTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.AbstractUISubtitleControls PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::get_SubtitleReminder()
extern "C" AbstractUISubtitleControls_t246 * UnityUIResponseMenuControls_get_SubtitleReminder_m900 (UnityUIResponseMenuControls_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::SetActive(System.Boolean)
extern "C" void UnityUIResponseMenuControls_SetActive_m901 (UnityUIResponseMenuControls_t228 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::ClearResponseButtons()
extern "C" void UnityUIResponseMenuControls_ClearResponseButtons_m902 (UnityUIResponseMenuControls_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::SetResponseButtons(PixelCrushers.DialogueSystem.Response[],UnityEngine.Transform)
extern "C" void UnityUIResponseMenuControls_SetResponseButtons_m903 (UnityUIResponseMenuControls_t228 * __this, ResponseU5BU5D_t571* ___responses, Transform_t54 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::SetResponseButton(PixelCrushers.DialogueSystem.UnityUIResponseButton,PixelCrushers.DialogueSystem.Response,UnityEngine.Transform)
extern "C" void UnityUIResponseMenuControls_SetResponseButton_m904 (UnityUIResponseMenuControls_t228 * __this, UnityUIResponseButton_t236 * ___button, Response_t235 * ___response, Transform_t54 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::GetNextAvailableResponseButtonPosition(System.Int32,System.Int32)
extern "C" int32_t UnityUIResponseMenuControls_GetNextAvailableResponseButtonPosition_m905 (UnityUIResponseMenuControls_t228 * __this, int32_t ___start, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::DestroyInstantiatedButtons()
extern "C" void UnityUIResponseMenuControls_DestroyInstantiatedButtons_m906 (UnityUIResponseMenuControls_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::NotifyContentChanged()
extern "C" void UnityUIResponseMenuControls_NotifyContentChanged_m907 (UnityUIResponseMenuControls_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::StartTimer(System.Single)
extern "C" void UnityUIResponseMenuControls_StartTimer_m908 (UnityUIResponseMenuControls_t228 * __this, float ___timeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::OnTimeout()
extern "C" void UnityUIResponseMenuControls_OnTimeout_m909 (UnityUIResponseMenuControls_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUIResponseMenuControls::AutoFocus()
extern "C" void UnityUIResponseMenuControls_AutoFocus_m910 (UnityUIResponseMenuControls_t228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
