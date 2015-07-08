#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t1659;
// System.Linq.Expressions.Expression
struct Expression_t630;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t3251;
// System.Type
struct Type_t;

// System.Void System.Linq.Expressions.LambdaExpression::.ctor(System.Type,System.Linq.Expressions.Expression,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>)
extern "C" void LambdaExpression__ctor_m10256 (LambdaExpression_t1659 * __this, Type_t * ___delegateType, Expression_t630 * ___body, ReadOnlyCollection_1_t3251 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
extern "C" Expression_t630 * LambdaExpression_get_Body_m7798 (LambdaExpression_t1659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::get_Parameters()
extern "C" ReadOnlyCollection_1_t3251 * LambdaExpression_get_Parameters_m10257 (LambdaExpression_t1659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
