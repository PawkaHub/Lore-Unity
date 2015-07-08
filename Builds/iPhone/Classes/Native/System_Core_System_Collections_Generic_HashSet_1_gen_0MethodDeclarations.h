#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t452;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t6585;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t2057;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3295;
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.Int32>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__4.h"

// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
extern "C" void HashSet_1__ctor_m3423_gshared (HashSet_1_t452 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m3423(__this, method) (( void (*) (HashSet_1_t452 *, const MethodInfo*))HashSet_1__ctor_m3423_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m30452_gshared (HashSet_1_t452 * __this, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m30452(__this, ___comparer, method) (( void (*) (HashSet_1_t452 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m30452_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void HashSet_1__ctor_m30453_gshared (HashSet_1_t452 * __this, Object_t* ___collection, const MethodInfo* method);
#define HashSet_1__ctor_m30453(__this, ___collection, method) (( void (*) (HashSet_1_t452 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m30453_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m30454_gshared (HashSet_1_t452 * __this, Object_t* ___collection, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m30454(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t452 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m30454_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m30455_gshared (HashSet_1_t452 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m30455(__this, ___info, ___context, method) (( void (*) (HashSet_1_t452 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))HashSet_1__ctor_m30455_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30456_gshared (HashSet_1_t452 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30456(__this, method) (( Object_t* (*) (HashSet_1_t452 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30456_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30457_gshared (HashSet_1_t452 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30457(__this, method) (( bool (*) (HashSet_1_t452 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30457_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m30458_gshared (HashSet_1_t452 * __this, Int32U5BU5D_t119* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m30458(__this, ___array, ___index, method) (( void (*) (HashSet_1_t452 *, Int32U5BU5D_t119*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m30458_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30459_gshared (HashSet_1_t452 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30459(__this, ___item, method) (( void (*) (HashSet_1_t452 *, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30459_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m30460_gshared (HashSet_1_t452 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m30460(__this, method) (( Object_t * (*) (HashSet_1_t452 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m30460_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m30461_gshared (HashSet_1_t452 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m30461(__this, method) (( int32_t (*) (HashSet_1_t452 *, const MethodInfo*))HashSet_1_get_Count_m30461_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m30462_gshared (HashSet_1_t452 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m30462(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t452 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m30462_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m30463_gshared (HashSet_1_t452 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m30463(__this, ___size, method) (( void (*) (HashSet_1_t452 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m30463_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m30464_gshared (HashSet_1_t452 * __this, int32_t ___index, int32_t ___hash, int32_t ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m30464(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t452 *, int32_t, int32_t, int32_t, const MethodInfo*))HashSet_1_SlotsContainsAt_m30464_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::CopyTo(T[])
extern "C" void HashSet_1_CopyTo_m30465_gshared (HashSet_1_t452 * __this, Int32U5BU5D_t119* ___array, const MethodInfo* method);
#define HashSet_1_CopyTo_m30465(__this, ___array, method) (( void (*) (HashSet_1_t452 *, Int32U5BU5D_t119*, const MethodInfo*))HashSet_1_CopyTo_m30465_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m30466_gshared (HashSet_1_t452 * __this, Int32U5BU5D_t119* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m30466(__this, ___array, ___index, method) (( void (*) (HashSet_1_t452 *, Int32U5BU5D_t119*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m30466_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m30467_gshared (HashSet_1_t452 * __this, Int32U5BU5D_t119* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m30467(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t452 *, Int32U5BU5D_t119*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m30467_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Resize()
extern "C" void HashSet_1_Resize_m30468_gshared (HashSet_1_t452 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m30468(__this, method) (( void (*) (HashSet_1_t452 *, const MethodInfo*))HashSet_1_Resize_m30468_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m30469_gshared (HashSet_1_t452 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m30469(__this, ___index, method) (( int32_t (*) (HashSet_1_t452 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m30469_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m30470_gshared (HashSet_1_t452 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m30470(__this, ___item, method) (( int32_t (*) (HashSet_1_t452 *, int32_t, const MethodInfo*))HashSet_1_GetItemHashCode_m30470_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(T)
extern "C" bool HashSet_1_Add_m3470_gshared (HashSet_1_t452 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_Add_m3470(__this, ___item, method) (( bool (*) (HashSet_1_t452 *, int32_t, const MethodInfo*))HashSet_1_Add_m3470_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Clear()
extern "C" void HashSet_1_Clear_m30471_gshared (HashSet_1_t452 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m30471(__this, method) (( void (*) (HashSet_1_t452 *, const MethodInfo*))HashSet_1_Clear_m30471_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(T)
extern "C" bool HashSet_1_Contains_m30472_gshared (HashSet_1_t452 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_Contains_m30472(__this, ___item, method) (( bool (*) (HashSet_1_t452 *, int32_t, const MethodInfo*))HashSet_1_Contains_m30472_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Remove(T)
extern "C" bool HashSet_1_Remove_m30473_gshared (HashSet_1_t452 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_Remove_m30473(__this, ___item, method) (( bool (*) (HashSet_1_t452 *, int32_t, const MethodInfo*))HashSet_1_Remove_m30473_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m30474_gshared (HashSet_1_t452 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m30474(__this, ___info, ___context, method) (( void (*) (HashSet_1_t452 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))HashSet_1_GetObjectData_m30474_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m30475_gshared (HashSet_1_t452 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m30475(__this, ___sender, method) (( void (*) (HashSet_1_t452 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m30475_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t6631  HashSet_1_GetEnumerator_m30476_gshared (HashSet_1_t452 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m30476(__this, method) (( Enumerator_t6631  (*) (HashSet_1_t452 *, const MethodInfo*))HashSet_1_GetEnumerator_m30476_gshared)(__this, method)
