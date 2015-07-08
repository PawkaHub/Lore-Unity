#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LocalFunc
struct LocalFunc_t3756;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;

// System.Void Language.Lua.LocalFunc::.ctor()
extern "C" void LocalFunc__ctor_m10967 (LocalFunc_t3756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LocalFunc::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t1334 * LocalFunc_Execute_m10968 (LocalFunc_t3756 * __this, LuaTable_t1336 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
