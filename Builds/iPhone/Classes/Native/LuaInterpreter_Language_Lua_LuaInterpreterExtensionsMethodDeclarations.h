﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LuaInterpreterExtensions
struct LuaInterpreterExtensions_t3803;
// System.Collections.Generic.List`1<Language.Lua.LuaValue>
struct List_1_t3814;
// System.Collections.Generic.List`1<Language.Lua.Expr>
struct List_1_t3740;
// Language.Lua.LuaTable
struct LuaTable_t1336;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// System.Object
struct Object_t;

// System.Collections.Generic.List`1<Language.Lua.LuaValue> Language.Lua.LuaInterpreterExtensions::EvaluateAll(System.Collections.Generic.List`1<Language.Lua.Expr>,Language.Lua.LuaTable)
extern "C" List_1_t3814 * LuaInterpreterExtensions_EvaluateAll_m11144 (Object_t * __this /* static, unused */, List_1_t3740 * ___exprList, LuaTable_t1336 * ___environment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaInterpreterExtensions::ObjectToLuaValue(System.Object)
extern "C" LuaValue_t1334 * LuaInterpreterExtensions_ObjectToLuaValue_m7720 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Language.Lua.LuaInterpreterExtensions::LuaValueToObject(Language.Lua.LuaValue)
extern "C" Object_t * LuaInterpreterExtensions_LuaValueToObject_m7547 (Object_t * __this /* static, unused */, LuaValue_t1334 * ___luaValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
