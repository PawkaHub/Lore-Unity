#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Function
struct Function_t3515;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;

// System.Void Language.Lua.Function::.ctor()
extern "C" void Function__ctor_m10544 (Function_t3515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Function::Execute(Language.Lua.LuaTable,System.Boolean&)
extern "C" LuaValue_t1075 * Function_Execute_m10545 (Function_t3515 * __this, LuaTable_t1077 * ___enviroment, bool* ___isBreak, const MethodInfo* method) IL2CPP_METHOD_ATTR;
