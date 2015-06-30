#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t595;
// System.Linq.Expressions.Expression
struct Expression_t588;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3189;

// System.Void System.Linq.Expressions.MethodCallExpression::.ctor(System.Linq.Expressions.Expression,System.Reflection.MethodInfo,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>)
extern "C" void MethodCallExpression__ctor_m14571 (MethodCallExpression_t595 * __this, Expression_t588 * ___obj, MethodInfo_t * ___method, ReadOnlyCollection_1_t3189 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression::get_Object()
extern "C" Expression_t588 * MethodCallExpression_get_Object_m14572 (MethodCallExpression_t595 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Linq.Expressions.MethodCallExpression::get_Method()
extern "C" MethodInfo_t * MethodCallExpression_get_Method_m5501 (MethodCallExpression_t595 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.MethodCallExpression::get_Arguments()
extern "C" ReadOnlyCollection_1_t3189 * MethodCallExpression_get_Arguments_m14573 (MethodCallExpression_t595 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
