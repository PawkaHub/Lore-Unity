#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.PrimaryExpr
struct PrimaryExpr_t3783;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;
// Language.Lua.Term
struct Term_t3763;

// System.Void Language.Lua.PrimaryExpr::.ctor()
extern "C" void PrimaryExpr__ctor_m11022 (PrimaryExpr_t3783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.PrimaryExpr::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1334 * PrimaryExpr_Evaluate_m11023 (PrimaryExpr_t3783 * __this, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.PrimaryExpr::Simplify()
extern "C" Term_t3763 * PrimaryExpr_Simplify_m11024 (PrimaryExpr_t3783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
