#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.DialogueDatabase/SyncInfo
struct  SyncInfo_t794  : public Object_t
{
	// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase/SyncInfo::syncActors
	bool ___syncActors_0;
	// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase/SyncInfo::syncItems
	bool ___syncItems_1;
	// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase/SyncInfo::syncLocations
	bool ___syncLocations_2;
	// System.Boolean PixelCrushers.DialogueSystem.DialogueDatabase/SyncInfo::syncVariables
	bool ___syncVariables_3;
	// PixelCrushers.DialogueSystem.DialogueDatabase PixelCrushers.DialogueSystem.DialogueDatabase/SyncInfo::syncActorsDatabase
	DialogueDatabase_t202 * ___syncActorsDatabase_4;
	// PixelCrushers.DialogueSystem.DialogueDatabase PixelCrushers.DialogueSystem.DialogueDatabase/SyncInfo::syncItemsDatabase
	DialogueDatabase_t202 * ___syncItemsDatabase_5;
	// PixelCrushers.DialogueSystem.DialogueDatabase PixelCrushers.DialogueSystem.DialogueDatabase/SyncInfo::syncLocationsDatabase
	DialogueDatabase_t202 * ___syncLocationsDatabase_6;
	// PixelCrushers.DialogueSystem.DialogueDatabase PixelCrushers.DialogueSystem.DialogueDatabase/SyncInfo::syncVariablesDatabase
	DialogueDatabase_t202 * ___syncVariablesDatabase_7;
};
