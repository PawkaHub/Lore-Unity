#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t49;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// GUICustomAuth/GuiState
#include "AssemblyU2DCSharp_GUICustomAuth_GuiState.h"
// GUICustomAuth
struct  GUICustomAuth_t369  : public MonoBehaviour_t47
{
	// UnityEngine.Rect GUICustomAuth::GuiRect
	Rect_t201  ___GuiRect_2;
	// System.String GUICustomAuth::authName
	String_t* ___authName_3;
	// System.String GUICustomAuth::authToken
	String_t* ___authToken_4;
	// System.String GUICustomAuth::authDebugMessage
	String_t* ___authDebugMessage_5;
	// GUICustomAuth/GuiState GUICustomAuth::guiState
	int32_t ___guiState_6;
	// UnityEngine.GameObject GUICustomAuth::RootOf3dButtons
	GameObject_t49 * ___RootOf3dButtons_7;
};
