#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.UnityGUI.ScaledRect
struct ScaledRect_t199;
// PixelCrushers.DialogueSystem.UnityGUI.AutoSize
struct AutoSize_t1348;
// PixelCrushers.DialogueSystem.UnityGUI.Fit
struct Fit_t1349;
// PixelCrushers.DialogueSystem.UnityGUI.Navigation
struct Navigation_t1350;
// System.String
struct String_t;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.UnityGUI.GUIControl>
struct List_1_t1351;
// System.Comparison`1<PixelCrushers.DialogueSystem.UnityGUI.GUIControl>
struct Comparison_1_t1352;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// PixelCrushers.DialogueSystem.UnityGUI.GUIControl
struct  GUIControl_t1261  : public MonoBehaviour_t47
{
	// System.Int32 PixelCrushers.DialogueSystem.UnityGUI.GUIControl::depth
	int32_t ___depth_2;
	// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUIControl::depthSortChildren
	bool ___depthSortChildren_3;
	// PixelCrushers.DialogueSystem.UnityGUI.ScaledRect PixelCrushers.DialogueSystem.UnityGUI.GUIControl::scaledRect
	ScaledRect_t199 * ___scaledRect_4;
	// PixelCrushers.DialogueSystem.UnityGUI.AutoSize PixelCrushers.DialogueSystem.UnityGUI.GUIControl::autoSize
	AutoSize_t1348 * ___autoSize_5;
	// PixelCrushers.DialogueSystem.UnityGUI.Fit PixelCrushers.DialogueSystem.UnityGUI.GUIControl::fit
	Fit_t1349 * ___fit_6;
	// PixelCrushers.DialogueSystem.UnityGUI.Navigation PixelCrushers.DialogueSystem.UnityGUI.GUIControl::navigation
	Navigation_t1350 * ___navigation_7;
	// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUIControl::visible
	bool ___visible_8;
	// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUIControl::clipChildren
	bool ___clipChildren_9;
	// System.String PixelCrushers.DialogueSystem.UnityGUI.GUIControl::fullName
	String_t* ___fullName_10;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.UnityGUI.GUIControl> PixelCrushers.DialogueSystem.UnityGUI.GUIControl::children
	List_1_t1351 * ___children_11;
	// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUIControl::needToUpdateLayout
	bool ___needToUpdateLayout_12;
	// UnityEngine.Vector2 PixelCrushers.DialogueSystem.UnityGUI.GUIControl::windowSize
	Vector2_t97  ___windowSize_13;
	// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUIControl::navigationSelectButtonClicked
	bool ___navigationSelectButtonClicked_14;
	// UnityEngine.Rect PixelCrushers.DialogueSystem.UnityGUI.GUIControl::<rect>k__BackingField
	Rect_t201  ___U3CrectU3Ek__BackingField_15;
	// UnityEngine.Vector2 PixelCrushers.DialogueSystem.UnityGUI.GUIControl::<Offset>k__BackingField
	Vector2_t97  ___U3COffsetU3Ek__BackingField_16;
	// UnityEngine.Vector2 PixelCrushers.DialogueSystem.UnityGUI.GUIControl::<dRect>k__BackingField
	Vector2_t97  ___U3CdRectU3Ek__BackingField_17;
};
struct GUIControl_t1261_StaticFields{
	// System.Comparison`1<PixelCrushers.DialogueSystem.UnityGUI.GUIControl> PixelCrushers.DialogueSystem.UnityGUI.GUIControl::<>f__am$cache10
	Comparison_1_t1352 * ___U3CU3Ef__amU24cache10_18;
};
