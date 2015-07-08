#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Operation
struct Operation_t3776;
// System.String
struct String_t;
// Language.Lua.Term
struct Term_t3763;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaTable
struct LuaTable_t1336;
// Language.Lua.LuaFunction
struct LuaFunction_t3806;
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen_2.h"

// System.Void Language.Lua.Operation::.ctor(System.String)
extern "C" void Operation__ctor_m11004 (Operation_t3776 * __this, String_t* ___oper, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Operation::.ctor(System.String,Language.Lua.Term,Language.Lua.Term)
extern "C" void Operation__ctor_m11005 (Operation_t3776 * __this, String_t* ___oper, Term_t3763 * ___left, Term_t3763 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Operation::Evaluate(Language.Lua.LuaTable)
extern "C" LuaValue_t1334 * Operation_Evaluate_m11006 (Operation_t3776 * __this, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Operation::PrefixUnaryOperation(System.String,Language.Lua.Term,Language.Lua.LuaTable)
extern "C" LuaValue_t1334 * Operation_PrefixUnaryOperation_m11007 (Operation_t3776 * __this, String_t* ___Operator, Term_t3763 * ___RightOperand, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Operation::InfixBinaryOperation(Language.Lua.Term,System.String,Language.Lua.Term,Language.Lua.LuaTable)
extern "C" LuaValue_t1334 * Operation_InfixBinaryOperation_m11008 (Operation_t3776 * __this, Term_t3763 * ___LeftOperand, String_t* ___Operator, Term_t3763 * ___RightOperand, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Language.Lua.Operation::Compare(Language.Lua.LuaValue,Language.Lua.LuaValue)
extern "C" Nullable_1_t3072  Operation_Compare_m11009 (Object_t * __this /* static, unused */, LuaValue_t1334 * ___leftValue, LuaValue_t1334 * ___rightValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaFunction Language.Lua.Operation::GetMetaFunction(System.String,Language.Lua.LuaValue,Language.Lua.LuaValue)
extern "C" LuaFunction_t3806 * Operation_GetMetaFunction_m11010 (Object_t * __this /* static, unused */, String_t* ___name, LuaValue_t1334 * ___leftValue, LuaValue_t1334 * ___rightValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
