#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t3819;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3295;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.Stack`1/Enumerator<System.Int32>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
extern "C" void Stack_1__ctor_m11425_gshared (Stack_1_t3819 * __this, const MethodInfo* method);
#define Stack_1__ctor_m11425(__this, method) (( void (*) (Stack_1_t3819 *, const MethodInfo*))Stack_1__ctor_m11425_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m68999_gshared (Stack_1_t3819 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m68999(__this, method) (( bool (*) (Stack_1_t3819 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m68999_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m69000_gshared (Stack_1_t3819 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m69000(__this, method) (( Object_t * (*) (Stack_1_t3819 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m69000_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m69001_gshared (Stack_1_t3819 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m69001(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t3819 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m69001_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m69002_gshared (Stack_1_t3819 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m69002(__this, method) (( Object_t* (*) (Stack_1_t3819 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m69002_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m69003_gshared (Stack_1_t3819 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m69003(__this, method) (( Object_t * (*) (Stack_1_t3819 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m69003_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Int32>::Contains(T)
extern "C" bool Stack_1_Contains_m69004_gshared (Stack_1_t3819 * __this, int32_t ___t, const MethodInfo* method);
#define Stack_1_Contains_m69004(__this, ___t, method) (( bool (*) (Stack_1_t3819 *, int32_t, const MethodInfo*))Stack_1_Contains_m69004_gshared)(__this, ___t, method)
// T System.Collections.Generic.Stack`1<System.Int32>::Peek()
extern "C" int32_t Stack_1_Peek_m69005_gshared (Stack_1_t3819 * __this, const MethodInfo* method);
#define Stack_1_Peek_m69005(__this, method) (( int32_t (*) (Stack_1_t3819 *, const MethodInfo*))Stack_1_Peek_m69005_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Int32>::Pop()
extern "C" int32_t Stack_1_Pop_m11433_gshared (Stack_1_t3819 * __this, const MethodInfo* method);
#define Stack_1_Pop_m11433(__this, method) (( int32_t (*) (Stack_1_t3819 *, const MethodInfo*))Stack_1_Pop_m11433_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(T)
extern "C" void Stack_1_Push_m11432_gshared (Stack_1_t3819 * __this, int32_t ___t, const MethodInfo* method);
#define Stack_1_Push_m11432(__this, ___t, method) (( void (*) (Stack_1_t3819 *, int32_t, const MethodInfo*))Stack_1_Push_m11432_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Int32>::get_Count()
extern "C" int32_t Stack_1_get_Count_m69006_gshared (Stack_1_t3819 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m69006(__this, method) (( int32_t (*) (Stack_1_t3819 *, const MethodInfo*))Stack_1_get_Count_m69006_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t9544  Stack_1_GetEnumerator_m69007_gshared (Stack_1_t3819 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m69007(__this, method) (( Enumerator_t9544  (*) (Stack_1_t3819 *, const MethodInfo*))Stack_1_GetEnumerator_m69007_gshared)(__this, method)
