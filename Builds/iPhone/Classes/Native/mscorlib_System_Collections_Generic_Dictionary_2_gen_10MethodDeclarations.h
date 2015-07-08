#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t455;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1800;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9885;
// System.Collections.ICollection
struct ICollection_t749;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_t6654;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t6655;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t6192;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t8076;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8630;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t8290;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t4200;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__18.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_52MethodDeclarations.h"
#define Dictionary_2__ctor_m11372(__this, method) (( void (*) (Dictionary_2_t455 *, const MethodInfo*))Dictionary_2__ctor_m30686_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m30687(__this, ___comparer, method) (( void (*) (Dictionary_2_t455 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m30688_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m30689(__this, ___dictionary, method) (( void (*) (Dictionary_2_t455 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m30690_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
#define Dictionary_2__ctor_m3429(__this, ___capacity, method) (( void (*) (Dictionary_2_t455 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m30691_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m30692(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t455 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m30693_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m30694(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t455 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2__ctor_m30695_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m30696(__this, method) (( Object_t* (*) (Dictionary_2_t455 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m30697_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m30698(__this, method) (( Object_t* (*) (Dictionary_2_t455 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m30699_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m30700(__this, method) (( Object_t * (*) (Dictionary_2_t455 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m30701_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m30702(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t455 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m30703_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m30704(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t455 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m30705_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m30706(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t455 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m30707_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m30708(__this, ___key, method) (( bool (*) (Dictionary_2_t455 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m30709_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m30710(__this, ___key, method) (( void (*) (Dictionary_2_t455 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m30711_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m30712(__this, method) (( bool (*) (Dictionary_2_t455 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m30713_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m30714(__this, method) (( Object_t * (*) (Dictionary_2_t455 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m30715_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m30716(__this, method) (( bool (*) (Dictionary_2_t455 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m30717_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m30718(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t455 *, KeyValuePair_2_t6653 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m30719_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m30720(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t455 *, KeyValuePair_2_t6653 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m30721_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m30722(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t455 *, KeyValuePair_2U5BU5D_t8630*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m30723_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m30724(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t455 *, KeyValuePair_2_t6653 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m30725_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m30726(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t455 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m30727_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m30728(__this, method) (( Object_t * (*) (Dictionary_2_t455 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m30729_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m30730(__this, method) (( Object_t* (*) (Dictionary_2_t455 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m30731_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m30732(__this, method) (( Object_t * (*) (Dictionary_2_t455 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m30733_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Count()
#define Dictionary_2_get_Count_m30734(__this, method) (( int32_t (*) (Dictionary_2_t455 *, const MethodInfo*))Dictionary_2_get_Count_m30735_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(TKey)
#define Dictionary_2_get_Item_m30736(__this, ___key, method) (( int32_t (*) (Dictionary_2_t455 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m30737_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m30738(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t455 *, String_t*, int32_t, const MethodInfo*))Dictionary_2_set_Item_m30739_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m30740(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t455 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m30741_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m30742(__this, ___size, method) (( void (*) (Dictionary_2_t455 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m30743_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m30744(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t455 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m30745_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m30746(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6653  (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_make_pair_m30747_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int32>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m30748(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_pick_key_m30749_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m30750(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_pick_value_m30751_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m30752(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t455 *, KeyValuePair_2U5BU5D_t8630*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m30753_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Resize()
#define Dictionary_2_Resize_m30754(__this, method) (( void (*) (Dictionary_2_t455 *, const MethodInfo*))Dictionary_2_Resize_m30755_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue)
#define Dictionary_2_Add_m30756(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t455 *, String_t*, int32_t, const MethodInfo*))Dictionary_2_Add_m30757_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Clear()
#define Dictionary_2_Clear_m30758(__this, method) (( void (*) (Dictionary_2_t455 *, const MethodInfo*))Dictionary_2_Clear_m30759_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m30760(__this, ___key, method) (( bool (*) (Dictionary_2_t455 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m30761_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m30762(__this, ___value, method) (( bool (*) (Dictionary_2_t455 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m30763_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m30764(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t455 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2_GetObjectData_m30765_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m30766(__this, ___sender, method) (( void (*) (Dictionary_2_t455 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m30767_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Remove(TKey)
#define Dictionary_2_Remove_m30768(__this, ___key, method) (( bool (*) (Dictionary_2_t455 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m30769_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m30770(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t455 *, String_t*, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m30771_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Keys()
#define Dictionary_2_get_Keys_m30772(__this, method) (( KeyCollection_t6654 * (*) (Dictionary_2_t455 *, const MethodInfo*))Dictionary_2_get_Keys_m30773_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Values()
#define Dictionary_2_get_Values_m30774(__this, method) (( ValueCollection_t6655 * (*) (Dictionary_2_t455 *, const MethodInfo*))Dictionary_2_get_Values_m30775_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m30776(__this, ___key, method) (( String_t* (*) (Dictionary_2_t455 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m30777_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m30778(__this, ___value, method) (( int32_t (*) (Dictionary_2_t455 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m30779_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m30780(__this, ___pair, method) (( bool (*) (Dictionary_2_t455 *, KeyValuePair_2_t6653 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m30781_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m30782(__this, method) (( Enumerator_t6656  (*) (Dictionary_2_t455 *, const MethodInfo*))Dictionary_2_GetEnumerator_m30783_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Int32>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m30784(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m30785_gshared)(__this /* static, unused */, ___key, ___value, method)
