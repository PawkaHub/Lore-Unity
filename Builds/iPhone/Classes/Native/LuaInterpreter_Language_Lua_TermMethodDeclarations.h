#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Term
struct Term_t3525;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;

// System.Void Language.Lua.Term::.ctor()
extern "C" void Term__ctor_m10610 (Term_t3525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Term::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1075 * Term_Evaluate_m10611 (Term_t3525 * __this, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.Term::Simplify()
extern "C" Term_t3525 * Term_Simplify_m10612 (Term_t3525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
