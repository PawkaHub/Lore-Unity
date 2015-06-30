#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t424;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5169;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1612;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3228;
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
extern "C" void HashSet_1__ctor_m3107_gshared (HashSet_1_t424 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m3107(__this, method) (( void (*) (HashSet_1_t424 *, const MethodInfo*))HashSet_1__ctor_m3107_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m27514_gshared (HashSet_1_t424 * __this, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m27514(__this, ___comparer, method) (( void (*) (HashSet_1_t424 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m27514_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void HashSet_1__ctor_m27515_gshared (HashSet_1_t424 * __this, Object_t* ___collection, const MethodInfo* method);
#define HashSet_1__ctor_m27515(__this, ___collection, method) (( void (*) (HashSet_1_t424 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m27515_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m27516_gshared (HashSet_1_t424 * __this, Object_t* ___collection, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m27516(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t424 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m27516_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m27517_gshared (HashSet_1_t424 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m27517(__this, ___info, ___context, method) (( void (*) (HashSet_1_t424 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))HashSet_1__ctor_m27517_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27518_gshared (HashSet_1_t424 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27518(__this, method) (( Object_t* (*) (HashSet_1_t424 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27518_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27519_gshared (HashSet_1_t424 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27519(__this, method) (( bool (*) (HashSet_1_t424 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27519_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m27520_gshared (HashSet_1_t424 * __this, Int32U5BU5D_t119* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m27520(__this, ___array, ___index, method) (( void (*) (HashSet_1_t424 *, Int32U5BU5D_t119*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m27520_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m27521_gshared (HashSet_1_t424 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m27521(__this, ___item, method) (( void (*) (HashSet_1_t424 *, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m27521_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m27522_gshared (HashSet_1_t424 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m27522(__this, method) (( Object_t * (*) (HashSet_1_t424 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m27522_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m27523_gshared (HashSet_1_t424 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m27523(__this, method) (( int32_t (*) (HashSet_1_t424 *, const MethodInfo*))HashSet_1_get_Count_m27523_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m27524_gshared (HashSet_1_t424 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m27524(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t424 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m27524_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m27525_gshared (HashSet_1_t424 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m27525(__this, ___size, method) (( void (*) (HashSet_1_t424 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m27525_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m27526_gshared (HashSet_1_t424 * __this, int32_t ___index, int32_t ___hash, int32_t ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m27526(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t424 *, int32_t, int32_t, int32_t, const MethodInfo*))HashSet_1_SlotsContainsAt_m27526_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::CopyTo(T[])
extern "C" void HashSet_1_CopyTo_m27527_gshared (HashSet_1_t424 * __this, Int32U5BU5D_t119* ___array, const MethodInfo* method);
#define HashSet_1_CopyTo_m27527(__this, ___array, method) (( void (*) (HashSet_1_t424 *, Int32U5BU5D_t119*, const MethodInfo*))HashSet_1_CopyTo_m27527_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m27528_gshared (HashSet_1_t424 * __this, Int32U5BU5D_t119* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m27528(__this, ___array, ___index, method) (( void (*) (HashSet_1_t424 *, Int32U5BU5D_t119*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m27528_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m27529_gshared (HashSet_1_t424 * __this, Int32U5BU5D_t119* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m27529(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t424 *, Int32U5BU5D_t119*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m27529_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Resize()
extern "C" void HashSet_1_Resize_m27530_gshared (HashSet_1_t424 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m27530(__this, method) (( void (*) (HashSet_1_t424 *, const MethodInfo*))HashSet_1_Resize_m27530_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m27531_gshared (HashSet_1_t424 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m27531(__this, ___index, method) (( int32_t (*) (HashSet_1_t424 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m27531_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m27532_gshared (HashSet_1_t424 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m27532(__this, ___item, method) (( int32_t (*) (HashSet_1_t424 *, int32_t, const MethodInfo*))HashSet_1_GetItemHashCode_m27532_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(T)
extern "C" bool HashSet_1_Add_m3156_gshared (HashSet_1_t424 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_Add_m3156(__this, ___item, method) (( bool (*) (HashSet_1_t424 *, int32_t, const MethodInfo*))HashSet_1_Add_m3156_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Clear()
extern "C" void HashSet_1_Clear_m27533_gshared (HashSet_1_t424 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m27533(__this, method) (( void (*) (HashSet_1_t424 *, const MethodInfo*))HashSet_1_Clear_m27533_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(T)
extern "C" bool HashSet_1_Contains_m27534_gshared (HashSet_1_t424 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_Contains_m27534(__this, ___item, method) (( bool (*) (HashSet_1_t424 *, int32_t, const MethodInfo*))HashSet_1_Contains_m27534_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Remove(T)
extern "C" bool HashSet_1_Remove_m27535_gshared (HashSet_1_t424 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_Remove_m27535(__this, ___item, method) (( bool (*) (HashSet_1_t424 *, int32_t, const MethodInfo*))HashSet_1_Remove_m27535_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m27536_gshared (HashSet_1_t424 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m27536(__this, ___info, ___context, method) (( void (*) (HashSet_1_t424 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))HashSet_1_GetObjectData_m27536_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m27537_gshared (HashSet_1_t424 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m27537(__this, ___sender, method) (( void (*) (HashSet_1_t424 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m27537_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t5215  HashSet_1_GetEnumerator_m27538_gshared (HashSet_1_t424 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m27538(__this, method) (( Enumerator_t5215  (*) (HashSet_1_t424 *, const MethodInfo*))HashSet_1_GetEnumerator_m27538_gshared)(__this, method)
