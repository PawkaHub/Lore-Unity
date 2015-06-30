#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t5448;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1429;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t6632;
// System.Collections.ICollection
struct ICollection_t661;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Single>
struct KeyCollection_t5451;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>
struct ValueCollection_t5455;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4896;
// System.Collections.Generic.IDictionary`2<System.Object,System.Single>
struct IDictionary_2_t6749;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t6750;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerator_1_t6751;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3115;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_31.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__25.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
extern "C" void Dictionary_2__ctor_m31654_gshared (Dictionary_2_t5448 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m31654(__this, method) (( void (*) (Dictionary_2_t5448 *, const MethodInfo*))Dictionary_2__ctor_m31654_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m31656_gshared (Dictionary_2_t5448 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m31656(__this, ___comparer, method) (( void (*) (Dictionary_2_t5448 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m31656_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m31658_gshared (Dictionary_2_t5448 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m31658(__this, ___dictionary, method) (( void (*) (Dictionary_2_t5448 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m31658_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m31660_gshared (Dictionary_2_t5448 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m31660(__this, ___capacity, method) (( void (*) (Dictionary_2_t5448 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m31660_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m31662_gshared (Dictionary_2_t5448 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m31662(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t5448 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m31662_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m31664_gshared (Dictionary_2_t5448 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m31664(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5448 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2__ctor_m31664_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31666_gshared (Dictionary_2_t5448 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31666(__this, method) (( Object_t* (*) (Dictionary_2_t5448 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31666_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31668_gshared (Dictionary_2_t5448 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31668(__this, method) (( Object_t* (*) (Dictionary_2_t5448 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31668_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m31670_gshared (Dictionary_2_t5448 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m31670(__this, method) (( Object_t * (*) (Dictionary_2_t5448 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m31670_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m31672_gshared (Dictionary_2_t5448 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m31672(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5448 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m31672_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m31674_gshared (Dictionary_2_t5448 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m31674(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5448 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m31674_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m31676_gshared (Dictionary_2_t5448 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m31676(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5448 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m31676_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m31678_gshared (Dictionary_2_t5448 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m31678(__this, ___key, method) (( bool (*) (Dictionary_2_t5448 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m31678_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m31680_gshared (Dictionary_2_t5448 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m31680(__this, ___key, method) (( void (*) (Dictionary_2_t5448 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m31680_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31682_gshared (Dictionary_2_t5448 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31682(__this, method) (( bool (*) (Dictionary_2_t5448 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31682_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31684_gshared (Dictionary_2_t5448 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31684(__this, method) (( Object_t * (*) (Dictionary_2_t5448 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31684_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31686_gshared (Dictionary_2_t5448 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31686(__this, method) (( bool (*) (Dictionary_2_t5448 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31686_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31688_gshared (Dictionary_2_t5448 * __this, KeyValuePair_2_t5449  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31688(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t5448 *, KeyValuePair_2_t5449 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31688_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31690_gshared (Dictionary_2_t5448 * __this, KeyValuePair_2_t5449  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31690(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5448 *, KeyValuePair_2_t5449 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31690_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31692_gshared (Dictionary_2_t5448 * __this, KeyValuePair_2U5BU5D_t6750* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31692(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5448 *, KeyValuePair_2U5BU5D_t6750*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31692_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31694_gshared (Dictionary_2_t5448 * __this, KeyValuePair_2_t5449  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31694(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5448 *, KeyValuePair_2_t5449 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31694_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m31696_gshared (Dictionary_2_t5448 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m31696(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5448 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m31696_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31698_gshared (Dictionary_2_t5448 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31698(__this, method) (( Object_t * (*) (Dictionary_2_t5448 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31698_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31700_gshared (Dictionary_2_t5448 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31700(__this, method) (( Object_t* (*) (Dictionary_2_t5448 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31700_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31702_gshared (Dictionary_2_t5448 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31702(__this, method) (( Object_t * (*) (Dictionary_2_t5448 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31702_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m31704_gshared (Dictionary_2_t5448 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m31704(__this, method) (( int32_t (*) (Dictionary_2_t5448 *, const MethodInfo*))Dictionary_2_get_Count_m31704_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Item(TKey)
extern "C" float Dictionary_2_get_Item_m31706_gshared (Dictionary_2_t5448 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m31706(__this, ___key, method) (( float (*) (Dictionary_2_t5448 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m31706_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m31708_gshared (Dictionary_2_t5448 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m31708(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5448 *, Object_t *, float, const MethodInfo*))Dictionary_2_set_Item_m31708_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m31710_gshared (Dictionary_2_t5448 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m31710(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t5448 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m31710_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m31712_gshared (Dictionary_2_t5448 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m31712(__this, ___size, method) (( void (*) (Dictionary_2_t5448 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m31712_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m31714_gshared (Dictionary_2_t5448 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m31714(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5448 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m31714_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5449  Dictionary_2_make_pair_m31716_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m31716(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5449  (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_make_pair_m31716_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m31718_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m31718(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_pick_key_m31718_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_value(TKey,TValue)
extern "C" float Dictionary_2_pick_value_m31720_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m31720(__this /* static, unused */, ___key, ___value, method) (( float (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_pick_value_m31720_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m31722_gshared (Dictionary_2_t5448 * __this, KeyValuePair_2U5BU5D_t6750* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m31722(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5448 *, KeyValuePair_2U5BU5D_t6750*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m31722_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Resize()
extern "C" void Dictionary_2_Resize_m31724_gshared (Dictionary_2_t5448 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m31724(__this, method) (( void (*) (Dictionary_2_t5448 *, const MethodInfo*))Dictionary_2_Resize_m31724_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m31726_gshared (Dictionary_2_t5448 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_Add_m31726(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5448 *, Object_t *, float, const MethodInfo*))Dictionary_2_Add_m31726_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Clear()
extern "C" void Dictionary_2_Clear_m31728_gshared (Dictionary_2_t5448 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m31728(__this, method) (( void (*) (Dictionary_2_t5448 *, const MethodInfo*))Dictionary_2_Clear_m31728_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m31730_gshared (Dictionary_2_t5448 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m31730(__this, ___key, method) (( bool (*) (Dictionary_2_t5448 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m31730_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m31732_gshared (Dictionary_2_t5448 * __this, float ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m31732(__this, ___value, method) (( bool (*) (Dictionary_2_t5448 *, float, const MethodInfo*))Dictionary_2_ContainsValue_m31732_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m31734_gshared (Dictionary_2_t5448 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m31734(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5448 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2_GetObjectData_m31734_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m31736_gshared (Dictionary_2_t5448 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m31736(__this, ___sender, method) (( void (*) (Dictionary_2_t5448 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m31736_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m31738_gshared (Dictionary_2_t5448 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m31738(__this, ___key, method) (( bool (*) (Dictionary_2_t5448 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m31738_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m31740_gshared (Dictionary_2_t5448 * __this, Object_t * ___key, float* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m31740(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t5448 *, Object_t *, float*, const MethodInfo*))Dictionary_2_TryGetValue_m31740_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Keys()
extern "C" KeyCollection_t5451 * Dictionary_2_get_Keys_m31742_gshared (Dictionary_2_t5448 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m31742(__this, method) (( KeyCollection_t5451 * (*) (Dictionary_2_t5448 *, const MethodInfo*))Dictionary_2_get_Keys_m31742_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Values()
extern "C" ValueCollection_t5455 * Dictionary_2_get_Values_m31744_gshared (Dictionary_2_t5448 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m31744(__this, method) (( ValueCollection_t5455 * (*) (Dictionary_2_t5448 *, const MethodInfo*))Dictionary_2_get_Values_m31744_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m31746_gshared (Dictionary_2_t5448 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m31746(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5448 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m31746_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTValue(System.Object)
extern "C" float Dictionary_2_ToTValue_m31748_gshared (Dictionary_2_t5448 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m31748(__this, ___value, method) (( float (*) (Dictionary_2_t5448 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m31748_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m31750_gshared (Dictionary_2_t5448 * __this, KeyValuePair_2_t5449  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m31750(__this, ___pair, method) (( bool (*) (Dictionary_2_t5448 *, KeyValuePair_2_t5449 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m31750_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetEnumerator()
extern "C" Enumerator_t5453  Dictionary_2_GetEnumerator_m31751_gshared (Dictionary_2_t5448 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m31751(__this, method) (( Enumerator_t5453  (*) (Dictionary_2_t5448 *, const MethodInfo*))Dictionary_2_GetEnumerator_m31751_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Single>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t660  Dictionary_2_U3CCopyToU3Em__0_m31753_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m31753(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m31753_gshared)(__this /* static, unused */, ___key, ___value, method)
