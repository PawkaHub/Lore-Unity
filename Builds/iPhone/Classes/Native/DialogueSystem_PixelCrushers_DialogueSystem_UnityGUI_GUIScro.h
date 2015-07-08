#pragma once
#include <stdint.h>
// System.Action
struct Action_t250;
// PixelCrushers.DialogueSystem.UnityGUI.GUIControl
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_GUICont.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView
struct  GUIScrollView_t1525  : public GUIControl_t1520
{
	// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::showVerticalScrollbar
	bool ___showVerticalScrollbar_19;
	// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::showHorizontalScrollbar
	bool ___showHorizontalScrollbar_20;
	// System.Int32 PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::padding
	int32_t ___padding_21;
	// UnityEngine.Vector2 PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::scrollViewVector
	Vector2_t97  ___scrollViewVector_22;
	// System.Action PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::MeasureContentHandler
	Action_t250 * ___MeasureContentHandler_23;
	// System.Action PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::DrawContentHandler
	Action_t250 * ___DrawContentHandler_24;
	// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::<contentWidth>k__BackingField
	float ___U3CcontentWidthU3Ek__BackingField_25;
	// System.Single PixelCrushers.DialogueSystem.UnityGUI.GUIScrollView::<contentHeight>k__BackingField
	float ___U3CcontentHeightU3Ek__BackingField_26;
};
