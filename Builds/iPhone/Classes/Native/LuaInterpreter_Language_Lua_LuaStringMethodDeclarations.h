#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LuaString
struct LuaString_t2642;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void Language.Lua.LuaString::.ctor(System.String)
extern "C" void LuaString__ctor_m11977 (LuaString_t2642 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaString::.cctor()
extern "C" void LuaString__cctor_m11978 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.LuaString::get_Text()
extern "C" String_t* LuaString_get_Text_m11979 (LuaString_t2642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaString::set_Text(System.String)
extern "C" void LuaString_set_Text_m11980 (LuaString_t2642 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Language.Lua.LuaString::get_Value()
extern "C" Object_t * LuaString_get_Value_m11981 (LuaString_t2642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.LuaString::GetTypeCode()
extern "C" String_t* LuaString_GetTypeCode_m11982 (LuaString_t2642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.LuaString::ToString()
extern "C" String_t* LuaString_ToString_m11983 (LuaString_t2642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
