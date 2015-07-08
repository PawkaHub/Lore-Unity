#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>
struct Dictionary_2_t456;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9885;
// System.Collections.Generic.ICollection`1<System.Object[]>
struct ICollection_1_t10076;
// System.Collections.ICollection
struct ICollection_t749;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object[]>
struct KeyCollection_t6660;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object[]>
struct ValueCollection_t6661;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t6585;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object[]>
struct IDictionary_2_t10077;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object[]>[]
struct KeyValuePair_2U5BU5D_t10078;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object[]>>
struct IEnumerator_1_t10079;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t4200;
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
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_46MethodDeclarations.h"
#define Dictionary_2__ctor_m3426(__this, method) (( void (*) (Dictionary_2_t456 *, const MethodInfo*))Dictionary_2__ctor_m18057_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m30927(__this, ___comparer, method) (( void (*) (Dictionary_2_t456 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m29695_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m30928(__this, ___dictionary, method) (( void (*) (Dictionary_2_t456 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m29697_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::.ctor(System.Int32)
#define Dictionary_2__ctor_m30929(__this, ___capacity, method) (( void (*) (Dictionary_2_t456 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m29699_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m30930(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t456 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m29701_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m30931(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t456 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2__ctor_m29703_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m30932(__this, method) (( Object_t* (*) (Dictionary_2_t456 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m29705_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m30933(__this, method) (( Object_t* (*) (Dictionary_2_t456 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m29707_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m30934(__this, method) (( Object_t * (*) (Dictionary_2_t456 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m29709_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m30935(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t456 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m29711_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m30936(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t456 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m29713_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m30937(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t456 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m29715_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m30938(__this, ___key, method) (( bool (*) (Dictionary_2_t456 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m29717_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m30939(__this, ___key, method) (( void (*) (Dictionary_2_t456 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m29719_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m30940(__this, method) (( bool (*) (Dictionary_2_t456 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m29721_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m30941(__this, method) (( Object_t * (*) (Dictionary_2_t456 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m29723_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m30942(__this, method) (( bool (*) (Dictionary_2_t456 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m29725_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m30943(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t456 *, KeyValuePair_2_t6659 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m29727_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m30944(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t456 *, KeyValuePair_2_t6659 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m29729_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m30945(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t456 *, KeyValuePair_2U5BU5D_t10078*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m29731_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m30946(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t456 *, KeyValuePair_2_t6659 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m29733_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m30947(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t456 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m29735_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m30948(__this, method) (( Object_t * (*) (Dictionary_2_t456 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m29737_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m30949(__this, method) (( Object_t* (*) (Dictionary_2_t456 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m29739_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m30950(__this, method) (( Object_t * (*) (Dictionary_2_t456 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m29741_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::get_Count()
#define Dictionary_2_get_Count_m30951(__this, method) (( int32_t (*) (Dictionary_2_t456 *, const MethodInfo*))Dictionary_2_get_Count_m29743_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::get_Item(TKey)
#define Dictionary_2_get_Item_m30952(__this, ___key, method) (( ObjectU5BU5D_t21* (*) (Dictionary_2_t456 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m29745_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m30953(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t456 *, int32_t, ObjectU5BU5D_t21*, const MethodInfo*))Dictionary_2_set_Item_m29747_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m30954(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t456 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m29749_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m30955(__this, ___size, method) (( void (*) (Dictionary_2_t456 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m29751_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m30956(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t456 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m29753_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m30957(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6659  (*) (Object_t * /* static, unused */, int32_t, ObjectU5BU5D_t21*, const MethodInfo*))Dictionary_2_make_pair_m29755_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m30958(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, ObjectU5BU5D_t21*, const MethodInfo*))Dictionary_2_pick_key_m29757_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m30959(__this /* static, unused */, ___key, ___value, method) (( ObjectU5BU5D_t21* (*) (Object_t * /* static, unused */, int32_t, ObjectU5BU5D_t21*, const MethodInfo*))Dictionary_2_pick_value_m29759_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m30960(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t456 *, KeyValuePair_2U5BU5D_t10078*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m29761_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::Resize()
#define Dictionary_2_Resize_m30961(__this, method) (( void (*) (Dictionary_2_t456 *, const MethodInfo*))Dictionary_2_Resize_m29763_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::Add(TKey,TValue)
#define Dictionary_2_Add_m30962(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t456 *, int32_t, ObjectU5BU5D_t21*, const MethodInfo*))Dictionary_2_Add_m29765_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::Clear()
#define Dictionary_2_Clear_m30963(__this, method) (( void (*) (Dictionary_2_t456 *, const MethodInfo*))Dictionary_2_Clear_m29767_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m30964(__this, ___key, method) (( bool (*) (Dictionary_2_t456 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m29769_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m30965(__this, ___value, method) (( bool (*) (Dictionary_2_t456 *, ObjectU5BU5D_t21*, const MethodInfo*))Dictionary_2_ContainsValue_m29771_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m30966(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t456 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2_GetObjectData_m29773_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m30967(__this, ___sender, method) (( void (*) (Dictionary_2_t456 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m29775_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::Remove(TKey)
#define Dictionary_2_Remove_m30968(__this, ___key, method) (( bool (*) (Dictionary_2_t456 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m29777_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m30969(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t456 *, int32_t, ObjectU5BU5D_t21**, const MethodInfo*))Dictionary_2_TryGetValue_m29779_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::get_Keys()
#define Dictionary_2_get_Keys_m30970(__this, method) (( KeyCollection_t6660 * (*) (Dictionary_2_t456 *, const MethodInfo*))Dictionary_2_get_Keys_m29780_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::get_Values()
#define Dictionary_2_get_Values_m30971(__this, method) (( ValueCollection_t6661 * (*) (Dictionary_2_t456 *, const MethodInfo*))Dictionary_2_get_Values_m29781_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m30972(__this, ___key, method) (( int32_t (*) (Dictionary_2_t456 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m29783_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m30973(__this, ___value, method) (( ObjectU5BU5D_t21* (*) (Dictionary_2_t456 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m29785_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m30974(__this, ___pair, method) (( bool (*) (Dictionary_2_t456 *, KeyValuePair_2_t6659 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m29787_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m30975(__this, method) (( Enumerator_t6662  (*) (Dictionary_2_t456 *, const MethodInfo*))Dictionary_2_GetEnumerator_m29789_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m30976(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Object_t * /* static, unused */, int32_t, ObjectU5BU5D_t21*, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m29791_gshared)(__this /* static, unused */, ___key, ___value, method)
