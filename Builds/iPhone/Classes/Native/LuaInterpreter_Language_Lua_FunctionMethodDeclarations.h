#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Function
struct Function_t2587;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;

// System.Void Language.Lua.Function::.ctor()
extern "C" void Function__ctor_m11753 (Function_t2587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Function::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t748 * Function_Execute_m11754 (Function_t2587 * __this, LuaTable_t750 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
