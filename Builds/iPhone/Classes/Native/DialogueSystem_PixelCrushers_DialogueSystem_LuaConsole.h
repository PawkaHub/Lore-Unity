#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<System.String>
struct List_1_t1;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// PixelCrushers.DialogueSystem.LuaConsole
struct  LuaConsole_t1078  : public MonoBehaviour_t47
{
	// System.Boolean PixelCrushers.DialogueSystem.LuaConsole::visible
	bool ___visible_2;
	// UnityEngine.Vector2 PixelCrushers.DialogueSystem.LuaConsole::minSize
	Vector2_t97  ___minSize_3;
	// System.Int32 PixelCrushers.DialogueSystem.LuaConsole::maxHistory
	int32_t ___maxHistory_4;
	// System.Collections.Generic.List`1<System.String> PixelCrushers.DialogueSystem.LuaConsole::history
	List_1_t1 * ___history_5;
	// System.Int32 PixelCrushers.DialogueSystem.LuaConsole::historyPosition
	int32_t ___historyPosition_6;
	// System.String PixelCrushers.DialogueSystem.LuaConsole::input
	String_t* ___input_7;
	// System.String PixelCrushers.DialogueSystem.LuaConsole::output
	String_t* ___output_8;
	// UnityEngine.Rect PixelCrushers.DialogueSystem.LuaConsole::windowRect
	Rect_t201  ___windowRect_9;
	// UnityEngine.Rect PixelCrushers.DialogueSystem.LuaConsole::closeButtonRect
	Rect_t201  ___closeButtonRect_10;
	// UnityEngine.Vector2 PixelCrushers.DialogueSystem.LuaConsole::scrollPosition
	Vector2_t97  ___scrollPosition_11;
};
