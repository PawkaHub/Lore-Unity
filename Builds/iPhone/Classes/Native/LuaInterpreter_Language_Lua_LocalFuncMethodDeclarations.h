#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LocalFunc
struct LocalFunc_t2590;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;

// System.Void Language.Lua.LocalFunc::.ctor()
extern "C" void LocalFunc__ctor_m11757 (LocalFunc_t2590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LocalFunc::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t748 * LocalFunc_Execute_m11758 (LocalFunc_t2590 * __this, LuaTable_t750 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
