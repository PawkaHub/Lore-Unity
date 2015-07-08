#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.NameAccess
struct NameAccess_t3773;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;

// System.Void Language.Lua.NameAccess::.ctor()
extern "C" void NameAccess__ctor_m10998 (NameAccess_t3773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.NameAccess::Evaluate(Language.Lua.LuaValue,Language.Lua.LuaTable)
extern "C" LuaValue_t1334 * NameAccess_Evaluate_m10999 (NameAccess_t3773 * __this, LuaValue_t1334 * ___baseValue, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
