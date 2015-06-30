#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_t3131;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedListNode_1_t3166;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// ExitGames.Client.Photon.SimulationItem
struct SimulationItem_t3143;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<ExitGames.Client.Photon.SimulationItem>
struct IEnumerator_1_t7169;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// ExitGames.Client.Photon.SimulationItem[]
struct SimulationItemU5BU5D_t7170;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.LinkedList`1/Enumerator<ExitGames.Client.Photon.SimulationItem>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_0.h"

// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::.ctor()
// System.Collections.Generic.LinkedList`1<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_gen_0MethodDeclarations.h"
#define LinkedList_1__ctor_m14382(__this, method) (( void (*) (LinkedList_1_t3131 *, const MethodInfo*))LinkedList_1__ctor_m12156_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define LinkedList_1__ctor_m43544(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t3131 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))LinkedList_1__ctor_m33891_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::System.Collections.Generic.ICollection<T>.Add(T)
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m43545(__this, ___value, method) (( void (*) (LinkedList_1_t3131 *, SimulationItem_t3143 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m33893_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define LinkedList_1_System_Collections_ICollection_CopyTo_m43546(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t3131 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m33895_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43547(__this, method) (( Object_t* (*) (LinkedList_1_t3131 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33897_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::System.Collections.IEnumerable.GetEnumerator()
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m43548(__this, method) (( Object_t * (*) (LinkedList_1_t3131 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m33899_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43549(__this, method) (( bool (*) (LinkedList_1_t3131 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33901_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::System.Collections.ICollection.get_IsSynchronized()
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m43550(__this, method) (( bool (*) (LinkedList_1_t3131 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m33903_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::System.Collections.ICollection.get_SyncRoot()
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m43551(__this, method) (( Object_t * (*) (LinkedList_1_t3131 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m33905_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
#define LinkedList_1_VerifyReferencedNode_m43552(__this, ___node, method) (( void (*) (LinkedList_1_t3131 *, LinkedListNode_1_t3166 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m33907_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::AddBefore(System.Collections.Generic.LinkedListNode`1<T>,T)
#define LinkedList_1_AddBefore_m14378(__this, ___node, ___value, method) (( LinkedListNode_1_t3166 * (*) (LinkedList_1_t3131 *, LinkedListNode_1_t3166 *, SimulationItem_t3143 *, const MethodInfo*))LinkedList_1_AddBefore_m33909_gshared)(__this, ___node, ___value, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::AddLast(T)
#define LinkedList_1_AddLast_m14374(__this, ___value, method) (( LinkedListNode_1_t3166 * (*) (LinkedList_1_t3131 *, SimulationItem_t3143 *, const MethodInfo*))LinkedList_1_AddLast_m12157_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::Clear()
#define LinkedList_1_Clear_m43553(__this, method) (( void (*) (LinkedList_1_t3131 *, const MethodInfo*))LinkedList_1_Clear_m33912_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::Contains(T)
#define LinkedList_1_Contains_m43554(__this, ___value, method) (( bool (*) (LinkedList_1_t3131 *, SimulationItem_t3143 *, const MethodInfo*))LinkedList_1_Contains_m33914_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::CopyTo(T[],System.Int32)
#define LinkedList_1_CopyTo_m43555(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t3131 *, SimulationItemU5BU5D_t7170*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m33916_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::Find(T)
#define LinkedList_1_Find_m43556(__this, ___value, method) (( LinkedListNode_1_t3166 * (*) (LinkedList_1_t3131 *, SimulationItem_t3143 *, const MethodInfo*))LinkedList_1_Find_m33918_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::GetEnumerator()
#define LinkedList_1_GetEnumerator_m14407(__this, method) (( Enumerator_t3172  (*) (LinkedList_1_t3131 *, const MethodInfo*))LinkedList_1_GetEnumerator_m33920_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define LinkedList_1_GetObjectData_m43557(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t3131 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))LinkedList_1_GetObjectData_m33922_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::OnDeserialization(System.Object)
#define LinkedList_1_OnDeserialization_m43558(__this, ___sender, method) (( void (*) (LinkedList_1_t3131 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m33924_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::Remove(T)
#define LinkedList_1_Remove_m43559(__this, ___value, method) (( bool (*) (LinkedList_1_t3131 *, SimulationItem_t3143 *, const MethodInfo*))LinkedList_1_Remove_m33926_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
#define LinkedList_1_Remove_m43560(__this, ___node, method) (( void (*) (LinkedList_1_t3131 *, LinkedListNode_1_t3166 *, const MethodInfo*))LinkedList_1_Remove_m33928_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::RemoveFirst()
#define LinkedList_1_RemoveFirst_m14379(__this, method) (( void (*) (LinkedList_1_t3131 *, const MethodInfo*))LinkedList_1_RemoveFirst_m33930_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::RemoveLast()
#define LinkedList_1_RemoveLast_m43561(__this, method) (( void (*) (LinkedList_1_t3131 *, const MethodInfo*))LinkedList_1_RemoveLast_m33932_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::get_Count()
#define LinkedList_1_get_Count_m43562(__this, method) (( int32_t (*) (LinkedList_1_t3131 *, const MethodInfo*))LinkedList_1_get_Count_m33934_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::get_First()
#define LinkedList_1_get_First_m14375(__this, method) (( LinkedListNode_1_t3166 * (*) (LinkedList_1_t3131 *, const MethodInfo*))LinkedList_1_get_First_m12158_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::get_Last()
#define LinkedList_1_get_Last_m43563(__this, method) (( LinkedListNode_1_t3166 * (*) (LinkedList_1_t3131 *, const MethodInfo*))LinkedList_1_get_Last_m33937_gshared)(__this, method)
