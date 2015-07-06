#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.GetCustomSaveDataDelegate
struct GetCustomSaveDataDelegate_t1276;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.PersistentDataManager
struct  PersistentDataManager_t608  : public Object_t
{
};
struct PersistentDataManager_t608_StaticFields{
	// System.Boolean PixelCrushers.DialogueSystem.PersistentDataManager::includeAllItemData
	bool ___includeAllItemData_2;
	// System.Boolean PixelCrushers.DialogueSystem.PersistentDataManager::includeSimStatus
	bool ___includeSimStatus_3;
	// PixelCrushers.DialogueSystem.GetCustomSaveDataDelegate PixelCrushers.DialogueSystem.PersistentDataManager::GetCustomSaveData
	GetCustomSaveDataDelegate_t1276 * ___GetCustomSaveData_4;
};
