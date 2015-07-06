#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.GameSaver
struct GameSaver_t1269;
// System.String
struct String_t;

// System.Void PixelCrushers.DialogueSystem.GameSaver::.ctor()
extern "C" void GameSaver__ctor_m6398 (GameSaver_t1269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::Awake()
extern "C" void GameSaver_Awake_m6399 (GameSaver_t1269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::OnUse()
extern "C" void GameSaver_OnUse_m6400 (GameSaver_t1269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::SaveGame(System.Int32)
extern "C" void GameSaver_SaveGame_m6401 (GameSaver_t1269 * __this, int32_t ___slot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::SaveGame()
extern "C" void GameSaver_SaveGame_m6402 (GameSaver_t1269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::LoadGame(System.Int32)
extern "C" void GameSaver_LoadGame_m6403 (GameSaver_t1269 * __this, int32_t ___slot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::LoadGame()
extern "C" void GameSaver_LoadGame_m6404 (GameSaver_t1269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::SaveGame(System.String)
extern "C" void GameSaver_SaveGame_m6405 (GameSaver_t1269 * __this, String_t* ___slotString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::LoadGame(System.String)
extern "C" void GameSaver_LoadGame_m6406 (GameSaver_t1269 * __this, String_t* ___slotString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::RestartGame()
extern "C" void GameSaver_RestartGame_m6407 (GameSaver_t1269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.GameSaver::StringToSlot(System.String)
extern "C" int32_t GameSaver_StringToSlot_m6408 (GameSaver_t1269 * __this, String_t* ___slotString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::Record()
extern "C" void GameSaver_Record_m6409 (GameSaver_t1269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::Apply()
extern "C" void GameSaver_Apply_m6410 (GameSaver_t1269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::OnLevelWasLoaded(System.Int32)
extern "C" void GameSaver_OnLevelWasLoaded_m6411 (GameSaver_t1269 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
