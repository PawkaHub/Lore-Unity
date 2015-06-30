#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t6216;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1429;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t3178;
// System.Collections.ICollection
struct ICollection_t661;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t6217;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t6221;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4896;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t7137;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t7138;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct IEnumerator_1_t7139;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3115;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__53.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m42690_gshared (Dictionary_2_t6216 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m42690(__this, method) (( void (*) (Dictionary_2_t6216 *, const MethodInfo*))Dictionary_2__ctor_m42690_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m42692_gshared (Dictionary_2_t6216 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m42692(__this, ___comparer, method) (( void (*) (Dictionary_2_t6216 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m42692_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m42694_gshared (Dictionary_2_t6216 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m42694(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6216 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m42694_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m42696_gshared (Dictionary_2_t6216 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m42696(__this, ___capacity, method) (( void (*) (Dictionary_2_t6216 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m42696_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m42698_gshared (Dictionary_2_t6216 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m42698(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6216 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m42698_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m42700_gshared (Dictionary_2_t6216 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m42700(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6216 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2__ctor_m42700_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m42702_gshared (Dictionary_2_t6216 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m42702(__this, method) (( Object_t* (*) (Dictionary_2_t6216 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m42702_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m42704_gshared (Dictionary_2_t6216 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m42704(__this, method) (( Object_t* (*) (Dictionary_2_t6216 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m42704_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m42706_gshared (Dictionary_2_t6216 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m42706(__this, method) (( Object_t * (*) (Dictionary_2_t6216 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m42706_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m42708_gshared (Dictionary_2_t6216 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m42708(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6216 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m42708_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m42710_gshared (Dictionary_2_t6216 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m42710(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6216 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m42710_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m42712_gshared (Dictionary_2_t6216 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m42712(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6216 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m42712_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m42714_gshared (Dictionary_2_t6216 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m42714(__this, ___key, method) (( bool (*) (Dictionary_2_t6216 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m42714_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m42716_gshared (Dictionary_2_t6216 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m42716(__this, ___key, method) (( void (*) (Dictionary_2_t6216 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m42716_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m42718_gshared (Dictionary_2_t6216 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m42718(__this, method) (( bool (*) (Dictionary_2_t6216 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m42718_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m42720_gshared (Dictionary_2_t6216 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m42720(__this, method) (( Object_t * (*) (Dictionary_2_t6216 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m42720_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m42722_gshared (Dictionary_2_t6216 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m42722(__this, method) (( bool (*) (Dictionary_2_t6216 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m42722_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m42724_gshared (Dictionary_2_t6216 * __this, KeyValuePair_2_t6192  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m42724(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6216 *, KeyValuePair_2_t6192 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m42724_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m42726_gshared (Dictionary_2_t6216 * __this, KeyValuePair_2_t6192  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m42726(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6216 *, KeyValuePair_2_t6192 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m42726_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m42728_gshared (Dictionary_2_t6216 * __this, KeyValuePair_2U5BU5D_t7138* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m42728(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6216 *, KeyValuePair_2U5BU5D_t7138*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m42728_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m42730_gshared (Dictionary_2_t6216 * __this, KeyValuePair_2_t6192  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m42730(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6216 *, KeyValuePair_2_t6192 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m42730_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m42732_gshared (Dictionary_2_t6216 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m42732(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6216 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m42732_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m42734_gshared (Dictionary_2_t6216 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m42734(__this, method) (( Object_t * (*) (Dictionary_2_t6216 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m42734_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m42736_gshared (Dictionary_2_t6216 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m42736(__this, method) (( Object_t* (*) (Dictionary_2_t6216 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m42736_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m42738_gshared (Dictionary_2_t6216 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m42738(__this, method) (( Object_t * (*) (Dictionary_2_t6216 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m42738_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m42740_gshared (Dictionary_2_t6216 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m42740(__this, method) (( int32_t (*) (Dictionary_2_t6216 *, const MethodInfo*))Dictionary_2_get_Count_m42740_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern "C" KeyValuePair_2_t1591  Dictionary_2_get_Item_m42742_gshared (Dictionary_2_t6216 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m42742(__this, ___key, method) (( KeyValuePair_2_t1591  (*) (Dictionary_2_t6216 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m42742_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m42744_gshared (Dictionary_2_t6216 * __this, Object_t * ___key, KeyValuePair_2_t1591  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m42744(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6216 *, Object_t *, KeyValuePair_2_t1591 , const MethodInfo*))Dictionary_2_set_Item_m42744_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m42746_gshared (Dictionary_2_t6216 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m42746(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6216 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m42746_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m42748_gshared (Dictionary_2_t6216 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m42748(__this, ___size, method) (( void (*) (Dictionary_2_t6216 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m42748_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m42750_gshared (Dictionary_2_t6216 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m42750(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6216 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m42750_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6192  Dictionary_2_make_pair_m42752_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t1591  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m42752(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6192  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t1591 , const MethodInfo*))Dictionary_2_make_pair_m42752_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m42754_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t1591  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m42754(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t1591 , const MethodInfo*))Dictionary_2_pick_key_m42754_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t1591  Dictionary_2_pick_value_m42756_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t1591  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m42756(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1591  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t1591 , const MethodInfo*))Dictionary_2_pick_value_m42756_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m42758_gshared (Dictionary_2_t6216 * __this, KeyValuePair_2U5BU5D_t7138* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m42758(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6216 *, KeyValuePair_2U5BU5D_t7138*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m42758_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern "C" void Dictionary_2_Resize_m42760_gshared (Dictionary_2_t6216 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m42760(__this, method) (( void (*) (Dictionary_2_t6216 *, const MethodInfo*))Dictionary_2_Resize_m42760_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m42762_gshared (Dictionary_2_t6216 * __this, Object_t * ___key, KeyValuePair_2_t1591  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m42762(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6216 *, Object_t *, KeyValuePair_2_t1591 , const MethodInfo*))Dictionary_2_Add_m42762_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m42764_gshared (Dictionary_2_t6216 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m42764(__this, method) (( void (*) (Dictionary_2_t6216 *, const MethodInfo*))Dictionary_2_Clear_m42764_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m42766_gshared (Dictionary_2_t6216 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m42766(__this, ___key, method) (( bool (*) (Dictionary_2_t6216 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m42766_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m42768_gshared (Dictionary_2_t6216 * __this, KeyValuePair_2_t1591  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m42768(__this, ___value, method) (( bool (*) (Dictionary_2_t6216 *, KeyValuePair_2_t1591 , const MethodInfo*))Dictionary_2_ContainsValue_m42768_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m42770_gshared (Dictionary_2_t6216 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m42770(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6216 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2_GetObjectData_m42770_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m42772_gshared (Dictionary_2_t6216 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m42772(__this, ___sender, method) (( void (*) (Dictionary_2_t6216 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m42772_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m42774_gshared (Dictionary_2_t6216 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m42774(__this, ___key, method) (( bool (*) (Dictionary_2_t6216 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m42774_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m42776_gshared (Dictionary_2_t6216 * __this, Object_t * ___key, KeyValuePair_2_t1591 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m42776(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6216 *, Object_t *, KeyValuePair_2_t1591 *, const MethodInfo*))Dictionary_2_TryGetValue_m42776_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t6217 * Dictionary_2_get_Keys_m42778_gshared (Dictionary_2_t6216 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m42778(__this, method) (( KeyCollection_t6217 * (*) (Dictionary_2_t6216 *, const MethodInfo*))Dictionary_2_get_Keys_m42778_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t6221 * Dictionary_2_get_Values_m42780_gshared (Dictionary_2_t6216 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m42780(__this, method) (( ValueCollection_t6221 * (*) (Dictionary_2_t6216 *, const MethodInfo*))Dictionary_2_get_Values_m42780_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m42782_gshared (Dictionary_2_t6216 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m42782(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6216 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m42782_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t1591  Dictionary_2_ToTValue_m42784_gshared (Dictionary_2_t6216 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m42784(__this, ___value, method) (( KeyValuePair_2_t1591  (*) (Dictionary_2_t6216 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m42784_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m42786_gshared (Dictionary_2_t6216 * __this, KeyValuePair_2_t6192  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m42786(__this, ___pair, method) (( bool (*) (Dictionary_2_t6216 *, KeyValuePair_2_t6192 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m42786_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t6219  Dictionary_2_GetEnumerator_m42788_gshared (Dictionary_2_t6216 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m42788(__this, method) (( Enumerator_t6219  (*) (Dictionary_2_t6216 *, const MethodInfo*))Dictionary_2_GetEnumerator_m42788_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t660  Dictionary_2_U3CCopyToU3Em__0_m42790_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t1591  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m42790(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t1591 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m42790_gshared)(__this /* static, unused */, ___key, ___value, method)
