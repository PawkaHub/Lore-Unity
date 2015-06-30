#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UITools
struct UITools_t284;
// UnityEngine.Sprite
struct Sprite_t555;
// UnityEngine.Texture2D
struct Texture2D_t90;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.FormattedText
struct FormattedText_t554;
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"

// System.Int32 PixelCrushers.DialogueSystem.UITools::GetAnimatorNameHash(UnityEngine.AnimatorStateInfo)
extern "C" int32_t UITools_GetAnimatorNameHash_m1087 (Object_t * __this /* static, unused */, AnimatorStateInfo_t556  ___animatorStateInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite PixelCrushers.DialogueSystem.UITools::CreateSprite(UnityEngine.Texture2D)
extern "C" Sprite_t555 * UITools_CreateSprite_m1088 (Object_t * __this /* static, unused */, Texture2D_t90 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.UITools::GetUIFormattedText(PixelCrushers.DialogueSystem.FormattedText)
extern "C" String_t* UITools_GetUIFormattedText_m1089 (Object_t * __this /* static, unused */, FormattedText_t554 * ___formattedText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
