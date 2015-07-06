#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_t4858;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedListNode_1_t4898;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// ExitGames.Client.Photon.SimulationItem
struct SimulationItem_t4870;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<ExitGames.Client.Photon.SimulationItem>
struct IEnumerator_1_t10751;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// ExitGames.Client.Photon.SimulationItem[]
struct SimulationItemU5BU5D_t10752;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.LinkedList`1/Enumerator<ExitGames.Client.Photon.SimulationItem>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_0.h"

// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::.ctor()
// System.Collections.Generic.LinkedList`1<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_gen_0MethodDeclarations.h"
#define LinkedList_1__ctor_m18256(__this, method) (( void (*) (LinkedList_1_t4858 *, const MethodInfo*))LinkedList_1__ctor_m10948_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define LinkedList_1__ctor_m71694(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t4858 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))LinkedList_1__ctor_m37168_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::System.Collections.Generic.ICollection<T>.Add(T)
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m71695(__this, ___value, method) (( void (*) (LinkedList_1_t4858 *, SimulationItem_t4870 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m37170_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define LinkedList_1_System_Collections_ICollection_CopyTo_m71696(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t4858 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m37172_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m71697(__this, method) (( Object_t* (*) (LinkedList_1_t4858 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37174_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::System.Collections.IEnumerable.GetEnumerator()
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m71698(__this, method) (( Object_t * (*) (LinkedList_1_t4858 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m37176_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m71699(__this, method) (( bool (*) (LinkedList_1_t4858 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37178_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::System.Collections.ICollection.get_IsSynchronized()
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m71700(__this, method) (( bool (*) (LinkedList_1_t4858 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m37180_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::System.Collections.ICollection.get_SyncRoot()
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m71701(__this, method) (( Object_t * (*) (LinkedList_1_t4858 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m37182_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
#define LinkedList_1_VerifyReferencedNode_m71702(__this, ___node, method) (( void (*) (LinkedList_1_t4858 *, LinkedListNode_1_t4898 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m37184_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::AddBefore(System.Collections.Generic.LinkedListNode`1<T>,T)
#define LinkedList_1_AddBefore_m18253(__this, ___node, ___value, method) (( LinkedListNode_1_t4898 * (*) (LinkedList_1_t4858 *, LinkedListNode_1_t4898 *, SimulationItem_t4870 *, const MethodInfo*))LinkedList_1_AddBefore_m37186_gshared)(__this, ___node, ___value, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::AddLast(T)
#define LinkedList_1_AddLast_m18249(__this, ___value, method) (( LinkedListNode_1_t4898 * (*) (LinkedList_1_t4858 *, SimulationItem_t4870 *, const MethodInfo*))LinkedList_1_AddLast_m10949_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::Clear()
#define LinkedList_1_Clear_m71703(__this, method) (( void (*) (LinkedList_1_t4858 *, const MethodInfo*))LinkedList_1_Clear_m37189_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::Contains(T)
#define LinkedList_1_Contains_m71704(__this, ___value, method) (( bool (*) (LinkedList_1_t4858 *, SimulationItem_t4870 *, const MethodInfo*))LinkedList_1_Contains_m37191_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::CopyTo(T[],System.Int32)
#define LinkedList_1_CopyTo_m71705(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t4858 *, SimulationItemU5BU5D_t10752*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m37193_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::Find(T)
#define LinkedList_1_Find_m71706(__this, ___value, method) (( LinkedListNode_1_t4898 * (*) (LinkedList_1_t4858 *, SimulationItem_t4870 *, const MethodInfo*))LinkedList_1_Find_m37195_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::GetEnumerator()
#define LinkedList_1_GetEnumerator_m18281(__this, method) (( Enumerator_t4904  (*) (LinkedList_1_t4858 *, const MethodInfo*))LinkedList_1_GetEnumerator_m37197_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define LinkedList_1_GetObjectData_m71707(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t4858 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))LinkedList_1_GetObjectData_m37199_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::OnDeserialization(System.Object)
#define LinkedList_1_OnDeserialization_m71708(__this, ___sender, method) (( void (*) (LinkedList_1_t4858 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m37201_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::Remove(T)
#define LinkedList_1_Remove_m71709(__this, ___value, method) (( bool (*) (LinkedList_1_t4858 *, SimulationItem_t4870 *, const MethodInfo*))LinkedList_1_Remove_m37203_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
#define LinkedList_1_Remove_m71710(__this, ___node, method) (( void (*) (LinkedList_1_t4858 *, LinkedListNode_1_t4898 *, const MethodInfo*))LinkedList_1_Remove_m37205_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::RemoveFirst()
#define LinkedList_1_RemoveFirst_m18254(__this, method) (( void (*) (LinkedList_1_t4858 *, const MethodInfo*))LinkedList_1_RemoveFirst_m37207_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::RemoveLast()
#define LinkedList_1_RemoveLast_m71711(__this, method) (( void (*) (LinkedList_1_t4858 *, const MethodInfo*))LinkedList_1_RemoveLast_m37209_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::get_Count()
#define LinkedList_1_get_Count_m71712(__this, method) (( int32_t (*) (LinkedList_1_t4858 *, const MethodInfo*))LinkedList_1_get_Count_m37211_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::get_First()
#define LinkedList_1_get_First_m18250(__this, method) (( LinkedListNode_1_t4898 * (*) (LinkedList_1_t4858 *, const MethodInfo*))LinkedList_1_get_First_m10950_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::get_Last()
#define LinkedList_1_get_Last_m71713(__this, method) (( LinkedListNode_1_t4898 * (*) (LinkedList_1_t4858 *, const MethodInfo*))LinkedList_1_get_Last_m37214_gshared)(__this, method)
