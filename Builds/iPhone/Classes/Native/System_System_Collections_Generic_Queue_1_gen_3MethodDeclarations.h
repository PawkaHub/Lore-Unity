#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_t5095;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct IEnumerator_1_t11041;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// ExitGames.Client.Photon.PeerBase/MyAction[]
struct MyActionU5BU5D_t9797;
// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t5087;
// System.Collections.Generic.Queue`1/Enumerator<ExitGames.Client.Photon.PeerBase/MyAction>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::.ctor()
// System.Collections.Generic.Queue`1<System.Object>
#include "System_System_Collections_Generic_Queue_1_gen_6MethodDeclarations.h"
#define Queue_1__ctor_m18673(__this, method) (( void (*) (Queue_1_t5095 *, const MethodInfo*))Queue_1__ctor_m37789_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::.ctor(System.Int32)
#define Queue_1__ctor_m72591(__this, ___count, method) (( void (*) (Queue_1_t5095 *, int32_t, const MethodInfo*))Queue_1__ctor_m37791_gshared)(__this, ___count, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Queue_1_System_Collections_ICollection_CopyTo_m72592(__this, ___array, ___idx, method) (( void (*) (Queue_1_t5095 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m37793_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::System.Collections.ICollection.get_IsSynchronized()
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m72593(__this, method) (( bool (*) (Queue_1_t5095 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m37795_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::System.Collections.ICollection.get_SyncRoot()
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m72594(__this, method) (( Object_t * (*) (Queue_1_t5095 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m37797_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m72595(__this, method) (( Object_t* (*) (Queue_1_t5095 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37799_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::System.Collections.IEnumerable.GetEnumerator()
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m72596(__this, method) (( Object_t * (*) (Queue_1_t5095 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m37801_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::Clear()
#define Queue_1_Clear_m72597(__this, method) (( void (*) (Queue_1_t5095 *, const MethodInfo*))Queue_1_Clear_m37803_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::CopyTo(T[],System.Int32)
#define Queue_1_CopyTo_m72598(__this, ___array, ___idx, method) (( void (*) (Queue_1_t5095 *, MyActionU5BU5D_t9797*, int32_t, const MethodInfo*))Queue_1_CopyTo_m37805_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::Dequeue()
#define Queue_1_Dequeue_m18684(__this, method) (( MyAction_t5087 * (*) (Queue_1_t5095 *, const MethodInfo*))Queue_1_Dequeue_m37806_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::Peek()
#define Queue_1_Peek_m72599(__this, method) (( MyAction_t5087 * (*) (Queue_1_t5095 *, const MethodInfo*))Queue_1_Peek_m37808_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::Enqueue(T)
#define Queue_1_Enqueue_m18666(__this, ___item, method) (( void (*) (Queue_1_t5095 *, MyAction_t5087 *, const MethodInfo*))Queue_1_Enqueue_m37809_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::SetCapacity(System.Int32)
#define Queue_1_SetCapacity_m72600(__this, ___new_size, method) (( void (*) (Queue_1_t5095 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m37811_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::get_Count()
#define Queue_1_get_Count_m72601(__this, method) (( int32_t (*) (Queue_1_t5095 *, const MethodInfo*))Queue_1_get_Count_m37813_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::GetEnumerator()
#define Queue_1_GetEnumerator_m72602(__this, method) (( Enumerator_t9798  (*) (Queue_1_t5095 *, const MethodInfo*))Queue_1_GetEnumerator_m37815_gshared)(__this, method)
