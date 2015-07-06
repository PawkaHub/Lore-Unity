#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LocalFunc
struct LocalFunc_t3518;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;

// System.Void Language.Lua.LocalFunc::.ctor()
extern "C" void LocalFunc__ctor_m10548 (LocalFunc_t3518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LocalFunc::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t1075 * LocalFunc_Execute_m10549 (LocalFunc_t3518 * __this, LuaTable_t1077 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
