#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>
struct Dictionary_2_t428;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t6431;
// System.Collections.Generic.ICollection`1<System.Object[]>
struct ICollection_1_t6610;
// System.Collections.ICollection
struct ICollection_t661;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object[]>
struct KeyCollection_t5244;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object[]>
struct ValueCollection_t5245;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5169;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object[]>
struct IDictionary_2_t6611;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object[]>[]
struct KeyValuePair_2U5BU5D_t6612;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object[]>>
struct IEnumerator_1_t6613;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3115;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object[]>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object[]>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_43MethodDeclarations.h"
#define Dictionary_2__ctor_m3110(__this, method) (( void (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2__ctor_m13766_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m27975(__this, ___comparer, method) (( void (*) (Dictionary_2_t428 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26774_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m27976(__this, ___dictionary, method) (( void (*) (Dictionary_2_t428 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26776_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::.ctor(System.Int32)
#define Dictionary_2__ctor_m27977(__this, ___capacity, method) (( void (*) (Dictionary_2_t428 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m26778_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m27978(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t428 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26780_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m27979(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t428 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2__ctor_m26782_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27980(__this, method) (( Object_t* (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26784_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27981(__this, method) (( Object_t* (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26786_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m27982(__this, method) (( Object_t * (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m26788_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m27983(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t428 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m26790_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m27984(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t428 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m26792_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m27985(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t428 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m26794_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m27986(__this, ___key, method) (( bool (*) (Dictionary_2_t428 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m26796_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m27987(__this, ___key, method) (( void (*) (Dictionary_2_t428 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m26798_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27988(__this, method) (( bool (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26800_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27989(__this, method) (( Object_t * (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26802_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27990(__this, method) (( bool (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26804_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27991(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t428 *, KeyValuePair_2_t5243 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26806_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27992(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t428 *, KeyValuePair_2_t5243 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26808_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27993(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t428 *, KeyValuePair_2U5BU5D_t6612*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26810_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27994(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t428 *, KeyValuePair_2_t5243 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26812_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m27995(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t428 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m26814_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27996(__this, method) (( Object_t * (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26816_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27997(__this, method) (( Object_t* (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26818_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27998(__this, method) (( Object_t * (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26820_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::get_Count()
#define Dictionary_2_get_Count_m27999(__this, method) (( int32_t (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_get_Count_m26822_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::get_Item(TKey)
#define Dictionary_2_get_Item_m28000(__this, ___key, method) (( ObjectU5BU5D_t21* (*) (Dictionary_2_t428 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m26824_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m28001(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t428 *, int32_t, ObjectU5BU5D_t21*, const MethodInfo*))Dictionary_2_set_Item_m26826_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m28002(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t428 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m26828_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m28003(__this, ___size, method) (( void (*) (Dictionary_2_t428 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m26830_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m28004(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t428 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m26832_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m28005(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5243  (*) (Object_t * /* static, unused */, int32_t, ObjectU5BU5D_t21*, const MethodInfo*))Dictionary_2_make_pair_m26834_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m28006(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, ObjectU5BU5D_t21*, const MethodInfo*))Dictionary_2_pick_key_m26836_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m28007(__this /* static, unused */, ___key, ___value, method) (( ObjectU5BU5D_t21* (*) (Object_t * /* static, unused */, int32_t, ObjectU5BU5D_t21*, const MethodInfo*))Dictionary_2_pick_value_m26838_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m28008(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t428 *, KeyValuePair_2U5BU5D_t6612*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m26840_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::Resize()
#define Dictionary_2_Resize_m28009(__this, method) (( void (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_Resize_m26842_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::Add(TKey,TValue)
#define Dictionary_2_Add_m28010(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t428 *, int32_t, ObjectU5BU5D_t21*, const MethodInfo*))Dictionary_2_Add_m26844_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::Clear()
#define Dictionary_2_Clear_m28011(__this, method) (( void (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_Clear_m26846_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m28012(__this, ___key, method) (( bool (*) (Dictionary_2_t428 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m26848_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m28013(__this, ___value, method) (( bool (*) (Dictionary_2_t428 *, ObjectU5BU5D_t21*, const MethodInfo*))Dictionary_2_ContainsValue_m26850_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m28014(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t428 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2_GetObjectData_m26852_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m28015(__this, ___sender, method) (( void (*) (Dictionary_2_t428 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m26854_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::Remove(TKey)
#define Dictionary_2_Remove_m28016(__this, ___key, method) (( bool (*) (Dictionary_2_t428 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m26856_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m28017(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t428 *, int32_t, ObjectU5BU5D_t21**, const MethodInfo*))Dictionary_2_TryGetValue_m26858_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::get_Keys()
#define Dictionary_2_get_Keys_m28018(__this, method) (( KeyCollection_t5244 * (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_get_Keys_m26859_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::get_Values()
#define Dictionary_2_get_Values_m28019(__this, method) (( ValueCollection_t5245 * (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_get_Values_m26860_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m28020(__this, ___key, method) (( int32_t (*) (Dictionary_2_t428 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m26862_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m28021(__this, ___value, method) (( ObjectU5BU5D_t21* (*) (Dictionary_2_t428 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m26864_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m28022(__this, ___pair, method) (( bool (*) (Dictionary_2_t428 *, KeyValuePair_2_t5243 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m26866_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m28023(__this, method) (( Enumerator_t5246  (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_GetEnumerator_m26868_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m28024(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Object_t * /* static, unused */, int32_t, ObjectU5BU5D_t21*, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m26870_gshared)(__this /* static, unused */, ___key, ___value, method)
