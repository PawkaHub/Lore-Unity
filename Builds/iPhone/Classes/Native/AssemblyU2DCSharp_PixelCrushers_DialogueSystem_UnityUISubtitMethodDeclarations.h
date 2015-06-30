#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityUISubtitleControls
struct UnityUISubtitleControls_t227;
// PixelCrushers.DialogueSystem.Subtitle
struct Subtitle_t552;
// UnityEngine.UI.Text
struct Text_t212;
// PixelCrushers.DialogueSystem.FormattedText
struct FormattedText_t554;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t90;

// System.Void PixelCrushers.DialogueSystem.UnityUISubtitleControls::.ctor()
extern "C" void UnityUISubtitleControls__ctor_m914 (UnityUISubtitleControls_t227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityUISubtitleControls::get_HasText()
extern "C" bool UnityUISubtitleControls_get_HasText_m915 (UnityUISubtitleControls_t227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISubtitleControls::SetActive(System.Boolean)
extern "C" void UnityUISubtitleControls_SetActive_m916 (UnityUISubtitleControls_t227 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISubtitleControls::HideContinueButton()
extern "C" void UnityUISubtitleControls_HideContinueButton_m917 (UnityUISubtitleControls_t227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISubtitleControls::SetSubtitle(PixelCrushers.DialogueSystem.Subtitle)
extern "C" void UnityUISubtitleControls_SetSubtitle_m918 (UnityUISubtitleControls_t227 * __this, Subtitle_t552 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISubtitleControls::ClearSubtitle()
extern "C" void UnityUISubtitleControls_ClearSubtitle_m919 (UnityUISubtitleControls_t227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISubtitleControls::SetFormattedText(UnityEngine.UI.Text,PixelCrushers.DialogueSystem.FormattedText)
extern "C" void UnityUISubtitleControls_SetFormattedText_m920 (UnityUISubtitleControls_t227 * __this, Text_t212 * ___label, FormattedText_t554 * ___formattedText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISubtitleControls::SetActorPortraitTexture(System.String,UnityEngine.Texture2D)
extern "C" void UnityUISubtitleControls_SetActorPortraitTexture_m921 (UnityUISubtitleControls_t227 * __this, String_t* ___actorName, Texture2D_t90 * ___portraitTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISubtitleControls::AutoFocus()
extern "C" void UnityUISubtitleControls_AutoFocus_m922 (UnityUISubtitleControls_t227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
