#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>
struct Queue_1_t3120;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<ExitGames.Client.Photon.NCommand>
struct IEnumerator_1_t7166;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// ExitGames.Client.Photon.NCommand[]
struct NCommandU5BU5D_t6274;
// ExitGames.Client.Photon.NCommand
struct NCommand_t3129;
// System.Collections.Generic.Queue`1/Enumerator<ExitGames.Client.Photon.NCommand>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::.ctor()
// System.Collections.Generic.Queue`1<System.Object>
#include "System_System_Collections_Generic_Queue_1_gen_5MethodDeclarations.h"
#define Queue_1__ctor_m14385(__this, method) (( void (*) (Queue_1_t3120 *, const MethodInfo*))Queue_1__ctor_m32336_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::.ctor(System.Int32)
#define Queue_1__ctor_m14369(__this, ___count, method) (( void (*) (Queue_1_t3120 *, int32_t, const MethodInfo*))Queue_1__ctor_m32338_gshared)(__this, ___count, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Queue_1_System_Collections_ICollection_CopyTo_m43513(__this, ___array, ___idx, method) (( void (*) (Queue_1_t3120 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m32340_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::System.Collections.ICollection.get_IsSynchronized()
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m43514(__this, method) (( bool (*) (Queue_1_t3120 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m32342_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::System.Collections.ICollection.get_SyncRoot()
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m43515(__this, method) (( Object_t * (*) (Queue_1_t3120 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m32344_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43516(__this, method) (( Object_t* (*) (Queue_1_t3120 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32346_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::System.Collections.IEnumerable.GetEnumerator()
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m43517(__this, method) (( Object_t * (*) (Queue_1_t3120 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m32348_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::Clear()
#define Queue_1_Clear_m14370(__this, method) (( void (*) (Queue_1_t3120 *, const MethodInfo*))Queue_1_Clear_m32350_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::CopyTo(T[],System.Int32)
#define Queue_1_CopyTo_m43518(__this, ___array, ___idx, method) (( void (*) (Queue_1_t3120 *, NCommandU5BU5D_t6274*, int32_t, const MethodInfo*))Queue_1_CopyTo_m32352_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::Dequeue()
#define Queue_1_Dequeue_m14404(__this, method) (( NCommand_t3129 * (*) (Queue_1_t3120 *, const MethodInfo*))Queue_1_Dequeue_m32353_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::Peek()
#define Queue_1_Peek_m14405(__this, method) (( NCommand_t3129 * (*) (Queue_1_t3120 *, const MethodInfo*))Queue_1_Peek_m32355_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::Enqueue(T)
#define Queue_1_Enqueue_m14403(__this, ___item, method) (( void (*) (Queue_1_t3120 *, NCommand_t3129 *, const MethodInfo*))Queue_1_Enqueue_m32356_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::SetCapacity(System.Int32)
#define Queue_1_SetCapacity_m43519(__this, ___new_size, method) (( void (*) (Queue_1_t3120 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m32358_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::get_Count()
#define Queue_1_get_Count_m43520(__this, method) (( int32_t (*) (Queue_1_t3120 *, const MethodInfo*))Queue_1_get_Count_m32360_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::GetEnumerator()
#define Queue_1_GetEnumerator_m43521(__this, method) (( Enumerator_t6279  (*) (Queue_1_t3120 *, const MethodInfo*))Queue_1_GetEnumerator_m32362_gshared)(__this, method)
