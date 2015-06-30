#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.UnityGUI.GUIControl[]
struct GUIControlU5BU5D_t1054;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// PixelCrushers.DialogueSystem.UnityGUI.Navigation
struct  Navigation_t1026  : public Object_t
{
	// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.Navigation::enabled
	bool ___enabled_2;
	// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.Navigation::focusFirstControlOnEnable
	bool ___focusFirstControlOnEnable_3;
	// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.Navigation::jumpToMousePosition
	bool ___jumpToMousePosition_4;
	// PixelCrushers.DialogueSystem.UnityGUI.GUIControl[] PixelCrushers.DialogueSystem.UnityGUI.Navigation::order
	GUIControlU5BU5D_t1054* ___order_5;
	// System.String PixelCrushers.DialogueSystem.UnityGUI.Navigation::clickButton
	String_t* ___clickButton_6;
	// UnityEngine.KeyCode PixelCrushers.DialogueSystem.UnityGUI.Navigation::click
	int32_t ___click_7;
	// UnityEngine.KeyCode PixelCrushers.DialogueSystem.UnityGUI.Navigation::previous
	int32_t ___previous_8;
	// UnityEngine.KeyCode PixelCrushers.DialogueSystem.UnityGUI.Navigation::next
	int32_t ___next_9;
	// System.String PixelCrushers.DialogueSystem.UnityGUI.Navigation::axis
	String_t* ___axis_10;
	// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.Navigation::invertAxis
	bool ___invertAxis_11;
	// System.Single PixelCrushers.DialogueSystem.UnityGUI.Navigation::axisRepeatDelay
	float ___axisRepeatDelay_12;
	// System.Single PixelCrushers.DialogueSystem.UnityGUI.Navigation::mouseWheelSensitivity
	float ___mouseWheelSensitivity_13;
	// System.Int32 PixelCrushers.DialogueSystem.UnityGUI.Navigation::current
	int32_t ___current_14;
	// System.Single PixelCrushers.DialogueSystem.UnityGUI.Navigation::axisRepeatTime
	float ___axisRepeatTime_15;
	// System.Single PixelCrushers.DialogueSystem.UnityGUI.Navigation::mouseWheelY
	float ___mouseWheelY_16;
	// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.Navigation::isAxisPrevDown
	bool ___isAxisPrevDown_17;
	// System.Boolean PixelCrushers.DialogueSystem.UnityGUI.Navigation::isAxisNextDown
	bool ___isAxisNextDown_18;
	// System.Single PixelCrushers.DialogueSystem.UnityGUI.Navigation::timeNextRelease
	float ___timeNextRelease_19;
};
