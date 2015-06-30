#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.AudioClip
struct AudioClip_t261;
// UnityEngine.UI.Text
struct Text_t212;
// UnityEngine.AudioSource
struct AudioSource_t262;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PixelCrushers.DialogueSystem.UnityUITypewriterEffect
struct  UnityUITypewriterEffect_t255  : public MonoBehaviour_t47
{
	// System.Single PixelCrushers.DialogueSystem.UnityUITypewriterEffect::charactersPerSecond
	float ___charactersPerSecond_8;
	// UnityEngine.AudioClip PixelCrushers.DialogueSystem.UnityUITypewriterEffect::audioClip
	AudioClip_t261 * ___audioClip_9;
	// UnityEngine.UI.Text PixelCrushers.DialogueSystem.UnityUITypewriterEffect::control
	Text_t212 * ___control_10;
	// UnityEngine.AudioSource PixelCrushers.DialogueSystem.UnityUITypewriterEffect::audioSource
	AudioSource_t262 * ___audioSource_11;
	// System.String PixelCrushers.DialogueSystem.UnityUITypewriterEffect::original
	String_t* ___original_12;
	// System.Collections.Generic.List`1<System.String> PixelCrushers.DialogueSystem.UnityUITypewriterEffect::closureTags
	List_1_t1 * ___closureTags_13;
	// System.Boolean PixelCrushers.DialogueSystem.UnityUITypewriterEffect::<IsPlaying>k__BackingField
	bool ___U3CIsPlayingU3Ek__BackingField_14;
};
