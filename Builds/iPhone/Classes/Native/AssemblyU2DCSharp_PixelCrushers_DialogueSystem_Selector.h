#pragma once
#include <stdint.h>
// UnityEngine.GUISkin
struct GUISkin_t197;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.Selector/Reticle
struct Reticle_t313;
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.GameObject
struct GameObject_t49;
// PixelCrushers.DialogueSystem.Usable
struct Usable_t279;
// UnityEngine.GUIStyle
struct GUIStyle_t303;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t317;
// PixelCrushers.DialogueSystem.SelectedUsableObjectDelegate
struct SelectedUsableObjectDelegate_t304;
// PixelCrushers.DialogueSystem.DeselectedUsableObjectDelegate
struct DeselectedUsableObjectDelegate_t305;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// PixelCrushers.DialogueSystem.Selector/SelectAt
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_Selector_Sele.h"
// PixelCrushers.DialogueSystem.Selector/DistanceFrom
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_Selector_Dist.h"
// PixelCrushers.DialogueSystem.Selector/Dimension
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_Selector_Dime.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// PixelCrushers.DialogueSystem.UnityGUI.TextStyle
#include "DialogueSystem_PixelCrushers_DialogueSystem_UnityGUI_TextSty.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PixelCrushers.DialogueSystem.Selector
struct  Selector_t277  : public MonoBehaviour_t47
{
	// UnityEngine.LayerMask PixelCrushers.DialogueSystem.Selector::layerMask
	LayerMask_t87  ___layerMask_3;
	// PixelCrushers.DialogueSystem.Selector/SelectAt PixelCrushers.DialogueSystem.Selector::selectAt
	int32_t ___selectAt_4;
	// PixelCrushers.DialogueSystem.Selector/DistanceFrom PixelCrushers.DialogueSystem.Selector::distanceFrom
	int32_t ___distanceFrom_5;
	// System.Single PixelCrushers.DialogueSystem.Selector::maxSelectionDistance
	float ___maxSelectionDistance_6;
	// PixelCrushers.DialogueSystem.Selector/Dimension PixelCrushers.DialogueSystem.Selector::runRaycasts
	int32_t ___runRaycasts_7;
	// System.Boolean PixelCrushers.DialogueSystem.Selector::raycastAll
	bool ___raycastAll_8;
	// System.Boolean PixelCrushers.DialogueSystem.Selector::useDefaultGUI
	bool ___useDefaultGUI_9;
	// UnityEngine.GUISkin PixelCrushers.DialogueSystem.Selector::guiSkin
	GUISkin_t197 * ___guiSkin_10;
	// System.String PixelCrushers.DialogueSystem.Selector::guiStyleName
	String_t* ___guiStyleName_11;
	// UnityEngine.TextAnchor PixelCrushers.DialogueSystem.Selector::alignment
	int32_t ___alignment_12;
	// PixelCrushers.DialogueSystem.UnityGUI.TextStyle PixelCrushers.DialogueSystem.Selector::textStyle
	int32_t ___textStyle_13;
	// UnityEngine.Color PixelCrushers.DialogueSystem.Selector::textStyleColor
	Color_t121  ___textStyleColor_14;
	// UnityEngine.Color PixelCrushers.DialogueSystem.Selector::inRangeColor
	Color_t121  ___inRangeColor_15;
	// UnityEngine.Color PixelCrushers.DialogueSystem.Selector::outOfRangeColor
	Color_t121  ___outOfRangeColor_16;
	// PixelCrushers.DialogueSystem.Selector/Reticle PixelCrushers.DialogueSystem.Selector::reticle
	Reticle_t313 * ___reticle_17;
	// UnityEngine.KeyCode PixelCrushers.DialogueSystem.Selector::useKey
	int32_t ___useKey_18;
	// System.String PixelCrushers.DialogueSystem.Selector::useButton
	String_t* ___useButton_19;
	// System.String PixelCrushers.DialogueSystem.Selector::defaultUseMessage
	String_t* ___defaultUseMessage_20;
	// System.Boolean PixelCrushers.DialogueSystem.Selector::broadcastToChildren
	bool ___broadcastToChildren_21;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.Selector::actorTransform
	Transform_t54 * ___actorTransform_22;
	// System.Boolean PixelCrushers.DialogueSystem.Selector::debug
	bool ___debug_23;
	// UnityEngine.GameObject PixelCrushers.DialogueSystem.Selector::selection
	GameObject_t49 * ___selection_24;
	// PixelCrushers.DialogueSystem.Usable PixelCrushers.DialogueSystem.Selector::usable
	Usable_t279 * ___usable_25;
	// System.String PixelCrushers.DialogueSystem.Selector::heading
	String_t* ___heading_26;
	// System.String PixelCrushers.DialogueSystem.Selector::useMessage
	String_t* ___useMessage_27;
	// System.Single PixelCrushers.DialogueSystem.Selector::distance
	float ___distance_28;
	// UnityEngine.GUIStyle PixelCrushers.DialogueSystem.Selector::guiStyle
	GUIStyle_t303 * ___guiStyle_29;
	// UnityEngine.Ray PixelCrushers.DialogueSystem.Selector::lastRay
	Ray_t319  ___lastRay_30;
	// UnityEngine.RaycastHit PixelCrushers.DialogueSystem.Selector::lastHit
	RaycastHit_t318  ___lastHit_31;
	// UnityEngine.RaycastHit[] PixelCrushers.DialogueSystem.Selector::lastHits
	RaycastHitU5BU5D_t317* ___lastHits_32;
	// PixelCrushers.DialogueSystem.SelectedUsableObjectDelegate PixelCrushers.DialogueSystem.Selector::SelectedUsableObject
	SelectedUsableObjectDelegate_t304 * ___SelectedUsableObject_33;
	// PixelCrushers.DialogueSystem.DeselectedUsableObjectDelegate PixelCrushers.DialogueSystem.Selector::DeselectedUsableObject
	DeselectedUsableObjectDelegate_t305 * ___DeselectedUsableObject_34;
	// UnityEngine.Vector3 PixelCrushers.DialogueSystem.Selector::<CustomPosition>k__BackingField
	Vector3_t53  ___U3CCustomPositionU3Ek__BackingField_35;
};
struct Selector_t277_StaticFields{
	// UnityEngine.LayerMask PixelCrushers.DialogueSystem.Selector::DefaultLayer
	LayerMask_t87  ___DefaultLayer_2;
};
