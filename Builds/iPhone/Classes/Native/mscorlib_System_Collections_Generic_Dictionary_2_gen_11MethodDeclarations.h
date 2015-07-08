#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t449;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1800;
// System.Collections.Generic.ICollection`1<UnityEngine.GameObject>
struct ICollection_1_t9968;
// System.Collections.ICollection
struct ICollection_t749;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t49;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GameObject>
struct KeyCollection_t6621;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GameObject>
struct ValueCollection_t6622;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t6192;
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.GameObject>
struct IDictionary_2_t10049;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>[]
struct KeyValuePair_2U5BU5D_t10050;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>>
struct IEnumerator_1_t10051;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t4200;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
#define Dictionary_2__ctor_m3430(__this, method) (( void (*) (Dictionary_2_t449 *, const MethodInfo*))Dictionary_2__ctor_m18655_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m30249(__this, ___comparer, method) (( void (*) (Dictionary_2_t449 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24553_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m30250(__this, ___dictionary, method) (( void (*) (Dictionary_2_t449 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24555_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor(System.Int32)
#define Dictionary_2__ctor_m30251(__this, ___capacity, method) (( void (*) (Dictionary_2_t449 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18656_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m30252(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t449 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24558_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m30253(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t449 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2__ctor_m24560_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m30254(__this, method) (( Object_t* (*) (Dictionary_2_t449 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18757_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m30255(__this, method) (( Object_t* (*) (Dictionary_2_t449 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18758_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m30256(__this, method) (( Object_t * (*) (Dictionary_2_t449 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m18761_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m30257(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t449 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18759_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m30258(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t449 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18760_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m30259(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t449 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18762_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m30260(__this, ___key, method) (( bool (*) (Dictionary_2_t449 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18763_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m30261(__this, ___key, method) (( void (*) (Dictionary_2_t449 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18765_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m30262(__this, method) (( bool (*) (Dictionary_2_t449 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18743_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m30263(__this, method) (( Object_t * (*) (Dictionary_2_t449 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18744_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m30264(__this, method) (( bool (*) (Dictionary_2_t449 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18746_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m30265(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t449 *, KeyValuePair_2_t6620 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18747_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m30266(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t449 *, KeyValuePair_2_t6620 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18749_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m30267(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t449 *, KeyValuePair_2U5BU5D_t10050*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18750_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m30268(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t449 *, KeyValuePair_2_t6620 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18751_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m30269(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t449 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18745_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m30270(__this, method) (( Object_t * (*) (Dictionary_2_t449 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18740_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m30271(__this, method) (( Object_t* (*) (Dictionary_2_t449 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18752_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m30272(__this, method) (( Object_t * (*) (Dictionary_2_t449 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18764_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Count()
#define Dictionary_2_get_Count_m30273(__this, method) (( int32_t (*) (Dictionary_2_t449 *, const MethodInfo*))Dictionary_2_get_Count_m18742_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Item(TKey)
#define Dictionary_2_get_Item_m30274(__this, ___key, method) (( GameObject_t49 * (*) (Dictionary_2_t449 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m18756_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m30275(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t449 *, String_t*, GameObject_t49 *, const MethodInfo*))Dictionary_2_set_Item_m18658_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m30276(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t449 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m24584_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m30277(__this, ___size, method) (( void (*) (Dictionary_2_t449 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m24586_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m30278(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t449 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m24588_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m30279(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6620  (*) (Object_t * /* static, unused */, String_t*, GameObject_t49 *, const MethodInfo*))Dictionary_2_make_pair_m24590_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m30280(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, GameObject_t49 *, const MethodInfo*))Dictionary_2_pick_key_m24592_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m30281(__this /* static, unused */, ___key, ___value, method) (( GameObject_t49 * (*) (Object_t * /* static, unused */, String_t*, GameObject_t49 *, const MethodInfo*))Dictionary_2_pick_value_m24594_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m30282(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t449 *, KeyValuePair_2U5BU5D_t10050*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m24596_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Resize()
#define Dictionary_2_Resize_m30283(__this, method) (( void (*) (Dictionary_2_t449 *, const MethodInfo*))Dictionary_2_Resize_m24598_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Add(TKey,TValue)
#define Dictionary_2_Add_m30284(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t449 *, String_t*, GameObject_t49 *, const MethodInfo*))Dictionary_2_Add_m18753_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Clear()
#define Dictionary_2_Clear_m30285(__this, method) (( void (*) (Dictionary_2_t449 *, const MethodInfo*))Dictionary_2_Clear_m18748_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m30286(__this, ___key, method) (( bool (*) (Dictionary_2_t449 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m18754_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m30287(__this, ___value, method) (( bool (*) (Dictionary_2_t449 *, GameObject_t49 *, const MethodInfo*))Dictionary_2_ContainsValue_m24603_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m30288(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t449 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2_GetObjectData_m18741_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m30289(__this, ___sender, method) (( void (*) (Dictionary_2_t449 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18766_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Remove(TKey)
#define Dictionary_2_Remove_m30290(__this, ___key, method) (( bool (*) (Dictionary_2_t449 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m18755_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m30291(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t449 *, String_t*, GameObject_t49 **, const MethodInfo*))Dictionary_2_TryGetValue_m18657_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Keys()
#define Dictionary_2_get_Keys_m30292(__this, method) (( KeyCollection_t6621 * (*) (Dictionary_2_t449 *, const MethodInfo*))Dictionary_2_get_Keys_m3440_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Values()
#define Dictionary_2_get_Values_m30293(__this, method) (( ValueCollection_t6622 * (*) (Dictionary_2_t449 *, const MethodInfo*))Dictionary_2_get_Values_m24609_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m30294(__this, ___key, method) (( String_t* (*) (Dictionary_2_t449 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m24611_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m30295(__this, ___value, method) (( GameObject_t49 * (*) (Dictionary_2_t449 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m24613_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m30296(__this, ___pair, method) (( bool (*) (Dictionary_2_t449 *, KeyValuePair_2_t6620 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m24615_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m30297(__this, method) (( Enumerator_t6623  (*) (Dictionary_2_t449 *, const MethodInfo*))Dictionary_2_GetEnumerator_m24617_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m30298(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Object_t * /* static, unused */, String_t*, GameObject_t49 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m24619_gshared)(__this /* static, unused */, ___key, ___value, method)
