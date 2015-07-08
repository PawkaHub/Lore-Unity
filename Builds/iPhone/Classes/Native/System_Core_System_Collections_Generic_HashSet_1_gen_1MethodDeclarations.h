#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t481;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.GameObject>
struct IEqualityComparer_1_t6665;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t1711;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>
struct IEnumerator_1_t9967;
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
#define HashSet_1__ctor_m3431(__this, method) (( void (*) (HashSet_1_t481 *, const MethodInfo*))HashSet_1__ctor_m28839_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m31029(__this, ___comparer, method) (( void (*) (HashSet_1_t481 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m9067_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define HashSet_1__ctor_m31030(__this, ___collection, method) (( void (*) (HashSet_1_t481 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m28841_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m31031(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t481 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m28843_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1__ctor_m31032(__this, ___info, ___context, method) (( void (*) (HashSet_1_t481 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))HashSet_1__ctor_m28845_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31033(__this, method) (( Object_t* (*) (HashSet_1_t481 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28847_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31034(__this, method) (( bool (*) (HashSet_1_t481 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28849_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m31035(__this, ___array, ___index, method) (( void (*) (HashSet_1_t481 *, GameObjectU5BU5D_t60*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m28851_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Add(T)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m31036(__this, ___item, method) (( void (*) (HashSet_1_t481 *, GameObject_t49 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m28853_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m31037(__this, method) (( Object_t * (*) (HashSet_1_t481 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m28855_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::get_Count()
#define HashSet_1_get_Count_m31038(__this, method) (( int32_t (*) (HashSet_1_t481 *, const MethodInfo*))HashSet_1_get_Count_m28857_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1_Init_m31039(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t481 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m28859_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::InitArrays(System.Int32)
#define HashSet_1_InitArrays_m31040(__this, ___size, method) (( void (*) (HashSet_1_t481 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m28861_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::SlotsContainsAt(System.Int32,System.Int32,T)
#define HashSet_1_SlotsContainsAt_m31041(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t481 *, int32_t, int32_t, GameObject_t49 *, const MethodInfo*))HashSet_1_SlotsContainsAt_m28863_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::CopyTo(T[])
#define HashSet_1_CopyTo_m31042(__this, ___array, method) (( void (*) (HashSet_1_t481 *, GameObjectU5BU5D_t60*, const MethodInfo*))HashSet_1_CopyTo_m28865_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
#define HashSet_1_CopyTo_m31043(__this, ___array, ___index, method) (( void (*) (HashSet_1_t481 *, GameObjectU5BU5D_t60*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m28867_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32,System.Int32)
#define HashSet_1_CopyTo_m31044(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t481 *, GameObjectU5BU5D_t60*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m28869_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::Resize()
#define HashSet_1_Resize_m31045(__this, method) (( void (*) (HashSet_1_t481 *, const MethodInfo*))HashSet_1_Resize_m28871_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::GetLinkHashCode(System.Int32)
#define HashSet_1_GetLinkHashCode_m31046(__this, ___index, method) (( int32_t (*) (HashSet_1_t481 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m28873_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::GetItemHashCode(T)
#define HashSet_1_GetItemHashCode_m31047(__this, ___item, method) (( int32_t (*) (HashSet_1_t481 *, GameObject_t49 *, const MethodInfo*))HashSet_1_GetItemHashCode_m28875_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::Add(T)
#define HashSet_1_Add_m3435(__this, ___item, method) (( bool (*) (HashSet_1_t481 *, GameObject_t49 *, const MethodInfo*))HashSet_1_Add_m28876_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::Clear()
#define HashSet_1_Clear_m31048(__this, method) (( void (*) (HashSet_1_t481 *, const MethodInfo*))HashSet_1_Clear_m28878_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::Contains(T)
#define HashSet_1_Contains_m31049(__this, ___item, method) (( bool (*) (HashSet_1_t481 *, GameObject_t49 *, const MethodInfo*))HashSet_1_Contains_m28880_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::Remove(T)
#define HashSet_1_Remove_m31050(__this, ___item, method) (( bool (*) (HashSet_1_t481 *, GameObject_t49 *, const MethodInfo*))HashSet_1_Remove_m28882_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1_GetObjectData_m31051(__this, ___info, ___context, method) (( void (*) (HashSet_1_t481 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))HashSet_1_GetObjectData_m28884_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::OnDeserialization(System.Object)
#define HashSet_1_OnDeserialization_m31052(__this, ___sender, method) (( void (*) (HashSet_1_t481 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m28886_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::GetEnumerator()
#define HashSet_1_GetEnumerator_m3437(__this, method) (( Enumerator_t752  (*) (HashSet_1_t481 *, const MethodInfo*))HashSet_1_GetEnumerator_m28888_gshared)(__this, method)
