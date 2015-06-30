#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t1511;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Action>
struct IEnumerator_1_t6882;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Action[]
struct ActionU5BU5D_t5779;
// System.Action
struct Action_t250;
// System.Collections.Generic.Queue`1/Enumerator<System.Action>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.Queue`1<System.Action>::.ctor()
// System.Collections.Generic.Queue`1<System.Object>
#include "System_System_Collections_Generic_Queue_1_gen_5MethodDeclarations.h"
#define Queue_1__ctor_m7655(__this, method) (( void (*) (Queue_1_t1511 *, const MethodInfo*))Queue_1__ctor_m32336_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Action>::.ctor(System.Int32)
#define Queue_1__ctor_m36003(__this, ___count, method) (( void (*) (Queue_1_t1511 *, int32_t, const MethodInfo*))Queue_1__ctor_m32338_gshared)(__this, ___count, method)
// System.Void System.Collections.Generic.Queue`1<System.Action>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Queue_1_System_Collections_ICollection_CopyTo_m36004(__this, ___array, ___idx, method) (( void (*) (Queue_1_t1511 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m32340_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Action>::System.Collections.ICollection.get_IsSynchronized()
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m36005(__this, method) (( bool (*) (Queue_1_t1511 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m32342_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Action>::System.Collections.ICollection.get_SyncRoot()
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m36006(__this, method) (( Object_t * (*) (Queue_1_t1511 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m32344_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Action>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36007(__this, method) (( Object_t* (*) (Queue_1_t1511 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32346_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Action>::System.Collections.IEnumerable.GetEnumerator()
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m36008(__this, method) (( Object_t * (*) (Queue_1_t1511 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m32348_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Action>::Clear()
#define Queue_1_Clear_m36009(__this, method) (( void (*) (Queue_1_t1511 *, const MethodInfo*))Queue_1_Clear_m32350_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Action>::CopyTo(T[],System.Int32)
#define Queue_1_CopyTo_m36010(__this, ___array, ___idx, method) (( void (*) (Queue_1_t1511 *, ActionU5BU5D_t5779*, int32_t, const MethodInfo*))Queue_1_CopyTo_m32352_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<System.Action>::Dequeue()
#define Queue_1_Dequeue_m7626(__this, method) (( Action_t250 * (*) (Queue_1_t1511 *, const MethodInfo*))Queue_1_Dequeue_m32353_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<System.Action>::Peek()
#define Queue_1_Peek_m36011(__this, method) (( Action_t250 * (*) (Queue_1_t1511 *, const MethodInfo*))Queue_1_Peek_m32355_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Action>::Enqueue(T)
#define Queue_1_Enqueue_m7644(__this, ___item, method) (( void (*) (Queue_1_t1511 *, Action_t250 *, const MethodInfo*))Queue_1_Enqueue_m32356_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Action>::SetCapacity(System.Int32)
#define Queue_1_SetCapacity_m36012(__this, ___new_size, method) (( void (*) (Queue_1_t1511 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m32358_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Action>::get_Count()
#define Queue_1_get_Count_m36013(__this, method) (( int32_t (*) (Queue_1_t1511 *, const MethodInfo*))Queue_1_get_Count_m32360_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Action>::GetEnumerator()
#define Queue_1_GetEnumerator_m36014(__this, method) (( Enumerator_t5780  (*) (Queue_1_t1511 *, const MethodInfo*))Queue_1_GetEnumerator_m32362_gshared)(__this, method)
