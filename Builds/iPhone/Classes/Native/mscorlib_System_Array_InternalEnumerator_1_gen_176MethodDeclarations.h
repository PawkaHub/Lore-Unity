#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.TimeSpan>
struct InternalEnumerator_1_t6393;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m45031_gshared (InternalEnumerator_1_t6393 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m45031(__this, ___array, method) (( void (*) (InternalEnumerator_1_t6393 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m45031_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m45032_gshared (InternalEnumerator_1_t6393 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m45032(__this, method) (( Object_t * (*) (InternalEnumerator_1_t6393 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m45032_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m45033_gshared (InternalEnumerator_1_t6393 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m45033(__this, method) (( void (*) (InternalEnumerator_1_t6393 *, const MethodInfo*))InternalEnumerator_1_Dispose_m45033_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m45034_gshared (InternalEnumerator_1_t6393 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m45034(__this, method) (( bool (*) (InternalEnumerator_1_t6393 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m45034_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern "C" TimeSpan_t2672  InternalEnumerator_1_get_Current_m45035_gshared (InternalEnumerator_1_t6393 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m45035(__this, method) (( TimeSpan_t2672  (*) (InternalEnumerator_1_t6393 *, const MethodInfo*))InternalEnumerator_1_get_Current_m45035_gshared)(__this, method)
