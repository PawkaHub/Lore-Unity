#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.AbstractUISubtitleControls
struct AbstractUISubtitleControls_t246;
// PixelCrushers.DialogueSystem.Subtitle
struct Subtitle_t552;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t90;

// System.Void PixelCrushers.DialogueSystem.AbstractUISubtitleControls::.ctor()
extern "C" void AbstractUISubtitleControls__ctor_m2757 (AbstractUISubtitleControls_t246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.AbstractUISubtitleControls::get_HasText()
// System.Void PixelCrushers.DialogueSystem.AbstractUISubtitleControls::SetSubtitle(PixelCrushers.DialogueSystem.Subtitle)
// System.Void PixelCrushers.DialogueSystem.AbstractUISubtitleControls::ClearSubtitle()
// System.Void PixelCrushers.DialogueSystem.AbstractUISubtitleControls::HideContinueButton()
extern "C" void AbstractUISubtitleControls_HideContinueButton_m4438 (AbstractUISubtitleControls_t246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractUISubtitleControls::ShowSubtitle(PixelCrushers.DialogueSystem.Subtitle)
extern "C" void AbstractUISubtitleControls_ShowSubtitle_m4439 (AbstractUISubtitleControls_t246 * __this, Subtitle_t552 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractUISubtitleControls::SetActorPortraitTexture(System.String,UnityEngine.Texture2D)
extern "C" void AbstractUISubtitleControls_SetActorPortraitTexture_m4440 (AbstractUISubtitleControls_t246 * __this, String_t* ___actorName, Texture2D_t90 * ___portraitTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
