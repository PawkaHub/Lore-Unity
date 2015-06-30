#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.UnityUIQuestTrackTemplate
struct UnityUIQuestTrackTemplate_t273;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t242;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PixelCrushers.DialogueSystem.UnityUIQuestTracker/QuestDescriptionSource
#include "AssemblyU2DCSharp_PixelCrushers_DialogueSystem_UnityUIQuestT_2.h"
// PixelCrushers.DialogueSystem.UnityUIQuestTracker
struct  UnityUIQuestTracker_t275  : public MonoBehaviour_t47
{
	// UnityEngine.Transform PixelCrushers.DialogueSystem.UnityUIQuestTracker::container
	Transform_t54 * ___container_2;
	// PixelCrushers.DialogueSystem.UnityUIQuestTrackTemplate PixelCrushers.DialogueSystem.UnityUIQuestTracker::questTrackTemplate
	UnityUIQuestTrackTemplate_t273 * ___questTrackTemplate_3;
	// System.Boolean PixelCrushers.DialogueSystem.UnityUIQuestTracker::showActiveQuests
	bool ___showActiveQuests_4;
	// System.Boolean PixelCrushers.DialogueSystem.UnityUIQuestTracker::showCompletedQuests
	bool ___showCompletedQuests_5;
	// System.Boolean PixelCrushers.DialogueSystem.UnityUIQuestTracker::showCompletedEntryText
	bool ___showCompletedEntryText_6;
	// PixelCrushers.DialogueSystem.UnityUIQuestTracker/QuestDescriptionSource PixelCrushers.DialogueSystem.UnityUIQuestTracker::questDescriptionSource
	int32_t ___questDescriptionSource_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PixelCrushers.DialogueSystem.UnityUIQuestTracker::instantiatedItems
	List_1_t242 * ___instantiatedItems_8;
};
