#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t6197;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t744;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m27320_gshared (Stack_1_t6197 * __this, const MethodInfo* method);
#define Stack_1__ctor_m27320(__this, method) (( void (*) (Stack_1_t6197 *, const MethodInfo*))Stack_1__ctor_m27320_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m27321_gshared (Stack_1_t6197 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m27321(__this, method) (( bool (*) (Stack_1_t6197 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m27321_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m27322_gshared (Stack_1_t6197 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m27322(__this, method) (( Object_t * (*) (Stack_1_t6197 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m27322_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m27323_gshared (Stack_1_t6197 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m27323(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t6197 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m27323_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27324_gshared (Stack_1_t6197 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27324(__this, method) (( Object_t* (*) (Stack_1_t6197 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27324_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m27325_gshared (Stack_1_t6197 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m27325(__this, method) (( Object_t * (*) (Stack_1_t6197 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m27325_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::Contains(T)
extern "C" bool Stack_1_Contains_m27326_gshared (Stack_1_t6197 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Contains_m27326(__this, ___t, method) (( bool (*) (Stack_1_t6197 *, Object_t *, const MethodInfo*))Stack_1_Contains_m27326_gshared)(__this, ___t, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m27327_gshared (Stack_1_t6197 * __this, const MethodInfo* method);
#define Stack_1_Peek_m27327(__this, method) (( Object_t * (*) (Stack_1_t6197 *, const MethodInfo*))Stack_1_Peek_m27327_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m27328_gshared (Stack_1_t6197 * __this, const MethodInfo* method);
#define Stack_1_Pop_m27328(__this, method) (( Object_t * (*) (Stack_1_t6197 *, const MethodInfo*))Stack_1_Pop_m27328_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m27329_gshared (Stack_1_t6197 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m27329(__this, ___t, method) (( void (*) (Stack_1_t6197 *, Object_t *, const MethodInfo*))Stack_1_Push_m27329_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m27330_gshared (Stack_1_t6197 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m27330(__this, method) (( int32_t (*) (Stack_1_t6197 *, const MethodInfo*))Stack_1_get_Count_m27330_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t6200  Stack_1_GetEnumerator_m27331_gshared (Stack_1_t6197 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m27331(__this, method) (( Enumerator_t6200  (*) (Stack_1_t6197 *, const MethodInfo*))Stack_1_GetEnumerator_m27331_gshared)(__this, method)
