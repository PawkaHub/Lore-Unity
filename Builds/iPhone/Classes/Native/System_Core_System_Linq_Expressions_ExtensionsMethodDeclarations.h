﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.Extensions
struct Extensions_t3194;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;

// System.Boolean System.Linq.Expressions.Extensions::IsGenericInstanceOf(System.Type,System.Type)
extern "C" bool Extensions_IsGenericInstanceOf_m14548 (Object_t * __this /* static, unused */, Type_t * ___self, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Extensions::IsNullable(System.Type)
extern "C" bool Extensions_IsNullable_m14549 (Object_t * __this /* static, unused */, Type_t * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Extensions::IsExpression(System.Type)
extern "C" bool Extensions_IsExpression_m14550 (Object_t * __this /* static, unused */, Type_t * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Extensions::IsAssignableTo(System.Type,System.Type)
extern "C" bool Extensions_IsAssignableTo_m14551 (Object_t * __this /* static, unused */, Type_t * ___self, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Linq.Expressions.Extensions::GetFirstGenericArgument(System.Type)
extern "C" Type_t * Extensions_GetFirstGenericArgument_m14552 (Object_t * __this /* static, unused */, Type_t * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Linq.Expressions.Extensions::GetNotNullableType(System.Type)
extern "C" Type_t * Extensions_GetNotNullableType_m14553 (Object_t * __this /* static, unused */, Type_t * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Linq.Expressions.Extensions::GetInvokeMethod(System.Type)
extern "C" MethodInfo_t * Extensions_GetInvokeMethod_m14554 (Object_t * __this /* static, unused */, Type_t * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Extensions::ArrayTypeIsAssignableTo(System.Type,System.Type)
extern "C" bool Extensions_ArrayTypeIsAssignableTo_m14555 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___candidate, const MethodInfo* method) IL2CPP_METHOD_ATTR;