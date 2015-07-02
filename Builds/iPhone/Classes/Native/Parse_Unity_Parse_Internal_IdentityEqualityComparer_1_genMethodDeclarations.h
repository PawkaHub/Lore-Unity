﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.IdentityEqualityComparer`1<System.Object>
struct IdentityEqualityComparer_1_t1604;
// System.Object
struct Object_t;

// System.Boolean Parse.Internal.IdentityEqualityComparer`1<System.Object>::Equals(T,T)
extern "C" bool IdentityEqualityComparer_1_Equals_m33768_gshared (IdentityEqualityComparer_1_t1604 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define IdentityEqualityComparer_1_Equals_m33768(__this, ___x, ___y, method) (( bool (*) (IdentityEqualityComparer_1_t1604 *, Object_t *, Object_t *, const MethodInfo*))IdentityEqualityComparer_1_Equals_m33768_gshared)(__this, ___x, ___y, method)
// System.Int32 Parse.Internal.IdentityEqualityComparer`1<System.Object>::GetHashCode(T)
extern "C" int32_t IdentityEqualityComparer_1_GetHashCode_m33769_gshared (IdentityEqualityComparer_1_t1604 * __this, Object_t * ___obj, const MethodInfo* method);
#define IdentityEqualityComparer_1_GetHashCode_m33769(__this, ___obj, method) (( int32_t (*) (IdentityEqualityComparer_1_t1604 *, Object_t *, const MethodInfo*))IdentityEqualityComparer_1_GetHashCode_m33769_gshared)(__this, ___obj, method)
// System.Void Parse.Internal.IdentityEqualityComparer`1<System.Object>::.ctor()
extern "C" void IdentityEqualityComparer_1__ctor_m7431_gshared (IdentityEqualityComparer_1_t1604 * __this, const MethodInfo* method);
#define IdentityEqualityComparer_1__ctor_m7431(__this, method) (( void (*) (IdentityEqualityComparer_1_t1604 *, const MethodInfo*))IdentityEqualityComparer_1__ctor_m7431_gshared)(__this, method)