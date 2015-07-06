#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1436;
// System.Linq.Expressions.Expression
struct Expression_t609;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Type
struct Type_t;

// System.Void System.Linq.Expressions.MemberExpression::.ctor(System.Linq.Expressions.Expression,System.Reflection.MemberInfo,System.Type)
extern "C" void MemberExpression__ctor_m9927 (MemberExpression_t1436 * __this, Expression_t609 * ___expression, MemberInfo_t * ___member, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::get_Expression()
extern "C" Expression_t609 * MemberExpression_get_Expression_m9928 (MemberExpression_t1436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
extern "C" MemberInfo_t * MemberExpression_get_Member_m9929 (MemberExpression_t1436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
