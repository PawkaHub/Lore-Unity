#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.CharacterInfo
struct CharacterInfo_t628;
// PixelCrushers.DialogueSystem.FormattedText
struct FormattedText_t572;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.DialogueEntry
struct DialogueEntry_t1102;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.Subtitle
struct  Subtitle_t570  : public Object_t
{
	// PixelCrushers.DialogueSystem.CharacterInfo PixelCrushers.DialogueSystem.Subtitle::speakerInfo
	CharacterInfo_t628 * ___speakerInfo_0;
	// PixelCrushers.DialogueSystem.CharacterInfo PixelCrushers.DialogueSystem.Subtitle::listenerInfo
	CharacterInfo_t628 * ___listenerInfo_1;
	// PixelCrushers.DialogueSystem.FormattedText PixelCrushers.DialogueSystem.Subtitle::formattedText
	FormattedText_t572 * ___formattedText_2;
	// System.String PixelCrushers.DialogueSystem.Subtitle::sequence
	String_t* ___sequence_3;
	// System.String PixelCrushers.DialogueSystem.Subtitle::responseMenuSequence
	String_t* ___responseMenuSequence_4;
	// PixelCrushers.DialogueSystem.DialogueEntry PixelCrushers.DialogueSystem.Subtitle::dialogueEntry
	DialogueEntry_t1102 * ___dialogueEntry_5;
	// System.String PixelCrushers.DialogueSystem.Subtitle::entrytag
	String_t* ___entrytag_6;
};
