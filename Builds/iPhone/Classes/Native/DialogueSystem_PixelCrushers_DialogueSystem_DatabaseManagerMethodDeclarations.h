#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.DatabaseManager
struct DatabaseManager_t1092;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// PixelCrushers.DialogueSystem.DatabaseResetOptions
#include "DialogueSystem_PixelCrushers_DialogueSystem_DatabaseResetOpt.h"

// System.Void PixelCrushers.DialogueSystem.DatabaseManager::.ctor(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DatabaseManager__ctor_m5836 (DatabaseManager_t1092 * __this, DialogueDatabase_t202 * ___defaultDatabase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueDatabase PixelCrushers.DialogueSystem.DatabaseManager::get_DefaultDatabase()
extern "C" DialogueDatabase_t202 * DatabaseManager_get_DefaultDatabase_m5837 (DatabaseManager_t1092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseManager::set_DefaultDatabase(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DatabaseManager_set_DefaultDatabase_m5838 (DatabaseManager_t1092 * __this, DialogueDatabase_t202 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueDatabase PixelCrushers.DialogueSystem.DatabaseManager::get_MasterDatabase()
extern "C" DialogueDatabase_t202 * DatabaseManager_get_MasterDatabase_m5839 (DatabaseManager_t1092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueDatabase PixelCrushers.DialogueSystem.DatabaseManager::GetMasterDatabase()
extern "C" DialogueDatabase_t202 * DatabaseManager_GetMasterDatabase_m5840 (DatabaseManager_t1092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseManager::Add(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DatabaseManager_Add_m5841 (DatabaseManager_t1092 * __this, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseManager::Remove(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DatabaseManager_Remove_m5842 (DatabaseManager_t1092 * __this, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseManager::Clear()
extern "C" void DatabaseManager_Clear_m5843 (DatabaseManager_t1092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseManager::Reset(PixelCrushers.DialogueSystem.DatabaseResetOptions)
extern "C" void DatabaseManager_Reset_m5844 (DatabaseManager_t1092 * __this, int32_t ___databaseResetOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseManager::ResetToDefaultDatabase()
extern "C" void DatabaseManager_ResetToDefaultDatabase_m5845 (DatabaseManager_t1092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseManager::ResetToLoadedDatabases()
extern "C" void DatabaseManager_ResetToLoadedDatabases_m5846 (DatabaseManager_t1092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
