#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.GameSaver
struct GameSaver_t945;
// System.String
struct String_t;

// System.Void PixelCrushers.DialogueSystem.GameSaver::.ctor()
extern "C" void GameSaver__ctor_m4552 (GameSaver_t945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::Awake()
extern "C" void GameSaver_Awake_m4553 (GameSaver_t945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::OnUse()
extern "C" void GameSaver_OnUse_m4554 (GameSaver_t945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::SaveGame(System.Int32)
extern "C" void GameSaver_SaveGame_m4555 (GameSaver_t945 * __this, int32_t ___slot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::SaveGame()
extern "C" void GameSaver_SaveGame_m4556 (GameSaver_t945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::LoadGame(System.Int32)
extern "C" void GameSaver_LoadGame_m4557 (GameSaver_t945 * __this, int32_t ___slot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::LoadGame()
extern "C" void GameSaver_LoadGame_m4558 (GameSaver_t945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::SaveGame(System.String)
extern "C" void GameSaver_SaveGame_m4559 (GameSaver_t945 * __this, String_t* ___slotString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::LoadGame(System.String)
extern "C" void GameSaver_LoadGame_m4560 (GameSaver_t945 * __this, String_t* ___slotString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::RestartGame()
extern "C" void GameSaver_RestartGame_m4561 (GameSaver_t945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.GameSaver::StringToSlot(System.String)
extern "C" int32_t GameSaver_StringToSlot_m4562 (GameSaver_t945 * __this, String_t* ___slotString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::Record()
extern "C" void GameSaver_Record_m4563 (GameSaver_t945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::Apply()
extern "C" void GameSaver_Apply_m4564 (GameSaver_t945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.GameSaver::OnLevelWasLoaded(System.Int32)
extern "C" void GameSaver_OnLevelWasLoaded_m4565 (GameSaver_t945 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
