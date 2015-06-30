#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t2651;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3228;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.Stack`1/Enumerator<System.Int32>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
extern "C" void Stack_1__ctor_m12215_gshared (Stack_1_t2651 * __this, const MethodInfo* method);
#define Stack_1__ctor_m12215(__this, method) (( void (*) (Stack_1_t2651 *, const MethodInfo*))Stack_1__ctor_m12215_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m40332_gshared (Stack_1_t2651 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m40332(__this, method) (( bool (*) (Stack_1_t2651 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m40332_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m40333_gshared (Stack_1_t2651 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m40333(__this, method) (( Object_t * (*) (Stack_1_t2651 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m40333_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m40334_gshared (Stack_1_t2651 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m40334(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t2651 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m40334_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40335_gshared (Stack_1_t2651 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40335(__this, method) (( Object_t* (*) (Stack_1_t2651 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40335_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m40336_gshared (Stack_1_t2651 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m40336(__this, method) (( Object_t * (*) (Stack_1_t2651 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m40336_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Int32>::Contains(T)
extern "C" bool Stack_1_Contains_m40337_gshared (Stack_1_t2651 * __this, int32_t ___t, const MethodInfo* method);
#define Stack_1_Contains_m40337(__this, ___t, method) (( bool (*) (Stack_1_t2651 *, int32_t, const MethodInfo*))Stack_1_Contains_m40337_gshared)(__this, ___t, method)
// T System.Collections.Generic.Stack`1<System.Int32>::Peek()
extern "C" int32_t Stack_1_Peek_m40338_gshared (Stack_1_t2651 * __this, const MethodInfo* method);
#define Stack_1_Peek_m40338(__this, method) (( int32_t (*) (Stack_1_t2651 *, const MethodInfo*))Stack_1_Peek_m40338_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Int32>::Pop()
extern "C" int32_t Stack_1_Pop_m12223_gshared (Stack_1_t2651 * __this, const MethodInfo* method);
#define Stack_1_Pop_m12223(__this, method) (( int32_t (*) (Stack_1_t2651 *, const MethodInfo*))Stack_1_Pop_m12223_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(T)
extern "C" void Stack_1_Push_m12222_gshared (Stack_1_t2651 * __this, int32_t ___t, const MethodInfo* method);
#define Stack_1_Push_m12222(__this, ___t, method) (( void (*) (Stack_1_t2651 *, int32_t, const MethodInfo*))Stack_1_Push_m12222_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Int32>::get_Count()
extern "C" int32_t Stack_1_get_Count_m40339_gshared (Stack_1_t2651 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m40339(__this, method) (( int32_t (*) (Stack_1_t2651 *, const MethodInfo*))Stack_1_get_Count_m40339_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t6055  Stack_1_GetEnumerator_m40340_gshared (Stack_1_t2651 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m40340(__this, method) (( Enumerator_t6055  (*) (Stack_1_t2651 *, const MethodInfo*))Stack_1_GetEnumerator_m40340_gshared)(__this, method)
