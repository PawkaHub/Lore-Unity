#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls
struct UnityResponseMenuControls_t1648;
// PixelCrushers.DialogueSystem.AbstractUISubtitleControls
struct AbstractUISubtitleControls_t246;
// UnityEngine.Texture2D
struct Texture2D_t90;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.Response[]
struct ResponseU5BU5D_t624;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.UnityGUI.GUIButton
struct GUIButton_t1522;
// PixelCrushers.DialogueSystem.Response
struct Response_t235;

// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::.ctor()
extern "C" void UnityResponseMenuControls__ctor_m7489 (UnityResponseMenuControls_t1648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.AbstractUISubtitleControls PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::get_SubtitleReminder()
extern "C" AbstractUISubtitleControls_t246 * UnityResponseMenuControls_get_SubtitleReminder_m7490 (UnityResponseMenuControls_t1648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::SetPCPortrait(UnityEngine.Texture2D,System.String)
extern "C" void UnityResponseMenuControls_SetPCPortrait_m7491 (UnityResponseMenuControls_t1648 * __this, Texture2D_t90 * ___portraitTexture, String_t* ___portraitName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::SetActorPortraitTexture(System.String,UnityEngine.Texture2D)
extern "C" void UnityResponseMenuControls_SetActorPortraitTexture_m7492 (UnityResponseMenuControls_t1648 * __this, String_t* ___actorName, Texture2D_t90 * ___portraitTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::SetActive(System.Boolean)
extern "C" void UnityResponseMenuControls_SetActive_m7493 (UnityResponseMenuControls_t1648 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::ClearResponseButtons()
extern "C" void UnityResponseMenuControls_ClearResponseButtons_m7494 (UnityResponseMenuControls_t1648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::SetResponseButtons(PixelCrushers.DialogueSystem.Response[],UnityEngine.Transform)
extern "C" void UnityResponseMenuControls_SetResponseButtons_m7495 (UnityResponseMenuControls_t1648 * __this, ResponseU5BU5D_t624* ___responses, Transform_t54 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::SetResponseButton(PixelCrushers.DialogueSystem.UnityGUI.GUIButton,PixelCrushers.DialogueSystem.Response,UnityEngine.Transform)
extern "C" void UnityResponseMenuControls_SetResponseButton_m7496 (UnityResponseMenuControls_t1648 * __this, GUIButton_t1522 * ___button, Response_t235 * ___response, Transform_t54 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::GetNextAvailableResponseButtonPosition(System.Int32,System.Int32)
extern "C" int32_t UnityResponseMenuControls_GetNextAvailableResponseButtonPosition_m7497 (UnityResponseMenuControls_t1648 * __this, int32_t ___start, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::StartTimer(System.Single)
extern "C" void UnityResponseMenuControls_StartTimer_m7498 (UnityResponseMenuControls_t1648 * __this, float ___timeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityGUI.UnityResponseMenuControls::OnTimeout()
extern "C" void UnityResponseMenuControls_OnTimeout_m7499 (UnityResponseMenuControls_t1648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
