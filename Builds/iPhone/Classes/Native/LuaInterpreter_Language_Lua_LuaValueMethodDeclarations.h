#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LuaValue
struct LuaValue_t1334;
// System.Object
struct Object_t;
// System.String
struct String_t;

// System.Void Language.Lua.LuaValue::.ctor()
extern "C" void LuaValue__ctor_m11235 (LuaValue_t1334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Language.Lua.LuaValue::get_Value()
// System.String Language.Lua.LuaValue::GetTypeCode()
// System.Boolean Language.Lua.LuaValue::GetBooleanValue()
extern "C" bool LuaValue_GetBooleanValue_m11236 (LuaValue_t1334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.LuaValue::Equals(Language.Lua.LuaValue)
extern "C" bool LuaValue_Equals_m11237 (LuaValue_t1334 * __this, LuaValue_t1334 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.LuaValue::Equals(System.Object)
extern "C" bool LuaValue_Equals_m11238 (LuaValue_t1334 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Language.Lua.LuaValue::GetHashCode()
extern "C" int32_t LuaValue_GetHashCode_m11239 (LuaValue_t1334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaValue::GetKeyValue(Language.Lua.LuaValue,Language.Lua.LuaValue)
extern "C" LuaValue_t1334 * LuaValue_GetKeyValue_m11240 (Object_t * __this /* static, unused */, LuaValue_t1334 * ___baseValue, LuaValue_t1334 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
