#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.LevelManager
struct LevelManager_t663;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;

// System.Void PixelCrushers.DialogueSystem.LevelManager::.ctor()
extern "C" void LevelManager__ctor_m6872 (LevelManager_t663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.LevelManager::get_IsLoading()
extern "C" bool LevelManager_get_IsLoading_m6873 (LevelManager_t663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LevelManager::set_IsLoading(System.Boolean)
extern "C" void LevelManager_set_IsLoading_m6874 (LevelManager_t663 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LevelManager::Awake()
extern "C" void LevelManager_Awake_m6875 (LevelManager_t663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LevelManager::LoadGame(System.String)
extern "C" void LevelManager_LoadGame_m2910 (LevelManager_t663 * __this, String_t* ___saveData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LevelManager::RestartGame()
extern "C" void LevelManager_RestartGame_m6876 (LevelManager_t663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.LevelManager::LoadLevelFromSaveData(System.String)
extern "C" Object_t * LevelManager_LoadLevelFromSaveData_m6877 (LevelManager_t663 * __this, String_t* ___saveData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LevelManager::LoadLevel(System.String)
extern "C" void LevelManager_LoadLevel_m2942 (LevelManager_t663 * __this, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.LevelManager::LoadLevelCoroutine(System.String)
extern "C" Object_t * LevelManager_LoadLevelCoroutine_m6878 (LevelManager_t663 * __this, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LevelManager::OnRecordPersistentData()
extern "C" void LevelManager_OnRecordPersistentData_m6879 (LevelManager_t663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
