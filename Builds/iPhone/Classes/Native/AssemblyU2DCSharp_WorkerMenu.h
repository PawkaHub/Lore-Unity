#pragma once
#include <stdint.h>
// UnityEngine.GUISkin
struct GUISkin_t197;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// WorkerMenu
struct  WorkerMenu_t404  : public MonoBehaviour_t47
{
	// UnityEngine.GUISkin WorkerMenu::Skin
	GUISkin_t197 * ___Skin_2;
	// UnityEngine.Vector2 WorkerMenu::WidthAndHeight
	Vector2_t97  ___WidthAndHeight_3;
	// System.String WorkerMenu::roomName
	String_t* ___roomName_4;
	// UnityEngine.Vector2 WorkerMenu::scrollPos
	Vector2_t97  ___scrollPos_5;
	// System.Boolean WorkerMenu::connectFailed
	bool ___connectFailed_6;
	// System.String WorkerMenu::errorDialog
	String_t* ___errorDialog_9;
	// System.Double WorkerMenu::timeToClearDialog
	double ___timeToClearDialog_10;
};
struct WorkerMenu_t404_StaticFields{
	// System.String WorkerMenu::SceneNameMenu
	String_t* ___SceneNameMenu_7;
	// System.String WorkerMenu::SceneNameGame
	String_t* ___SceneNameGame_8;
};
