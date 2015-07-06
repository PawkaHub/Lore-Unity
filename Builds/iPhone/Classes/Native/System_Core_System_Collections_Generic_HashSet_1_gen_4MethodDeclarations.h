#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t1809;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1519;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t998;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t744;
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
extern "C" void HashSet_1__ctor_m27932_gshared (HashSet_1_t1809 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m27932(__this, method) (( void (*) (HashSet_1_t1809 *, const MethodInfo*))HashSet_1__ctor_m27932_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m8634_gshared (HashSet_1_t1809 * __this, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m8634(__this, ___comparer, method) (( void (*) (HashSet_1_t1809 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m8634_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void HashSet_1__ctor_m27933_gshared (HashSet_1_t1809 * __this, Object_t* ___collection, const MethodInfo* method);
#define HashSet_1__ctor_m27933(__this, ___collection, method) (( void (*) (HashSet_1_t1809 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m27933_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m27934_gshared (HashSet_1_t1809 * __this, Object_t* ___collection, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m27934(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t1809 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m27934_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m27935_gshared (HashSet_1_t1809 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m27935(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1809 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))HashSet_1__ctor_m27935_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27936_gshared (HashSet_1_t1809 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27936(__this, method) (( Object_t* (*) (HashSet_1_t1809 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27937_gshared (HashSet_1_t1809 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27937(__this, method) (( bool (*) (HashSet_1_t1809 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27937_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m27938_gshared (HashSet_1_t1809 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m27938(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1809 *, ObjectU5BU5D_t21*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m27938_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m27939_gshared (HashSet_1_t1809 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m27939(__this, ___item, method) (( void (*) (HashSet_1_t1809 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m27939_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m27940_gshared (HashSet_1_t1809 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m27940(__this, method) (( Object_t * (*) (HashSet_1_t1809 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m27940_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m27941_gshared (HashSet_1_t1809 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m27941(__this, method) (( int32_t (*) (HashSet_1_t1809 *, const MethodInfo*))HashSet_1_get_Count_m27941_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m27942_gshared (HashSet_1_t1809 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m27942(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t1809 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m27942_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m27943_gshared (HashSet_1_t1809 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m27943(__this, ___size, method) (( void (*) (HashSet_1_t1809 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m27943_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m27944_gshared (HashSet_1_t1809 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m27944(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t1809 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m27944_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[])
extern "C" void HashSet_1_CopyTo_m27945_gshared (HashSet_1_t1809 * __this, ObjectU5BU5D_t21* ___array, const MethodInfo* method);
#define HashSet_1_CopyTo_m27945(__this, ___array, method) (( void (*) (HashSet_1_t1809 *, ObjectU5BU5D_t21*, const MethodInfo*))HashSet_1_CopyTo_m27945_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m27946_gshared (HashSet_1_t1809 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m27946(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1809 *, ObjectU5BU5D_t21*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m27946_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m27947_gshared (HashSet_1_t1809 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m27947(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t1809 *, ObjectU5BU5D_t21*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m27947_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m27948_gshared (HashSet_1_t1809 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m27948(__this, method) (( void (*) (HashSet_1_t1809 *, const MethodInfo*))HashSet_1_Resize_m27948_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m27949_gshared (HashSet_1_t1809 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m27949(__this, ___index, method) (( int32_t (*) (HashSet_1_t1809 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m27949_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m27950_gshared (HashSet_1_t1809 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m27950(__this, ___item, method) (( int32_t (*) (HashSet_1_t1809 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m27950_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m27951_gshared (HashSet_1_t1809 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m27951(__this, ___item, method) (( bool (*) (HashSet_1_t1809 *, Object_t *, const MethodInfo*))HashSet_1_Add_m27951_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m27952_gshared (HashSet_1_t1809 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m27952(__this, method) (( void (*) (HashSet_1_t1809 *, const MethodInfo*))HashSet_1_Clear_m27952_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m27953_gshared (HashSet_1_t1809 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m27953(__this, ___item, method) (( bool (*) (HashSet_1_t1809 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m27953_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m27954_gshared (HashSet_1_t1809 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m27954(__this, ___item, method) (( bool (*) (HashSet_1_t1809 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m27954_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m27955_gshared (HashSet_1_t1809 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m27955(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1809 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))HashSet_1_GetObjectData_m27955_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m27956_gshared (HashSet_1_t1809 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m27956(__this, ___sender, method) (( void (*) (HashSet_1_t1809 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m27956_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t6234  HashSet_1_GetEnumerator_m27957_gshared (HashSet_1_t1809 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m27957(__this, method) (( Enumerator_t6234  (*) (HashSet_1_t1809 *, const MethodInfo*))HashSet_1_GetEnumerator_m27957_gshared)(__this, method)
