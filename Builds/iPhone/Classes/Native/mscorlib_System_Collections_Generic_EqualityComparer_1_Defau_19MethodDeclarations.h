#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Parse.ParseGeoPoint>
struct DefaultComparer_t7664;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Parse.ParseGeoPoint>::.ctor()
extern "C" void DefaultComparer__ctor_m48355_gshared (DefaultComparer_t7664 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m48355(__this, method) (( void (*) (DefaultComparer_t7664 *, const MethodInfo*))DefaultComparer__ctor_m48355_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Parse.ParseGeoPoint>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m48356_gshared (DefaultComparer_t7664 * __this, ParseGeoPoint_t1579  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m48356(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7664 *, ParseGeoPoint_t1579 , const MethodInfo*))DefaultComparer_GetHashCode_m48356_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Parse.ParseGeoPoint>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m48357_gshared (DefaultComparer_t7664 * __this, ParseGeoPoint_t1579  ___x, ParseGeoPoint_t1579  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m48357(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7664 *, ParseGeoPoint_t1579 , ParseGeoPoint_t1579 , const MethodInfo*))DefaultComparer_Equals_m48357_gshared)(__this, ___x, ___y, method)
