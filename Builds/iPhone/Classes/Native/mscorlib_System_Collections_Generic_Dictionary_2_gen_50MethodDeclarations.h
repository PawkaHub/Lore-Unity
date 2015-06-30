#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>
struct Dictionary_2_t4930;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t6425;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t6431;
// System.Collections.ICollection
struct ICollection_t661;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Int32>
struct KeyCollection_t4933;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Int32>
struct ValueCollection_t4937;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t4910;
// System.Collections.Generic.IDictionary`2<System.Byte,System.Int32>
struct IDictionary_2_t6435;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>[]
struct KeyValuePair_2U5BU5D_t6436;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>>
struct IEnumerator_1_t6437;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3115;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m23140_gshared (Dictionary_2_t4930 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m23140(__this, method) (( void (*) (Dictionary_2_t4930 *, const MethodInfo*))Dictionary_2__ctor_m23140_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23142_gshared (Dictionary_2_t4930 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23142(__this, ___comparer, method) (( void (*) (Dictionary_2_t4930 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23142_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m23144_gshared (Dictionary_2_t4930 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m23144(__this, ___dictionary, method) (( void (*) (Dictionary_2_t4930 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23144_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m23146_gshared (Dictionary_2_t4930 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m23146(__this, ___capacity, method) (( void (*) (Dictionary_2_t4930 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m23146_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23148_gshared (Dictionary_2_t4930 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23148(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t4930 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23148_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m23150_gshared (Dictionary_2_t4930 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m23150(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4930 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2__ctor_m23150_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23152_gshared (Dictionary_2_t4930 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23152(__this, method) (( Object_t* (*) (Dictionary_2_t4930 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23152_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23154_gshared (Dictionary_2_t4930 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23154(__this, method) (( Object_t* (*) (Dictionary_2_t4930 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23154_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m23156_gshared (Dictionary_2_t4930 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m23156(__this, method) (( Object_t * (*) (Dictionary_2_t4930 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m23156_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m23158_gshared (Dictionary_2_t4930 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23158(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4930 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m23158_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m23160_gshared (Dictionary_2_t4930 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23160(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4930 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m23160_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m23162_gshared (Dictionary_2_t4930 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m23162(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4930 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m23162_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m23164_gshared (Dictionary_2_t4930 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m23164(__this, ___key, method) (( bool (*) (Dictionary_2_t4930 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m23164_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m23166_gshared (Dictionary_2_t4930 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m23166(__this, ___key, method) (( void (*) (Dictionary_2_t4930 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m23166_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23168_gshared (Dictionary_2_t4930 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23168(__this, method) (( bool (*) (Dictionary_2_t4930 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23168_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23170_gshared (Dictionary_2_t4930 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23170(__this, method) (( Object_t * (*) (Dictionary_2_t4930 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23170_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23172_gshared (Dictionary_2_t4930 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23172(__this, method) (( bool (*) (Dictionary_2_t4930 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23172_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23174_gshared (Dictionary_2_t4930 * __this, KeyValuePair_2_t4931  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23174(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4930 *, KeyValuePair_2_t4931 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23174_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23176_gshared (Dictionary_2_t4930 * __this, KeyValuePair_2_t4931  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23176(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4930 *, KeyValuePair_2_t4931 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23176_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23178_gshared (Dictionary_2_t4930 * __this, KeyValuePair_2U5BU5D_t6436* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23178(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4930 *, KeyValuePair_2U5BU5D_t6436*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23178_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23180_gshared (Dictionary_2_t4930 * __this, KeyValuePair_2_t4931  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23180(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4930 *, KeyValuePair_2_t4931 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23180_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m23182_gshared (Dictionary_2_t4930 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23182(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4930 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m23182_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23184_gshared (Dictionary_2_t4930 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23184(__this, method) (( Object_t * (*) (Dictionary_2_t4930 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23184_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23186_gshared (Dictionary_2_t4930 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23186(__this, method) (( Object_t* (*) (Dictionary_2_t4930 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23186_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23188_gshared (Dictionary_2_t4930 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23188(__this, method) (( Object_t * (*) (Dictionary_2_t4930 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23188_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m23190_gshared (Dictionary_2_t4930 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m23190(__this, method) (( int32_t (*) (Dictionary_2_t4930 *, const MethodInfo*))Dictionary_2_get_Count_m23190_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m23192_gshared (Dictionary_2_t4930 * __this, uint8_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m23192(__this, ___key, method) (( int32_t (*) (Dictionary_2_t4930 *, uint8_t, const MethodInfo*))Dictionary_2_get_Item_m23192_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m23194_gshared (Dictionary_2_t4930 * __this, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m23194(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4930 *, uint8_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m23194_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m23196_gshared (Dictionary_2_t4930 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m23196(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4930 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m23196_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m23198_gshared (Dictionary_2_t4930 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m23198(__this, ___size, method) (( void (*) (Dictionary_2_t4930 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m23198_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m23200_gshared (Dictionary_2_t4930 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m23200(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4930 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m23200_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t4931  Dictionary_2_make_pair_m23202_gshared (Object_t * __this /* static, unused */, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m23202(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t4931  (*) (Object_t * /* static, unused */, uint8_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m23202_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::pick_key(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_key_m23204_gshared (Object_t * __this /* static, unused */, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m23204(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, uint8_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m23204_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m23206_gshared (Object_t * __this /* static, unused */, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m23206(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, uint8_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m23206_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m23208_gshared (Dictionary_2_t4930 * __this, KeyValuePair_2U5BU5D_t6436* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m23208(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4930 *, KeyValuePair_2U5BU5D_t6436*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m23208_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m23210_gshared (Dictionary_2_t4930 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m23210(__this, method) (( void (*) (Dictionary_2_t4930 *, const MethodInfo*))Dictionary_2_Resize_m23210_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m23212_gshared (Dictionary_2_t4930 * __this, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m23212(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4930 *, uint8_t, int32_t, const MethodInfo*))Dictionary_2_Add_m23212_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m23214_gshared (Dictionary_2_t4930 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m23214(__this, method) (( void (*) (Dictionary_2_t4930 *, const MethodInfo*))Dictionary_2_Clear_m23214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m23216_gshared (Dictionary_2_t4930 * __this, uint8_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m23216(__this, ___key, method) (( bool (*) (Dictionary_2_t4930 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsKey_m23216_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m23218_gshared (Dictionary_2_t4930 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m23218(__this, ___value, method) (( bool (*) (Dictionary_2_t4930 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m23218_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m23220_gshared (Dictionary_2_t4930 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m23220(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4930 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2_GetObjectData_m23220_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m23222_gshared (Dictionary_2_t4930 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m23222(__this, ___sender, method) (( void (*) (Dictionary_2_t4930 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m23222_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m23224_gshared (Dictionary_2_t4930 * __this, uint8_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m23224(__this, ___key, method) (( bool (*) (Dictionary_2_t4930 *, uint8_t, const MethodInfo*))Dictionary_2_Remove_m23224_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m23226_gshared (Dictionary_2_t4930 * __this, uint8_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m23226(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4930 *, uint8_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m23226_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::get_Keys()
extern "C" KeyCollection_t4933 * Dictionary_2_get_Keys_m23228_gshared (Dictionary_2_t4930 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m23228(__this, method) (( KeyCollection_t4933 * (*) (Dictionary_2_t4930 *, const MethodInfo*))Dictionary_2_get_Keys_m23228_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::get_Values()
extern "C" ValueCollection_t4937 * Dictionary_2_get_Values_m23230_gshared (Dictionary_2_t4930 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m23230(__this, method) (( ValueCollection_t4937 * (*) (Dictionary_2_t4930 *, const MethodInfo*))Dictionary_2_get_Values_m23230_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::ToTKey(System.Object)
extern "C" uint8_t Dictionary_2_ToTKey_m23232_gshared (Dictionary_2_t4930 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m23232(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t4930 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m23232_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m23234_gshared (Dictionary_2_t4930 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m23234(__this, ___value, method) (( int32_t (*) (Dictionary_2_t4930 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m23234_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m23236_gshared (Dictionary_2_t4930 * __this, KeyValuePair_2_t4931  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m23236(__this, ___pair, method) (( bool (*) (Dictionary_2_t4930 *, KeyValuePair_2_t4931 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m23236_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::GetEnumerator()
extern "C" Enumerator_t4935  Dictionary_2_GetEnumerator_m23238_gshared (Dictionary_2_t4930 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m23238(__this, method) (( Enumerator_t4935  (*) (Dictionary_2_t4930 *, const MethodInfo*))Dictionary_2_GetEnumerator_m23238_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t660  Dictionary_2_U3CCopyToU3Em__0_m23240_gshared (Object_t * __this /* static, unused */, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m23240(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Object_t * /* static, unused */, uint8_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m23240_gshared)(__this /* static, unused */, ___key, ___value, method)
