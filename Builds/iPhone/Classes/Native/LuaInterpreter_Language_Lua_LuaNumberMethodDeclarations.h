﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LuaNumber
struct LuaNumber_t1657;
// System.Object
struct Object_t;
// System.String
struct String_t;

// System.Void Language.Lua.LuaNumber::.ctor(System.Double)
extern "C" void LuaNumber__ctor_m11182 (LuaNumber_t1657 * __this, double ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Language.Lua.LuaNumber::get_Number()
extern "C" double LuaNumber_get_Number_m7707 (LuaNumber_t1657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaNumber::set_Number(System.Double)
extern "C" void LuaNumber_set_Number_m11183 (LuaNumber_t1657 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Language.Lua.LuaNumber::get_Value()
extern "C" Object_t * LuaNumber_get_Value_m11184 (LuaNumber_t1657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.LuaNumber::GetTypeCode()
extern "C" String_t* LuaNumber_GetTypeCode_m11185 (LuaNumber_t1657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.LuaNumber::ToString()
extern "C" String_t* LuaNumber_ToString_m11186 (LuaNumber_t1657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
