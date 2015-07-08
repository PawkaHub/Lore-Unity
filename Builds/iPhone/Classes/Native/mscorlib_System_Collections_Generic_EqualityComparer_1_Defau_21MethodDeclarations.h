#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Parse.ParseGeoPoint>
struct DefaultComparer_t7946;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Parse.ParseGeoPoint>::.ctor()
extern "C" void DefaultComparer__ctor_m49270_gshared (DefaultComparer_t7946 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m49270(__this, method) (( void (*) (DefaultComparer_t7946 *, const MethodInfo*))DefaultComparer__ctor_m49270_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Parse.ParseGeoPoint>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m49271_gshared (DefaultComparer_t7946 * __this, ParseGeoPoint_t935  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m49271(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7946 *, ParseGeoPoint_t935 , const MethodInfo*))DefaultComparer_GetHashCode_m49271_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Parse.ParseGeoPoint>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m49272_gshared (DefaultComparer_t7946 * __this, ParseGeoPoint_t935  ___x, ParseGeoPoint_t935  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m49272(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7946 *, ParseGeoPoint_t935 , ParseGeoPoint_t935 , const MethodInfo*))DefaultComparer_Equals_m49272_gshared)(__this, ___x, ___y, method)
