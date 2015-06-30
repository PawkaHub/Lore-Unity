#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>
struct InternalEnumerator_1_t6349;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.ArraySegment`1<System.Byte>
#include "mscorlib_System_ArraySegment_1_gen.h"

// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m44735_gshared (InternalEnumerator_1_t6349 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m44735(__this, ___array, method) (( void (*) (InternalEnumerator_1_t6349 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m44735_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m44736_gshared (InternalEnumerator_1_t6349 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m44736(__this, method) (( Object_t * (*) (InternalEnumerator_1_t6349 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m44736_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m44737_gshared (InternalEnumerator_1_t6349 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m44737(__this, method) (( void (*) (InternalEnumerator_1_t6349 *, const MethodInfo*))InternalEnumerator_1_Dispose_m44737_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m44738_gshared (InternalEnumerator_1_t6349 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m44738(__this, method) (( bool (*) (InternalEnumerator_1_t6349 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m44738_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::get_Current()
extern "C" ArraySegment_1_t6348  InternalEnumerator_1_get_Current_m44739_gshared (InternalEnumerator_1_t6349 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m44739(__this, method) (( ArraySegment_1_t6348  (*) (InternalEnumerator_1_t6349 *, const MethodInfo*))InternalEnumerator_1_get_Current_m44739_gshared)(__this, method)
