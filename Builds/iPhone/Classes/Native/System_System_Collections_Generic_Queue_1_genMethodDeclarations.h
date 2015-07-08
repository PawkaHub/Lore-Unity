#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<UnityEngine.Vector3>
struct Queue_1_t522;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>
struct IEnumerator_1_t9900;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t92;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Collections.Generic.Queue`1/Enumerator<UnityEngine.Vector3>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::.ctor()
extern "C" void Queue_1__ctor_m3567_gshared (Queue_1_t522 * __this, const MethodInfo* method);
#define Queue_1__ctor_m3567(__this, method) (( void (*) (Queue_1_t522 *, const MethodInfo*))Queue_1__ctor_m3567_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::.ctor(System.Int32)
extern "C" void Queue_1__ctor_m31451_gshared (Queue_1_t522 * __this, int32_t ___count, const MethodInfo* method);
#define Queue_1__ctor_m31451(__this, ___count, method) (( void (*) (Queue_1_t522 *, int32_t, const MethodInfo*))Queue_1__ctor_m31451_gshared)(__this, ___count, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m31452_gshared (Queue_1_t522 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m31452(__this, ___array, ___idx, method) (( void (*) (Queue_1_t522 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m31452_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m31453_gshared (Queue_1_t522 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m31453(__this, method) (( bool (*) (Queue_1_t522 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m31453_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m31454_gshared (Queue_1_t522 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m31454(__this, method) (( Object_t * (*) (Queue_1_t522 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m31454_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31455_gshared (Queue_1_t522 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31455(__this, method) (( Object_t* (*) (Queue_1_t522 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31455_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m31456_gshared (Queue_1_t522 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m31456(__this, method) (( Object_t * (*) (Queue_1_t522 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m31456_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Clear()
extern "C" void Queue_1_Clear_m31457_gshared (Queue_1_t522 * __this, const MethodInfo* method);
#define Queue_1_Clear_m31457(__this, method) (( void (*) (Queue_1_t522 *, const MethodInfo*))Queue_1_Clear_m31457_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m31458_gshared (Queue_1_t522 * __this, Vector3U5BU5D_t92* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m31458(__this, ___array, ___idx, method) (( void (*) (Queue_1_t522 *, Vector3U5BU5D_t92*, int32_t, const MethodInfo*))Queue_1_CopyTo_m31458_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Dequeue()
extern "C" Vector3_t53  Queue_1_Dequeue_m3570_gshared (Queue_1_t522 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m3570(__this, method) (( Vector3_t53  (*) (Queue_1_t522 *, const MethodInfo*))Queue_1_Dequeue_m3570_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Peek()
extern "C" Vector3_t53  Queue_1_Peek_m3568_gshared (Queue_1_t522 * __this, const MethodInfo* method);
#define Queue_1_Peek_m3568(__this, method) (( Vector3_t53  (*) (Queue_1_t522 *, const MethodInfo*))Queue_1_Peek_m3568_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m3569_gshared (Queue_1_t522 * __this, Vector3_t53  ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m3569(__this, ___item, method) (( void (*) (Queue_1_t522 *, Vector3_t53 , const MethodInfo*))Queue_1_Enqueue_m3569_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m31459_gshared (Queue_1_t522 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m31459(__this, ___new_size, method) (( void (*) (Queue_1_t522 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m31459_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Vector3>::get_Count()
extern "C" int32_t Queue_1_get_Count_m31460_gshared (Queue_1_t522 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m31460(__this, method) (( int32_t (*) (Queue_1_t522 *, const MethodInfo*))Queue_1_get_Count_m31460_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<UnityEngine.Vector3>::GetEnumerator()
extern "C" Enumerator_t6691  Queue_1_GetEnumerator_m31461_gshared (Queue_1_t522 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m31461(__this, method) (( Enumerator_t6691  (*) (Queue_1_t522 *, const MethodInfo*))Queue_1_GetEnumerator_m31461_gshared)(__this, method)
