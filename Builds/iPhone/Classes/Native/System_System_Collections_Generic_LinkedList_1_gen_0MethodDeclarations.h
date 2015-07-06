#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t3539;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t3590;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t744;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_1.h"

// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
extern "C" void LinkedList_1__ctor_m10948_gshared (LinkedList_1_t3539 * __this, const MethodInfo* method);
#define LinkedList_1__ctor_m10948(__this, method) (( void (*) (LinkedList_1_t3539 *, const MethodInfo*))LinkedList_1__ctor_m10948_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m37168_gshared (LinkedList_1_t3539 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define LinkedList_1__ctor_m37168(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t3539 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))LinkedList_1__ctor_m37168_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m37170_gshared (LinkedList_1_t3539 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m37170(__this, ___value, method) (( void (*) (LinkedList_1_t3539 *, Object_t *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m37170_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m37172_gshared (LinkedList_1_t3539 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m37172(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t3539 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m37172_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37174_gshared (LinkedList_1_t3539 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37174(__this, method) (( Object_t* (*) (LinkedList_1_t3539 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37174_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m37176_gshared (LinkedList_1_t3539 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m37176(__this, method) (( Object_t * (*) (LinkedList_1_t3539 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m37176_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37178_gshared (LinkedList_1_t3539 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37178(__this, method) (( bool (*) (LinkedList_1_t3539 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37178_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m37180_gshared (LinkedList_1_t3539 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m37180(__this, method) (( bool (*) (LinkedList_1_t3539 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m37180_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m37182_gshared (LinkedList_1_t3539 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m37182(__this, method) (( Object_t * (*) (LinkedList_1_t3539 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m37182_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m37184_gshared (LinkedList_1_t3539 * __this, LinkedListNode_1_t3590 * ___node, const MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m37184(__this, ___node, method) (( void (*) (LinkedList_1_t3539 *, LinkedListNode_1_t3590 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m37184_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddBefore(System.Collections.Generic.LinkedListNode`1<T>,T)
extern "C" LinkedListNode_1_t3590 * LinkedList_1_AddBefore_m37186_gshared (LinkedList_1_t3539 * __this, LinkedListNode_1_t3590 * ___node, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_AddBefore_m37186(__this, ___node, ___value, method) (( LinkedListNode_1_t3590 * (*) (LinkedList_1_t3539 *, LinkedListNode_1_t3590 *, Object_t *, const MethodInfo*))LinkedList_1_AddBefore_m37186_gshared)(__this, ___node, ___value, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
extern "C" LinkedListNode_1_t3590 * LinkedList_1_AddLast_m10949_gshared (LinkedList_1_t3539 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_AddLast_m10949(__this, ___value, method) (( LinkedListNode_1_t3590 * (*) (LinkedList_1_t3539 *, Object_t *, const MethodInfo*))LinkedList_1_AddLast_m10949_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
extern "C" void LinkedList_1_Clear_m37189_gshared (LinkedList_1_t3539 * __this, const MethodInfo* method);
#define LinkedList_1_Clear_m37189(__this, method) (( void (*) (LinkedList_1_t3539 *, const MethodInfo*))LinkedList_1_Clear_m37189_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
extern "C" bool LinkedList_1_Contains_m37191_gshared (LinkedList_1_t3539 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Contains_m37191(__this, ___value, method) (( bool (*) (LinkedList_1_t3539 *, Object_t *, const MethodInfo*))LinkedList_1_Contains_m37191_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m37193_gshared (LinkedList_1_t3539 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_CopyTo_m37193(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t3539 *, ObjectU5BU5D_t21*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m37193_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::Find(T)
extern "C" LinkedListNode_1_t3590 * LinkedList_1_Find_m37195_gshared (LinkedList_1_t3539 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Find_m37195(__this, ___value, method) (( LinkedListNode_1_t3590 * (*) (LinkedList_1_t3539 *, Object_t *, const MethodInfo*))LinkedList_1_Find_m37195_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t6797  LinkedList_1_GetEnumerator_m37197_gshared (LinkedList_1_t3539 * __this, const MethodInfo* method);
#define LinkedList_1_GetEnumerator_m37197(__this, method) (( Enumerator_t6797  (*) (LinkedList_1_t3539 *, const MethodInfo*))LinkedList_1_GetEnumerator_m37197_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m37199_gshared (LinkedList_1_t3539 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define LinkedList_1_GetObjectData_m37199(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t3539 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))LinkedList_1_GetObjectData_m37199_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m37201_gshared (LinkedList_1_t3539 * __this, Object_t * ___sender, const MethodInfo* method);
#define LinkedList_1_OnDeserialization_m37201(__this, ___sender, method) (( void (*) (LinkedList_1_t3539 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m37201_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
extern "C" bool LinkedList_1_Remove_m37203_gshared (LinkedList_1_t3539 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Remove_m37203(__this, ___value, method) (( bool (*) (LinkedList_1_t3539 *, Object_t *, const MethodInfo*))LinkedList_1_Remove_m37203_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m37205_gshared (LinkedList_1_t3539 * __this, LinkedListNode_1_t3590 * ___node, const MethodInfo* method);
#define LinkedList_1_Remove_m37205(__this, ___node, method) (( void (*) (LinkedList_1_t3539 *, LinkedListNode_1_t3590 *, const MethodInfo*))LinkedList_1_Remove_m37205_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveFirst()
extern "C" void LinkedList_1_RemoveFirst_m37207_gshared (LinkedList_1_t3539 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveFirst_m37207(__this, method) (( void (*) (LinkedList_1_t3539 *, const MethodInfo*))LinkedList_1_RemoveFirst_m37207_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m37209_gshared (LinkedList_1_t3539 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveLast_m37209(__this, method) (( void (*) (LinkedList_1_t3539 *, const MethodInfo*))LinkedList_1_RemoveLast_m37209_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m37211_gshared (LinkedList_1_t3539 * __this, const MethodInfo* method);
#define LinkedList_1_get_Count_m37211(__this, method) (( int32_t (*) (LinkedList_1_t3539 *, const MethodInfo*))LinkedList_1_get_Count_m37211_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern "C" LinkedListNode_1_t3590 * LinkedList_1_get_First_m10950_gshared (LinkedList_1_t3539 * __this, const MethodInfo* method);
#define LinkedList_1_get_First_m10950(__this, method) (( LinkedListNode_1_t3590 * (*) (LinkedList_1_t3539 *, const MethodInfo*))LinkedList_1_get_First_m10950_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_Last()
extern "C" LinkedListNode_1_t3590 * LinkedList_1_get_Last_m37214_gshared (LinkedList_1_t3539 * __this, const MethodInfo* method);
#define LinkedList_1_get_Last_m37214(__this, method) (( LinkedListNode_1_t3590 * (*) (LinkedList_1_t3539 *, const MethodInfo*))LinkedList_1_get_Last_m37214_gshared)(__this, method)
