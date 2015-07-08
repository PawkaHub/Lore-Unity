#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Double>
struct Dictionary_2_t8136;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1800;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t10474;
// System.Collections.ICollection
struct ICollection_t749;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Double>
struct KeyCollection_t8138;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>
struct ValueCollection_t8139;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t6192;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t8084;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8903;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t8333;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t4200;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__46.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_62MethodDeclarations.h"
#define Dictionary_2__ctor_m51819(__this, method) (( void (*) (Dictionary_2_t8136 *, const MethodInfo*))Dictionary_2__ctor_m51820_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m51821(__this, ___comparer, method) (( void (*) (Dictionary_2_t8136 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m51822_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m51823(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8136 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m51824_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Int32)
#define Dictionary_2__ctor_m51825(__this, ___capacity, method) (( void (*) (Dictionary_2_t8136 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m51826_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m51827(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8136 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m51828_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m51829(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8136 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2__ctor_m51830_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m51831(__this, method) (( Object_t* (*) (Dictionary_2_t8136 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m51832_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m51833(__this, method) (( Object_t* (*) (Dictionary_2_t8136 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m51834_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m51835(__this, method) (( Object_t * (*) (Dictionary_2_t8136 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m51836_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m51837(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8136 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m51838_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m51839(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8136 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m51840_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m51841(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8136 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m51842_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m51843(__this, ___key, method) (( bool (*) (Dictionary_2_t8136 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m51844_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m51845(__this, ___key, method) (( void (*) (Dictionary_2_t8136 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m51846_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m51847(__this, method) (( bool (*) (Dictionary_2_t8136 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m51848_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m51849(__this, method) (( Object_t * (*) (Dictionary_2_t8136 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m51850_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m51851(__this, method) (( bool (*) (Dictionary_2_t8136 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m51852_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m51853(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8136 *, KeyValuePair_2_t8137 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m51854_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m51855(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8136 *, KeyValuePair_2_t8137 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m51856_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m51857(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8136 *, KeyValuePair_2U5BU5D_t8903*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m51858_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m51859(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8136 *, KeyValuePair_2_t8137 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m51860_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m51861(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8136 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m51862_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m51863(__this, method) (( Object_t * (*) (Dictionary_2_t8136 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m51864_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m51865(__this, method) (( Object_t* (*) (Dictionary_2_t8136 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m51866_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m51867(__this, method) (( Object_t * (*) (Dictionary_2_t8136 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m51868_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Count()
#define Dictionary_2_get_Count_m51869(__this, method) (( int32_t (*) (Dictionary_2_t8136 *, const MethodInfo*))Dictionary_2_get_Count_m51870_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Item(TKey)
#define Dictionary_2_get_Item_m51871(__this, ___key, method) (( double (*) (Dictionary_2_t8136 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m51872_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m51873(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8136 *, String_t*, double, const MethodInfo*))Dictionary_2_set_Item_m51874_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m51875(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8136 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m51876_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m51877(__this, ___size, method) (( void (*) (Dictionary_2_t8136 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m51878_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m51879(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8136 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m51880_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m51881(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8137  (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_make_pair_m51882_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Double>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m51883(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_pick_key_m51884_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Double>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m51885(__this /* static, unused */, ___key, ___value, method) (( double (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_pick_value_m51886_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m51887(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8136 *, KeyValuePair_2U5BU5D_t8903*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m51888_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Resize()
#define Dictionary_2_Resize_m51889(__this, method) (( void (*) (Dictionary_2_t8136 *, const MethodInfo*))Dictionary_2_Resize_m51890_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Add(TKey,TValue)
#define Dictionary_2_Add_m51891(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8136 *, String_t*, double, const MethodInfo*))Dictionary_2_Add_m51892_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Clear()
#define Dictionary_2_Clear_m51893(__this, method) (( void (*) (Dictionary_2_t8136 *, const MethodInfo*))Dictionary_2_Clear_m51894_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m51895(__this, ___key, method) (( bool (*) (Dictionary_2_t8136 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m51896_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m51897(__this, ___value, method) (( bool (*) (Dictionary_2_t8136 *, double, const MethodInfo*))Dictionary_2_ContainsValue_m51898_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m51899(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8136 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2_GetObjectData_m51900_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m51901(__this, ___sender, method) (( void (*) (Dictionary_2_t8136 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m51902_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::Remove(TKey)
#define Dictionary_2_Remove_m51903(__this, ___key, method) (( bool (*) (Dictionary_2_t8136 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m51904_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m51905(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8136 *, String_t*, double*, const MethodInfo*))Dictionary_2_TryGetValue_m51906_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Keys()
#define Dictionary_2_get_Keys_m51907(__this, method) (( KeyCollection_t8138 * (*) (Dictionary_2_t8136 *, const MethodInfo*))Dictionary_2_get_Keys_m51908_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Values()
#define Dictionary_2_get_Values_m51909(__this, method) (( ValueCollection_t8139 * (*) (Dictionary_2_t8136 *, const MethodInfo*))Dictionary_2_get_Values_m51910_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Double>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m51911(__this, ___key, method) (( String_t* (*) (Dictionary_2_t8136 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m51912_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Double>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m51913(__this, ___value, method) (( double (*) (Dictionary_2_t8136 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m51914_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m51915(__this, ___pair, method) (( bool (*) (Dictionary_2_t8136 *, KeyValuePair_2_t8137 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m51916_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m51917(__this, method) (( Enumerator_t8140  (*) (Dictionary_2_t8136 *, const MethodInfo*))Dictionary_2_GetEnumerator_m51918_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Double>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m51919(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m51920_gshared)(__this /* static, unused */, ___key, ___value, method)
