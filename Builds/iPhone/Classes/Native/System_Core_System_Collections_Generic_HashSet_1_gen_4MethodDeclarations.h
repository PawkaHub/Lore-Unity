#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2048;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1775;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t729;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t838;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__2.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m28839_gshared (HashSet_1_t2048 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m28839(__this, method) (( void (*) (HashSet_1_t2048 *, const MethodInfo*))HashSet_1__ctor_m28839_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m9067_gshared (HashSet_1_t2048 * __this, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m9067(__this, ___comparer, method) (( void (*) (HashSet_1_t2048 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m9067_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void HashSet_1__ctor_m28841_gshared (HashSet_1_t2048 * __this, Object_t* ___collection, const MethodInfo* method);
#define HashSet_1__ctor_m28841(__this, ___collection, method) (( void (*) (HashSet_1_t2048 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m28841_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m28843_gshared (HashSet_1_t2048 * __this, Object_t* ___collection, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m28843(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t2048 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m28843_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m28845_gshared (HashSet_1_t2048 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m28845(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2048 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))HashSet_1__ctor_m28845_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28847_gshared (HashSet_1_t2048 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28847(__this, method) (( Object_t* (*) (HashSet_1_t2048 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28847_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28849_gshared (HashSet_1_t2048 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28849(__this, method) (( bool (*) (HashSet_1_t2048 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28849_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m28851_gshared (HashSet_1_t2048 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m28851(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2048 *, ObjectU5BU5D_t21*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m28851_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m28853_gshared (HashSet_1_t2048 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m28853(__this, ___item, method) (( void (*) (HashSet_1_t2048 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m28853_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m28855_gshared (HashSet_1_t2048 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m28855(__this, method) (( Object_t * (*) (HashSet_1_t2048 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m28855_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m28857_gshared (HashSet_1_t2048 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m28857(__this, method) (( int32_t (*) (HashSet_1_t2048 *, const MethodInfo*))HashSet_1_get_Count_m28857_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m28859_gshared (HashSet_1_t2048 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m28859(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t2048 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m28859_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m28861_gshared (HashSet_1_t2048 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m28861(__this, ___size, method) (( void (*) (HashSet_1_t2048 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m28861_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m28863_gshared (HashSet_1_t2048 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m28863(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t2048 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m28863_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[])
extern "C" void HashSet_1_CopyTo_m28865_gshared (HashSet_1_t2048 * __this, ObjectU5BU5D_t21* ___array, const MethodInfo* method);
#define HashSet_1_CopyTo_m28865(__this, ___array, method) (( void (*) (HashSet_1_t2048 *, ObjectU5BU5D_t21*, const MethodInfo*))HashSet_1_CopyTo_m28865_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m28867_gshared (HashSet_1_t2048 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m28867(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2048 *, ObjectU5BU5D_t21*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m28867_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m28869_gshared (HashSet_1_t2048 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m28869(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t2048 *, ObjectU5BU5D_t21*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m28869_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m28871_gshared (HashSet_1_t2048 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m28871(__this, method) (( void (*) (HashSet_1_t2048 *, const MethodInfo*))HashSet_1_Resize_m28871_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m28873_gshared (HashSet_1_t2048 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m28873(__this, ___index, method) (( int32_t (*) (HashSet_1_t2048 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m28873_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m28875_gshared (HashSet_1_t2048 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m28875(__this, ___item, method) (( int32_t (*) (HashSet_1_t2048 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m28875_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m28876_gshared (HashSet_1_t2048 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m28876(__this, ___item, method) (( bool (*) (HashSet_1_t2048 *, Object_t *, const MethodInfo*))HashSet_1_Add_m28876_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m28878_gshared (HashSet_1_t2048 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m28878(__this, method) (( void (*) (HashSet_1_t2048 *, const MethodInfo*))HashSet_1_Clear_m28878_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m28880_gshared (HashSet_1_t2048 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m28880(__this, ___item, method) (( bool (*) (HashSet_1_t2048 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m28880_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m28882_gshared (HashSet_1_t2048 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m28882(__this, ___item, method) (( bool (*) (HashSet_1_t2048 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m28882_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m28884_gshared (HashSet_1_t2048 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m28884(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2048 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))HashSet_1_GetObjectData_m28884_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m28886_gshared (HashSet_1_t2048 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m28886(__this, ___sender, method) (( void (*) (HashSet_1_t2048 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m28886_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t6510  HashSet_1_GetEnumerator_m28888_gshared (HashSet_1_t2048 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m28888(__this, method) (( Enumerator_t6510  (*) (HashSet_1_t2048 *, const MethodInfo*))HashSet_1_GetEnumerator_m28888_gshared)(__this, method)
