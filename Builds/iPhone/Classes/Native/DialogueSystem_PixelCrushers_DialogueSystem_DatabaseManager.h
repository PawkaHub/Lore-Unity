#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>
struct List_1_t1134;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.DatabaseManager
struct  DatabaseManager_t1092  : public Object_t
{
	// PixelCrushers.DialogueSystem.DialogueDatabase PixelCrushers.DialogueSystem.DatabaseManager::masterDatabase
	DialogueDatabase_t202 * ___masterDatabase_0;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase> PixelCrushers.DialogueSystem.DatabaseManager::loadedDatabases
	List_1_t1134 * ___loadedDatabases_1;
	// PixelCrushers.DialogueSystem.DialogueDatabase PixelCrushers.DialogueSystem.DatabaseManager::<DefaultDatabase>k__BackingField
	DialogueDatabase_t202 * ___U3CDefaultDatabaseU3Ek__BackingField_2;
};
