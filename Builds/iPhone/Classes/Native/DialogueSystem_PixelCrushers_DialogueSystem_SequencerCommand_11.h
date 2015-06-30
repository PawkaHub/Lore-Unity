#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t903;
// UnityEngine.GUITexture
struct GUITexture_t904;
// UnityEngine.GameObject
struct GameObject_t49;
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand
#include "DialogueSystem_PixelCrushers_DialogueSystem_SequencerCommand.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandFade
struct  SequencerCommandFade_t905  : public SequencerCommand_t209
{
	// System.String PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandFade::direction
	String_t* ___direction_7;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandFade::duration
	float ___duration_8;
	// UnityEngine.Color PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandFade::color
	Color_t121  ___color_9;
	// System.Boolean PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandFade::fadeIn
	bool ___fadeIn_10;
	// UnityEngine.Texture PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandFade::texture
	Texture_t903 * ___texture_11;
	// UnityEngine.GUITexture PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandFade::faderGuiTexture
	GUITexture_t904 * ___faderGuiTexture_12;
	// UnityEngine.GameObject PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandFade::fader
	GameObject_t49 * ___fader_13;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandFade::startTime
	float ___startTime_14;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandFade::endTime
	float ___endTime_15;
};
