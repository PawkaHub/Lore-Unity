#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_t5096;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedListNode_1_t5136;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// ExitGames.Client.Photon.SimulationItem
struct SimulationItem_t5108;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<ExitGames.Client.Photon.SimulationItem>
struct IEnumerator_1_t11042;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// ExitGames.Client.Photon.SimulationItem[]
struct SimulationItemU5BU5D_t11043;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.LinkedList`1/Enumerator<ExitGames.Client.Photon.SimulationItem>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_0.h"

// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::.ctor()
// System.Collections.Generic.LinkedList`1<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_gen_0MethodDeclarations.h"
#define LinkedList_1__ctor_m18674(__this, method) (( void (*) (LinkedList_1_t5096 *, const MethodInfo*))LinkedList_1__ctor_m11367_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define LinkedList_1__ctor_m72609(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t5096 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))LinkedList_1__ctor_m38493_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::System.Collections.Generic.ICollection<T>.Add(T)
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m72610(__this, ___value, method) (( void (*) (LinkedList_1_t5096 *, SimulationItem_t5108 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m38495_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define LinkedList_1_System_Collections_ICollection_CopyTo_m72611(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t5096 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m38497_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m72612(__this, method) (( Object_t* (*) (LinkedList_1_t5096 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38499_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::System.Collections.IEnumerable.GetEnumerator()
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m72613(__this, method) (( Object_t * (*) (LinkedList_1_t5096 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m38501_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m72614(__this, method) (( bool (*) (LinkedList_1_t5096 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38503_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::System.Collections.ICollection.get_IsSynchronized()
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m72615(__this, method) (( bool (*) (LinkedList_1_t5096 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m38505_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::System.Collections.ICollection.get_SyncRoot()
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m72616(__this, method) (( Object_t * (*) (LinkedList_1_t5096 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m38507_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
#define LinkedList_1_VerifyReferencedNode_m72617(__this, ___node, method) (( void (*) (LinkedList_1_t5096 *, LinkedListNode_1_t5136 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m38509_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::AddBefore(System.Collections.Generic.LinkedListNode`1<T>,T)
#define LinkedList_1_AddBefore_m18671(__this, ___node, ___value, method) (( LinkedListNode_1_t5136 * (*) (LinkedList_1_t5096 *, LinkedListNode_1_t5136 *, SimulationItem_t5108 *, const MethodInfo*))LinkedList_1_AddBefore_m38511_gshared)(__this, ___node, ___value, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::AddLast(T)
#define LinkedList_1_AddLast_m18667(__this, ___value, method) (( LinkedListNode_1_t5136 * (*) (LinkedList_1_t5096 *, SimulationItem_t5108 *, const MethodInfo*))LinkedList_1_AddLast_m11368_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::Clear()
#define LinkedList_1_Clear_m72618(__this, method) (( void (*) (LinkedList_1_t5096 *, const MethodInfo*))LinkedList_1_Clear_m38514_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::Contains(T)
#define LinkedList_1_Contains_m72619(__this, ___value, method) (( bool (*) (LinkedList_1_t5096 *, SimulationItem_t5108 *, const MethodInfo*))LinkedList_1_Contains_m38516_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::CopyTo(T[],System.Int32)
#define LinkedList_1_CopyTo_m72620(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t5096 *, SimulationItemU5BU5D_t11043*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m38518_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::Find(T)
#define LinkedList_1_Find_m72621(__this, ___value, method) (( LinkedListNode_1_t5136 * (*) (LinkedList_1_t5096 *, SimulationItem_t5108 *, const MethodInfo*))LinkedList_1_Find_m38520_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::GetEnumerator()
#define LinkedList_1_GetEnumerator_m18699(__this, method) (( Enumerator_t5142  (*) (LinkedList_1_t5096 *, const MethodInfo*))LinkedList_1_GetEnumerator_m38522_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define LinkedList_1_GetObjectData_m72622(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t5096 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))LinkedList_1_GetObjectData_m38524_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::OnDeserialization(System.Object)
#define LinkedList_1_OnDeserialization_m72623(__this, ___sender, method) (( void (*) (LinkedList_1_t5096 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m38526_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::Remove(T)
#define LinkedList_1_Remove_m72624(__this, ___value, method) (( bool (*) (LinkedList_1_t5096 *, SimulationItem_t5108 *, const MethodInfo*))LinkedList_1_Remove_m38528_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
#define LinkedList_1_Remove_m72625(__this, ___node, method) (( void (*) (LinkedList_1_t5096 *, LinkedListNode_1_t5136 *, const MethodInfo*))LinkedList_1_Remove_m38530_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::RemoveFirst()
#define LinkedList_1_RemoveFirst_m18672(__this, method) (( void (*) (LinkedList_1_t5096 *, const MethodInfo*))LinkedList_1_RemoveFirst_m38532_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::RemoveLast()
#define LinkedList_1_RemoveLast_m72626(__this, method) (( void (*) (LinkedList_1_t5096 *, const MethodInfo*))LinkedList_1_RemoveLast_m38534_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::get_Count()
#define LinkedList_1_get_Count_m72627(__this, method) (( int32_t (*) (LinkedList_1_t5096 *, const MethodInfo*))LinkedList_1_get_Count_m38536_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::get_First()
#define LinkedList_1_get_First_m18668(__this, method) (( LinkedListNode_1_t5136 * (*) (LinkedList_1_t5096 *, const MethodInfo*))LinkedList_1_get_First_m11369_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>::get_Last()
#define LinkedList_1_get_Last_m72628(__this, method) (( LinkedListNode_1_t5136 * (*) (LinkedList_1_t5096 *, const MethodInfo*))LinkedList_1_get_Last_m38539_gshared)(__this, method)
