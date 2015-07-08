#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PixelCrushers.DialogueSystem.GameSaver/FunctionOnUse
#include "DialogueSystem_PixelCrushers_DialogueSystem_GameSaver_Functi.h"
// PixelCrushers.DialogueSystem.GameSaver
struct  GameSaver_t1528  : public MonoBehaviour_t47
{
	// System.String PixelCrushers.DialogueSystem.GameSaver::playerPrefsKey
	String_t* ___playerPrefsKey_2;
	// System.Int32 PixelCrushers.DialogueSystem.GameSaver::slot
	int32_t ___slot_3;
	// PixelCrushers.DialogueSystem.GameSaver/FunctionOnUse PixelCrushers.DialogueSystem.GameSaver::functionOnUse
	int32_t ___functionOnUse_4;
	// System.Boolean PixelCrushers.DialogueSystem.GameSaver::applyGameStateWhenLoadingLevels
	bool ___applyGameStateWhenLoadingLevels_5;
	// System.Boolean PixelCrushers.DialogueSystem.GameSaver::includeAllItemData
	bool ___includeAllItemData_6;
	// System.Boolean PixelCrushers.DialogueSystem.GameSaver::includeSimStatus
	bool ___includeSimStatus_7;
	// System.String PixelCrushers.DialogueSystem.GameSaver::startingLevel
	String_t* ___startingLevel_8;
	// System.Boolean PixelCrushers.DialogueSystem.GameSaver::dontDestroyOnLoad
	bool ___dontDestroyOnLoad_9;
};
