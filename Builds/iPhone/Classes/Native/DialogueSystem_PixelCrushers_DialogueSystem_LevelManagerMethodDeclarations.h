﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.LevelManager
struct LevelManager_t584;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;

// System.Void PixelCrushers.DialogueSystem.LevelManager::.ctor()
extern "C" void LevelManager__ctor_m4578 (LevelManager_t584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.LevelManager::get_IsLoading()
extern "C" bool LevelManager_get_IsLoading_m4579 (LevelManager_t584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LevelManager::set_IsLoading(System.Boolean)
extern "C" void LevelManager_set_IsLoading_m4580 (LevelManager_t584 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LevelManager::Awake()
extern "C" void LevelManager_Awake_m4581 (LevelManager_t584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LevelManager::LoadGame(System.String)
extern "C" void LevelManager_LoadGame_m2651 (LevelManager_t584 * __this, String_t* ___saveData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LevelManager::RestartGame()
extern "C" void LevelManager_RestartGame_m4582 (LevelManager_t584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.LevelManager::LoadLevelFromSaveData(System.String)
extern "C" Object_t * LevelManager_LoadLevelFromSaveData_m4583 (LevelManager_t584 * __this, String_t* ___saveData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LevelManager::LoadLevel(System.String)
extern "C" void LevelManager_LoadLevel_m2683 (LevelManager_t584 * __this, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.LevelManager::LoadLevelCoroutine(System.String)
extern "C" Object_t * LevelManager_LoadLevelCoroutine_m4584 (LevelManager_t584 * __this, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LevelManager::OnRecordPersistentData()
extern "C" void LevelManager_OnRecordPersistentData_m4585 (LevelManager_t584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;