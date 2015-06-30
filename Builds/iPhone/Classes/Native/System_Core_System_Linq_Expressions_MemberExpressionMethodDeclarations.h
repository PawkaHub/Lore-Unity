#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1113;
// System.Linq.Expressions.Expression
struct Expression_t588;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Type
struct Type_t;

// System.Void System.Linq.Expressions.MemberExpression::.ctor(System.Linq.Expressions.Expression,System.Reflection.MemberInfo,System.Type)
extern "C" void MemberExpression__ctor_m14564 (MemberExpression_t1113 * __this, Expression_t588 * ___expression, MemberInfo_t * ___member, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::get_Expression()
extern "C" Expression_t588 * MemberExpression_get_Expression_m14565 (MemberExpression_t1113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
extern "C" MemberInfo_t * MemberExpression_get_Member_m14566 (MemberExpression_t1113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
