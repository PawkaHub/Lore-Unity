#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t612;
// System.Linq.Expressions.Expression
struct Expression_t609;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t3014;

// System.Void System.Linq.Expressions.Expression`1<System.Object>::.ctor(System.Linq.Expressions.Expression,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>)
extern "C" void Expression_1__ctor_m27003_gshared (Expression_1_t612 * __this, Expression_t609 * ___body, ReadOnlyCollection_1_t3014 * ___parameters, const MethodInfo* method);
#define Expression_1__ctor_m27003(__this, ___body, ___parameters, method) (( void (*) (Expression_1_t612 *, Expression_t609 *, ReadOnlyCollection_1_t3014 *, const MethodInfo*))Expression_1__ctor_m27003_gshared)(__this, ___body, ___parameters, method)
