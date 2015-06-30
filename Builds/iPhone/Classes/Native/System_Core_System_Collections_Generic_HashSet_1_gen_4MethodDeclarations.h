#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t1605;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4896;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1072;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t718;
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
extern "C" void HashSet_1__ctor_m26493_gshared (HashSet_1_t1605 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m26493(__this, method) (( void (*) (HashSet_1_t1605 *, const MethodInfo*))HashSet_1__ctor_m26493_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m7432_gshared (HashSet_1_t1605 * __this, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m7432(__this, ___comparer, method) (( void (*) (HashSet_1_t1605 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m7432_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void HashSet_1__ctor_m26494_gshared (HashSet_1_t1605 * __this, Object_t* ___collection, const MethodInfo* method);
#define HashSet_1__ctor_m26494(__this, ___collection, method) (( void (*) (HashSet_1_t1605 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m26494_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m26495_gshared (HashSet_1_t1605 * __this, Object_t* ___collection, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m26495(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t1605 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m26495_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m26496_gshared (HashSet_1_t1605 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m26496(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1605 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))HashSet_1__ctor_m26496_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26497_gshared (HashSet_1_t1605 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26497(__this, method) (( Object_t* (*) (HashSet_1_t1605 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26497_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26498_gshared (HashSet_1_t1605 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26498(__this, method) (( bool (*) (HashSet_1_t1605 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26498_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m26499_gshared (HashSet_1_t1605 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m26499(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1605 *, ObjectU5BU5D_t21*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m26499_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m26500_gshared (HashSet_1_t1605 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m26500(__this, ___item, method) (( void (*) (HashSet_1_t1605 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m26500_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m26501_gshared (HashSet_1_t1605 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m26501(__this, method) (( Object_t * (*) (HashSet_1_t1605 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m26501_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m26502_gshared (HashSet_1_t1605 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m26502(__this, method) (( int32_t (*) (HashSet_1_t1605 *, const MethodInfo*))HashSet_1_get_Count_m26502_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m26503_gshared (HashSet_1_t1605 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m26503(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t1605 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m26503_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m26504_gshared (HashSet_1_t1605 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m26504(__this, ___size, method) (( void (*) (HashSet_1_t1605 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m26504_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m26505_gshared (HashSet_1_t1605 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m26505(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t1605 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m26505_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[])
extern "C" void HashSet_1_CopyTo_m26506_gshared (HashSet_1_t1605 * __this, ObjectU5BU5D_t21* ___array, const MethodInfo* method);
#define HashSet_1_CopyTo_m26506(__this, ___array, method) (( void (*) (HashSet_1_t1605 *, ObjectU5BU5D_t21*, const MethodInfo*))HashSet_1_CopyTo_m26506_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m26507_gshared (HashSet_1_t1605 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m26507(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1605 *, ObjectU5BU5D_t21*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m26507_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m26508_gshared (HashSet_1_t1605 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m26508(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t1605 *, ObjectU5BU5D_t21*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m26508_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m26509_gshared (HashSet_1_t1605 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m26509(__this, method) (( void (*) (HashSet_1_t1605 *, const MethodInfo*))HashSet_1_Resize_m26509_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m26510_gshared (HashSet_1_t1605 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m26510(__this, ___index, method) (( int32_t (*) (HashSet_1_t1605 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m26510_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m26511_gshared (HashSet_1_t1605 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m26511(__this, ___item, method) (( int32_t (*) (HashSet_1_t1605 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m26511_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m26512_gshared (HashSet_1_t1605 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m26512(__this, ___item, method) (( bool (*) (HashSet_1_t1605 *, Object_t *, const MethodInfo*))HashSet_1_Add_m26512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m26513_gshared (HashSet_1_t1605 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m26513(__this, method) (( void (*) (HashSet_1_t1605 *, const MethodInfo*))HashSet_1_Clear_m26513_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m26514_gshared (HashSet_1_t1605 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m26514(__this, ___item, method) (( bool (*) (HashSet_1_t1605 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m26514_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m26515_gshared (HashSet_1_t1605 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m26515(__this, ___item, method) (( bool (*) (HashSet_1_t1605 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m26515_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m26516_gshared (HashSet_1_t1605 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m26516(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1605 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))HashSet_1_GetObjectData_m26516_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m26517_gshared (HashSet_1_t1605 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m26517(__this, ___sender, method) (( void (*) (HashSet_1_t1605 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m26517_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5146  HashSet_1_GetEnumerator_m26518_gshared (HashSet_1_t1605 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m26518(__this, method) (( Enumerator_t5146  (*) (HashSet_1_t1605 *, const MethodInfo*))HashSet_1_GetEnumerator_m26518_gshared)(__this, method)
