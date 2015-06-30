#pragma once
#include <stdint.h>
// UnityEngine.GUISkin
struct GUISkin_t197;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t303;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// HubGui/DemoBtn
#include "AssemblyU2DCSharp_HubGui_DemoBtn.h"
// HubGui
struct  HubGui_t346  : public MonoBehaviour_t47
{
	// UnityEngine.GUISkin HubGui::Skin
	GUISkin_t197 * ___Skin_2;
	// UnityEngine.Vector2 HubGui::scrollPos
	Vector2_t97  ___scrollPos_3;
	// System.String HubGui::demoDescription
	String_t* ___demoDescription_4;
	// HubGui/DemoBtn HubGui::demoBtn
	DemoBtn_t345  ___demoBtn_5;
	// HubGui/DemoBtn HubGui::webLink
	DemoBtn_t345  ___webLink_6;
	// UnityEngine.GUIStyle HubGui::m_Headline
	GUIStyle_t303 * ___m_Headline_7;
};
