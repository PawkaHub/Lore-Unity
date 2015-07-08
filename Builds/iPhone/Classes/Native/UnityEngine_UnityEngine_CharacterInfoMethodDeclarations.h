#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CharacterInfo
struct CharacterInfo_t4785;
struct CharacterInfo_t4785_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern "C" int32_t CharacterInfo_get_advance_m17477 (CharacterInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern "C" int32_t CharacterInfo_get_glyphWidth_m17478 (CharacterInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern "C" int32_t CharacterInfo_get_glyphHeight_m17479 (CharacterInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern "C" int32_t CharacterInfo_get_bearing_m17480 (CharacterInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern "C" int32_t CharacterInfo_get_minY_m17481 (CharacterInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern "C" int32_t CharacterInfo_get_maxY_m17482 (CharacterInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern "C" int32_t CharacterInfo_get_minX_m17483 (CharacterInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern "C" int32_t CharacterInfo_get_maxX_m17484 (CharacterInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C" Vector2_t97  CharacterInfo_get_uvBottomLeftUnFlipped_m17485 (CharacterInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t97  CharacterInfo_get_uvBottomRightUnFlipped_m17486 (CharacterInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t97  CharacterInfo_get_uvTopRightUnFlipped_m17487 (CharacterInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t97  CharacterInfo_get_uvTopLeftUnFlipped_m17488 (CharacterInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern "C" Vector2_t97  CharacterInfo_get_uvBottomLeft_m17489 (CharacterInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern "C" Vector2_t97  CharacterInfo_get_uvBottomRight_m17490 (CharacterInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern "C" Vector2_t97  CharacterInfo_get_uvTopRight_m17491 (CharacterInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern "C" Vector2_t97  CharacterInfo_get_uvTopLeft_m17492 (CharacterInfo_t4785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void CharacterInfo_t4785_marshal(const CharacterInfo_t4785& unmarshaled, CharacterInfo_t4785_marshaled& marshaled);
void CharacterInfo_t4785_marshal_back(const CharacterInfo_t4785_marshaled& marshaled, CharacterInfo_t4785& unmarshaled);
void CharacterInfo_t4785_marshal_cleanup(CharacterInfo_t4785_marshaled& marshaled);
