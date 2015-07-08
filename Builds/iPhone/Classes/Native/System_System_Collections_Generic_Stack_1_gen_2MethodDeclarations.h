#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t6435;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t838;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m27737_gshared (Stack_1_t6435 * __this, const MethodInfo* method);
#define Stack_1__ctor_m27737(__this, method) (( void (*) (Stack_1_t6435 *, const MethodInfo*))Stack_1__ctor_m27737_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m27738_gshared (Stack_1_t6435 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m27738(__this, method) (( bool (*) (Stack_1_t6435 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m27738_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m27739_gshared (Stack_1_t6435 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m27739(__this, method) (( Object_t * (*) (Stack_1_t6435 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m27739_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m27740_gshared (Stack_1_t6435 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m27740(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t6435 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m27740_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27741_gshared (Stack_1_t6435 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27741(__this, method) (( Object_t* (*) (Stack_1_t6435 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27741_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m27742_gshared (Stack_1_t6435 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m27742(__this, method) (( Object_t * (*) (Stack_1_t6435 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m27742_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::Contains(T)
extern "C" bool Stack_1_Contains_m27743_gshared (Stack_1_t6435 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Contains_m27743(__this, ___t, method) (( bool (*) (Stack_1_t6435 *, Object_t *, const MethodInfo*))Stack_1_Contains_m27743_gshared)(__this, ___t, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m27744_gshared (Stack_1_t6435 * __this, const MethodInfo* method);
#define Stack_1_Peek_m27744(__this, method) (( Object_t * (*) (Stack_1_t6435 *, const MethodInfo*))Stack_1_Peek_m27744_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m27745_gshared (Stack_1_t6435 * __this, const MethodInfo* method);
#define Stack_1_Pop_m27745(__this, method) (( Object_t * (*) (Stack_1_t6435 *, const MethodInfo*))Stack_1_Pop_m27745_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m27746_gshared (Stack_1_t6435 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m27746(__this, ___t, method) (( void (*) (Stack_1_t6435 *, Object_t *, const MethodInfo*))Stack_1_Push_m27746_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m27747_gshared (Stack_1_t6435 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m27747(__this, method) (( int32_t (*) (Stack_1_t6435 *, const MethodInfo*))Stack_1_get_Count_m27747_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t6438  Stack_1_GetEnumerator_m27748_gshared (Stack_1_t6435 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m27748(__this, method) (( Enumerator_t6438  (*) (Stack_1_t6435 *, const MethodInfo*))Stack_1_GetEnumerator_m27748_gshared)(__this, method)
