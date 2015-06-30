#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CharacterInfo
struct CharacterInfo_t2812;
struct CharacterInfo_t2812_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern "C" int32_t CharacterInfo_get_advance_m13180 (CharacterInfo_t2812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern "C" int32_t CharacterInfo_get_glyphWidth_m13181 (CharacterInfo_t2812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern "C" int32_t CharacterInfo_get_glyphHeight_m13182 (CharacterInfo_t2812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern "C" int32_t CharacterInfo_get_bearing_m13183 (CharacterInfo_t2812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern "C" int32_t CharacterInfo_get_minY_m13184 (CharacterInfo_t2812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern "C" int32_t CharacterInfo_get_maxY_m13185 (CharacterInfo_t2812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern "C" int32_t CharacterInfo_get_minX_m13186 (CharacterInfo_t2812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern "C" int32_t CharacterInfo_get_maxX_m13187 (CharacterInfo_t2812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C" Vector2_t97  CharacterInfo_get_uvBottomLeftUnFlipped_m13188 (CharacterInfo_t2812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t97  CharacterInfo_get_uvBottomRightUnFlipped_m13189 (CharacterInfo_t2812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t97  CharacterInfo_get_uvTopRightUnFlipped_m13190 (CharacterInfo_t2812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t97  CharacterInfo_get_uvTopLeftUnFlipped_m13191 (CharacterInfo_t2812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern "C" Vector2_t97  CharacterInfo_get_uvBottomLeft_m13192 (CharacterInfo_t2812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern "C" Vector2_t97  CharacterInfo_get_uvBottomRight_m13193 (CharacterInfo_t2812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern "C" Vector2_t97  CharacterInfo_get_uvTopRight_m13194 (CharacterInfo_t2812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern "C" Vector2_t97  CharacterInfo_get_uvTopLeft_m13195 (CharacterInfo_t2812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void CharacterInfo_t2812_marshal(const CharacterInfo_t2812& unmarshaled, CharacterInfo_t2812_marshaled& marshaled);
void CharacterInfo_t2812_marshal_back(const CharacterInfo_t2812_marshaled& marshaled, CharacterInfo_t2812& unmarshaled);
void CharacterInfo_t2812_marshal_cleanup(CharacterInfo_t2812_marshaled& marshaled);
