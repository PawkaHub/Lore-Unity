#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.ReflectionHelpers
struct ReflectionHelpers_t1417;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t562;

// System.Boolean Parse.Internal.ReflectionHelpers::IsPrimitive(System.Type)
extern "C" bool ReflectionHelpers_IsPrimitive_m6879 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.ReflectionHelpers::IsConstructedGenericType(System.Type)
extern "C" bool ReflectionHelpers_IsConstructedGenericType_m6880 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Parse.Internal.ReflectionHelpers::GetGenericTypeArguments(System.Type)
extern "C" TypeU5BU5D_t562* ReflectionHelpers_GetGenericTypeArguments_m6881 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.ReflectionHelpers::IsNullable(System.Type)
extern "C" bool ReflectionHelpers_IsNullable_m6882 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
