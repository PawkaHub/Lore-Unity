#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<Consolation.Console/Log>
struct List_1_t540;
// System.Collections.Generic.Dictionary`2<UnityEngine.LogType,UnityEngine.Color>
struct Dictionary_2_t541;
// UnityEngine.GUIContent
struct GUIContent_t542;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// Consolation.Console
struct  Console_t543  : public MonoBehaviour_t47
{
	// UnityEngine.KeyCode Consolation.Console::toggleKey
	int32_t ___toggleKey_4;
	// System.Boolean Consolation.Console::shakeToOpen
	bool ___shakeToOpen_5;
	// System.Single Consolation.Console::shakeAcceleration
	float ___shakeAcceleration_6;
	// System.Collections.Generic.List`1<Consolation.Console/Log> Consolation.Console::logs
	List_1_t540 * ___logs_7;
	// UnityEngine.Vector2 Consolation.Console::scrollPosition
	Vector2_t97  ___scrollPosition_8;
	// System.Boolean Consolation.Console::visible
	bool ___visible_9;
	// System.Boolean Consolation.Console::collapse
	bool ___collapse_10;
	// UnityEngine.Rect Consolation.Console::titleBarRect
	Rect_t201  ___titleBarRect_14;
	// UnityEngine.Rect Consolation.Console::windowRect
	Rect_t201  ___windowRect_15;
};
struct Console_t543_StaticFields{
	// System.Collections.Generic.Dictionary`2<UnityEngine.LogType,UnityEngine.Color> Consolation.Console::logTypeColors
	Dictionary_2_t541 * ___logTypeColors_11;
	// UnityEngine.GUIContent Consolation.Console::clearLabel
	GUIContent_t542 * ___clearLabel_12;
	// UnityEngine.GUIContent Consolation.Console::collapseLabel
	GUIContent_t542 * ___collapseLabel_13;
};
