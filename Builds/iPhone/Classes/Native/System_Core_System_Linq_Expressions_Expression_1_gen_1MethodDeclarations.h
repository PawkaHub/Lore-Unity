#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t591;
// System.Linq.Expressions.Expression
struct Expression_t588;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t3185;

// System.Void System.Linq.Expressions.Expression`1<System.Object>::.ctor(System.Linq.Expressions.Expression,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>)
extern "C" void Expression_1__ctor_m25594_gshared (Expression_1_t591 * __this, Expression_t588 * ___body, ReadOnlyCollection_1_t3185 * ___parameters, const MethodInfo* method);
#define Expression_1__ctor_m25594(__this, ___body, ___parameters, method) (( void (*) (Expression_1_t591 *, Expression_t588 *, ReadOnlyCollection_1_t3185 *, const MethodInfo*))Expression_1__ctor_m25594_gshared)(__this, ___body, ___parameters, method)
