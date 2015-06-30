#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t5109;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t718;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m25896_gshared (Stack_1_t5109 * __this, const MethodInfo* method);
#define Stack_1__ctor_m25896(__this, method) (( void (*) (Stack_1_t5109 *, const MethodInfo*))Stack_1__ctor_m25896_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m25897_gshared (Stack_1_t5109 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m25897(__this, method) (( bool (*) (Stack_1_t5109 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m25897_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m25898_gshared (Stack_1_t5109 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m25898(__this, method) (( Object_t * (*) (Stack_1_t5109 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m25898_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m25899_gshared (Stack_1_t5109 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m25899(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t5109 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m25899_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25900_gshared (Stack_1_t5109 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25900(__this, method) (( Object_t* (*) (Stack_1_t5109 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25900_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m25901_gshared (Stack_1_t5109 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m25901(__this, method) (( Object_t * (*) (Stack_1_t5109 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m25901_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::Contains(T)
extern "C" bool Stack_1_Contains_m25902_gshared (Stack_1_t5109 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Contains_m25902(__this, ___t, method) (( bool (*) (Stack_1_t5109 *, Object_t *, const MethodInfo*))Stack_1_Contains_m25902_gshared)(__this, ___t, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m25903_gshared (Stack_1_t5109 * __this, const MethodInfo* method);
#define Stack_1_Peek_m25903(__this, method) (( Object_t * (*) (Stack_1_t5109 *, const MethodInfo*))Stack_1_Peek_m25903_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m25904_gshared (Stack_1_t5109 * __this, const MethodInfo* method);
#define Stack_1_Pop_m25904(__this, method) (( Object_t * (*) (Stack_1_t5109 *, const MethodInfo*))Stack_1_Pop_m25904_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m25905_gshared (Stack_1_t5109 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m25905(__this, ___t, method) (( void (*) (Stack_1_t5109 *, Object_t *, const MethodInfo*))Stack_1_Push_m25905_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m25906_gshared (Stack_1_t5109 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m25906(__this, method) (( int32_t (*) (Stack_1_t5109 *, const MethodInfo*))Stack_1_get_Count_m25906_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5112  Stack_1_GetEnumerator_m25907_gshared (Stack_1_t5109 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m25907(__this, method) (( Enumerator_t5112  (*) (Stack_1_t5109 *, const MethodInfo*))Stack_1_GetEnumerator_m25907_gshared)(__this, method)
