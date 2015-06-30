#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t5485;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t718;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Collections.Generic.Queue`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" void Queue_1__ctor_m32336_gshared (Queue_1_t5485 * __this, const MethodInfo* method);
#define Queue_1__ctor_m32336(__this, method) (( void (*) (Queue_1_t5485 *, const MethodInfo*))Queue_1__ctor_m32336_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor(System.Int32)
extern "C" void Queue_1__ctor_m32338_gshared (Queue_1_t5485 * __this, int32_t ___count, const MethodInfo* method);
#define Queue_1__ctor_m32338(__this, ___count, method) (( void (*) (Queue_1_t5485 *, int32_t, const MethodInfo*))Queue_1__ctor_m32338_gshared)(__this, ___count, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m32340_gshared (Queue_1_t5485 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m32340(__this, ___array, ___idx, method) (( void (*) (Queue_1_t5485 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m32340_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m32342_gshared (Queue_1_t5485 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m32342(__this, method) (( bool (*) (Queue_1_t5485 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m32342_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m32344_gshared (Queue_1_t5485 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m32344(__this, method) (( Object_t * (*) (Queue_1_t5485 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m32344_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32346_gshared (Queue_1_t5485 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32346(__this, method) (( Object_t* (*) (Queue_1_t5485 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32346_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m32348_gshared (Queue_1_t5485 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m32348(__this, method) (( Object_t * (*) (Queue_1_t5485 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m32348_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
extern "C" void Queue_1_Clear_m32350_gshared (Queue_1_t5485 * __this, const MethodInfo* method);
#define Queue_1_Clear_m32350(__this, method) (( void (*) (Queue_1_t5485 *, const MethodInfo*))Queue_1_Clear_m32350_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m32352_gshared (Queue_1_t5485 * __this, ObjectU5BU5D_t21* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m32352(__this, ___array, ___idx, method) (( void (*) (Queue_1_t5485 *, ObjectU5BU5D_t21*, int32_t, const MethodInfo*))Queue_1_CopyTo_m32352_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C" Object_t * Queue_1_Dequeue_m32353_gshared (Queue_1_t5485 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m32353(__this, method) (( Object_t * (*) (Queue_1_t5485 *, const MethodInfo*))Queue_1_Dequeue_m32353_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
extern "C" Object_t * Queue_1_Peek_m32355_gshared (Queue_1_t5485 * __this, const MethodInfo* method);
#define Queue_1_Peek_m32355(__this, method) (( Object_t * (*) (Queue_1_t5485 *, const MethodInfo*))Queue_1_Peek_m32355_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m32356_gshared (Queue_1_t5485 * __this, Object_t * ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m32356(__this, ___item, method) (( void (*) (Queue_1_t5485 *, Object_t *, const MethodInfo*))Queue_1_Enqueue_m32356_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m32358_gshared (Queue_1_t5485 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m32358(__this, ___new_size, method) (( void (*) (Queue_1_t5485 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m32358_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" int32_t Queue_1_get_Count_m32360_gshared (Queue_1_t5485 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m32360(__this, method) (( int32_t (*) (Queue_1_t5485 *, const MethodInfo*))Queue_1_get_Count_m32360_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5486  Queue_1_GetEnumerator_m32362_gshared (Queue_1_t5485 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m32362(__this, method) (( Enumerator_t5486  (*) (Queue_1_t5485 *, const MethodInfo*))Queue_1_GetEnumerator_m32362_gshared)(__this, method)
