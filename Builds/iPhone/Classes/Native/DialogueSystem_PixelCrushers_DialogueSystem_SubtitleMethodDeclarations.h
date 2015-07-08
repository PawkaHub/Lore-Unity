#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.Subtitle
struct Subtitle_t623;
// PixelCrushers.DialogueSystem.CharacterInfo
struct CharacterInfo_t685;
// PixelCrushers.DialogueSystem.FormattedText
struct FormattedText_t625;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.DialogueEntry
struct DialogueEntry_t1361;
// UnityEngine.Texture2D
struct Texture2D_t90;

// System.Void PixelCrushers.DialogueSystem.Subtitle::.ctor(PixelCrushers.DialogueSystem.CharacterInfo,PixelCrushers.DialogueSystem.CharacterInfo,PixelCrushers.DialogueSystem.FormattedText,System.String,System.String,PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" void Subtitle__ctor_m6420 (Subtitle_t623 * __this, CharacterInfo_t685 * ___speakerInfo, CharacterInfo_t685 * ___listenerInfo, FormattedText_t625 * ___formattedText, String_t* ___sequence, String_t* ___responseMenuSequence, DialogueEntry_t1361 * ___dialogueEntry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Subtitle::.ctor(PixelCrushers.DialogueSystem.CharacterInfo,PixelCrushers.DialogueSystem.CharacterInfo,PixelCrushers.DialogueSystem.FormattedText,System.String,System.String,PixelCrushers.DialogueSystem.DialogueEntry,System.String)
extern "C" void Subtitle__ctor_m6421 (Subtitle_t623 * __this, CharacterInfo_t685 * ___speakerInfo, CharacterInfo_t685 * ___listenerInfo, FormattedText_t625 * ___formattedText, String_t* ___sequence, String_t* ___responseMenuSequence, DialogueEntry_t1361 * ___dialogueEntry, String_t* ___entrytag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Subtitle::CheckVariableInputPrompt()
extern "C" void Subtitle_CheckVariableInputPrompt_m6422 (Subtitle_t623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D PixelCrushers.DialogueSystem.Subtitle::GetSpeakerPortrait()
extern "C" Texture2D_t90 * Subtitle_GetSpeakerPortrait_m3017 (Subtitle_t623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
