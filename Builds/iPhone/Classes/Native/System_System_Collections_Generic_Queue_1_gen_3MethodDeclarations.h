#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_t4857;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct IEnumerator_1_t10750;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// ExitGames.Client.Photon.PeerBase/MyAction[]
struct MyActionU5BU5D_t9515;
// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t4849;
// System.Collections.Generic.Queue`1/Enumerator<ExitGames.Client.Photon.PeerBase/MyAction>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::.ctor()
// System.Collections.Generic.Queue`1<System.Object>
#include "System_System_Collections_Generic_Queue_1_gen_6MethodDeclarations.h"
#define Queue_1__ctor_m18255(__this, method) (( void (*) (Queue_1_t4857 *, const MethodInfo*))Queue_1__ctor_m36340_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::.ctor(System.Int32)
#define Queue_1__ctor_m71676(__this, ___count, method) (( void (*) (Queue_1_t4857 *, int32_t, const MethodInfo*))Queue_1__ctor_m36342_gshared)(__this, ___count, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Queue_1_System_Collections_ICollection_CopyTo_m71677(__this, ___array, ___idx, method) (( void (*) (Queue_1_t4857 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m36344_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::System.Collections.ICollection.get_IsSynchronized()
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m71678(__this, method) (( bool (*) (Queue_1_t4857 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m36346_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::System.Collections.ICollection.get_SyncRoot()
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m71679(__this, method) (( Object_t * (*) (Queue_1_t4857 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m36348_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m71680(__this, method) (( Object_t* (*) (Queue_1_t4857 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36350_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::System.Collections.IEnumerable.GetEnumerator()
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m71681(__this, method) (( Object_t * (*) (Queue_1_t4857 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m36352_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::Clear()
#define Queue_1_Clear_m71682(__this, method) (( void (*) (Queue_1_t4857 *, const MethodInfo*))Queue_1_Clear_m36354_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::CopyTo(T[],System.Int32)
#define Queue_1_CopyTo_m71683(__this, ___array, ___idx, method) (( void (*) (Queue_1_t4857 *, MyActionU5BU5D_t9515*, int32_t, const MethodInfo*))Queue_1_CopyTo_m36356_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::Dequeue()
#define Queue_1_Dequeue_m18266(__this, method) (( MyAction_t4849 * (*) (Queue_1_t4857 *, const MethodInfo*))Queue_1_Dequeue_m36357_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::Peek()
#define Queue_1_Peek_m71684(__this, method) (( MyAction_t4849 * (*) (Queue_1_t4857 *, const MethodInfo*))Queue_1_Peek_m36359_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::Enqueue(T)
#define Queue_1_Enqueue_m18248(__this, ___item, method) (( void (*) (Queue_1_t4857 *, MyAction_t4849 *, const MethodInfo*))Queue_1_Enqueue_m36360_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::SetCapacity(System.Int32)
#define Queue_1_SetCapacity_m71685(__this, ___new_size, method) (( void (*) (Queue_1_t4857 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m36362_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::get_Count()
#define Queue_1_get_Count_m71686(__this, method) (( int32_t (*) (Queue_1_t4857 *, const MethodInfo*))Queue_1_get_Count_m36364_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::GetEnumerator()
#define Queue_1_GetEnumerator_m71687(__this, method) (( Enumerator_t9516  (*) (Queue_1_t4857 *, const MethodInfo*))Queue_1_GetEnumerator_m36366_gshared)(__this, method)
