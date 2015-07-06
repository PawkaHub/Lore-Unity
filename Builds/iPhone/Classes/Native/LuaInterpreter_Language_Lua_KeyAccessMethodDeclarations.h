#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.KeyAccess
struct KeyAccess_t3533;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;

// System.Void Language.Lua.KeyAccess::.ctor()
extern "C" void KeyAccess__ctor_m10575 (KeyAccess_t3533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.KeyAccess::Evaluate(Language.Lua.LuaValue,Language.Lua.LuaTable)
extern "C" LuaValue_t1075 * KeyAccess_Evaluate_m10576 (KeyAccess_t3533 * __this, LuaValue_t1075 * ___baseValue, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
