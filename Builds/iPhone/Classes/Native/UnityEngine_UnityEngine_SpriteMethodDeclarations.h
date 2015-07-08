#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Sprite
struct Sprite_t626;
// UnityEngine.Texture2D
struct Texture2D_t90;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.SpriteMeshType
#include "UnityEngine_UnityEngine_SpriteMeshType.h"

// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2)
extern "C" Sprite_t626 * Sprite_Create_m3110 (Object_t * __this /* static, unused */, Texture2D_t90 * ___texture, Rect_t201  ___rect, Vector2_t97  ___pivot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.Sprite::INTERNAL_CALL_Create(UnityEngine.Texture2D,UnityEngine.Rect&,UnityEngine.Vector2&,System.Single,System.UInt32,UnityEngine.SpriteMeshType,UnityEngine.Vector4&)
extern "C" Sprite_t626 * Sprite_INTERNAL_CALL_Create_m17158 (Object_t * __this /* static, unused */, Texture2D_t90 * ___texture, Rect_t201 * ___rect, Vector2_t97 * ___pivot, float ___pixelsPerUnit, uint32_t ___extrude, int32_t ___meshType, Vector4_t1235 * ___border, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Sprite::get_rect()
extern "C" Rect_t201  Sprite_get_rect_m5375 (Sprite_t626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Sprite::get_pixelsPerUnit()
extern "C" float Sprite_get_pixelsPerUnit_m5371 (Sprite_t626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
extern "C" Texture2D_t90 * Sprite_get_texture_m5368 (Sprite_t626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
extern "C" Rect_t201  Sprite_get_textureRect_m5385 (Sprite_t626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Sprite::get_border()
extern "C" Vector4_t1235  Sprite_get_border_m5369 (Sprite_t626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
