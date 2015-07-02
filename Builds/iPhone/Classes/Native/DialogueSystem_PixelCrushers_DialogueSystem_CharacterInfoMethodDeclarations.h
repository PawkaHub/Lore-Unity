﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.CharacterInfo
struct CharacterInfo_t607;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.Texture2D
struct Texture2D_t90;
// PixelCrushers.DialogueSystem.CharacterType
#include "DialogueSystem_PixelCrushers_DialogueSystem_CharacterType.h"

// System.Void PixelCrushers.DialogueSystem.CharacterInfo::.ctor(System.Int32,System.String,UnityEngine.Transform,PixelCrushers.DialogueSystem.CharacterType,UnityEngine.Texture2D)
extern "C" void CharacterInfo__ctor_m4105 (CharacterInfo_t607 * __this, int32_t ___id, String_t* ___nameInDatabase, Transform_t54 * ___transform, int32_t ___characterType, Texture2D_t90 * ___portrait, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.CharacterInfo::get_IsPlayer()
extern "C" bool CharacterInfo_get_IsPlayer_m2724 (CharacterInfo_t607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.CharacterInfo::get_IsNPC()
extern "C" bool CharacterInfo_get_IsNPC_m4106 (CharacterInfo_t607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.CharacterInfo::get_Name()
extern "C" String_t* CharacterInfo_get_Name_m2696 (CharacterInfo_t607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.CharacterInfo::set_Name(System.String)
extern "C" void CharacterInfo_set_Name_m4107 (CharacterInfo_t607 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D PixelCrushers.DialogueSystem.CharacterInfo::GetPicOverride(System.Int32)
extern "C" Texture2D_t90 * CharacterInfo_GetPicOverride_m4108 (CharacterInfo_t607 * __this, int32_t ___picNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;