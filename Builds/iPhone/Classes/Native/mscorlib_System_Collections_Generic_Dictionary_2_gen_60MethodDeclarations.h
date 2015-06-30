#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t6171;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t7102;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1429;
// System.Collections.ICollection
struct ICollection_t661;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t6175;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t6179;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t6169;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t7103;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t7104;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t7105;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3115;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__50.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m42040_gshared (Dictionary_2_t6171 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m42040(__this, method) (( void (*) (Dictionary_2_t6171 *, const MethodInfo*))Dictionary_2__ctor_m42040_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m42042_gshared (Dictionary_2_t6171 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m42042(__this, ___comparer, method) (( void (*) (Dictionary_2_t6171 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m42042_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m42044_gshared (Dictionary_2_t6171 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m42044(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6171 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m42044_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m42046_gshared (Dictionary_2_t6171 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m42046(__this, ___capacity, method) (( void (*) (Dictionary_2_t6171 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m42046_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m42048_gshared (Dictionary_2_t6171 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m42048(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6171 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m42048_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m42050_gshared (Dictionary_2_t6171 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m42050(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6171 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2__ctor_m42050_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m42052_gshared (Dictionary_2_t6171 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m42052(__this, method) (( Object_t* (*) (Dictionary_2_t6171 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m42052_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m42054_gshared (Dictionary_2_t6171 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m42054(__this, method) (( Object_t* (*) (Dictionary_2_t6171 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m42054_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m42056_gshared (Dictionary_2_t6171 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m42056(__this, method) (( Object_t * (*) (Dictionary_2_t6171 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m42056_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m42058_gshared (Dictionary_2_t6171 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m42058(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6171 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m42058_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m42060_gshared (Dictionary_2_t6171 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m42060(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6171 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m42060_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m42062_gshared (Dictionary_2_t6171 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m42062(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6171 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m42062_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m42064_gshared (Dictionary_2_t6171 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m42064(__this, ___key, method) (( bool (*) (Dictionary_2_t6171 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m42064_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m42066_gshared (Dictionary_2_t6171 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m42066(__this, ___key, method) (( void (*) (Dictionary_2_t6171 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m42066_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m42068_gshared (Dictionary_2_t6171 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m42068(__this, method) (( bool (*) (Dictionary_2_t6171 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m42068_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m42070_gshared (Dictionary_2_t6171 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m42070(__this, method) (( Object_t * (*) (Dictionary_2_t6171 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m42070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m42072_gshared (Dictionary_2_t6171 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m42072(__this, method) (( bool (*) (Dictionary_2_t6171 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m42072_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m42074_gshared (Dictionary_2_t6171 * __this, KeyValuePair_2_t6172  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m42074(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6171 *, KeyValuePair_2_t6172 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m42074_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m42076_gshared (Dictionary_2_t6171 * __this, KeyValuePair_2_t6172  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m42076(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6171 *, KeyValuePair_2_t6172 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m42076_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m42078_gshared (Dictionary_2_t6171 * __this, KeyValuePair_2U5BU5D_t7104* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m42078(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6171 *, KeyValuePair_2U5BU5D_t7104*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m42078_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m42080_gshared (Dictionary_2_t6171 * __this, KeyValuePair_2_t6172  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m42080(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6171 *, KeyValuePair_2_t6172 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m42080_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m42082_gshared (Dictionary_2_t6171 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m42082(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6171 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m42082_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m42084_gshared (Dictionary_2_t6171 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m42084(__this, method) (( Object_t * (*) (Dictionary_2_t6171 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m42084_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m42086_gshared (Dictionary_2_t6171 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m42086(__this, method) (( Object_t* (*) (Dictionary_2_t6171 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m42086_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m42088_gshared (Dictionary_2_t6171 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m42088(__this, method) (( Object_t * (*) (Dictionary_2_t6171 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m42088_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m42090_gshared (Dictionary_2_t6171 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m42090(__this, method) (( int32_t (*) (Dictionary_2_t6171 *, const MethodInfo*))Dictionary_2_get_Count_m42090_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m42092_gshared (Dictionary_2_t6171 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m42092(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6171 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m42092_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m42094_gshared (Dictionary_2_t6171 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m42094(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6171 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m42094_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m42096_gshared (Dictionary_2_t6171 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m42096(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6171 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m42096_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m42098_gshared (Dictionary_2_t6171 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m42098(__this, ___size, method) (( void (*) (Dictionary_2_t6171 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m42098_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m42100_gshared (Dictionary_2_t6171 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m42100(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6171 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m42100_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6172  Dictionary_2_make_pair_m42102_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m42102(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6172  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m42102_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m42104_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m42104(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m42104_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m42106_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m42106(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m42106_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m42108_gshared (Dictionary_2_t6171 * __this, KeyValuePair_2U5BU5D_t7104* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m42108(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6171 *, KeyValuePair_2U5BU5D_t7104*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m42108_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m42110_gshared (Dictionary_2_t6171 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m42110(__this, method) (( void (*) (Dictionary_2_t6171 *, const MethodInfo*))Dictionary_2_Resize_m42110_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m42112_gshared (Dictionary_2_t6171 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m42112(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6171 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m42112_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m42114_gshared (Dictionary_2_t6171 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m42114(__this, method) (( void (*) (Dictionary_2_t6171 *, const MethodInfo*))Dictionary_2_Clear_m42114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m42116_gshared (Dictionary_2_t6171 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m42116(__this, ___key, method) (( bool (*) (Dictionary_2_t6171 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m42116_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m42118_gshared (Dictionary_2_t6171 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m42118(__this, ___value, method) (( bool (*) (Dictionary_2_t6171 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m42118_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m42120_gshared (Dictionary_2_t6171 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m42120(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6171 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2_GetObjectData_m42120_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m42122_gshared (Dictionary_2_t6171 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m42122(__this, ___sender, method) (( void (*) (Dictionary_2_t6171 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m42122_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m42124_gshared (Dictionary_2_t6171 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m42124(__this, ___key, method) (( bool (*) (Dictionary_2_t6171 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m42124_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m42126_gshared (Dictionary_2_t6171 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m42126(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6171 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m42126_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t6175 * Dictionary_2_get_Keys_m42128_gshared (Dictionary_2_t6171 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m42128(__this, method) (( KeyCollection_t6175 * (*) (Dictionary_2_t6171 *, const MethodInfo*))Dictionary_2_get_Keys_m42128_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t6179 * Dictionary_2_get_Values_m42130_gshared (Dictionary_2_t6171 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m42130(__this, method) (( ValueCollection_t6179 * (*) (Dictionary_2_t6171 *, const MethodInfo*))Dictionary_2_get_Values_m42130_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m42132_gshared (Dictionary_2_t6171 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m42132(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t6171 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m42132_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m42134_gshared (Dictionary_2_t6171 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m42134(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t6171 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m42134_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m42136_gshared (Dictionary_2_t6171 * __this, KeyValuePair_2_t6172  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m42136(__this, ___pair, method) (( bool (*) (Dictionary_2_t6171 *, KeyValuePair_2_t6172 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m42136_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t6177  Dictionary_2_GetEnumerator_m42138_gshared (Dictionary_2_t6171 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m42138(__this, method) (( Enumerator_t6177  (*) (Dictionary_2_t6171 *, const MethodInfo*))Dictionary_2_GetEnumerator_m42138_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t660  Dictionary_2_U3CCopyToU3Em__0_m42140_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m42140(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m42140_gshared)(__this /* static, unused */, ___key, ___value, method)
