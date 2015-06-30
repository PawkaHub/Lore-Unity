#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5225;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1429;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t6431;
// System.Collections.ICollection
struct ICollection_t661;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t5228;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t5232;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4896;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t6605;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t6606;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t6607;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3115;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__17.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m27742_gshared (Dictionary_2_t5225 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m27742(__this, method) (( void (*) (Dictionary_2_t5225 *, const MethodInfo*))Dictionary_2__ctor_m27742_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m27744_gshared (Dictionary_2_t5225 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m27744(__this, ___comparer, method) (( void (*) (Dictionary_2_t5225 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27744_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m27746_gshared (Dictionary_2_t5225 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m27746(__this, ___dictionary, method) (( void (*) (Dictionary_2_t5225 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27746_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m27747_gshared (Dictionary_2_t5225 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m27747(__this, ___capacity, method) (( void (*) (Dictionary_2_t5225 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m27747_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m27749_gshared (Dictionary_2_t5225 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m27749(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t5225 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27749_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m27751_gshared (Dictionary_2_t5225 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m27751(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5225 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2__ctor_m27751_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27753_gshared (Dictionary_2_t5225 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27753(__this, method) (( Object_t* (*) (Dictionary_2_t5225 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27753_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27755_gshared (Dictionary_2_t5225 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27755(__this, method) (( Object_t* (*) (Dictionary_2_t5225 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27755_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m27757_gshared (Dictionary_2_t5225 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m27757(__this, method) (( Object_t * (*) (Dictionary_2_t5225 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m27757_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m27759_gshared (Dictionary_2_t5225 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m27759(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5225 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m27759_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m27761_gshared (Dictionary_2_t5225 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m27761(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5225 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m27761_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m27763_gshared (Dictionary_2_t5225 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m27763(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5225 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m27763_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m27765_gshared (Dictionary_2_t5225 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m27765(__this, ___key, method) (( bool (*) (Dictionary_2_t5225 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m27765_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m27767_gshared (Dictionary_2_t5225 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m27767(__this, ___key, method) (( void (*) (Dictionary_2_t5225 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m27767_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27769_gshared (Dictionary_2_t5225 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27769(__this, method) (( bool (*) (Dictionary_2_t5225 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27769_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27771_gshared (Dictionary_2_t5225 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27771(__this, method) (( Object_t * (*) (Dictionary_2_t5225 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27771_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27773_gshared (Dictionary_2_t5225 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27773(__this, method) (( bool (*) (Dictionary_2_t5225 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27773_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27775_gshared (Dictionary_2_t5225 * __this, KeyValuePair_2_t5226  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27775(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t5225 *, KeyValuePair_2_t5226 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27775_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27777_gshared (Dictionary_2_t5225 * __this, KeyValuePair_2_t5226  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27777(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5225 *, KeyValuePair_2_t5226 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27777_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27779_gshared (Dictionary_2_t5225 * __this, KeyValuePair_2U5BU5D_t6606* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27779(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5225 *, KeyValuePair_2U5BU5D_t6606*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27779_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27781_gshared (Dictionary_2_t5225 * __this, KeyValuePair_2_t5226  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27781(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5225 *, KeyValuePair_2_t5226 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27781_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m27783_gshared (Dictionary_2_t5225 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m27783(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5225 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m27783_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27785_gshared (Dictionary_2_t5225 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27785(__this, method) (( Object_t * (*) (Dictionary_2_t5225 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27785_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27787_gshared (Dictionary_2_t5225 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27787(__this, method) (( Object_t* (*) (Dictionary_2_t5225 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27787_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27789_gshared (Dictionary_2_t5225 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27789(__this, method) (( Object_t * (*) (Dictionary_2_t5225 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27789_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m27791_gshared (Dictionary_2_t5225 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m27791(__this, method) (( int32_t (*) (Dictionary_2_t5225 *, const MethodInfo*))Dictionary_2_get_Count_m27791_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m27793_gshared (Dictionary_2_t5225 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m27793(__this, ___key, method) (( int32_t (*) (Dictionary_2_t5225 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m27793_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m27795_gshared (Dictionary_2_t5225 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m27795(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5225 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m27795_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m27797_gshared (Dictionary_2_t5225 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m27797(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t5225 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m27797_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m27799_gshared (Dictionary_2_t5225 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m27799(__this, ___size, method) (( void (*) (Dictionary_2_t5225 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m27799_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m27801_gshared (Dictionary_2_t5225 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m27801(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5225 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m27801_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5226  Dictionary_2_make_pair_m27803_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m27803(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5226  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m27803_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m27805_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m27805(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m27805_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m27807_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m27807(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m27807_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m27809_gshared (Dictionary_2_t5225 * __this, KeyValuePair_2U5BU5D_t6606* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m27809(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5225 *, KeyValuePair_2U5BU5D_t6606*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m27809_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m27811_gshared (Dictionary_2_t5225 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m27811(__this, method) (( void (*) (Dictionary_2_t5225 *, const MethodInfo*))Dictionary_2_Resize_m27811_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m27813_gshared (Dictionary_2_t5225 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m27813(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5225 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m27813_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m27815_gshared (Dictionary_2_t5225 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m27815(__this, method) (( void (*) (Dictionary_2_t5225 *, const MethodInfo*))Dictionary_2_Clear_m27815_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m27817_gshared (Dictionary_2_t5225 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m27817(__this, ___key, method) (( bool (*) (Dictionary_2_t5225 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m27817_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m27819_gshared (Dictionary_2_t5225 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m27819(__this, ___value, method) (( bool (*) (Dictionary_2_t5225 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m27819_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m27821_gshared (Dictionary_2_t5225 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m27821(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5225 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2_GetObjectData_m27821_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m27823_gshared (Dictionary_2_t5225 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m27823(__this, ___sender, method) (( void (*) (Dictionary_2_t5225 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m27823_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m27825_gshared (Dictionary_2_t5225 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m27825(__this, ___key, method) (( bool (*) (Dictionary_2_t5225 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m27825_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m27827_gshared (Dictionary_2_t5225 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m27827(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t5225 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m27827_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t5228 * Dictionary_2_get_Keys_m27829_gshared (Dictionary_2_t5225 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m27829(__this, method) (( KeyCollection_t5228 * (*) (Dictionary_2_t5225 *, const MethodInfo*))Dictionary_2_get_Keys_m27829_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t5232 * Dictionary_2_get_Values_m27831_gshared (Dictionary_2_t5225 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m27831(__this, method) (( ValueCollection_t5232 * (*) (Dictionary_2_t5225 *, const MethodInfo*))Dictionary_2_get_Values_m27831_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m27833_gshared (Dictionary_2_t5225 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m27833(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5225 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m27833_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m27835_gshared (Dictionary_2_t5225 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m27835(__this, ___value, method) (( int32_t (*) (Dictionary_2_t5225 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m27835_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m27837_gshared (Dictionary_2_t5225 * __this, KeyValuePair_2_t5226  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m27837(__this, ___pair, method) (( bool (*) (Dictionary_2_t5225 *, KeyValuePair_2_t5226 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m27837_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t5230  Dictionary_2_GetEnumerator_m27839_gshared (Dictionary_2_t5225 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m27839(__this, method) (( Enumerator_t5230  (*) (Dictionary_2_t5225 *, const MethodInfo*))Dictionary_2_GetEnumerator_m27839_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t660  Dictionary_2_U3CCopyToU3Em__0_m27841_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m27841(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m27841_gshared)(__this /* static, unused */, ___key, ___value, method)
