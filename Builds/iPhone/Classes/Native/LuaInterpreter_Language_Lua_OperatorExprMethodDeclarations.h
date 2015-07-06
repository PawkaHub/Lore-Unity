#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.OperatorExpr
struct OperatorExpr_t3540;
// System.String
struct String_t;
// Language.Lua.Term
struct Term_t3525;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t3590;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaTable
struct LuaTable_t1077;

// System.Void Language.Lua.OperatorExpr::.ctor()
extern "C" void OperatorExpr__ctor_m10592 (OperatorExpr_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.OperatorExpr::Add(System.String)
extern "C" void OperatorExpr_Add_m10593 (OperatorExpr_t3540 * __this, String_t* ___oper, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.OperatorExpr::Add(Language.Lua.Term)
extern "C" void OperatorExpr_Add_m10594 (OperatorExpr_t3540 * __this, Term_t3525 * ___term, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.OperatorExpr::BuildExpressionTree()
extern "C" Term_t3525 * OperatorExpr_BuildExpressionTree_m10595 (OperatorExpr_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.OperatorExpr::BuildExpressionTree(Language.Lua.Term,System.Collections.Generic.LinkedListNode`1<System.Object>)
extern "C" Term_t3525 * OperatorExpr_BuildExpressionTree_m10596 (Object_t * __this /* static, unused */, Term_t3525 * ___leftTerm, LinkedListNode_1_t3590 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.OperatorExpr::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1075 * OperatorExpr_Evaluate_m10597 (OperatorExpr_t3540 * __this, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.OperatorExpr::Simplify()
extern "C" Term_t3525 * OperatorExpr_Simplify_m10598 (OperatorExpr_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
