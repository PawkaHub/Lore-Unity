#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t3777;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t3828;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t838;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_1.h"

// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
extern "C" void LinkedList_1__ctor_m11367_gshared (LinkedList_1_t3777 * __this, const MethodInfo* method);
#define LinkedList_1__ctor_m11367(__this, method) (( void (*) (LinkedList_1_t3777 *, const MethodInfo*))LinkedList_1__ctor_m11367_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m38493_gshared (LinkedList_1_t3777 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define LinkedList_1__ctor_m38493(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t3777 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))LinkedList_1__ctor_m38493_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m38495_gshared (LinkedList_1_t3777 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m38495(__this, ___value, method) (( void (*) (LinkedList_1_t3777 *, Object_t *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m38495_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m38497_gshared (LinkedList_1_t3777 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m38497(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t3777 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m38497_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38499_gshared (LinkedList_1_t3777 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38499(__this, method) (( Object_t* (*) (LinkedList_1_t3777 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38499_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m38501_gshared (LinkedList_1_t3777 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m38501(__this, method) (( Object_t * (*) (LinkedList_1_t3777 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m38501_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38503_gshared (LinkedList_1_t3777 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38503(__this, method) (( bool (*) (LinkedList_1_t3777 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38503_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m38505_gshared (LinkedList_1_t3777 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m38505(__this, method) (( bool (*) (LinkedList_1_t3777 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m38505_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m38507_gshared (LinkedList_1_t3777 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m38507(__this, method) (( Object_t * (*) (LinkedList_1_t3777 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m38507_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m38509_gshared (LinkedList_1_t3777 * __this, LinkedListNode_1_t3828 * ___node, const MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m38509(__this, ___node, method) (( void (*) (LinkedList_1_t3777 *, LinkedListNode_1_t3828 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m38509_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddBefore(System.Collections.Generic.LinkedListNode`1<T>,T)
extern "C" LinkedListNode_1_t3828 * LinkedList_1_AddBefore_m38511_gshared (LinkedList_1_t3777 * __this, LinkedListNode_1_t3828 * ___node, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_AddBefore_m38511(__this, ___node, ___value, method) (( LinkedListNode_1_t3828 * (*) (LinkedList_1_t3777 *, LinkedListNode_1_t3828 *, Object_t *, const MethodInfo*))LinkedList_1_AddBefore_m38511_gshared)(__this, ___node, ___value, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
extern "C" LinkedListNode_1_t3828 * LinkedList_1_AddLast_m11368_gshared (LinkedList_1_t3777 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_AddLast_m11368(__this, ___value, method) (( LinkedListNode_1_t3828 * (*) (LinkedList_1_t3777 *, Object_t *, const MethodInfo*))LinkedList_1_AddLast_m11368_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
extern "C" void LinkedList_1_Clear_m38514_gshared (LinkedList_1_t3777 * __this, const MethodInfo* method);
#define LinkedList_1_Clear_m38514(__this, method) (( void (*) (LinkedList_1_t3777 *, const MethodInfo*))LinkedList_1_Clear_m38514_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
extern "C" bool LinkedList_1_Contains_m38516_gshared (LinkedList_1_t3777 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Contains_m38516(__this, ___value, method) (( bool (*) (LinkedList_1_t3777 *, Object_t *, const MethodInfo*))LinkedList_1_Contains_m38516_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m38518_gshared (LinkedList_1_t3777 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_CopyTo_m38518(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t3777 *, ObjectU5BU5D_t21*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m38518_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::Find(T)
extern "C" LinkedListNode_1_t3828 * LinkedList_1_Find_m38520_gshared (LinkedList_1_t3777 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Find_m38520(__this, ___value, method) (( LinkedListNode_1_t3828 * (*) (LinkedList_1_t3777 *, Object_t *, const MethodInfo*))LinkedList_1_Find_m38520_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t7115  LinkedList_1_GetEnumerator_m38522_gshared (LinkedList_1_t3777 * __this, const MethodInfo* method);
#define LinkedList_1_GetEnumerator_m38522(__this, method) (( Enumerator_t7115  (*) (LinkedList_1_t3777 *, const MethodInfo*))LinkedList_1_GetEnumerator_m38522_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m38524_gshared (LinkedList_1_t3777 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define LinkedList_1_GetObjectData_m38524(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t3777 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))LinkedList_1_GetObjectData_m38524_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m38526_gshared (LinkedList_1_t3777 * __this, Object_t * ___sender, const MethodInfo* method);
#define LinkedList_1_OnDeserialization_m38526(__this, ___sender, method) (( void (*) (LinkedList_1_t3777 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m38526_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
extern "C" bool LinkedList_1_Remove_m38528_gshared (LinkedList_1_t3777 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Remove_m38528(__this, ___value, method) (( bool (*) (LinkedList_1_t3777 *, Object_t *, const MethodInfo*))LinkedList_1_Remove_m38528_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m38530_gshared (LinkedList_1_t3777 * __this, LinkedListNode_1_t3828 * ___node, const MethodInfo* method);
#define LinkedList_1_Remove_m38530(__this, ___node, method) (( void (*) (LinkedList_1_t3777 *, LinkedListNode_1_t3828 *, const MethodInfo*))LinkedList_1_Remove_m38530_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveFirst()
extern "C" void LinkedList_1_RemoveFirst_m38532_gshared (LinkedList_1_t3777 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveFirst_m38532(__this, method) (( void (*) (LinkedList_1_t3777 *, const MethodInfo*))LinkedList_1_RemoveFirst_m38532_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m38534_gshared (LinkedList_1_t3777 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveLast_m38534(__this, method) (( void (*) (LinkedList_1_t3777 *, const MethodInfo*))LinkedList_1_RemoveLast_m38534_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m38536_gshared (LinkedList_1_t3777 * __this, const MethodInfo* method);
#define LinkedList_1_get_Count_m38536(__this, method) (( int32_t (*) (LinkedList_1_t3777 *, const MethodInfo*))LinkedList_1_get_Count_m38536_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern "C" LinkedListNode_1_t3828 * LinkedList_1_get_First_m11369_gshared (LinkedList_1_t3777 * __this, const MethodInfo* method);
#define LinkedList_1_get_First_m11369(__this, method) (( LinkedListNode_1_t3828 * (*) (LinkedList_1_t3777 *, const MethodInfo*))LinkedList_1_get_First_m11369_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_Last()
extern "C" LinkedListNode_1_t3828 * LinkedList_1_get_Last_m38539_gshared (LinkedList_1_t3777 * __this, const MethodInfo* method);
#define LinkedList_1_get_Last_m38539(__this, method) (( LinkedListNode_1_t3828 * (*) (LinkedList_1_t3777 *, const MethodInfo*))LinkedList_1_get_Last_m38539_gshared)(__this, method)
