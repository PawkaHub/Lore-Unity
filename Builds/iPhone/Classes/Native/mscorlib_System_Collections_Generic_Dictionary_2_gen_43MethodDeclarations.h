#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2877;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t6431;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1429;
// System.Collections.ICollection
struct ICollection_t661;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t5174;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t5178;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5169;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t6559;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t6560;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t6561;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3115;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m13766_gshared (Dictionary_2_t2877 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13766(__this, method) (( void (*) (Dictionary_2_t2877 *, const MethodInfo*))Dictionary_2__ctor_m13766_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m26774_gshared (Dictionary_2_t2877 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m26774(__this, ___comparer, method) (( void (*) (Dictionary_2_t2877 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26774_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m26776_gshared (Dictionary_2_t2877 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m26776(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2877 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26776_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m26778_gshared (Dictionary_2_t2877 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m26778(__this, ___capacity, method) (( void (*) (Dictionary_2_t2877 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m26778_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m26780_gshared (Dictionary_2_t2877 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m26780(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2877 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26780_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m26782_gshared (Dictionary_2_t2877 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m26782(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2877 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2__ctor_m26782_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26784_gshared (Dictionary_2_t2877 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26784(__this, method) (( Object_t* (*) (Dictionary_2_t2877 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26784_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26786_gshared (Dictionary_2_t2877 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26786(__this, method) (( Object_t* (*) (Dictionary_2_t2877 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26786_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m26788_gshared (Dictionary_2_t2877 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m26788(__this, method) (( Object_t * (*) (Dictionary_2_t2877 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m26788_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m26790_gshared (Dictionary_2_t2877 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m26790(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2877 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m26790_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m26792_gshared (Dictionary_2_t2877 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m26792(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2877 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m26792_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m26794_gshared (Dictionary_2_t2877 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m26794(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2877 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m26794_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m26796_gshared (Dictionary_2_t2877 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m26796(__this, ___key, method) (( bool (*) (Dictionary_2_t2877 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m26796_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m26798_gshared (Dictionary_2_t2877 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m26798(__this, ___key, method) (( void (*) (Dictionary_2_t2877 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m26798_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26800_gshared (Dictionary_2_t2877 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26800(__this, method) (( bool (*) (Dictionary_2_t2877 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26800_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26802_gshared (Dictionary_2_t2877 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26802(__this, method) (( Object_t * (*) (Dictionary_2_t2877 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26802_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26804_gshared (Dictionary_2_t2877 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26804(__this, method) (( bool (*) (Dictionary_2_t2877 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26804_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26806_gshared (Dictionary_2_t2877 * __this, KeyValuePair_2_t5172  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26806(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2877 *, KeyValuePair_2_t5172 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26806_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26808_gshared (Dictionary_2_t2877 * __this, KeyValuePair_2_t5172  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26808(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2877 *, KeyValuePair_2_t5172 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26808_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26810_gshared (Dictionary_2_t2877 * __this, KeyValuePair_2U5BU5D_t6560* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26810(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2877 *, KeyValuePair_2U5BU5D_t6560*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26810_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26812_gshared (Dictionary_2_t2877 * __this, KeyValuePair_2_t5172  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26812(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2877 *, KeyValuePair_2_t5172 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26812_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m26814_gshared (Dictionary_2_t2877 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m26814(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2877 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m26814_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26816_gshared (Dictionary_2_t2877 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26816(__this, method) (( Object_t * (*) (Dictionary_2_t2877 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26816_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26818_gshared (Dictionary_2_t2877 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26818(__this, method) (( Object_t* (*) (Dictionary_2_t2877 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26818_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26820_gshared (Dictionary_2_t2877 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26820(__this, method) (( Object_t * (*) (Dictionary_2_t2877 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26820_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m26822_gshared (Dictionary_2_t2877 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m26822(__this, method) (( int32_t (*) (Dictionary_2_t2877 *, const MethodInfo*))Dictionary_2_get_Count_m26822_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m26824_gshared (Dictionary_2_t2877 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m26824(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2877 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m26824_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m26826_gshared (Dictionary_2_t2877 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m26826(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2877 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m26826_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m26828_gshared (Dictionary_2_t2877 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m26828(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2877 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m26828_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m26830_gshared (Dictionary_2_t2877 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m26830(__this, ___size, method) (( void (*) (Dictionary_2_t2877 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m26830_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m26832_gshared (Dictionary_2_t2877 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m26832(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2877 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m26832_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5172  Dictionary_2_make_pair_m26834_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m26834(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5172  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m26834_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m26836_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m26836(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m26836_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m26838_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m26838(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m26838_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m26840_gshared (Dictionary_2_t2877 * __this, KeyValuePair_2U5BU5D_t6560* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m26840(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2877 *, KeyValuePair_2U5BU5D_t6560*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m26840_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m26842_gshared (Dictionary_2_t2877 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m26842(__this, method) (( void (*) (Dictionary_2_t2877 *, const MethodInfo*))Dictionary_2_Resize_m26842_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m26844_gshared (Dictionary_2_t2877 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m26844(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2877 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m26844_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m26846_gshared (Dictionary_2_t2877 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m26846(__this, method) (( void (*) (Dictionary_2_t2877 *, const MethodInfo*))Dictionary_2_Clear_m26846_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m26848_gshared (Dictionary_2_t2877 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m26848(__this, ___key, method) (( bool (*) (Dictionary_2_t2877 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m26848_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m26850_gshared (Dictionary_2_t2877 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m26850(__this, ___value, method) (( bool (*) (Dictionary_2_t2877 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m26850_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m26852_gshared (Dictionary_2_t2877 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m26852(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2877 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2_GetObjectData_m26852_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m26854_gshared (Dictionary_2_t2877 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m26854(__this, ___sender, method) (( void (*) (Dictionary_2_t2877 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m26854_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m26856_gshared (Dictionary_2_t2877 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m26856(__this, ___key, method) (( bool (*) (Dictionary_2_t2877 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m26856_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m26858_gshared (Dictionary_2_t2877 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m26858(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2877 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m26858_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t5174 * Dictionary_2_get_Keys_m26859_gshared (Dictionary_2_t2877 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m26859(__this, method) (( KeyCollection_t5174 * (*) (Dictionary_2_t2877 *, const MethodInfo*))Dictionary_2_get_Keys_m26859_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t5178 * Dictionary_2_get_Values_m26860_gshared (Dictionary_2_t2877 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m26860(__this, method) (( ValueCollection_t5178 * (*) (Dictionary_2_t2877 *, const MethodInfo*))Dictionary_2_get_Values_m26860_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m26862_gshared (Dictionary_2_t2877 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m26862(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2877 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m26862_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m26864_gshared (Dictionary_2_t2877 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m26864(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2877 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m26864_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m26866_gshared (Dictionary_2_t2877 * __this, KeyValuePair_2_t5172  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m26866(__this, ___pair, method) (( bool (*) (Dictionary_2_t2877 *, KeyValuePair_2_t5172 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m26866_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t5176  Dictionary_2_GetEnumerator_m26868_gshared (Dictionary_2_t2877 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m26868(__this, method) (( Enumerator_t5176  (*) (Dictionary_2_t2877 *, const MethodInfo*))Dictionary_2_GetEnumerator_m26868_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t660  Dictionary_2_U3CCopyToU3Em__0_m26870_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m26870(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m26870_gshared)(__this /* static, unused */, ___key, ___value, method)
