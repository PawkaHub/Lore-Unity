#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.ReflectionHelpers
struct ReflectionHelpers_t1797;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t1957;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t636;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1958;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
struct IEnumerable_1_t1959;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1960;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// <>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>
struct U3CU3Ef__AnonymousType0_2_t1961;
// <>f__AnonymousType1`2<<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>,System.Collections.Generic.IEnumerable`1<System.Type>>
struct U3CU3Ef__AnonymousType1_2_t1956;
// System.Reflection.ParameterInfo
struct ParameterInfo_t762;

// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> Parse.Internal.ReflectionHelpers::GetProperties(System.Type)
extern "C" Object_t* ReflectionHelpers_GetProperties_m8187 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Parse.Internal.ReflectionHelpers::GetMethod(System.Type,System.String,System.Type[])
extern "C" MethodInfo_t * ReflectionHelpers_GetMethod_m8188 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___name, TypeU5BU5D_t636* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.ReflectionHelpers::IsPrimitive(System.Type)
extern "C" bool ReflectionHelpers_IsPrimitive_m8189 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Type> Parse.Internal.ReflectionHelpers::GetInterfaces(System.Type)
extern "C" Object_t* ReflectionHelpers_GetInterfaces_m8190 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.ReflectionHelpers::IsConstructedGenericType(System.Type)
extern "C" bool ReflectionHelpers_IsConstructedGenericType_m8191 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> Parse.Internal.ReflectionHelpers::GetConstructors(System.Type)
extern "C" Object_t* ReflectionHelpers_GetConstructors_m8192 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Parse.Internal.ReflectionHelpers::GetGenericTypeArguments(System.Type)
extern "C" TypeU5BU5D_t636* ReflectionHelpers_GetGenericTypeArguments_m8193 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Parse.Internal.ReflectionHelpers::FindConstructor(System.Type,System.Type[])
extern "C" ConstructorInfo_t1960 * ReflectionHelpers_FindConstructor_m8194 (Object_t * __this /* static, unused */, Type_t * ___self, TypeU5BU5D_t636* ___parameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo Parse.Internal.ReflectionHelpers::GetProperty(System.Type,System.String)
extern "C" PropertyInfo_t * ReflectionHelpers_GetProperty_m8195 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.ReflectionHelpers::IsNullable(System.Type)
extern "C" bool ReflectionHelpers_IsNullable_m8196 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// <>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]> Parse.Internal.ReflectionHelpers::<FindConstructor>b__2(System.Reflection.ConstructorInfo)
extern "C" U3CU3Ef__AnonymousType0_2_t1961 * ReflectionHelpers_U3CFindConstructorU3Eb__2_m8197 (Object_t * __this /* static, unused */, ConstructorInfo_t1960 * ___constructor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// <>f__AnonymousType1`2<<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>,System.Collections.Generic.IEnumerable`1<System.Type>> Parse.Internal.ReflectionHelpers::<FindConstructor>b__3(<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>)
extern "C" U3CU3Ef__AnonymousType1_2_t1956 * ReflectionHelpers_U3CFindConstructorU3Eb__3_m8198 (Object_t * __this /* static, unused */, U3CU3Ef__AnonymousType0_2_t1961 * ___U3CU3Eh__TransparentIdentifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Parse.Internal.ReflectionHelpers::<FindConstructor>b__6(<>f__AnonymousType1`2<<>f__AnonymousType0`2<System.Reflection.ConstructorInfo,System.Reflection.ParameterInfo[]>,System.Collections.Generic.IEnumerable`1<System.Type>>)
extern "C" ConstructorInfo_t1960 * ReflectionHelpers_U3CFindConstructorU3Eb__6_m8199 (Object_t * __this /* static, unused */, U3CU3Ef__AnonymousType1_2_t1956 * ___U3CU3Eh__TransparentIdentifier1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.Internal.ReflectionHelpers::<FindConstructor>b__4(System.Reflection.ParameterInfo)
extern "C" Type_t * ReflectionHelpers_U3CFindConstructorU3Eb__4_m8200 (Object_t * __this /* static, unused */, ParameterInfo_t762 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
