#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t424;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t6257;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1818;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3057;
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.Int32>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__3.h"

// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
extern "C" void HashSet_1__ctor_m3194_gshared (HashSet_1_t424 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m3194(__this, method) (( void (*) (HashSet_1_t424 *, const MethodInfo*))HashSet_1__ctor_m3194_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m28979_gshared (HashSet_1_t424 * __this, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m28979(__this, ___comparer, method) (( void (*) (HashSet_1_t424 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m28979_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void HashSet_1__ctor_m28980_gshared (HashSet_1_t424 * __this, Object_t* ___collection, const MethodInfo* method);
#define HashSet_1__ctor_m28980(__this, ___collection, method) (( void (*) (HashSet_1_t424 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m28980_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m28981_gshared (HashSet_1_t424 * __this, Object_t* ___collection, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m28981(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t424 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m28981_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m28982_gshared (HashSet_1_t424 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m28982(__this, ___info, ___context, method) (( void (*) (HashSet_1_t424 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))HashSet_1__ctor_m28982_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28983_gshared (HashSet_1_t424 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28983(__this, method) (( Object_t* (*) (HashSet_1_t424 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28983_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28984_gshared (HashSet_1_t424 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28984(__this, method) (( bool (*) (HashSet_1_t424 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28984_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m28985_gshared (HashSet_1_t424 * __this, Int32U5BU5D_t119* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m28985(__this, ___array, ___index, method) (( void (*) (HashSet_1_t424 *, Int32U5BU5D_t119*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m28985_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m28986_gshared (HashSet_1_t424 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m28986(__this, ___item, method) (( void (*) (HashSet_1_t424 *, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m28986_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m28987_gshared (HashSet_1_t424 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m28987(__this, method) (( Object_t * (*) (HashSet_1_t424 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m28987_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m28988_gshared (HashSet_1_t424 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m28988(__this, method) (( int32_t (*) (HashSet_1_t424 *, const MethodInfo*))HashSet_1_get_Count_m28988_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m28989_gshared (HashSet_1_t424 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m28989(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t424 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m28989_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m28990_gshared (HashSet_1_t424 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m28990(__this, ___size, method) (( void (*) (HashSet_1_t424 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m28990_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m28991_gshared (HashSet_1_t424 * __this, int32_t ___index, int32_t ___hash, int32_t ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m28991(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t424 *, int32_t, int32_t, int32_t, const MethodInfo*))HashSet_1_SlotsContainsAt_m28991_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::CopyTo(T[])
extern "C" void HashSet_1_CopyTo_m28992_gshared (HashSet_1_t424 * __this, Int32U5BU5D_t119* ___array, const MethodInfo* method);
#define HashSet_1_CopyTo_m28992(__this, ___array, method) (( void (*) (HashSet_1_t424 *, Int32U5BU5D_t119*, const MethodInfo*))HashSet_1_CopyTo_m28992_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m28993_gshared (HashSet_1_t424 * __this, Int32U5BU5D_t119* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m28993(__this, ___array, ___index, method) (( void (*) (HashSet_1_t424 *, Int32U5BU5D_t119*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m28993_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m28994_gshared (HashSet_1_t424 * __this, Int32U5BU5D_t119* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m28994(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t424 *, Int32U5BU5D_t119*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m28994_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Resize()
extern "C" void HashSet_1_Resize_m28995_gshared (HashSet_1_t424 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m28995(__this, method) (( void (*) (HashSet_1_t424 *, const MethodInfo*))HashSet_1_Resize_m28995_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m28996_gshared (HashSet_1_t424 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m28996(__this, ___index, method) (( int32_t (*) (HashSet_1_t424 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m28996_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m28997_gshared (HashSet_1_t424 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m28997(__this, ___item, method) (( int32_t (*) (HashSet_1_t424 *, int32_t, const MethodInfo*))HashSet_1_GetItemHashCode_m28997_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(T)
extern "C" bool HashSet_1_Add_m3241_gshared (HashSet_1_t424 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_Add_m3241(__this, ___item, method) (( bool (*) (HashSet_1_t424 *, int32_t, const MethodInfo*))HashSet_1_Add_m3241_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Clear()
extern "C" void HashSet_1_Clear_m28998_gshared (HashSet_1_t424 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m28998(__this, method) (( void (*) (HashSet_1_t424 *, const MethodInfo*))HashSet_1_Clear_m28998_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(T)
extern "C" bool HashSet_1_Contains_m28999_gshared (HashSet_1_t424 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_Contains_m28999(__this, ___item, method) (( bool (*) (HashSet_1_t424 *, int32_t, const MethodInfo*))HashSet_1_Contains_m28999_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Remove(T)
extern "C" bool HashSet_1_Remove_m29000_gshared (HashSet_1_t424 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_Remove_m29000(__this, ___item, method) (( bool (*) (HashSet_1_t424 *, int32_t, const MethodInfo*))HashSet_1_Remove_m29000_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m29001_gshared (HashSet_1_t424 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m29001(__this, ___info, ___context, method) (( void (*) (HashSet_1_t424 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))HashSet_1_GetObjectData_m29001_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m29002_gshared (HashSet_1_t424 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m29002(__this, ___sender, method) (( void (*) (HashSet_1_t424 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m29002_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t6303  HashSet_1_GetEnumerator_m29003_gshared (HashSet_1_t424 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m29003(__this, method) (( Enumerator_t6303  (*) (HashSet_1_t424 *, const MethodInfo*))HashSet_1_GetEnumerator_m29003_gshared)(__this, method)
