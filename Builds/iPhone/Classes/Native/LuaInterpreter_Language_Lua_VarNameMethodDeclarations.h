#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.VarName
struct VarName_t3550;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;
// Language.Lua.Term
struct Term_t3525;

// System.Void Language.Lua.VarName::.ctor()
extern "C" void VarName__ctor_m10615 (VarName_t3550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.VarName::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1075 * VarName_Evaluate_m10616 (VarName_t3550 * __this, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.VarName::Simplify()
extern "C" Term_t3525 * VarName_Simplify_m10617 (VarName_t3550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
