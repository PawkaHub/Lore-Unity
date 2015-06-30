#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.UnityGUI.ScaledRect
struct ScaledRect_t199;
// UnityEngine.GUISkin
struct GUISkin_t197;
// System.String
struct String_t;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestTracker/QuestTrackerLine>
struct List_1_t310;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PixelCrushers.DialogueSystem.QuestTracker/QuestDescriptionSource
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_QuestTracker_.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// PixelCrushers.DialogueSystem.QuestTracker
struct  QuestTracker_t308  : public MonoBehaviour_t47
{
	// PixelCrushers.DialogueSystem.UnityGUI.ScaledRect PixelCrushers.DialogueSystem.QuestTracker::rect
	ScaledRect_t199 * ___rect_2;
	// UnityEngine.GUISkin PixelCrushers.DialogueSystem.QuestTracker::guiSkin
	GUISkin_t197 * ___guiSkin_3;
	// System.String PixelCrushers.DialogueSystem.QuestTracker::TitleStyle
	String_t* ___TitleStyle_4;
	// System.String PixelCrushers.DialogueSystem.QuestTracker::SuccessTitleStyle
	String_t* ___SuccessTitleStyle_5;
	// System.String PixelCrushers.DialogueSystem.QuestTracker::FailureTitleStyle
	String_t* ___FailureTitleStyle_6;
	// System.String PixelCrushers.DialogueSystem.QuestTracker::ActiveEntryStyle
	String_t* ___ActiveEntryStyle_7;
	// System.String PixelCrushers.DialogueSystem.QuestTracker::SuccessEntryStyle
	String_t* ___SuccessEntryStyle_8;
	// System.String PixelCrushers.DialogueSystem.QuestTracker::FailureEntryStyle
	String_t* ___FailureEntryStyle_9;
	// System.Boolean PixelCrushers.DialogueSystem.QuestTracker::showActiveQuests
	bool ___showActiveQuests_10;
	// System.Boolean PixelCrushers.DialogueSystem.QuestTracker::showCompletedQuests
	bool ___showCompletedQuests_11;
	// System.Boolean PixelCrushers.DialogueSystem.QuestTracker::showCompletedEntryText
	bool ___showCompletedEntryText_12;
	// PixelCrushers.DialogueSystem.QuestTracker/QuestDescriptionSource PixelCrushers.DialogueSystem.QuestTracker::questDescriptionSource
	int32_t ___questDescriptionSource_13;
	// UnityEngine.Rect PixelCrushers.DialogueSystem.QuestTracker::screenRect
	Rect_t201  ___screenRect_14;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestTracker/QuestTrackerLine> PixelCrushers.DialogueSystem.QuestTracker::lines
	List_1_t310 * ___lines_15;
};
