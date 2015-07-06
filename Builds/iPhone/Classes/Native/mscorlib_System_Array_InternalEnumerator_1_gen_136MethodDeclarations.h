#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>
struct InternalEnumerator_1_t9294;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.ArraySegment`1<System.Byte>
#include "mscorlib_System_ArraySegment_1_gen.h"

// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m68415_gshared (InternalEnumerator_1_t9294 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m68415(__this, ___array, method) (( void (*) (InternalEnumerator_1_t9294 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m68415_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m68416_gshared (InternalEnumerator_1_t9294 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m68416(__this, method) (( void (*) (InternalEnumerator_1_t9294 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m68416_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m68417_gshared (InternalEnumerator_1_t9294 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m68417(__this, method) (( Object_t * (*) (InternalEnumerator_1_t9294 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m68417_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m68418_gshared (InternalEnumerator_1_t9294 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m68418(__this, method) (( void (*) (InternalEnumerator_1_t9294 *, const MethodInfo*))InternalEnumerator_1_Dispose_m68418_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m68419_gshared (InternalEnumerator_1_t9294 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m68419(__this, method) (( bool (*) (InternalEnumerator_1_t9294 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m68419_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::get_Current()
extern "C" ArraySegment_1_t9293  InternalEnumerator_1_get_Current_m68420_gshared (InternalEnumerator_1_t9294 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m68420(__this, method) (( ArraySegment_1_t9293  (*) (InternalEnumerator_1_t9294 *, const MethodInfo*))InternalEnumerator_1_get_Current_m68420_gshared)(__this, method)
