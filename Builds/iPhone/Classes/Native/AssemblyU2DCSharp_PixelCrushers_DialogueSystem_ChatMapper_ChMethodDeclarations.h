#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.ChatMapper.ChatMapperTools
struct ChatMapperTools_t207;
// PixelCrushers.DialogueSystem.ChatMapper.ChatMapperProject
struct ChatMapperProject_t621;
// UnityEngine.TextAsset
struct TextAsset_t622;
// System.String
struct String_t;

// PixelCrushers.DialogueSystem.ChatMapper.ChatMapperProject PixelCrushers.DialogueSystem.ChatMapper.ChatMapperTools::Load(UnityEngine.TextAsset)
extern "C" ChatMapperProject_t621 * ChatMapperTools_Load_m812 (Object_t * __this /* static, unused */, TextAsset_t622 * ___xmlFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.ChatMapper.ChatMapperProject PixelCrushers.DialogueSystem.ChatMapper.ChatMapperTools::Load(System.String)
extern "C" ChatMapperProject_t621 * ChatMapperTools_Load_m813 (Object_t * __this /* static, unused */, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ChatMapper.ChatMapperTools::Save(PixelCrushers.DialogueSystem.ChatMapper.ChatMapperProject,System.String)
extern "C" void ChatMapperTools_Save_m814 (Object_t * __this /* static, unused */, ChatMapperProject_t621 * ___chatMapperProject, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
