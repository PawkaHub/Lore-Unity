#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<UnityEngine.Vector3>
struct Queue_1_t495;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>
struct IEnumerator_1_t6446;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t92;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Collections.Generic.Queue`1/Enumerator<UnityEngine.Vector3>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::.ctor()
extern "C" void Queue_1__ctor_m3254_gshared (Queue_1_t495 * __this, const MethodInfo* method);
#define Queue_1__ctor_m3254(__this, method) (( void (*) (Queue_1_t495 *, const MethodInfo*))Queue_1__ctor_m3254_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::.ctor(System.Int32)
extern "C" void Queue_1__ctor_m28584_gshared (Queue_1_t495 * __this, int32_t ___count, const MethodInfo* method);
#define Queue_1__ctor_m28584(__this, ___count, method) (( void (*) (Queue_1_t495 *, int32_t, const MethodInfo*))Queue_1__ctor_m28584_gshared)(__this, ___count, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m28585_gshared (Queue_1_t495 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m28585(__this, ___array, ___idx, method) (( void (*) (Queue_1_t495 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m28585_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m28586_gshared (Queue_1_t495 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m28586(__this, method) (( bool (*) (Queue_1_t495 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m28586_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m28587_gshared (Queue_1_t495 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m28587(__this, method) (( Object_t * (*) (Queue_1_t495 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m28587_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28588_gshared (Queue_1_t495 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28588(__this, method) (( Object_t* (*) (Queue_1_t495 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28588_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m28589_gshared (Queue_1_t495 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m28589(__this, method) (( Object_t * (*) (Queue_1_t495 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m28589_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Clear()
extern "C" void Queue_1_Clear_m28590_gshared (Queue_1_t495 * __this, const MethodInfo* method);
#define Queue_1_Clear_m28590(__this, method) (( void (*) (Queue_1_t495 *, const MethodInfo*))Queue_1_Clear_m28590_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m28591_gshared (Queue_1_t495 * __this, Vector3U5BU5D_t92* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m28591(__this, ___array, ___idx, method) (( void (*) (Queue_1_t495 *, Vector3U5BU5D_t92*, int32_t, const MethodInfo*))Queue_1_CopyTo_m28591_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Dequeue()
extern "C" Vector3_t53  Queue_1_Dequeue_m3257_gshared (Queue_1_t495 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m3257(__this, method) (( Vector3_t53  (*) (Queue_1_t495 *, const MethodInfo*))Queue_1_Dequeue_m3257_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Peek()
extern "C" Vector3_t53  Queue_1_Peek_m3255_gshared (Queue_1_t495 * __this, const MethodInfo* method);
#define Queue_1_Peek_m3255(__this, method) (( Vector3_t53  (*) (Queue_1_t495 *, const MethodInfo*))Queue_1_Peek_m3255_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m3256_gshared (Queue_1_t495 * __this, Vector3_t53  ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m3256(__this, ___item, method) (( void (*) (Queue_1_t495 *, Vector3_t53 , const MethodInfo*))Queue_1_Enqueue_m3256_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m28592_gshared (Queue_1_t495 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m28592(__this, ___new_size, method) (( void (*) (Queue_1_t495 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m28592_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Vector3>::get_Count()
extern "C" int32_t Queue_1_get_Count_m28593_gshared (Queue_1_t495 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m28593(__this, method) (( int32_t (*) (Queue_1_t495 *, const MethodInfo*))Queue_1_get_Count_m28593_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<UnityEngine.Vector3>::GetEnumerator()
extern "C" Enumerator_t5277  Queue_1_GetEnumerator_m28594_gshared (Queue_1_t495 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m28594(__this, method) (( Enumerator_t5277  (*) (Queue_1_t495 *, const MethodInfo*))Queue_1_GetEnumerator_m28594_gshared)(__this, method)
