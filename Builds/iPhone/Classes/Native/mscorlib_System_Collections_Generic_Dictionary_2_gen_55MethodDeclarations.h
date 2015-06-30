#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t5575;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t6790;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1429;
// System.Collections.ICollection
struct ICollection_t661;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_t5576;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>
struct ValueCollection_t5580;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t5573;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Object>
struct IDictionary_2_t5567;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>[]
struct KeyValuePair_2U5BU5D_t6791;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct IEnumerator_1_t6792;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3115;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__28.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m33191_gshared (Dictionary_2_t5575 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m33191(__this, method) (( void (*) (Dictionary_2_t5575 *, const MethodInfo*))Dictionary_2__ctor_m33191_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m33192_gshared (Dictionary_2_t5575 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m33192(__this, ___comparer, method) (( void (*) (Dictionary_2_t5575 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33192_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m33193_gshared (Dictionary_2_t5575 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m33193(__this, ___dictionary, method) (( void (*) (Dictionary_2_t5575 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33193_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m33194_gshared (Dictionary_2_t5575 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m33194(__this, ___capacity, method) (( void (*) (Dictionary_2_t5575 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m33194_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m33195_gshared (Dictionary_2_t5575 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m33195(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t5575 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33195_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m33196_gshared (Dictionary_2_t5575 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m33196(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5575 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2__ctor_m33196_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33197_gshared (Dictionary_2_t5575 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33197(__this, method) (( Object_t* (*) (Dictionary_2_t5575 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33197_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33198_gshared (Dictionary_2_t5575 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33198(__this, method) (( Object_t* (*) (Dictionary_2_t5575 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33198_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m33199_gshared (Dictionary_2_t5575 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m33199(__this, method) (( Object_t * (*) (Dictionary_2_t5575 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m33199_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m33200_gshared (Dictionary_2_t5575 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m33200(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5575 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m33200_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m33201_gshared (Dictionary_2_t5575 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m33201(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5575 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m33201_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m33202_gshared (Dictionary_2_t5575 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m33202(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5575 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m33202_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m33203_gshared (Dictionary_2_t5575 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m33203(__this, ___key, method) (( bool (*) (Dictionary_2_t5575 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m33203_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m33204_gshared (Dictionary_2_t5575 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m33204(__this, ___key, method) (( void (*) (Dictionary_2_t5575 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m33204_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33205_gshared (Dictionary_2_t5575 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33205(__this, method) (( bool (*) (Dictionary_2_t5575 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33205_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33206_gshared (Dictionary_2_t5575 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33206(__this, method) (( Object_t * (*) (Dictionary_2_t5575 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33206_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33207_gshared (Dictionary_2_t5575 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33207(__this, method) (( bool (*) (Dictionary_2_t5575 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33207_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33208_gshared (Dictionary_2_t5575 * __this, KeyValuePair_2_t5570  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33208(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t5575 *, KeyValuePair_2_t5570 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33208_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33209_gshared (Dictionary_2_t5575 * __this, KeyValuePair_2_t5570  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33209(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5575 *, KeyValuePair_2_t5570 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33209_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33210_gshared (Dictionary_2_t5575 * __this, KeyValuePair_2U5BU5D_t6791* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33210(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5575 *, KeyValuePair_2U5BU5D_t6791*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33210_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33211_gshared (Dictionary_2_t5575 * __this, KeyValuePair_2_t5570  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33211(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5575 *, KeyValuePair_2_t5570 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33211_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m33212_gshared (Dictionary_2_t5575 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m33212(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5575 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m33212_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33213_gshared (Dictionary_2_t5575 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33213(__this, method) (( Object_t * (*) (Dictionary_2_t5575 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33213_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33214_gshared (Dictionary_2_t5575 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33214(__this, method) (( Object_t* (*) (Dictionary_2_t5575 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33214_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33215_gshared (Dictionary_2_t5575 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33215(__this, method) (( Object_t * (*) (Dictionary_2_t5575 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33215_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m33216_gshared (Dictionary_2_t5575 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m33216(__this, method) (( int32_t (*) (Dictionary_2_t5575 *, const MethodInfo*))Dictionary_2_get_Count_m33216_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m33217_gshared (Dictionary_2_t5575 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m33217(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5575 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m33217_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m33218_gshared (Dictionary_2_t5575 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m33218(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5575 *, int64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m33218_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m33219_gshared (Dictionary_2_t5575 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m33219(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t5575 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m33219_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m33220_gshared (Dictionary_2_t5575 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m33220(__this, ___size, method) (( void (*) (Dictionary_2_t5575 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m33220_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m33221_gshared (Dictionary_2_t5575 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m33221(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5575 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m33221_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5570  Dictionary_2_make_pair_m33222_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m33222(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5570  (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m33222_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m33223_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m33223(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m33223_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m33224_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m33224(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m33224_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m33225_gshared (Dictionary_2_t5575 * __this, KeyValuePair_2U5BU5D_t6791* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m33225(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5575 *, KeyValuePair_2U5BU5D_t6791*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m33225_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m33226_gshared (Dictionary_2_t5575 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m33226(__this, method) (( void (*) (Dictionary_2_t5575 *, const MethodInfo*))Dictionary_2_Resize_m33226_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m33227_gshared (Dictionary_2_t5575 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m33227(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5575 *, int64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m33227_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m33228_gshared (Dictionary_2_t5575 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m33228(__this, method) (( void (*) (Dictionary_2_t5575 *, const MethodInfo*))Dictionary_2_Clear_m33228_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m33229_gshared (Dictionary_2_t5575 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m33229(__this, ___key, method) (( bool (*) (Dictionary_2_t5575 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m33229_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m33230_gshared (Dictionary_2_t5575 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m33230(__this, ___value, method) (( bool (*) (Dictionary_2_t5575 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m33230_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m33231_gshared (Dictionary_2_t5575 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m33231(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5575 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2_GetObjectData_m33231_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m33232_gshared (Dictionary_2_t5575 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m33232(__this, ___sender, method) (( void (*) (Dictionary_2_t5575 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m33232_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m33233_gshared (Dictionary_2_t5575 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m33233(__this, ___key, method) (( bool (*) (Dictionary_2_t5575 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m33233_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m33234_gshared (Dictionary_2_t5575 * __this, int64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m33234(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t5575 *, int64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m33234_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Keys()
extern "C" KeyCollection_t5576 * Dictionary_2_get_Keys_m33235_gshared (Dictionary_2_t5575 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m33235(__this, method) (( KeyCollection_t5576 * (*) (Dictionary_2_t5575 *, const MethodInfo*))Dictionary_2_get_Keys_m33235_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Values()
extern "C" ValueCollection_t5580 * Dictionary_2_get_Values_m33236_gshared (Dictionary_2_t5575 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m33236(__this, method) (( ValueCollection_t5580 * (*) (Dictionary_2_t5575 *, const MethodInfo*))Dictionary_2_get_Values_m33236_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m33237_gshared (Dictionary_2_t5575 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m33237(__this, ___key, method) (( int64_t (*) (Dictionary_2_t5575 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m33237_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m33238_gshared (Dictionary_2_t5575 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m33238(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t5575 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m33238_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m33239_gshared (Dictionary_2_t5575 * __this, KeyValuePair_2_t5570  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m33239(__this, ___pair, method) (( bool (*) (Dictionary_2_t5575 *, KeyValuePair_2_t5570 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m33239_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetEnumerator()
extern "C" Enumerator_t5578  Dictionary_2_GetEnumerator_m33240_gshared (Dictionary_2_t5575 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m33240(__this, method) (( Enumerator_t5578  (*) (Dictionary_2_t5575 *, const MethodInfo*))Dictionary_2_GetEnumerator_m33240_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t660  Dictionary_2_U3CCopyToU3Em__0_m33241_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m33241(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m33241_gshared)(__this /* static, unused */, ___key, ___value, method)
