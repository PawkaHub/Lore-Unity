﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t849;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t6431;
// System.Collections.ICollection
struct ICollection_t661;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t5425;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t5429;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5169;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t6731;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t6732;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t6733;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3115;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_29.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__23.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m5375_gshared (Dictionary_2_t849 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m5375(__this, method) (( void (*) (Dictionary_2_t849 *, const MethodInfo*))Dictionary_2__ctor_m5375_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m31227_gshared (Dictionary_2_t849 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m31227(__this, ___comparer, method) (( void (*) (Dictionary_2_t849 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m31227_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m31228_gshared (Dictionary_2_t849 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m31228(__this, ___dictionary, method) (( void (*) (Dictionary_2_t849 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m31228_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m31229_gshared (Dictionary_2_t849 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m31229(__this, ___capacity, method) (( void (*) (Dictionary_2_t849 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m31229_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m31230_gshared (Dictionary_2_t849 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m31230(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t849 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m31230_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m31231_gshared (Dictionary_2_t849 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m31231(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t849 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2__ctor_m31231_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31232_gshared (Dictionary_2_t849 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31232(__this, method) (( Object_t* (*) (Dictionary_2_t849 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31232_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31233_gshared (Dictionary_2_t849 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31233(__this, method) (( Object_t* (*) (Dictionary_2_t849 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31233_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m31234_gshared (Dictionary_2_t849 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m31234(__this, method) (( Object_t * (*) (Dictionary_2_t849 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m31234_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m31235_gshared (Dictionary_2_t849 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m31235(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t849 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m31235_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m31236_gshared (Dictionary_2_t849 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m31236(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t849 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m31236_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m31237_gshared (Dictionary_2_t849 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m31237(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t849 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m31237_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m31238_gshared (Dictionary_2_t849 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m31238(__this, ___key, method) (( bool (*) (Dictionary_2_t849 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m31238_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m31239_gshared (Dictionary_2_t849 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m31239(__this, ___key, method) (( void (*) (Dictionary_2_t849 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m31239_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31240_gshared (Dictionary_2_t849 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31240(__this, method) (( bool (*) (Dictionary_2_t849 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31240_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31241_gshared (Dictionary_2_t849 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31241(__this, method) (( Object_t * (*) (Dictionary_2_t849 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31241_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31242_gshared (Dictionary_2_t849 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31242(__this, method) (( bool (*) (Dictionary_2_t849 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31242_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31243_gshared (Dictionary_2_t849 * __this, KeyValuePair_2_t5423  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31243(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t849 *, KeyValuePair_2_t5423 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31243_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31244_gshared (Dictionary_2_t849 * __this, KeyValuePair_2_t5423  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31244(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t849 *, KeyValuePair_2_t5423 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31244_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31245_gshared (Dictionary_2_t849 * __this, KeyValuePair_2U5BU5D_t6732* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31245(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t849 *, KeyValuePair_2U5BU5D_t6732*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31245_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31246_gshared (Dictionary_2_t849 * __this, KeyValuePair_2_t5423  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31246(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t849 *, KeyValuePair_2_t5423 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31246_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m31247_gshared (Dictionary_2_t849 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m31247(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t849 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m31247_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31248_gshared (Dictionary_2_t849 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31248(__this, method) (( Object_t * (*) (Dictionary_2_t849 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31248_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31249_gshared (Dictionary_2_t849 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31249(__this, method) (( Object_t* (*) (Dictionary_2_t849 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31249_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31250_gshared (Dictionary_2_t849 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31250(__this, method) (( Object_t * (*) (Dictionary_2_t849 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31250_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m31251_gshared (Dictionary_2_t849 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m31251(__this, method) (( int32_t (*) (Dictionary_2_t849 *, const MethodInfo*))Dictionary_2_get_Count_m31251_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m31252_gshared (Dictionary_2_t849 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m31252(__this, ___key, method) (( int32_t (*) (Dictionary_2_t849 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m31252_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m31253_gshared (Dictionary_2_t849 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m31253(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t849 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m31253_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m31254_gshared (Dictionary_2_t849 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m31254(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t849 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m31254_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m31255_gshared (Dictionary_2_t849 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m31255(__this, ___size, method) (( void (*) (Dictionary_2_t849 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m31255_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m31256_gshared (Dictionary_2_t849 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m31256(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t849 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m31256_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5423  Dictionary_2_make_pair_m31257_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m31257(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5423  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m31257_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m31258_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m31258(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m31258_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m31259_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m31259(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m31259_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m31260_gshared (Dictionary_2_t849 * __this, KeyValuePair_2U5BU5D_t6732* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m31260(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t849 *, KeyValuePair_2U5BU5D_t6732*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m31260_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m31261_gshared (Dictionary_2_t849 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m31261(__this, method) (( void (*) (Dictionary_2_t849 *, const MethodInfo*))Dictionary_2_Resize_m31261_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m31262_gshared (Dictionary_2_t849 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m31262(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t849 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m31262_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m31263_gshared (Dictionary_2_t849 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m31263(__this, method) (( void (*) (Dictionary_2_t849 *, const MethodInfo*))Dictionary_2_Clear_m31263_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m31264_gshared (Dictionary_2_t849 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m31264(__this, ___key, method) (( bool (*) (Dictionary_2_t849 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m31264_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m31265_gshared (Dictionary_2_t849 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m31265(__this, ___value, method) (( bool (*) (Dictionary_2_t849 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m31265_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m31266_gshared (Dictionary_2_t849 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m31266(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t849 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2_GetObjectData_m31266_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m31267_gshared (Dictionary_2_t849 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m31267(__this, ___sender, method) (( void (*) (Dictionary_2_t849 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m31267_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m31268_gshared (Dictionary_2_t849 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m31268(__this, ___key, method) (( bool (*) (Dictionary_2_t849 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m31268_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m31269_gshared (Dictionary_2_t849 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m31269(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t849 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m31269_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t5425 * Dictionary_2_get_Keys_m31270_gshared (Dictionary_2_t849 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m31270(__this, method) (( KeyCollection_t5425 * (*) (Dictionary_2_t849 *, const MethodInfo*))Dictionary_2_get_Keys_m31270_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t5429 * Dictionary_2_get_Values_m31271_gshared (Dictionary_2_t849 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m31271(__this, method) (( ValueCollection_t5429 * (*) (Dictionary_2_t849 *, const MethodInfo*))Dictionary_2_get_Values_m31271_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m31272_gshared (Dictionary_2_t849 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m31272(__this, ___key, method) (( int32_t (*) (Dictionary_2_t849 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m31272_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m31273_gshared (Dictionary_2_t849 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m31273(__this, ___value, method) (( int32_t (*) (Dictionary_2_t849 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m31273_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m31274_gshared (Dictionary_2_t849 * __this, KeyValuePair_2_t5423  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m31274(__this, ___pair, method) (( bool (*) (Dictionary_2_t849 *, KeyValuePair_2_t5423 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m31274_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t5427  Dictionary_2_GetEnumerator_m31275_gshared (Dictionary_2_t849 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m31275(__this, method) (( Enumerator_t5427  (*) (Dictionary_2_t849 *, const MethodInfo*))Dictionary_2_GetEnumerator_m31275_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t660  Dictionary_2_U3CCopyToU3Em__0_m31276_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m31276(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m31276_gshared)(__this /* static, unused */, ___key, ___value, method)