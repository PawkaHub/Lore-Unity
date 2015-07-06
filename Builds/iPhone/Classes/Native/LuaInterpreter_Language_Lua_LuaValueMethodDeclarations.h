#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LuaValue
struct LuaValue_t1075;
// System.Object
struct Object_t;
// System.String
struct String_t;

// System.Void Language.Lua.LuaValue::.ctor()
extern "C" void LuaValue__ctor_m10816 (LuaValue_t1075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Language.Lua.LuaValue::get_Value()
// System.String Language.Lua.LuaValue::GetTypeCode()
// System.Boolean Language.Lua.LuaValue::GetBooleanValue()
extern "C" bool LuaValue_GetBooleanValue_m10817 (LuaValue_t1075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.LuaValue::Equals(Language.Lua.LuaValue)
extern "C" bool LuaValue_Equals_m10818 (LuaValue_t1075 * __this, LuaValue_t1075 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.LuaValue::Equals(System.Object)
extern "C" bool LuaValue_Equals_m10819 (LuaValue_t1075 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Language.Lua.LuaValue::GetHashCode()
extern "C" int32_t LuaValue_GetHashCode_m10820 (LuaValue_t1075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaValue::GetKeyValue(Language.Lua.LuaValue,Language.Lua.LuaValue)
extern "C" LuaValue_t1075 * LuaValue_GetKeyValue_m10821 (Object_t * __this /* static, unused */, LuaValue_t1075 * ___baseValue, LuaValue_t1075 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
