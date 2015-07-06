#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.TableConstructor
struct TableConstructor_t3548;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;

// System.Void Language.Lua.TableConstructor::.ctor()
extern "C" void TableConstructor__ctor_m10608 (TableConstructor_t3548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.TableConstructor::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1075 * TableConstructor_Evaluate_m10609 (TableConstructor_t3548 * __this, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
