#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t2611;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t2661;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t718;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_1.h"

// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
extern "C" void LinkedList_1__ctor_m12156_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method);
#define LinkedList_1__ctor_m12156(__this, method) (( void (*) (LinkedList_1_t2611 *, const MethodInfo*))LinkedList_1__ctor_m12156_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m33891_gshared (LinkedList_1_t2611 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define LinkedList_1__ctor_m33891(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t2611 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))LinkedList_1__ctor_m33891_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m33893_gshared (LinkedList_1_t2611 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m33893(__this, ___value, method) (( void (*) (LinkedList_1_t2611 *, Object_t *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m33893_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m33895_gshared (LinkedList_1_t2611 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m33895(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t2611 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m33895_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33897_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33897(__this, method) (( Object_t* (*) (LinkedList_1_t2611 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33897_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m33899_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m33899(__this, method) (( Object_t * (*) (LinkedList_1_t2611 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m33899_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33901_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33901(__this, method) (( bool (*) (LinkedList_1_t2611 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33901_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m33903_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m33903(__this, method) (( bool (*) (LinkedList_1_t2611 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m33903_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m33905_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m33905(__this, method) (( Object_t * (*) (LinkedList_1_t2611 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m33905_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m33907_gshared (LinkedList_1_t2611 * __this, LinkedListNode_1_t2661 * ___node, const MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m33907(__this, ___node, method) (( void (*) (LinkedList_1_t2611 *, LinkedListNode_1_t2661 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m33907_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddBefore(System.Collections.Generic.LinkedListNode`1<T>,T)
extern "C" LinkedListNode_1_t2661 * LinkedList_1_AddBefore_m33909_gshared (LinkedList_1_t2611 * __this, LinkedListNode_1_t2661 * ___node, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_AddBefore_m33909(__this, ___node, ___value, method) (( LinkedListNode_1_t2661 * (*) (LinkedList_1_t2611 *, LinkedListNode_1_t2661 *, Object_t *, const MethodInfo*))LinkedList_1_AddBefore_m33909_gshared)(__this, ___node, ___value, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
extern "C" LinkedListNode_1_t2661 * LinkedList_1_AddLast_m12157_gshared (LinkedList_1_t2611 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_AddLast_m12157(__this, ___value, method) (( LinkedListNode_1_t2661 * (*) (LinkedList_1_t2611 *, Object_t *, const MethodInfo*))LinkedList_1_AddLast_m12157_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
extern "C" void LinkedList_1_Clear_m33912_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method);
#define LinkedList_1_Clear_m33912(__this, method) (( void (*) (LinkedList_1_t2611 *, const MethodInfo*))LinkedList_1_Clear_m33912_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
extern "C" bool LinkedList_1_Contains_m33914_gshared (LinkedList_1_t2611 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Contains_m33914(__this, ___value, method) (( bool (*) (LinkedList_1_t2611 *, Object_t *, const MethodInfo*))LinkedList_1_Contains_m33914_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m33916_gshared (LinkedList_1_t2611 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_CopyTo_m33916(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t2611 *, ObjectU5BU5D_t21*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m33916_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::Find(T)
extern "C" LinkedListNode_1_t2661 * LinkedList_1_Find_m33918_gshared (LinkedList_1_t2611 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Find_m33918(__this, ___value, method) (( LinkedListNode_1_t2661 * (*) (LinkedList_1_t2611 *, Object_t *, const MethodInfo*))LinkedList_1_Find_m33918_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5643  LinkedList_1_GetEnumerator_m33920_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method);
#define LinkedList_1_GetEnumerator_m33920(__this, method) (( Enumerator_t5643  (*) (LinkedList_1_t2611 *, const MethodInfo*))LinkedList_1_GetEnumerator_m33920_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m33922_gshared (LinkedList_1_t2611 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define LinkedList_1_GetObjectData_m33922(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t2611 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))LinkedList_1_GetObjectData_m33922_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m33924_gshared (LinkedList_1_t2611 * __this, Object_t * ___sender, const MethodInfo* method);
#define LinkedList_1_OnDeserialization_m33924(__this, ___sender, method) (( void (*) (LinkedList_1_t2611 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m33924_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
extern "C" bool LinkedList_1_Remove_m33926_gshared (LinkedList_1_t2611 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Remove_m33926(__this, ___value, method) (( bool (*) (LinkedList_1_t2611 *, Object_t *, const MethodInfo*))LinkedList_1_Remove_m33926_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m33928_gshared (LinkedList_1_t2611 * __this, LinkedListNode_1_t2661 * ___node, const MethodInfo* method);
#define LinkedList_1_Remove_m33928(__this, ___node, method) (( void (*) (LinkedList_1_t2611 *, LinkedListNode_1_t2661 *, const MethodInfo*))LinkedList_1_Remove_m33928_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveFirst()
extern "C" void LinkedList_1_RemoveFirst_m33930_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveFirst_m33930(__this, method) (( void (*) (LinkedList_1_t2611 *, const MethodInfo*))LinkedList_1_RemoveFirst_m33930_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m33932_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveLast_m33932(__this, method) (( void (*) (LinkedList_1_t2611 *, const MethodInfo*))LinkedList_1_RemoveLast_m33932_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m33934_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method);
#define LinkedList_1_get_Count_m33934(__this, method) (( int32_t (*) (LinkedList_1_t2611 *, const MethodInfo*))LinkedList_1_get_Count_m33934_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern "C" LinkedListNode_1_t2661 * LinkedList_1_get_First_m12158_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method);
#define LinkedList_1_get_First_m12158(__this, method) (( LinkedListNode_1_t2661 * (*) (LinkedList_1_t2611 *, const MethodInfo*))LinkedList_1_get_First_m12158_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_Last()
extern "C" LinkedListNode_1_t2661 * LinkedList_1_get_Last_m33937_gshared (LinkedList_1_t2611 * __this, const MethodInfo* method);
#define LinkedList_1_get_Last_m33937(__this, method) (( LinkedListNode_1_t2661 * (*) (LinkedList_1_t2611 *, const MethodInfo*))LinkedList_1_get_Last_m33937_gshared)(__this, method)
