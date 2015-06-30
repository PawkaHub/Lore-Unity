#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_t3130;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct IEnumerator_1_t7168;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// ExitGames.Client.Photon.PeerBase/MyAction[]
struct MyActionU5BU5D_t6280;
// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t3122;
// System.Collections.Generic.Queue`1/Enumerator<ExitGames.Client.Photon.PeerBase/MyAction>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::.ctor()
// System.Collections.Generic.Queue`1<System.Object>
#include "System_System_Collections_Generic_Queue_1_gen_5MethodDeclarations.h"
#define Queue_1__ctor_m14381(__this, method) (( void (*) (Queue_1_t3130 *, const MethodInfo*))Queue_1__ctor_m32336_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::.ctor(System.Int32)
#define Queue_1__ctor_m43527(__this, ___count, method) (( void (*) (Queue_1_t3130 *, int32_t, const MethodInfo*))Queue_1__ctor_m32338_gshared)(__this, ___count, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Queue_1_System_Collections_ICollection_CopyTo_m43528(__this, ___array, ___idx, method) (( void (*) (Queue_1_t3130 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m32340_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::System.Collections.ICollection.get_IsSynchronized()
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m43529(__this, method) (( bool (*) (Queue_1_t3130 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m32342_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::System.Collections.ICollection.get_SyncRoot()
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m43530(__this, method) (( Object_t * (*) (Queue_1_t3130 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m32344_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43531(__this, method) (( Object_t* (*) (Queue_1_t3130 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32346_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::System.Collections.IEnumerable.GetEnumerator()
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m43532(__this, method) (( Object_t * (*) (Queue_1_t3130 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m32348_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::Clear()
#define Queue_1_Clear_m43533(__this, method) (( void (*) (Queue_1_t3130 *, const MethodInfo*))Queue_1_Clear_m32350_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::CopyTo(T[],System.Int32)
#define Queue_1_CopyTo_m43534(__this, ___array, ___idx, method) (( void (*) (Queue_1_t3130 *, MyActionU5BU5D_t6280*, int32_t, const MethodInfo*))Queue_1_CopyTo_m32352_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::Dequeue()
#define Queue_1_Dequeue_m14392(__this, method) (( MyAction_t3122 * (*) (Queue_1_t3130 *, const MethodInfo*))Queue_1_Dequeue_m32353_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::Peek()
#define Queue_1_Peek_m43535(__this, method) (( MyAction_t3122 * (*) (Queue_1_t3130 *, const MethodInfo*))Queue_1_Peek_m32355_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::Enqueue(T)
#define Queue_1_Enqueue_m14373(__this, ___item, method) (( void (*) (Queue_1_t3130 *, MyAction_t3122 *, const MethodInfo*))Queue_1_Enqueue_m32356_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::SetCapacity(System.Int32)
#define Queue_1_SetCapacity_m43536(__this, ___new_size, method) (( void (*) (Queue_1_t3130 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m32358_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::get_Count()
#define Queue_1_get_Count_m43537(__this, method) (( int32_t (*) (Queue_1_t3130 *, const MethodInfo*))Queue_1_get_Count_m32360_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::GetEnumerator()
#define Queue_1_GetEnumerator_m43538(__this, method) (( Enumerator_t6281  (*) (Queue_1_t3130 *, const MethodInfo*))Queue_1_GetEnumerator_m32362_gshared)(__this, method)
