#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1482;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t4864;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t1071;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t1070;
// System.String[]
struct StringU5BU5D_t20;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.String>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__5.h"

// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
// System.Collections.Generic.HashSet`1<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_gen_4MethodDeclarations.h"
#define HashSet_1__ctor_m7386(__this, method) (( void (*) (HashSet_1_t1482 *, const MethodInfo*))HashSet_1__ctor_m26493_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m34163(__this, ___comparer, method) (( void (*) (HashSet_1_t1482 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m7432_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define HashSet_1__ctor_m7389(__this, ___collection, method) (( void (*) (HashSet_1_t1482 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m26494_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m34164(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t1482 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m26495_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1__ctor_m34165(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1482 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))HashSet_1__ctor_m26496_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34166(__this, method) (( Object_t* (*) (HashSet_1_t1482 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26497_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m34167(__this, method) (( bool (*) (HashSet_1_t1482 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26498_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m34168(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1482 *, StringU5BU5D_t20*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m26499_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.Add(T)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m34169(__this, ___item, method) (( void (*) (HashSet_1_t1482 *, String_t*, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m26500_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m34170(__this, method) (( Object_t * (*) (HashSet_1_t1482 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m26501_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::get_Count()
#define HashSet_1_get_Count_m34171(__this, method) (( int32_t (*) (HashSet_1_t1482 *, const MethodInfo*))HashSet_1_get_Count_m26502_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1_Init_m34172(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t1482 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m26503_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::InitArrays(System.Int32)
#define HashSet_1_InitArrays_m34173(__this, ___size, method) (( void (*) (HashSet_1_t1482 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m26504_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::SlotsContainsAt(System.Int32,System.Int32,T)
#define HashSet_1_SlotsContainsAt_m34174(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t1482 *, int32_t, int32_t, String_t*, const MethodInfo*))HashSet_1_SlotsContainsAt_m26505_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::CopyTo(T[])
#define HashSet_1_CopyTo_m34175(__this, ___array, method) (( void (*) (HashSet_1_t1482 *, StringU5BU5D_t20*, const MethodInfo*))HashSet_1_CopyTo_m26506_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::CopyTo(T[],System.Int32)
#define HashSet_1_CopyTo_m34176(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1482 *, StringU5BU5D_t20*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m26507_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::CopyTo(T[],System.Int32,System.Int32)
#define HashSet_1_CopyTo_m34177(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t1482 *, StringU5BU5D_t20*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m26508_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Resize()
#define HashSet_1_Resize_m34178(__this, method) (( void (*) (HashSet_1_t1482 *, const MethodInfo*))HashSet_1_Resize_m26509_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::GetLinkHashCode(System.Int32)
#define HashSet_1_GetLinkHashCode_m34179(__this, ___index, method) (( int32_t (*) (HashSet_1_t1482 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m26510_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::GetItemHashCode(T)
#define HashSet_1_GetItemHashCode_m34180(__this, ___item, method) (( int32_t (*) (HashSet_1_t1482 *, String_t*, const MethodInfo*))HashSet_1_GetItemHashCode_m26511_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
#define HashSet_1_Add_m7584(__this, ___item, method) (( bool (*) (HashSet_1_t1482 *, String_t*, const MethodInfo*))HashSet_1_Add_m26512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Clear()
#define HashSet_1_Clear_m34181(__this, method) (( void (*) (HashSet_1_t1482 *, const MethodInfo*))HashSet_1_Clear_m26513_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(T)
#define HashSet_1_Contains_m34182(__this, ___item, method) (( bool (*) (HashSet_1_t1482 *, String_t*, const MethodInfo*))HashSet_1_Contains_m26514_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Remove(T)
#define HashSet_1_Remove_m34183(__this, ___item, method) (( bool (*) (HashSet_1_t1482 *, String_t*, const MethodInfo*))HashSet_1_Remove_m26515_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1_GetObjectData_m34184(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1482 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))HashSet_1_GetObjectData_m26516_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::OnDeserialization(System.Object)
#define HashSet_1_OnDeserialization_m34185(__this, ___sender, method) (( void (*) (HashSet_1_t1482 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m26517_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.String>::GetEnumerator()
#define HashSet_1_GetEnumerator_m34186(__this, method) (( Enumerator_t5660  (*) (HashSet_1_t1482 *, const MethodInfo*))HashSet_1_GetEnumerator_m26518_gshared)(__this, method)
