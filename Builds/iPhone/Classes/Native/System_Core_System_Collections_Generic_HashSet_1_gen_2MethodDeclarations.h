#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>
struct HashSet_1_t762;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.AssetBundle>
struct IEqualityComparer_1_t5336;
// System.Collections.Generic.IEnumerable`1<UnityEngine.AssetBundle>
struct IEnumerable_1_t6658;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.IEnumerator`1<UnityEngine.AssetBundle>
struct IEnumerator_1_t6659;
// UnityEngine.AssetBundle[]
struct AssetBundleU5BU5D_t5335;
// UnityEngine.AssetBundle
struct AssetBundle_t1073;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.AssetBundle>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__1.h"

// System.Void System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::.ctor()
// System.Collections.Generic.HashSet`1<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_gen_4MethodDeclarations.h"
#define HashSet_1__ctor_m5257(__this, method) (( void (*) (HashSet_1_t762 *, const MethodInfo*))HashSet_1__ctor_m26493_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m29368(__this, ___comparer, method) (( void (*) (HashSet_1_t762 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m7432_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define HashSet_1__ctor_m29369(__this, ___collection, method) (( void (*) (HashSet_1_t762 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m26494_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m29370(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t762 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m26495_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1__ctor_m29371(__this, ___info, ___context, method) (( void (*) (HashSet_1_t762 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))HashSet_1__ctor_m26496_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29372(__this, method) (( Object_t* (*) (HashSet_1_t762 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26497_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29373(__this, method) (( bool (*) (HashSet_1_t762 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26498_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m29374(__this, ___array, ___index, method) (( void (*) (HashSet_1_t762 *, AssetBundleU5BU5D_t5335*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m26499_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::System.Collections.Generic.ICollection<T>.Add(T)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m29375(__this, ___item, method) (( void (*) (HashSet_1_t762 *, AssetBundle_t1073 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m26500_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::System.Collections.IEnumerable.GetEnumerator()
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m29376(__this, method) (( Object_t * (*) (HashSet_1_t762 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m26501_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::get_Count()
#define HashSet_1_get_Count_m29377(__this, method) (( int32_t (*) (HashSet_1_t762 *, const MethodInfo*))HashSet_1_get_Count_m26502_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1_Init_m29378(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t762 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m26503_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::InitArrays(System.Int32)
#define HashSet_1_InitArrays_m29379(__this, ___size, method) (( void (*) (HashSet_1_t762 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m26504_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::SlotsContainsAt(System.Int32,System.Int32,T)
#define HashSet_1_SlotsContainsAt_m29380(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t762 *, int32_t, int32_t, AssetBundle_t1073 *, const MethodInfo*))HashSet_1_SlotsContainsAt_m26505_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::CopyTo(T[])
#define HashSet_1_CopyTo_m29381(__this, ___array, method) (( void (*) (HashSet_1_t762 *, AssetBundleU5BU5D_t5335*, const MethodInfo*))HashSet_1_CopyTo_m26506_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::CopyTo(T[],System.Int32)
#define HashSet_1_CopyTo_m29382(__this, ___array, ___index, method) (( void (*) (HashSet_1_t762 *, AssetBundleU5BU5D_t5335*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m26507_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::CopyTo(T[],System.Int32,System.Int32)
#define HashSet_1_CopyTo_m29383(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t762 *, AssetBundleU5BU5D_t5335*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m26508_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::Resize()
#define HashSet_1_Resize_m29384(__this, method) (( void (*) (HashSet_1_t762 *, const MethodInfo*))HashSet_1_Resize_m26509_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::GetLinkHashCode(System.Int32)
#define HashSet_1_GetLinkHashCode_m29385(__this, ___index, method) (( int32_t (*) (HashSet_1_t762 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m26510_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::GetItemHashCode(T)
#define HashSet_1_GetItemHashCode_m29386(__this, ___item, method) (( int32_t (*) (HashSet_1_t762 *, AssetBundle_t1073 *, const MethodInfo*))HashSet_1_GetItemHashCode_m26511_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::Add(T)
#define HashSet_1_Add_m5258(__this, ___item, method) (( bool (*) (HashSet_1_t762 *, AssetBundle_t1073 *, const MethodInfo*))HashSet_1_Add_m26512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::Clear()
#define HashSet_1_Clear_m29387(__this, method) (( void (*) (HashSet_1_t762 *, const MethodInfo*))HashSet_1_Clear_m26513_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::Contains(T)
#define HashSet_1_Contains_m29388(__this, ___item, method) (( bool (*) (HashSet_1_t762 *, AssetBundle_t1073 *, const MethodInfo*))HashSet_1_Contains_m26514_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::Remove(T)
#define HashSet_1_Remove_m29389(__this, ___item, method) (( bool (*) (HashSet_1_t762 *, AssetBundle_t1073 *, const MethodInfo*))HashSet_1_Remove_m26515_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1_GetObjectData_m29390(__this, ___info, ___context, method) (( void (*) (HashSet_1_t762 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))HashSet_1_GetObjectData_m26516_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::OnDeserialization(System.Object)
#define HashSet_1_OnDeserialization_m29391(__this, ___sender, method) (( void (*) (HashSet_1_t762 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m26517_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<UnityEngine.AssetBundle>::GetEnumerator()
#define HashSet_1_GetEnumerator_m5259(__this, method) (( Enumerator_t1087  (*) (HashSet_1_t762 *, const MethodInfo*))HashSet_1_GetEnumerator_m26518_gshared)(__this, method)
