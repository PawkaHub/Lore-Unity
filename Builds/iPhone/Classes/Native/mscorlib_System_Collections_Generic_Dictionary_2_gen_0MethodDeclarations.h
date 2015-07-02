﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t28;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t6425;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1429;
// System.Collections.ICollection
struct ICollection_t661;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>
struct KeyCollection_t4914;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Object>
struct ValueCollection_t4917;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t4910;
// System.Collections.Generic.IDictionary`2<System.Byte,System.Object>
struct IDictionary_2_t6426;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>[]
struct KeyValuePair_2U5BU5D_t6427;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>>
struct IEnumerator_1_t6428;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3115;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m97_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m97(__this, method) (( void (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2__ctor_m97_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m22992_gshared (Dictionary_2_t28 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m22992(__this, ___comparer, method) (( void (*) (Dictionary_2_t28 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22992_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m22993_gshared (Dictionary_2_t28 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m22993(__this, ___dictionary, method) (( void (*) (Dictionary_2_t28 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22993_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14372_gshared (Dictionary_2_t28 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14372(__this, ___capacity, method) (( void (*) (Dictionary_2_t28 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14372_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m22994_gshared (Dictionary_2_t28 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m22994(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t28 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22994_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m22995_gshared (Dictionary_2_t28 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m22995(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t28 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2__ctor_m22995_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22996_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22996(__this, method) (( Object_t* (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22996_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22997_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22997(__this, method) (( Object_t* (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22997_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m22998_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m22998(__this, method) (( Object_t * (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m22998_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m22999_gshared (Dictionary_2_t28 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m22999(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t28 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m22999_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m23000_gshared (Dictionary_2_t28 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23000(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t28 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m23000_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m23001_gshared (Dictionary_2_t28 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m23001(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t28 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m23001_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m23002_gshared (Dictionary_2_t28 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m23002(__this, ___key, method) (( bool (*) (Dictionary_2_t28 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m23002_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m23003_gshared (Dictionary_2_t28 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m23003(__this, ___key, method) (( void (*) (Dictionary_2_t28 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m23003_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23004_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23004(__this, method) (( bool (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23004_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23005_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23005(__this, method) (( Object_t * (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23005_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23006_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23006(__this, method) (( bool (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23006_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23007_gshared (Dictionary_2_t28 * __this, KeyValuePair_2_t3175  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23007(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t28 *, KeyValuePair_2_t3175 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23007_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23008_gshared (Dictionary_2_t28 * __this, KeyValuePair_2_t3175  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23008(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t28 *, KeyValuePair_2_t3175 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23008_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23009_gshared (Dictionary_2_t28 * __this, KeyValuePair_2U5BU5D_t6427* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23009(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t28 *, KeyValuePair_2U5BU5D_t6427*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23009_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23010_gshared (Dictionary_2_t28 * __this, KeyValuePair_2_t3175  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23010(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t28 *, KeyValuePair_2_t3175 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23010_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m23011_gshared (Dictionary_2_t28 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23011(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t28 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m23011_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23012_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23012(__this, method) (( Object_t * (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23012_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23013_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23013(__this, method) (( Object_t* (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23013_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23014_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23014(__this, method) (( Object_t * (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23014_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m23015_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m23015(__this, method) (( int32_t (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_get_Count_m23015_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m23016_gshared (Dictionary_2_t28 * __this, uint8_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m23016(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t28 *, uint8_t, const MethodInfo*))Dictionary_2_get_Item_m23016_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m23017_gshared (Dictionary_2_t28 * __this, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m23017(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t28 *, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m23017_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m23018_gshared (Dictionary_2_t28 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m23018(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t28 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m23018_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m23019_gshared (Dictionary_2_t28 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m23019(__this, ___size, method) (( void (*) (Dictionary_2_t28 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m23019_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m23020_gshared (Dictionary_2_t28 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m23020(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t28 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m23020_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3175  Dictionary_2_make_pair_m23021_gshared (Object_t * __this /* static, unused */, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m23021(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3175  (*) (Object_t * /* static, unused */, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m23021_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::pick_key(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_key_m23022_gshared (Object_t * __this /* static, unused */, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m23022(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m23022_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m23023_gshared (Object_t * __this /* static, unused */, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m23023(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m23023_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m23024_gshared (Dictionary_2_t28 * __this, KeyValuePair_2U5BU5D_t6427* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m23024(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t28 *, KeyValuePair_2U5BU5D_t6427*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m23024_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m23025_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m23025(__this, method) (( void (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_Resize_m23025_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m23026_gshared (Dictionary_2_t28 * __this, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m23026(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t28 *, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m23026_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m23027_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m23027(__this, method) (( void (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_Clear_m23027_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m23028_gshared (Dictionary_2_t28 * __this, uint8_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m23028(__this, ___key, method) (( bool (*) (Dictionary_2_t28 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsKey_m23028_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m23029_gshared (Dictionary_2_t28 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m23029(__this, ___value, method) (( bool (*) (Dictionary_2_t28 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m23029_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m23030_gshared (Dictionary_2_t28 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m23030(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t28 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2_GetObjectData_m23030_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m23031_gshared (Dictionary_2_t28 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m23031(__this, ___sender, method) (( void (*) (Dictionary_2_t28 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m23031_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m23032_gshared (Dictionary_2_t28 * __this, uint8_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m23032(__this, ___key, method) (( bool (*) (Dictionary_2_t28 *, uint8_t, const MethodInfo*))Dictionary_2_Remove_m23032_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m23033_gshared (Dictionary_2_t28 * __this, uint8_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m23033(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t28 *, uint8_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m23033_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Keys()
extern "C" KeyCollection_t4914 * Dictionary_2_get_Keys_m23034_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m23034(__this, method) (( KeyCollection_t4914 * (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_get_Keys_m23034_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Values()
extern "C" ValueCollection_t4917 * Dictionary_2_get_Values_m23035_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m23035(__this, method) (( ValueCollection_t4917 * (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_get_Values_m23035_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ToTKey(System.Object)
extern "C" uint8_t Dictionary_2_ToTKey_m23036_gshared (Dictionary_2_t28 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m23036(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t28 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m23036_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m23037_gshared (Dictionary_2_t28 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m23037(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t28 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m23037_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m23038_gshared (Dictionary_2_t28 * __this, KeyValuePair_2_t3175  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m23038(__this, ___pair, method) (( bool (*) (Dictionary_2_t28 *, KeyValuePair_2_t3175 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m23038_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::GetEnumerator()
extern "C" Enumerator_t3176  Dictionary_2_GetEnumerator_m14415_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14415(__this, method) (( Enumerator_t3176  (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14415_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t660  Dictionary_2_U3CCopyToU3Em__0_m23039_gshared (Object_t * __this /* static, unused */, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m23039(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Object_t * /* static, unused */, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m23039_gshared)(__this /* static, unused */, ___key, ___value, method)