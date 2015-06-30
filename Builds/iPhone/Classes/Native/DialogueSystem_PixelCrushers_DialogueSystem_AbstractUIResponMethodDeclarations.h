#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.AbstractUIResponseMenuControls
struct AbstractUIResponseMenuControls_t244;
// PixelCrushers.DialogueSystem.AbstractUISubtitleControls
struct AbstractUISubtitleControls_t246;
// PixelCrushers.DialogueSystem.Response[]
struct ResponseU5BU5D_t553;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.Subtitle
struct Subtitle_t552;
// UnityEngine.Texture2D
struct Texture2D_t90;
// System.String
struct String_t;

// System.Void PixelCrushers.DialogueSystem.AbstractUIResponseMenuControls::.ctor()
extern "C" void AbstractUIResponseMenuControls__ctor_m2741 (AbstractUIResponseMenuControls_t244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.AbstractUISubtitleControls PixelCrushers.DialogueSystem.AbstractUIResponseMenuControls::get_SubtitleReminder()
// System.Void PixelCrushers.DialogueSystem.AbstractUIResponseMenuControls::ClearResponseButtons()
// System.Void PixelCrushers.DialogueSystem.AbstractUIResponseMenuControls::SetResponseButtons(PixelCrushers.DialogueSystem.Response[],UnityEngine.Transform)
// System.Void PixelCrushers.DialogueSystem.AbstractUIResponseMenuControls::StartTimer(System.Single)
// System.Void PixelCrushers.DialogueSystem.AbstractUIResponseMenuControls::ShowResponses(PixelCrushers.DialogueSystem.Subtitle,PixelCrushers.DialogueSystem.Response[],UnityEngine.Transform)
extern "C" void AbstractUIResponseMenuControls_ShowResponses_m4435 (AbstractUIResponseMenuControls_t244 * __this, Subtitle_t552 * ___subtitle, ResponseU5BU5D_t553* ___responses, Transform_t54 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractUIResponseMenuControls::SetPCPortrait(UnityEngine.Texture2D,System.String)
extern "C" void AbstractUIResponseMenuControls_SetPCPortrait_m4436 (AbstractUIResponseMenuControls_t244 * __this, Texture2D_t90 * ___portraitTexture, String_t* ___portraitName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractUIResponseMenuControls::SetActorPortraitTexture(System.String,UnityEngine.Texture2D)
extern "C" void AbstractUIResponseMenuControls_SetActorPortraitTexture_m4437 (AbstractUIResponseMenuControls_t244 * __this, String_t* ___actorName, Texture2D_t90 * ___portraitTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
