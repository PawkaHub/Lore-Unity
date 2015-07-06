#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.PrimaryExpr
struct PrimaryExpr_t3545;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;
// Language.Lua.Term
struct Term_t3525;

// System.Void Language.Lua.PrimaryExpr::.ctor()
extern "C" void PrimaryExpr__ctor_m10603 (PrimaryExpr_t3545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.PrimaryExpr::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1075 * PrimaryExpr_Evaluate_m10604 (PrimaryExpr_t3545 * __this, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.PrimaryExpr::Simplify()
extern "C" Term_t3525 * PrimaryExpr_Simplify_m10605 (PrimaryExpr_t3545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
