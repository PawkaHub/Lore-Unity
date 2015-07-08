#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Function
struct Function_t3753;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;

// System.Void Language.Lua.Function::.ctor()
extern "C" void Function__ctor_m10963 (Function_t3753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Function::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t1334 * Function_Execute_m10964 (Function_t3753 * __this, LuaTable_t1336 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
