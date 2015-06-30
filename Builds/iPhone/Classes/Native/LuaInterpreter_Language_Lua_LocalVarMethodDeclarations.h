#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LocalVar
struct LocalVar_t2591;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;

// System.Void Language.Lua.LocalVar::.ctor()
extern "C" void LocalVar__ctor_m11759 (LocalVar_t2591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LocalVar::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t748 * LocalVar_Execute_m11760 (LocalVar_t2591 * __this, LuaTable_t750 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
