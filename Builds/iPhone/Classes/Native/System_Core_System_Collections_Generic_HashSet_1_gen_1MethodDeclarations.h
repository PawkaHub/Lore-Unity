#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t453;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.GameObject>
struct IEqualityComparer_1_t6337;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t1454;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>
struct IEnumerator_1_t9685;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t60;
// UnityEngine.GameObject
struct GameObject_t49;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.GameObject>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__0.h"

// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::.ctor()
// System.Collections.Generic.HashSet`1<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_gen_4MethodDeclarations.h"
#define HashSet_1__ctor_m3202(__this, method) (( void (*) (HashSet_1_t453 *, const MethodInfo*))HashSet_1__ctor_m27932_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m29556(__this, ___comparer, method) (( void (*) (HashSet_1_t453 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m8634_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define HashSet_1__ctor_m29557(__this, ___collection, method) (( void (*) (HashSet_1_t453 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m27933_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m29558(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t453 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m27934_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1__ctor_m29559(__this, ___info, ___context, method) (( void (*) (HashSet_1_t453 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))HashSet_1__ctor_m27935_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29560(__this, method) (( Object_t* (*) (HashSet_1_t453 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29561(__this, method) (( bool (*) (HashSet_1_t453 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27937_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m29562(__this, ___array, ___index, method) (( void (*) (HashSet_1_t453 *, GameObjectU5BU5D_t60*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m27938_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Add(T)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m29563(__this, ___item, method) (( void (*) (HashSet_1_t453 *, GameObject_t49 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m27939_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m29564(__this, method) (( Object_t * (*) (HashSet_1_t453 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m27940_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::get_Count()
#define HashSet_1_get_Count_m29565(__this, method) (( int32_t (*) (HashSet_1_t453 *, const MethodInfo*))HashSet_1_get_Count_m27941_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1_Init_m29566(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t453 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m27942_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::InitArrays(System.Int32)
#define HashSet_1_InitArrays_m29567(__this, ___size, method) (( void (*) (HashSet_1_t453 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m27943_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::SlotsContainsAt(System.Int32,System.Int32,T)
#define HashSet_1_SlotsContainsAt_m29568(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t453 *, int32_t, int32_t, GameObject_t49 *, const MethodInfo*))HashSet_1_SlotsContainsAt_m27944_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::CopyTo(T[])
#define HashSet_1_CopyTo_m29569(__this, ___array, method) (( void (*) (HashSet_1_t453 *, GameObjectU5BU5D_t60*, const MethodInfo*))HashSet_1_CopyTo_m27945_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
#define HashSet_1_CopyTo_m29570(__this, ___array, ___index, method) (( void (*) (HashSet_1_t453 *, GameObjectU5BU5D_t60*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m27946_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32,System.Int32)
#define HashSet_1_CopyTo_m29571(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t453 *, GameObjectU5BU5D_t60*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m27947_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::Resize()
#define HashSet_1_Resize_m29572(__this, method) (( void (*) (HashSet_1_t453 *, const MethodInfo*))HashSet_1_Resize_m27948_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::GetLinkHashCode(System.Int32)
#define HashSet_1_GetLinkHashCode_m29573(__this, ___index, method) (( int32_t (*) (HashSet_1_t453 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m27949_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::GetItemHashCode(T)
#define HashSet_1_GetItemHashCode_m29574(__this, ___item, method) (( int32_t (*) (HashSet_1_t453 *, GameObject_t49 *, const MethodInfo*))HashSet_1_GetItemHashCode_m27950_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::Add(T)
#define HashSet_1_Add_m3206(__this, ___item, method) (( bool (*) (HashSet_1_t453 *, GameObject_t49 *, const MethodInfo*))HashSet_1_Add_m27951_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::Clear()
#define HashSet_1_Clear_m29575(__this, method) (( void (*) (HashSet_1_t453 *, const MethodInfo*))HashSet_1_Clear_m27952_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::Contains(T)
#define HashSet_1_Contains_m29576(__this, ___item, method) (( bool (*) (HashSet_1_t453 *, GameObject_t49 *, const MethodInfo*))HashSet_1_Contains_m27953_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::Remove(T)
#define HashSet_1_Remove_m29577(__this, ___item, method) (( bool (*) (HashSet_1_t453 *, GameObject_t49 *, const MethodInfo*))HashSet_1_Remove_m27954_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1_GetObjectData_m29578(__this, ___info, ___context, method) (( void (*) (HashSet_1_t453 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))HashSet_1_GetObjectData_m27955_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::OnDeserialization(System.Object)
#define HashSet_1_OnDeserialization_m29579(__this, ___sender, method) (( void (*) (HashSet_1_t453 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m27956_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::GetEnumerator()
#define HashSet_1_GetEnumerator_m3208(__this, method) (( Enumerator_t683  (*) (HashSet_1_t453 *, const MethodInfo*))HashSet_1_GetEnumerator_m27957_gshared)(__this, method)
