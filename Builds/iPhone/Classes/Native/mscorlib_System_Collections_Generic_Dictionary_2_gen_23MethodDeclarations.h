﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct Dictionary_2_t1632;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1420;
// System.Collections.Generic.ICollection`1<Parse.Internal.IParseFieldOperation>
struct ICollection_1_t6838;
// System.Collections.ICollection
struct ICollection_t661;
// System.Object
struct Object_t;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1546;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.Internal.IParseFieldOperation>
struct KeyCollection_t5720;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.Internal.IParseFieldOperation>
struct ValueCollection_t5721;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t4864;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct IDictionary_2_t1450;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>[]
struct KeyValuePair_2U5BU5D_t6839;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>>
struct IEnumerator_1_t1639;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3115;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Parse.Internal.IParseFieldOperation>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__34.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
#define Dictionary_2__ctor_m7517(__this, method) (( void (*) (Dictionary_2_t1632 *, const MethodInfo*))Dictionary_2__ctor_m14361_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m35002(__this, ___comparer, method) (( void (*) (Dictionary_2_t1632 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22789_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m35003(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1632 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22791_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor(System.Int32)
#define Dictionary_2__ctor_m35004(__this, ___capacity, method) (( void (*) (Dictionary_2_t1632 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14362_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m35005(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1632 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22794_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m35006(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1632 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2__ctor_m22796_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m35007(__this, method) (( Object_t* (*) (Dictionary_2_t1632 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14458_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m35008(__this, method) (( Object_t* (*) (Dictionary_2_t1632 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14459_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m35009(__this, method) (( Object_t * (*) (Dictionary_2_t1632 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m14462_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m35010(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1632 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14460_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m35011(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1632 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14461_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m35012(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1632 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14463_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m35013(__this, ___key, method) (( bool (*) (Dictionary_2_t1632 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14464_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m35014(__this, ___key, method) (( void (*) (Dictionary_2_t1632 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14466_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m35015(__this, method) (( bool (*) (Dictionary_2_t1632 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14444_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m35016(__this, method) (( Object_t * (*) (Dictionary_2_t1632 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14445_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m35017(__this, method) (( bool (*) (Dictionary_2_t1632 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14447_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m35018(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1632 *, KeyValuePair_2_t1636 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14448_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m35019(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1632 *, KeyValuePair_2_t1636 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14450_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m35020(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1632 *, KeyValuePair_2U5BU5D_t6839*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14451_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m35021(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1632 *, KeyValuePair_2_t1636 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14452_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m35022(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1632 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14446_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m35023(__this, method) (( Object_t * (*) (Dictionary_2_t1632 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14441_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m35024(__this, method) (( Object_t* (*) (Dictionary_2_t1632 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14453_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m35025(__this, method) (( Object_t * (*) (Dictionary_2_t1632 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14465_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::get_Count()
#define Dictionary_2_get_Count_m35026(__this, method) (( int32_t (*) (Dictionary_2_t1632 *, const MethodInfo*))Dictionary_2_get_Count_m14443_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::get_Item(TKey)
#define Dictionary_2_get_Item_m35027(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1632 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m14457_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m35028(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1632 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m14364_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m35029(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1632 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m22820_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m35030(__this, ___size, method) (( void (*) (Dictionary_2_t1632 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m22822_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m35031(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1632 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m22824_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m35032(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1636  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m22826_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m35033(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m22828_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m35034(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m22830_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m35035(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1632 *, KeyValuePair_2U5BU5D_t6839*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m22832_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::Resize()
#define Dictionary_2_Resize_m35036(__this, method) (( void (*) (Dictionary_2_t1632 *, const MethodInfo*))Dictionary_2_Resize_m22834_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::Add(TKey,TValue)
#define Dictionary_2_Add_m35037(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1632 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_Add_m14454_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::Clear()
#define Dictionary_2_Clear_m35038(__this, method) (( void (*) (Dictionary_2_t1632 *, const MethodInfo*))Dictionary_2_Clear_m14449_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m35039(__this, ___key, method) (( bool (*) (Dictionary_2_t1632 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m14455_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m35040(__this, ___value, method) (( bool (*) (Dictionary_2_t1632 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m22839_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m35041(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1632 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2_GetObjectData_m14442_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m35042(__this, ___sender, method) (( void (*) (Dictionary_2_t1632 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14467_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::Remove(TKey)
#define Dictionary_2_Remove_m35043(__this, ___key, method) (( bool (*) (Dictionary_2_t1632 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m14456_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m35044(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1632 *, String_t*, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m14363_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::get_Keys()
#define Dictionary_2_get_Keys_m35045(__this, method) (( KeyCollection_t5720 * (*) (Dictionary_2_t1632 *, const MethodInfo*))Dictionary_2_get_Keys_m3126_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::get_Values()
#define Dictionary_2_get_Values_m35046(__this, method) (( ValueCollection_t5721 * (*) (Dictionary_2_t1632 *, const MethodInfo*))Dictionary_2_get_Values_m22845_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m35047(__this, ___key, method) (( String_t* (*) (Dictionary_2_t1632 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m22847_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m35048(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1632 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m22849_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m35049(__this, ___pair, method) (( bool (*) (Dictionary_2_t1632 *, KeyValuePair_2_t1636 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m22851_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m35050(__this, method) (( Enumerator_t5722  (*) (Dictionary_2_t1632 *, const MethodInfo*))Dictionary_2_GetEnumerator_m22853_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m35051(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m22855_gshared)(__this /* static, unused */, ___key, ___value, method)