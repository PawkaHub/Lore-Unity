#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1873;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t6192;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t1654;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t1653;
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
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__3.h"

// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
// System.Collections.Generic.HashSet`1<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_gen_4MethodDeclarations.h"
#define HashSet_1__ctor_m9023(__this, method) (( void (*) (HashSet_1_t1873 *, const MethodInfo*))HashSet_1__ctor_m28839_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m28840(__this, ___comparer, method) (( void (*) (HashSet_1_t1873 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m9067_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define HashSet_1__ctor_m9026(__this, ___collection, method) (( void (*) (HashSet_1_t1873 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m28841_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m28842(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t1873 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m28843_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1__ctor_m28844(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1873 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))HashSet_1__ctor_m28845_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28846(__this, method) (( Object_t* (*) (HashSet_1_t1873 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28847_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28848(__this, method) (( bool (*) (HashSet_1_t1873 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28849_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m28850(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1873 *, StringU5BU5D_t20*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m28851_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.Add(T)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m28852(__this, ___item, method) (( void (*) (HashSet_1_t1873 *, String_t*, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m28853_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m28854(__this, method) (( Object_t * (*) (HashSet_1_t1873 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m28855_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::get_Count()
#define HashSet_1_get_Count_m28856(__this, method) (( int32_t (*) (HashSet_1_t1873 *, const MethodInfo*))HashSet_1_get_Count_m28857_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1_Init_m28858(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t1873 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m28859_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::InitArrays(System.Int32)
#define HashSet_1_InitArrays_m28860(__this, ___size, method) (( void (*) (HashSet_1_t1873 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m28861_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::SlotsContainsAt(System.Int32,System.Int32,T)
#define HashSet_1_SlotsContainsAt_m28862(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t1873 *, int32_t, int32_t, String_t*, const MethodInfo*))HashSet_1_SlotsContainsAt_m28863_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::CopyTo(T[])
#define HashSet_1_CopyTo_m28864(__this, ___array, method) (( void (*) (HashSet_1_t1873 *, StringU5BU5D_t20*, const MethodInfo*))HashSet_1_CopyTo_m28865_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::CopyTo(T[],System.Int32)
#define HashSet_1_CopyTo_m28866(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1873 *, StringU5BU5D_t20*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m28867_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::CopyTo(T[],System.Int32,System.Int32)
#define HashSet_1_CopyTo_m28868(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t1873 *, StringU5BU5D_t20*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m28869_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Resize()
#define HashSet_1_Resize_m28870(__this, method) (( void (*) (HashSet_1_t1873 *, const MethodInfo*))HashSet_1_Resize_m28871_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::GetLinkHashCode(System.Int32)
#define HashSet_1_GetLinkHashCode_m28872(__this, ___index, method) (( int32_t (*) (HashSet_1_t1873 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m28873_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::GetItemHashCode(T)
#define HashSet_1_GetItemHashCode_m28874(__this, ___item, method) (( int32_t (*) (HashSet_1_t1873 *, String_t*, const MethodInfo*))HashSet_1_GetItemHashCode_m28875_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
#define HashSet_1_Add_m9245(__this, ___item, method) (( bool (*) (HashSet_1_t1873 *, String_t*, const MethodInfo*))HashSet_1_Add_m28876_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Clear()
#define HashSet_1_Clear_m28877(__this, method) (( void (*) (HashSet_1_t1873 *, const MethodInfo*))HashSet_1_Clear_m28878_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(T)
#define HashSet_1_Contains_m28879(__this, ___item, method) (( bool (*) (HashSet_1_t1873 *, String_t*, const MethodInfo*))HashSet_1_Contains_m28880_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Remove(T)
#define HashSet_1_Remove_m28881(__this, ___item, method) (( bool (*) (HashSet_1_t1873 *, String_t*, const MethodInfo*))HashSet_1_Remove_m28882_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1_GetObjectData_m28883(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1873 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))HashSet_1_GetObjectData_m28884_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::OnDeserialization(System.Object)
#define HashSet_1_OnDeserialization_m28885(__this, ___sender, method) (( void (*) (HashSet_1_t1873 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m28886_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.String>::GetEnumerator()
#define HashSet_1_GetEnumerator_m28887(__this, method) (( Enumerator_t6512  (*) (HashSet_1_t1873 *, const MethodInfo*))HashSet_1_GetEnumerator_m28888_gshared)(__this, method)
