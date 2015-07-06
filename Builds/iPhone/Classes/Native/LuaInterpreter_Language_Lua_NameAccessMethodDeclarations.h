#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.NameAccess
struct NameAccess_t3535;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;

// System.Void Language.Lua.NameAccess::.ctor()
extern "C" void NameAccess__ctor_m10579 (NameAccess_t3535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.NameAccess::Evaluate(Language.Lua.LuaValue,Language.Lua.LuaTable)
extern "C" LuaValue_t1075 * NameAccess_Evaluate_m10580 (NameAccess_t3535 * __this, LuaValue_t1075 * ___baseValue, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
