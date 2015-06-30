#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.DateTime>
struct InternalEnumerator_1_t6391;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m45021_gshared (InternalEnumerator_1_t6391 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m45021(__this, ___array, method) (( void (*) (InternalEnumerator_1_t6391 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m45021_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m45022_gshared (InternalEnumerator_1_t6391 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m45022(__this, method) (( Object_t * (*) (InternalEnumerator_1_t6391 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m45022_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m45023_gshared (InternalEnumerator_1_t6391 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m45023(__this, method) (( void (*) (InternalEnumerator_1_t6391 *, const MethodInfo*))InternalEnumerator_1_Dispose_m45023_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m45024_gshared (InternalEnumerator_1_t6391 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m45024(__this, method) (( bool (*) (InternalEnumerator_1_t6391 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m45024_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t1219  InternalEnumerator_1_get_Current_m45025_gshared (InternalEnumerator_1_t6391 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m45025(__this, method) (( DateTime_t1219  (*) (InternalEnumerator_1_t6391 *, const MethodInfo*))InternalEnumerator_1_get_Current_m45025_gshared)(__this, method)
