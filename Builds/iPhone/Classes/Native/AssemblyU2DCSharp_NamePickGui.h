#pragma once
#include <stdint.h>
// System.String
struct String_t;
// ChatGui
struct ChatGui_t338;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// NamePickGui
struct  NamePickGui_t339  : public MonoBehaviour_t47
{
	// UnityEngine.Vector2 NamePickGui::GuiSize
	Vector2_t97  ___GuiSize_3;
	// System.String NamePickGui::InputLine
	String_t* ___InputLine_4;
	// UnityEngine.Rect NamePickGui::guiCenteredRect
	Rect_t201  ___guiCenteredRect_5;
	// ChatGui NamePickGui::chatComponent
	ChatGui_t338 * ___chatComponent_6;
	// System.String NamePickGui::helpText
	String_t* ___helpText_7;
};
