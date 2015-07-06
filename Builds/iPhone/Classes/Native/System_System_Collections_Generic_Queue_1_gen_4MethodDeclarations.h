#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t4865;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3057;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.Queue`1/Enumerator<System.Int32>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor()
extern "C" void Queue_1__ctor_m18260_gshared (Queue_1_t4865 * __this, const MethodInfo* method);
#define Queue_1__ctor_m18260(__this, method) (( void (*) (Queue_1_t4865 *, const MethodInfo*))Queue_1__ctor_m18260_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor(System.Int32)
extern "C" void Queue_1__ctor_m71924_gshared (Queue_1_t4865 * __this, int32_t ___count, const MethodInfo* method);
#define Queue_1__ctor_m71924(__this, ___count, method) (( void (*) (Queue_1_t4865 *, int32_t, const MethodInfo*))Queue_1__ctor_m71924_gshared)(__this, ___count, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m71925_gshared (Queue_1_t4865 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m71925(__this, ___array, ___idx, method) (( void (*) (Queue_1_t4865 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m71925_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m71926_gshared (Queue_1_t4865 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m71926(__this, method) (( bool (*) (Queue_1_t4865 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m71926_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m71927_gshared (Queue_1_t4865 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m71927(__this, method) (( Object_t * (*) (Queue_1_t4865 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m71927_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m71928_gshared (Queue_1_t4865 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m71928(__this, method) (( Object_t* (*) (Queue_1_t4865 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m71928_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m71929_gshared (Queue_1_t4865 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m71929(__this, method) (( Object_t * (*) (Queue_1_t4865 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m71929_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Clear()
extern "C" void Queue_1_Clear_m71930_gshared (Queue_1_t4865 * __this, const MethodInfo* method);
#define Queue_1_Clear_m71930(__this, method) (( void (*) (Queue_1_t4865 *, const MethodInfo*))Queue_1_Clear_m71930_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m71931_gshared (Queue_1_t4865 * __this, Int32U5BU5D_t119* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m71931(__this, ___array, ___idx, method) (( void (*) (Queue_1_t4865 *, Int32U5BU5D_t119*, int32_t, const MethodInfo*))Queue_1_CopyTo_m71931_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<System.Int32>::Dequeue()
extern "C" int32_t Queue_1_Dequeue_m18272_gshared (Queue_1_t4865 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m18272(__this, method) (( int32_t (*) (Queue_1_t4865 *, const MethodInfo*))Queue_1_Dequeue_m18272_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<System.Int32>::Peek()
extern "C" int32_t Queue_1_Peek_m71932_gshared (Queue_1_t4865 * __this, const MethodInfo* method);
#define Queue_1_Peek_m71932(__this, method) (( int32_t (*) (Queue_1_t4865 *, const MethodInfo*))Queue_1_Peek_m71932_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m18270_gshared (Queue_1_t4865 * __this, int32_t ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m18270(__this, ___item, method) (( void (*) (Queue_1_t4865 *, int32_t, const MethodInfo*))Queue_1_Enqueue_m18270_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m71933_gshared (Queue_1_t4865 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m71933(__this, ___new_size, method) (( void (*) (Queue_1_t4865 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m71933_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count()
extern "C" int32_t Queue_1_get_Count_m71934_gshared (Queue_1_t4865 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m71934(__this, method) (( int32_t (*) (Queue_1_t4865 *, const MethodInfo*))Queue_1_get_Count_m71934_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t9526  Queue_1_GetEnumerator_m71935_gshared (Queue_1_t4865 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m71935(__this, method) (( Enumerator_t9526  (*) (Queue_1_t4865 *, const MethodInfo*))Queue_1_GetEnumerator_m71935_gshared)(__this, method)
