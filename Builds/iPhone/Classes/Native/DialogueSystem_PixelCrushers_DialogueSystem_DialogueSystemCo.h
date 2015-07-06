#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// PixelCrushers.DialogueSystem.DisplaySettings
struct DisplaySettings_t626;
// PixelCrushers.DialogueSystem.DatabaseManager
struct DatabaseManager_t1092;
// PixelCrushers.DialogueSystem.IDialogueUI
struct IDialogueUI_t746;
// PixelCrushers.DialogueSystem.ConversationController
struct ConversationController_t1093;
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate
struct IsDialogueEntryValidDelegate_t1094;
// PixelCrushers.DialogueSystem.LuaWatchers
struct LuaWatchers_t1095;
// PixelCrushers.DialogueSystem.AssetBundleManager
struct AssetBundleManager_t1088;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.ConversationState
struct ConversationState_t1096;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PixelCrushers.DialogueSystem.DialogueDebug/DebugLevel
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueDebug_De.h"
// PixelCrushers.DialogueSystem.DialogueSystemController
struct  DialogueSystemController_t631  : public MonoBehaviour_t47
{
	// PixelCrushers.DialogueSystem.DialogueDatabase PixelCrushers.DialogueSystem.DialogueSystemController::initialDatabase
	DialogueDatabase_t202 * ___initialDatabase_3;
	// PixelCrushers.DialogueSystem.DisplaySettings PixelCrushers.DialogueSystem.DialogueSystemController::displaySettings
	DisplaySettings_t626 * ___displaySettings_4;
	// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::includeSimStatus
	bool ___includeSimStatus_5;
	// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::preloadResources
	bool ___preloadResources_6;
	// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::dontDestroyOnLoad
	bool ___dontDestroyOnLoad_7;
	// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::allowOnlyOneInstance
	bool ___allowOnlyOneInstance_8;
	// PixelCrushers.DialogueSystem.DialogueDebug/DebugLevel PixelCrushers.DialogueSystem.DialogueSystemController::debugLevel
	int32_t ___debugLevel_9;
	// PixelCrushers.DialogueSystem.DatabaseManager PixelCrushers.DialogueSystem.DialogueSystemController::databaseManager
	DatabaseManager_t1092 * ___databaseManager_10;
	// PixelCrushers.DialogueSystem.IDialogueUI PixelCrushers.DialogueSystem.DialogueSystemController::currentDialogueUI
	Object_t * ___currentDialogueUI_11;
	// PixelCrushers.DialogueSystem.IDialogueUI PixelCrushers.DialogueSystem.DialogueSystemController::originalDialogueUI
	Object_t * ___originalDialogueUI_12;
	// PixelCrushers.DialogueSystem.DisplaySettings PixelCrushers.DialogueSystem.DialogueSystemController::originalDisplaySettings
	DisplaySettings_t626 * ___originalDisplaySettings_13;
	// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::isOverrideUIPrefab
	bool ___isOverrideUIPrefab_14;
	// PixelCrushers.DialogueSystem.ConversationController PixelCrushers.DialogueSystem.DialogueSystemController::conversationController
	ConversationController_t1093 * ___conversationController_15;
	// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate PixelCrushers.DialogueSystem.DialogueSystemController::isDialogueEntryValid
	IsDialogueEntryValidDelegate_t1094 * ___isDialogueEntryValid_16;
	// PixelCrushers.DialogueSystem.LuaWatchers PixelCrushers.DialogueSystem.DialogueSystemController::luaWatchers
	LuaWatchers_t1095 * ___luaWatchers_17;
	// PixelCrushers.DialogueSystem.AssetBundleManager PixelCrushers.DialogueSystem.DialogueSystemController::assetBundleManager
	AssetBundleManager_t1088 * ___assetBundleManager_18;
	// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::hasStarted
	bool ___hasStarted_19;
	// PixelCrushers.DialogueSystem.DialogueDebug/DebugLevel PixelCrushers.DialogueSystem.DialogueSystemController::lastDebugLevelSet
	int32_t ___lastDebugLevelSet_20;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.DialogueSystemController::<CurrentActor>k__BackingField
	Transform_t54 * ___U3CCurrentActorU3Ek__BackingField_22;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.DialogueSystemController::<CurrentConversant>k__BackingField
	Transform_t54 * ___U3CCurrentConversantU3Ek__BackingField_23;
	// PixelCrushers.DialogueSystem.ConversationState PixelCrushers.DialogueSystem.DialogueSystemController::<CurrentConversationState>k__BackingField
	ConversationState_t1096 * ___U3CCurrentConversationStateU3Ek__BackingField_24;
	// System.String PixelCrushers.DialogueSystem.DialogueSystemController::<LastConversationStarted>k__BackingField
	String_t* ___U3CLastConversationStartedU3Ek__BackingField_25;
	// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::<AllowLuaExceptions>k__BackingField
	bool ___U3CAllowLuaExceptionsU3Ek__BackingField_26;
	// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::<WarnIfActorAndConversantSame>k__BackingField
	bool ___U3CWarnIfActorAndConversantSameU3Ek__BackingField_27;
};
struct DialogueSystemController_t631_StaticFields{
	// System.Boolean PixelCrushers.DialogueSystem.DialogueSystemController::applicationIsQuitting
	bool ___applicationIsQuitting_21;
};
