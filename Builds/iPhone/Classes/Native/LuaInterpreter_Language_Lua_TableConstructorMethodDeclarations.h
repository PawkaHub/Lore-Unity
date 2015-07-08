#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.TableConstructor
struct TableConstructor_t3786;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;

// System.Void Language.Lua.TableConstructor::.ctor()
extern "C" void TableConstructor__ctor_m11027 (TableConstructor_t3786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.TableConstructor::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1334 * TableConstructor_Evaluate_m11028 (TableConstructor_t3786 * __this, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
