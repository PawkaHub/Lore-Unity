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
struct IEnumerator_1_t9618;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t92;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Collections.Generic.Queue`1/Enumerator<UnityEngine.Vector3>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::.ctor()
extern "C" void Queue_1__ctor_m3339_gshared (Queue_1_t495 * __this, const MethodInfo* method);
#define Queue_1__ctor_m3339(__this, method) (( void (*) (Queue_1_t495 *, const MethodInfo*))Queue_1__ctor_m3339_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::.ctor(System.Int32)
extern "C" void Queue_1__ctor_m30079_gshared (Queue_1_t495 * __this, int32_t ___count, const MethodInfo* method);
#define Queue_1__ctor_m30079(__this, ___count, method) (( void (*) (Queue_1_t495 *, int32_t, const MethodInfo*))Queue_1__ctor_m30079_gshared)(__this, ___count, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m30080_gshared (Queue_1_t495 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m30080(__this, ___array, ___idx, method) (( void (*) (Queue_1_t495 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m30080_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m30081_gshared (Queue_1_t495 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m30081(__this, method) (( bool (*) (Queue_1_t495 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m30081_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m30082_gshared (Queue_1_t495 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m30082(__this, method) (( Object_t * (*) (Queue_1_t495 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m30082_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30083_gshared (Queue_1_t495 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30083(__this, method) (( Object_t* (*) (Queue_1_t495 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30083_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m30084_gshared (Queue_1_t495 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m30084(__this, method) (( Object_t * (*) (Queue_1_t495 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m30084_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Clear()
extern "C" void Queue_1_Clear_m30085_gshared (Queue_1_t495 * __this, const MethodInfo* method);
#define Queue_1_Clear_m30085(__this, method) (( void (*) (Queue_1_t495 *, const MethodInfo*))Queue_1_Clear_m30085_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m30086_gshared (Queue_1_t495 * __this, Vector3U5BU5D_t92* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m30086(__this, ___array, ___idx, method) (( void (*) (Queue_1_t495 *, Vector3U5BU5D_t92*, int32_t, const MethodInfo*))Queue_1_CopyTo_m30086_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Dequeue()
extern "C" Vector3_t53  Queue_1_Dequeue_m3342_gshared (Queue_1_t495 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m3342(__this, method) (( Vector3_t53  (*) (Queue_1_t495 *, const MethodInfo*))Queue_1_Dequeue_m3342_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Peek()
extern "C" Vector3_t53  Queue_1_Peek_m3340_gshared (Queue_1_t495 * __this, const MethodInfo* method);
#define Queue_1_Peek_m3340(__this, method) (( Vector3_t53  (*) (Queue_1_t495 *, const MethodInfo*))Queue_1_Peek_m3340_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m3341_gshared (Queue_1_t495 * __this, Vector3_t53  ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m3341(__this, ___item, method) (( void (*) (Queue_1_t495 *, Vector3_t53 , const MethodInfo*))Queue_1_Enqueue_m3341_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m30087_gshared (Queue_1_t495 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m30087(__this, ___new_size, method) (( void (*) (Queue_1_t495 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m30087_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Vector3>::get_Count()
extern "C" int32_t Queue_1_get_Count_m30088_gshared (Queue_1_t495 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m30088(__this, method) (( int32_t (*) (Queue_1_t495 *, const MethodInfo*))Queue_1_get_Count_m30088_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<UnityEngine.Vector3>::GetEnumerator()
extern "C" Enumerator_t6365  Queue_1_GetEnumerator_m30089_gshared (Queue_1_t495 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m30089(__this, method) (( Enumerator_t6365  (*) (Queue_1_t495 *, const MethodInfo*))Queue_1_GetEnumerator_m30089_gshared)(__this, method)
