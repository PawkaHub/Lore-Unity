#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.TableConstructor
struct TableConstructor_t2620;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaTable
struct LuaTable_t750;

// System.Void Language.Lua.TableConstructor::.ctor()
extern "C" void TableConstructor__ctor_m11817 (TableConstructor_t2620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.TableConstructor::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t748 * TableConstructor_Evaluate_m11818 (TableConstructor_t2620 * __this, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
