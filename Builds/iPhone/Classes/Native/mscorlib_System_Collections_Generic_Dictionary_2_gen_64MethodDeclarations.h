#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t8168;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1809;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t10476;
// System.Collections.ICollection
struct ICollection_t749;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>
struct KeyCollection_t8169;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>
struct ValueCollection_t8173;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1775;
// System.Collections.Generic.IDictionary`2<System.Object,System.DateTime>
struct IDictionary_2_t10583;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t9030;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerator_1_t9023;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t4200;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__49.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor()
extern "C" void Dictionary_2__ctor_m52171_gshared (Dictionary_2_t8168 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m52171(__this, method) (( void (*) (Dictionary_2_t8168 *, const MethodInfo*))Dictionary_2__ctor_m52171_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m52173_gshared (Dictionary_2_t8168 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m52173(__this, ___comparer, method) (( void (*) (Dictionary_2_t8168 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m52173_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m52175_gshared (Dictionary_2_t8168 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m52175(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8168 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m52175_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m52177_gshared (Dictionary_2_t8168 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m52177(__this, ___capacity, method) (( void (*) (Dictionary_2_t8168 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m52177_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m52179_gshared (Dictionary_2_t8168 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m52179(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8168 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m52179_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m52181_gshared (Dictionary_2_t8168 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m52181(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8168 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2__ctor_m52181_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m52183_gshared (Dictionary_2_t8168 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m52183(__this, method) (( Object_t* (*) (Dictionary_2_t8168 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m52183_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m52185_gshared (Dictionary_2_t8168 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m52185(__this, method) (( Object_t* (*) (Dictionary_2_t8168 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m52185_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m52187_gshared (Dictionary_2_t8168 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m52187(__this, method) (( Object_t * (*) (Dictionary_2_t8168 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m52187_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m52189_gshared (Dictionary_2_t8168 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m52189(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8168 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m52189_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m52191_gshared (Dictionary_2_t8168 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m52191(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8168 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m52191_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m52193_gshared (Dictionary_2_t8168 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m52193(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8168 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m52193_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m52195_gshared (Dictionary_2_t8168 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m52195(__this, ___key, method) (( bool (*) (Dictionary_2_t8168 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m52195_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m52197_gshared (Dictionary_2_t8168 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m52197(__this, ___key, method) (( void (*) (Dictionary_2_t8168 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m52197_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m52199_gshared (Dictionary_2_t8168 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m52199(__this, method) (( bool (*) (Dictionary_2_t8168 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m52199_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m52201_gshared (Dictionary_2_t8168 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m52201(__this, method) (( Object_t * (*) (Dictionary_2_t8168 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m52201_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m52203_gshared (Dictionary_2_t8168 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m52203(__this, method) (( bool (*) (Dictionary_2_t8168 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m52203_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m52205_gshared (Dictionary_2_t8168 * __this, KeyValuePair_2_t8096  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m52205(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8168 *, KeyValuePair_2_t8096 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m52205_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m52207_gshared (Dictionary_2_t8168 * __this, KeyValuePair_2_t8096  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m52207(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8168 *, KeyValuePair_2_t8096 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m52207_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m52209_gshared (Dictionary_2_t8168 * __this, KeyValuePair_2U5BU5D_t9030* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m52209(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8168 *, KeyValuePair_2U5BU5D_t9030*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m52209_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m52211_gshared (Dictionary_2_t8168 * __this, KeyValuePair_2_t8096  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m52211(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8168 *, KeyValuePair_2_t8096 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m52211_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m52213_gshared (Dictionary_2_t8168 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m52213(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8168 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m52213_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m52215_gshared (Dictionary_2_t8168 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m52215(__this, method) (( Object_t * (*) (Dictionary_2_t8168 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m52215_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m52217_gshared (Dictionary_2_t8168 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m52217(__this, method) (( Object_t* (*) (Dictionary_2_t8168 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m52217_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m52219_gshared (Dictionary_2_t8168 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m52219(__this, method) (( Object_t * (*) (Dictionary_2_t8168 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m52219_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m52221_gshared (Dictionary_2_t8168 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m52221(__this, method) (( int32_t (*) (Dictionary_2_t8168 *, const MethodInfo*))Dictionary_2_get_Count_m52221_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Item(TKey)
extern "C" DateTime_t1953  Dictionary_2_get_Item_m52223_gshared (Dictionary_2_t8168 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m52223(__this, ___key, method) (( DateTime_t1953  (*) (Dictionary_2_t8168 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m52223_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m52225_gshared (Dictionary_2_t8168 * __this, Object_t * ___key, DateTime_t1953  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m52225(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8168 *, Object_t *, DateTime_t1953 , const MethodInfo*))Dictionary_2_set_Item_m52225_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m52227_gshared (Dictionary_2_t8168 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m52227(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8168 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m52227_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m52229_gshared (Dictionary_2_t8168 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m52229(__this, ___size, method) (( void (*) (Dictionary_2_t8168 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m52229_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m52231_gshared (Dictionary_2_t8168 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m52231(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8168 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m52231_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8096  Dictionary_2_make_pair_m52233_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t1953  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m52233(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8096  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t1953 , const MethodInfo*))Dictionary_2_make_pair_m52233_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m52235_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t1953  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m52235(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, DateTime_t1953 , const MethodInfo*))Dictionary_2_pick_key_m52235_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::pick_value(TKey,TValue)
extern "C" DateTime_t1953  Dictionary_2_pick_value_m52237_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t1953  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m52237(__this /* static, unused */, ___key, ___value, method) (( DateTime_t1953  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t1953 , const MethodInfo*))Dictionary_2_pick_value_m52237_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m52239_gshared (Dictionary_2_t8168 * __this, KeyValuePair_2U5BU5D_t9030* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m52239(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8168 *, KeyValuePair_2U5BU5D_t9030*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m52239_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Resize()
extern "C" void Dictionary_2_Resize_m52241_gshared (Dictionary_2_t8168 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m52241(__this, method) (( void (*) (Dictionary_2_t8168 *, const MethodInfo*))Dictionary_2_Resize_m52241_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m52243_gshared (Dictionary_2_t8168 * __this, Object_t * ___key, DateTime_t1953  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m52243(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8168 *, Object_t *, DateTime_t1953 , const MethodInfo*))Dictionary_2_Add_m52243_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Clear()
extern "C" void Dictionary_2_Clear_m52245_gshared (Dictionary_2_t8168 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m52245(__this, method) (( void (*) (Dictionary_2_t8168 *, const MethodInfo*))Dictionary_2_Clear_m52245_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m52247_gshared (Dictionary_2_t8168 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m52247(__this, ___key, method) (( bool (*) (Dictionary_2_t8168 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m52247_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m52249_gshared (Dictionary_2_t8168 * __this, DateTime_t1953  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m52249(__this, ___value, method) (( bool (*) (Dictionary_2_t8168 *, DateTime_t1953 , const MethodInfo*))Dictionary_2_ContainsValue_m52249_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m52251_gshared (Dictionary_2_t8168 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m52251(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8168 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2_GetObjectData_m52251_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m52253_gshared (Dictionary_2_t8168 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m52253(__this, ___sender, method) (( void (*) (Dictionary_2_t8168 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m52253_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m52255_gshared (Dictionary_2_t8168 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m52255(__this, ___key, method) (( bool (*) (Dictionary_2_t8168 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m52255_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m52257_gshared (Dictionary_2_t8168 * __this, Object_t * ___key, DateTime_t1953 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m52257(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8168 *, Object_t *, DateTime_t1953 *, const MethodInfo*))Dictionary_2_TryGetValue_m52257_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Keys()
extern "C" KeyCollection_t8169 * Dictionary_2_get_Keys_m52259_gshared (Dictionary_2_t8168 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m52259(__this, method) (( KeyCollection_t8169 * (*) (Dictionary_2_t8168 *, const MethodInfo*))Dictionary_2_get_Keys_m52259_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Values()
extern "C" ValueCollection_t8173 * Dictionary_2_get_Values_m52261_gshared (Dictionary_2_t8168 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m52261(__this, method) (( ValueCollection_t8173 * (*) (Dictionary_2_t8168 *, const MethodInfo*))Dictionary_2_get_Values_m52261_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m52263_gshared (Dictionary_2_t8168 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m52263(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8168 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m52263_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ToTValue(System.Object)
extern "C" DateTime_t1953  Dictionary_2_ToTValue_m52265_gshared (Dictionary_2_t8168 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m52265(__this, ___value, method) (( DateTime_t1953  (*) (Dictionary_2_t8168 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m52265_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m52267_gshared (Dictionary_2_t8168 * __this, KeyValuePair_2_t8096  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m52267(__this, ___pair, method) (( bool (*) (Dictionary_2_t8168 *, KeyValuePair_2_t8096 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m52267_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::GetEnumerator()
extern "C" Enumerator_t8171  Dictionary_2_GetEnumerator_m52269_gshared (Dictionary_2_t8168 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m52269(__this, method) (( Enumerator_t8171  (*) (Dictionary_2_t8168 *, const MethodInfo*))Dictionary_2_GetEnumerator_m52269_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t748  Dictionary_2_U3CCopyToU3Em__0_m52271_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t1953  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m52271(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t1953 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m52271_gshared)(__this /* static, unused */, ___key, ___value, method)
