#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Term
struct Term_t3763;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;

// System.Void Language.Lua.Term::.ctor()
extern "C" void Term__ctor_m11029 (Term_t3763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Term::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1334 * Term_Evaluate_m11030 (Term_t3763 * __this, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.Term::Simplify()
extern "C" Term_t3763 * Term_Simplify_m11031 (Term_t3763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
