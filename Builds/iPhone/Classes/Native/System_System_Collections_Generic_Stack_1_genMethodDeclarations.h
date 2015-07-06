#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t3581;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3057;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.Stack`1/Enumerator<System.Int32>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
extern "C" void Stack_1__ctor_m11006_gshared (Stack_1_t3581 * __this, const MethodInfo* method);
#define Stack_1__ctor_m11006(__this, method) (( void (*) (Stack_1_t3581 *, const MethodInfo*))Stack_1__ctor_m11006_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m68084_gshared (Stack_1_t3581 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m68084(__this, method) (( bool (*) (Stack_1_t3581 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m68084_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m68085_gshared (Stack_1_t3581 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m68085(__this, method) (( Object_t * (*) (Stack_1_t3581 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m68085_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m68086_gshared (Stack_1_t3581 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m68086(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t3581 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m68086_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m68087_gshared (Stack_1_t3581 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m68087(__this, method) (( Object_t* (*) (Stack_1_t3581 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m68087_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m68088_gshared (Stack_1_t3581 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m68088(__this, method) (( Object_t * (*) (Stack_1_t3581 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m68088_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Int32>::Contains(T)
extern "C" bool Stack_1_Contains_m68089_gshared (Stack_1_t3581 * __this, int32_t ___t, const MethodInfo* method);
#define Stack_1_Contains_m68089(__this, ___t, method) (( bool (*) (Stack_1_t3581 *, int32_t, const MethodInfo*))Stack_1_Contains_m68089_gshared)(__this, ___t, method)
// T System.Collections.Generic.Stack`1<System.Int32>::Peek()
extern "C" int32_t Stack_1_Peek_m68090_gshared (Stack_1_t3581 * __this, const MethodInfo* method);
#define Stack_1_Peek_m68090(__this, method) (( int32_t (*) (Stack_1_t3581 *, const MethodInfo*))Stack_1_Peek_m68090_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Int32>::Pop()
extern "C" int32_t Stack_1_Pop_m11014_gshared (Stack_1_t3581 * __this, const MethodInfo* method);
#define Stack_1_Pop_m11014(__this, method) (( int32_t (*) (Stack_1_t3581 *, const MethodInfo*))Stack_1_Pop_m11014_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(T)
extern "C" void Stack_1_Push_m11013_gshared (Stack_1_t3581 * __this, int32_t ___t, const MethodInfo* method);
#define Stack_1_Push_m11013(__this, ___t, method) (( void (*) (Stack_1_t3581 *, int32_t, const MethodInfo*))Stack_1_Push_m11013_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Int32>::get_Count()
extern "C" int32_t Stack_1_get_Count_m68091_gshared (Stack_1_t3581 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m68091(__this, method) (( int32_t (*) (Stack_1_t3581 *, const MethodInfo*))Stack_1_get_Count_m68091_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t9262  Stack_1_GetEnumerator_m68092_gshared (Stack_1_t3581 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m68092(__this, method) (( Enumerator_t9262  (*) (Stack_1_t3581 *, const MethodInfo*))Stack_1_GetEnumerator_m68092_gshared)(__this, method)
