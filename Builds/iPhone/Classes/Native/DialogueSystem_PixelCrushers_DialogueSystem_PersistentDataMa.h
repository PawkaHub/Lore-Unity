#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.GetCustomSaveDataDelegate
struct GetCustomSaveDataDelegate_t952;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.PersistentDataManager
struct  PersistentDataManager_t587  : public Object_t
{
};
struct PersistentDataManager_t587_StaticFields{
	// System.Boolean PixelCrushers.DialogueSystem.PersistentDataManager::includeAllItemData
	bool ___includeAllItemData_2;
	// System.Boolean PixelCrushers.DialogueSystem.PersistentDataManager::includeSimStatus
	bool ___includeSimStatus_3;
	// PixelCrushers.DialogueSystem.GetCustomSaveDataDelegate PixelCrushers.DialogueSystem.PersistentDataManager::GetCustomSaveData
	GetCustomSaveDataDelegate_t952 * ___GetCustomSaveData_4;
};
