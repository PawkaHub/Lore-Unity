#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1622;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5954;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t1395;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t1394;
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
#define HashSet_1__ctor_m8590(__this, method) (( void (*) (HashSet_1_t1622 *, const MethodInfo*))HashSet_1__ctor_m27932_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m38519(__this, ___comparer, method) (( void (*) (HashSet_1_t1622 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m8634_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define HashSet_1__ctor_m8593(__this, ___collection, method) (( void (*) (HashSet_1_t1622 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m27933_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m38520(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t1622 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m27934_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1__ctor_m38521(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1622 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))HashSet_1__ctor_m27935_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38522(__this, method) (( Object_t* (*) (HashSet_1_t1622 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38523(__this, method) (( bool (*) (HashSet_1_t1622 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27937_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m38524(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1622 *, StringU5BU5D_t20*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m27938_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.Add(T)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m38525(__this, ___item, method) (( void (*) (HashSet_1_t1622 *, String_t*, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m27939_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m38526(__this, method) (( Object_t * (*) (HashSet_1_t1622 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m27940_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::get_Count()
#define HashSet_1_get_Count_m38527(__this, method) (( int32_t (*) (HashSet_1_t1622 *, const MethodInfo*))HashSet_1_get_Count_m27941_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1_Init_m38528(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t1622 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m27942_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::InitArrays(System.Int32)
#define HashSet_1_InitArrays_m38529(__this, ___size, method) (( void (*) (HashSet_1_t1622 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m27943_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::SlotsContainsAt(System.Int32,System.Int32,T)
#define HashSet_1_SlotsContainsAt_m38530(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t1622 *, int32_t, int32_t, String_t*, const MethodInfo*))HashSet_1_SlotsContainsAt_m27944_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::CopyTo(T[])
#define HashSet_1_CopyTo_m38531(__this, ___array, method) (( void (*) (HashSet_1_t1622 *, StringU5BU5D_t20*, const MethodInfo*))HashSet_1_CopyTo_m27945_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::CopyTo(T[],System.Int32)
#define HashSet_1_CopyTo_m38532(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1622 *, StringU5BU5D_t20*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m27946_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::CopyTo(T[],System.Int32,System.Int32)
#define HashSet_1_CopyTo_m38533(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t1622 *, StringU5BU5D_t20*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m27947_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Resize()
#define HashSet_1_Resize_m38534(__this, method) (( void (*) (HashSet_1_t1622 *, const MethodInfo*))HashSet_1_Resize_m27948_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::GetLinkHashCode(System.Int32)
#define HashSet_1_GetLinkHashCode_m38535(__this, ___index, method) (( int32_t (*) (HashSet_1_t1622 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m27949_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::GetItemHashCode(T)
#define HashSet_1_GetItemHashCode_m38536(__this, ___item, method) (( int32_t (*) (HashSet_1_t1622 *, String_t*, const MethodInfo*))HashSet_1_GetItemHashCode_m27950_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
#define HashSet_1_Add_m8813(__this, ___item, method) (( bool (*) (HashSet_1_t1622 *, String_t*, const MethodInfo*))HashSet_1_Add_m27951_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Clear()
#define HashSet_1_Clear_m38537(__this, method) (( void (*) (HashSet_1_t1622 *, const MethodInfo*))HashSet_1_Clear_m27952_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(T)
#define HashSet_1_Contains_m38538(__this, ___item, method) (( bool (*) (HashSet_1_t1622 *, String_t*, const MethodInfo*))HashSet_1_Contains_m27953_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Remove(T)
#define HashSet_1_Remove_m38539(__this, ___item, method) (( bool (*) (HashSet_1_t1622 *, String_t*, const MethodInfo*))HashSet_1_Remove_m27954_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1_GetObjectData_m38540(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1622 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))HashSet_1_GetObjectData_m27955_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::OnDeserialization(System.Object)
#define HashSet_1_OnDeserialization_m38541(__this, ___sender, method) (( void (*) (HashSet_1_t1622 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m27956_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.String>::GetEnumerator()
#define HashSet_1_GetEnumerator_m38542(__this, method) (( Enumerator_t6910  (*) (HashSet_1_t1622 *, const MethodInfo*))HashSet_1_GetEnumerator_m27957_gshared)(__this, method)
