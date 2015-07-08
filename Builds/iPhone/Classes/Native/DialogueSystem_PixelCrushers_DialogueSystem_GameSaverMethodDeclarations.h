#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.GameSaver
struct GameSaver_t1528;
// System.String
struct String_t;

// System.Void PixelCrushers.DialogueSystem.GameSaver::.ctor()
extern "C" void GameSaver__ctor_m6846 (GameSaver_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::Awake()
extern "C" void GameSaver_Awake_m6847 (GameSaver_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::OnUse()
extern "C" void GameSaver_OnUse_m6848 (GameSaver_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::SaveGame(System.Int32)
extern "C" void GameSaver_SaveGame_m6849 (GameSaver_t1528 * __this, int32_t ___slot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::SaveGame()
extern "C" void GameSaver_SaveGame_m6850 (GameSaver_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::LoadGame(System.Int32)
extern "C" void GameSaver_LoadGame_m6851 (GameSaver_t1528 * __this, int32_t ___slot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::LoadGame()
extern "C" void GameSaver_LoadGame_m6852 (GameSaver_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::SaveGame(System.String)
extern "C" void GameSaver_SaveGame_m6853 (GameSaver_t1528 * __this, String_t* ___slotString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::LoadGame(System.String)
extern "C" void GameSaver_LoadGame_m6854 (GameSaver_t1528 * __this, String_t* ___slotString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::RestartGame()
extern "C" void GameSaver_RestartGame_m6855 (GameSaver_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.GameSaver::StringToSlot(System.String)
extern "C" int32_t GameSaver_StringToSlot_m6856 (GameSaver_t1528 * __this, String_t* ___slotString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::Record()
extern "C" void GameSaver_Record_m6857 (GameSaver_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::Apply()
extern "C" void GameSaver_Apply_m6858 (GameSaver_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::OnLevelWasLoaded(System.Int32)
extern "C" void GameSaver_OnLevelWasLoaded_m6859 (GameSaver_t1528 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
