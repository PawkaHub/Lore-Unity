#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t6137;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1429;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t6790;
// System.Collections.ICollection
struct ICollection_t661;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t6140;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t6144;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4896;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t7084;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7085;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t7086;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3115;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__48.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m41594_gshared (Dictionary_2_t6137 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m41594(__this, method) (( void (*) (Dictionary_2_t6137 *, const MethodInfo*))Dictionary_2__ctor_m41594_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m41596_gshared (Dictionary_2_t6137 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m41596(__this, ___comparer, method) (( void (*) (Dictionary_2_t6137 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m41596_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m41598_gshared (Dictionary_2_t6137 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m41598(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6137 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m41598_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m41600_gshared (Dictionary_2_t6137 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m41600(__this, ___capacity, method) (( void (*) (Dictionary_2_t6137 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m41600_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m41602_gshared (Dictionary_2_t6137 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m41602(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6137 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m41602_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m41604_gshared (Dictionary_2_t6137 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m41604(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6137 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2__ctor_m41604_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m41606_gshared (Dictionary_2_t6137 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m41606(__this, method) (( Object_t* (*) (Dictionary_2_t6137 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m41606_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m41608_gshared (Dictionary_2_t6137 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m41608(__this, method) (( Object_t* (*) (Dictionary_2_t6137 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m41608_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m41610_gshared (Dictionary_2_t6137 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m41610(__this, method) (( Object_t * (*) (Dictionary_2_t6137 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m41610_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m41612_gshared (Dictionary_2_t6137 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m41612(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6137 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m41612_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m41614_gshared (Dictionary_2_t6137 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m41614(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6137 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m41614_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m41616_gshared (Dictionary_2_t6137 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m41616(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6137 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m41616_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m41618_gshared (Dictionary_2_t6137 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m41618(__this, ___key, method) (( bool (*) (Dictionary_2_t6137 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m41618_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m41620_gshared (Dictionary_2_t6137 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m41620(__this, ___key, method) (( void (*) (Dictionary_2_t6137 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m41620_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m41622_gshared (Dictionary_2_t6137 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m41622(__this, method) (( bool (*) (Dictionary_2_t6137 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m41622_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m41624_gshared (Dictionary_2_t6137 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m41624(__this, method) (( Object_t * (*) (Dictionary_2_t6137 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m41624_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m41626_gshared (Dictionary_2_t6137 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m41626(__this, method) (( bool (*) (Dictionary_2_t6137 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m41626_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m41628_gshared (Dictionary_2_t6137 * __this, KeyValuePair_2_t6138  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m41628(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6137 *, KeyValuePair_2_t6138 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m41628_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m41630_gshared (Dictionary_2_t6137 * __this, KeyValuePair_2_t6138  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m41630(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6137 *, KeyValuePair_2_t6138 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m41630_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m41632_gshared (Dictionary_2_t6137 * __this, KeyValuePair_2U5BU5D_t7085* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m41632(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6137 *, KeyValuePair_2U5BU5D_t7085*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m41632_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m41634_gshared (Dictionary_2_t6137 * __this, KeyValuePair_2_t6138  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m41634(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6137 *, KeyValuePair_2_t6138 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m41634_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m41636_gshared (Dictionary_2_t6137 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m41636(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6137 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m41636_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m41638_gshared (Dictionary_2_t6137 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m41638(__this, method) (( Object_t * (*) (Dictionary_2_t6137 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m41638_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m41640_gshared (Dictionary_2_t6137 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m41640(__this, method) (( Object_t* (*) (Dictionary_2_t6137 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m41640_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m41642_gshared (Dictionary_2_t6137 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m41642(__this, method) (( Object_t * (*) (Dictionary_2_t6137 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m41642_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m41644_gshared (Dictionary_2_t6137 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m41644(__this, method) (( int32_t (*) (Dictionary_2_t6137 *, const MethodInfo*))Dictionary_2_get_Count_m41644_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m41646_gshared (Dictionary_2_t6137 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m41646(__this, ___key, method) (( int64_t (*) (Dictionary_2_t6137 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m41646_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m41648_gshared (Dictionary_2_t6137 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m41648(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6137 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m41648_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m41650_gshared (Dictionary_2_t6137 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m41650(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6137 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m41650_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m41652_gshared (Dictionary_2_t6137 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m41652(__this, ___size, method) (( void (*) (Dictionary_2_t6137 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m41652_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m41654_gshared (Dictionary_2_t6137 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m41654(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6137 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m41654_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6138  Dictionary_2_make_pair_m41656_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m41656(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6138  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m41656_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m41658_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m41658(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m41658_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m41660_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m41660(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m41660_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m41662_gshared (Dictionary_2_t6137 * __this, KeyValuePair_2U5BU5D_t7085* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m41662(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6137 *, KeyValuePair_2U5BU5D_t7085*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m41662_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m41664_gshared (Dictionary_2_t6137 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m41664(__this, method) (( void (*) (Dictionary_2_t6137 *, const MethodInfo*))Dictionary_2_Resize_m41664_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m41666_gshared (Dictionary_2_t6137 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m41666(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6137 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m41666_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m41668_gshared (Dictionary_2_t6137 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m41668(__this, method) (( void (*) (Dictionary_2_t6137 *, const MethodInfo*))Dictionary_2_Clear_m41668_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m41670_gshared (Dictionary_2_t6137 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m41670(__this, ___key, method) (( bool (*) (Dictionary_2_t6137 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m41670_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m41672_gshared (Dictionary_2_t6137 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m41672(__this, ___value, method) (( bool (*) (Dictionary_2_t6137 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m41672_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m41674_gshared (Dictionary_2_t6137 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m41674(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6137 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2_GetObjectData_m41674_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m41676_gshared (Dictionary_2_t6137 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m41676(__this, ___sender, method) (( void (*) (Dictionary_2_t6137 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m41676_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m41678_gshared (Dictionary_2_t6137 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m41678(__this, ___key, method) (( bool (*) (Dictionary_2_t6137 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m41678_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m41680_gshared (Dictionary_2_t6137 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m41680(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6137 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m41680_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t6140 * Dictionary_2_get_Keys_m41682_gshared (Dictionary_2_t6137 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m41682(__this, method) (( KeyCollection_t6140 * (*) (Dictionary_2_t6137 *, const MethodInfo*))Dictionary_2_get_Keys_m41682_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t6144 * Dictionary_2_get_Values_m41684_gshared (Dictionary_2_t6137 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m41684(__this, method) (( ValueCollection_t6144 * (*) (Dictionary_2_t6137 *, const MethodInfo*))Dictionary_2_get_Values_m41684_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m41686_gshared (Dictionary_2_t6137 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m41686(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6137 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m41686_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m41688_gshared (Dictionary_2_t6137 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m41688(__this, ___value, method) (( int64_t (*) (Dictionary_2_t6137 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m41688_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m41690_gshared (Dictionary_2_t6137 * __this, KeyValuePair_2_t6138  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m41690(__this, ___pair, method) (( bool (*) (Dictionary_2_t6137 *, KeyValuePair_2_t6138 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m41690_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t6142  Dictionary_2_GetEnumerator_m41692_gshared (Dictionary_2_t6137 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m41692(__this, method) (( Enumerator_t6142  (*) (Dictionary_2_t6137 *, const MethodInfo*))Dictionary_2_GetEnumerator_m41692_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t660  Dictionary_2_U3CCopyToU3Em__0_m41694_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m41694(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m41694_gshared)(__this /* static, unused */, ___key, ___value, method)
