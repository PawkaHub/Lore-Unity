#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1625;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1429;
// System.Collections.ICollection
struct ICollection_t661;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t669;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t4902;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4896;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t3179;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t5601;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t5599;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3115;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m14361_gshared (Dictionary_2_t1625 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14361(__this, method) (( void (*) (Dictionary_2_t1625 *, const MethodInfo*))Dictionary_2__ctor_m14361_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m22789_gshared (Dictionary_2_t1625 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m22789(__this, ___comparer, method) (( void (*) (Dictionary_2_t1625 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22789_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m22791_gshared (Dictionary_2_t1625 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m22791(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1625 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22791_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14362_gshared (Dictionary_2_t1625 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14362(__this, ___capacity, method) (( void (*) (Dictionary_2_t1625 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14362_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m22794_gshared (Dictionary_2_t1625 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m22794(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1625 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22794_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m22796_gshared (Dictionary_2_t1625 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m22796(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1625 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2__ctor_m22796_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14458_gshared (Dictionary_2_t1625 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14458(__this, method) (( Object_t* (*) (Dictionary_2_t1625 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14458_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14459_gshared (Dictionary_2_t1625 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14459(__this, method) (( Object_t* (*) (Dictionary_2_t1625 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14459_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m14462_gshared (Dictionary_2_t1625 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m14462(__this, method) (( Object_t * (*) (Dictionary_2_t1625 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m14462_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14460_gshared (Dictionary_2_t1625 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14460(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1625 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14460_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14461_gshared (Dictionary_2_t1625 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14461(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1625 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14461_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14463_gshared (Dictionary_2_t1625 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14463(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1625 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14463_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14464_gshared (Dictionary_2_t1625 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14464(__this, ___key, method) (( bool (*) (Dictionary_2_t1625 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14464_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14466_gshared (Dictionary_2_t1625 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14466(__this, ___key, method) (( void (*) (Dictionary_2_t1625 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14466_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14444_gshared (Dictionary_2_t1625 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14444(__this, method) (( bool (*) (Dictionary_2_t1625 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14444_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14445_gshared (Dictionary_2_t1625 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14445(__this, method) (( Object_t * (*) (Dictionary_2_t1625 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14445_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14447_gshared (Dictionary_2_t1625 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14447(__this, method) (( bool (*) (Dictionary_2_t1625 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14447_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14448_gshared (Dictionary_2_t1625 * __this, KeyValuePair_2_t1591  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14448(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1625 *, KeyValuePair_2_t1591 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14448_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14450_gshared (Dictionary_2_t1625 * __this, KeyValuePair_2_t1591  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14450(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1625 *, KeyValuePair_2_t1591 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14450_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14451_gshared (Dictionary_2_t1625 * __this, KeyValuePair_2U5BU5D_t5601* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14451(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1625 *, KeyValuePair_2U5BU5D_t5601*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14451_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14452_gshared (Dictionary_2_t1625 * __this, KeyValuePair_2_t1591  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14452(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1625 *, KeyValuePair_2_t1591 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14452_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14446_gshared (Dictionary_2_t1625 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14446(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1625 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14446_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14441_gshared (Dictionary_2_t1625 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14441(__this, method) (( Object_t * (*) (Dictionary_2_t1625 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14441_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14453_gshared (Dictionary_2_t1625 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14453(__this, method) (( Object_t* (*) (Dictionary_2_t1625 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14453_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14465_gshared (Dictionary_2_t1625 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14465(__this, method) (( Object_t * (*) (Dictionary_2_t1625 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14465_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14443_gshared (Dictionary_2_t1625 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14443(__this, method) (( int32_t (*) (Dictionary_2_t1625 *, const MethodInfo*))Dictionary_2_get_Count_m14443_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m14457_gshared (Dictionary_2_t1625 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14457(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1625 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m14457_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14364_gshared (Dictionary_2_t1625 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14364(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1625 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m14364_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m22820_gshared (Dictionary_2_t1625 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m22820(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1625 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m22820_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m22822_gshared (Dictionary_2_t1625 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m22822(__this, ___size, method) (( void (*) (Dictionary_2_t1625 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m22822_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m22824_gshared (Dictionary_2_t1625 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m22824(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1625 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m22824_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1591  Dictionary_2_make_pair_m22826_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m22826(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1591  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m22826_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m22828_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m22828(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m22828_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m22830_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m22830(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m22830_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m22832_gshared (Dictionary_2_t1625 * __this, KeyValuePair_2U5BU5D_t5601* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m22832(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1625 *, KeyValuePair_2U5BU5D_t5601*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m22832_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m22834_gshared (Dictionary_2_t1625 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m22834(__this, method) (( void (*) (Dictionary_2_t1625 *, const MethodInfo*))Dictionary_2_Resize_m22834_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14454_gshared (Dictionary_2_t1625 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14454(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1625 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m14454_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m14449_gshared (Dictionary_2_t1625 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14449(__this, method) (( void (*) (Dictionary_2_t1625 *, const MethodInfo*))Dictionary_2_Clear_m14449_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14455_gshared (Dictionary_2_t1625 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14455(__this, ___key, method) (( bool (*) (Dictionary_2_t1625 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m14455_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m22839_gshared (Dictionary_2_t1625 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m22839(__this, ___value, method) (( bool (*) (Dictionary_2_t1625 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m22839_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14442_gshared (Dictionary_2_t1625 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14442(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1625 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2_GetObjectData_m14442_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14467_gshared (Dictionary_2_t1625 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14467(__this, ___sender, method) (( void (*) (Dictionary_2_t1625 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14467_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14456_gshared (Dictionary_2_t1625 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14456(__this, ___key, method) (( bool (*) (Dictionary_2_t1625 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m14456_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14363_gshared (Dictionary_2_t1625 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14363(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1625 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m14363_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t669 * Dictionary_2_get_Keys_m3126_gshared (Dictionary_2_t1625 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m3126(__this, method) (( KeyCollection_t669 * (*) (Dictionary_2_t1625 *, const MethodInfo*))Dictionary_2_get_Keys_m3126_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t4902 * Dictionary_2_get_Values_m22845_gshared (Dictionary_2_t1625 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m22845(__this, method) (( ValueCollection_t4902 * (*) (Dictionary_2_t1625 *, const MethodInfo*))Dictionary_2_get_Values_m22845_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m22847_gshared (Dictionary_2_t1625 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m22847(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1625 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m22847_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m22849_gshared (Dictionary_2_t1625 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m22849(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1625 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m22849_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m22851_gshared (Dictionary_2_t1625 * __this, KeyValuePair_2_t1591  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m22851(__this, ___pair, method) (( bool (*) (Dictionary_2_t1625 *, KeyValuePair_2_t1591 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m22851_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t4900  Dictionary_2_GetEnumerator_m22853_gshared (Dictionary_2_t1625 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m22853(__this, method) (( Enumerator_t4900  (*) (Dictionary_2_t1625 *, const MethodInfo*))Dictionary_2_GetEnumerator_m22853_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t660  Dictionary_2_U3CCopyToU3Em__0_m22855_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m22855(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m22855_gshared)(__this /* static, unused */, ___key, ___value, method)
