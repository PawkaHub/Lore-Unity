#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t5698;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1429;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t6425;
// System.Collections.ICollection
struct ICollection_t661;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t5699;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t5703;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4896;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t6826;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t6827;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t6828;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3115;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_36.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__31.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m34680_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m34680(__this, method) (( void (*) (Dictionary_2_t5698 *, const MethodInfo*))Dictionary_2__ctor_m34680_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m34681_gshared (Dictionary_2_t5698 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m34681(__this, ___comparer, method) (( void (*) (Dictionary_2_t5698 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m34681_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m34683_gshared (Dictionary_2_t5698 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m34683(__this, ___dictionary, method) (( void (*) (Dictionary_2_t5698 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m34683_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m34685_gshared (Dictionary_2_t5698 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m34685(__this, ___capacity, method) (( void (*) (Dictionary_2_t5698 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m34685_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m34687_gshared (Dictionary_2_t5698 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m34687(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t5698 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m34687_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m34689_gshared (Dictionary_2_t5698 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m34689(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5698 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2__ctor_m34689_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m34691_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m34691(__this, method) (( Object_t* (*) (Dictionary_2_t5698 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m34691_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m34693_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m34693(__this, method) (( Object_t* (*) (Dictionary_2_t5698 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m34693_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m34695_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m34695(__this, method) (( Object_t * (*) (Dictionary_2_t5698 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m34695_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m34697_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m34697(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5698 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m34697_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m34699_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m34699(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5698 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m34699_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m34701_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m34701(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5698 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m34701_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m34703_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m34703(__this, ___key, method) (( bool (*) (Dictionary_2_t5698 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m34703_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m34705_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m34705(__this, ___key, method) (( void (*) (Dictionary_2_t5698 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m34705_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m34707_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m34707(__this, method) (( bool (*) (Dictionary_2_t5698 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m34707_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m34709_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m34709(__this, method) (( Object_t * (*) (Dictionary_2_t5698 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m34709_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m34711_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m34711(__this, method) (( bool (*) (Dictionary_2_t5698 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m34711_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m34713_gshared (Dictionary_2_t5698 * __this, KeyValuePair_2_t5678  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m34713(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t5698 *, KeyValuePair_2_t5678 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m34713_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m34715_gshared (Dictionary_2_t5698 * __this, KeyValuePair_2_t5678  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m34715(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5698 *, KeyValuePair_2_t5678 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m34715_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m34717_gshared (Dictionary_2_t5698 * __this, KeyValuePair_2U5BU5D_t6827* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m34717(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5698 *, KeyValuePair_2U5BU5D_t6827*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m34717_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m34719_gshared (Dictionary_2_t5698 * __this, KeyValuePair_2_t5678  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m34719(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5698 *, KeyValuePair_2_t5678 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m34719_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m34721_gshared (Dictionary_2_t5698 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m34721(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5698 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m34721_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m34723_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m34723(__this, method) (( Object_t * (*) (Dictionary_2_t5698 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m34723_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m34725_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m34725(__this, method) (( Object_t* (*) (Dictionary_2_t5698 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m34725_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m34727_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m34727(__this, method) (( Object_t * (*) (Dictionary_2_t5698 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m34727_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m34729_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m34729(__this, method) (( int32_t (*) (Dictionary_2_t5698 *, const MethodInfo*))Dictionary_2_get_Count_m34729_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m34731_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m34731(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t5698 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m34731_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m34733_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m34733(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5698 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m34733_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m34735_gshared (Dictionary_2_t5698 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m34735(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t5698 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m34735_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m34737_gshared (Dictionary_2_t5698 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m34737(__this, ___size, method) (( void (*) (Dictionary_2_t5698 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m34737_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m34739_gshared (Dictionary_2_t5698 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m34739(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5698 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m34739_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5678  Dictionary_2_make_pair_m34741_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m34741(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5678  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m34741_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m34743_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m34743(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m34743_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m34745_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m34745(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m34745_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m34747_gshared (Dictionary_2_t5698 * __this, KeyValuePair_2U5BU5D_t6827* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m34747(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5698 *, KeyValuePair_2U5BU5D_t6827*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m34747_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m34749_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m34749(__this, method) (( void (*) (Dictionary_2_t5698 *, const MethodInfo*))Dictionary_2_Resize_m34749_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m34751_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m34751(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5698 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m34751_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m34753_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m34753(__this, method) (( void (*) (Dictionary_2_t5698 *, const MethodInfo*))Dictionary_2_Clear_m34753_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m34755_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m34755(__this, ___key, method) (( bool (*) (Dictionary_2_t5698 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m34755_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m34757_gshared (Dictionary_2_t5698 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m34757(__this, ___value, method) (( bool (*) (Dictionary_2_t5698 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m34757_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m34759_gshared (Dictionary_2_t5698 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m34759(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5698 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2_GetObjectData_m34759_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m34761_gshared (Dictionary_2_t5698 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m34761(__this, ___sender, method) (( void (*) (Dictionary_2_t5698 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m34761_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m34763_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m34763(__this, ___key, method) (( bool (*) (Dictionary_2_t5698 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m34763_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m34765_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m34765(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t5698 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m34765_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t5699 * Dictionary_2_get_Keys_m34767_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m34767(__this, method) (( KeyCollection_t5699 * (*) (Dictionary_2_t5698 *, const MethodInfo*))Dictionary_2_get_Keys_m34767_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t5703 * Dictionary_2_get_Values_m34769_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m34769(__this, method) (( ValueCollection_t5703 * (*) (Dictionary_2_t5698 *, const MethodInfo*))Dictionary_2_get_Values_m34769_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m34771_gshared (Dictionary_2_t5698 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m34771(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5698 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m34771_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m34773_gshared (Dictionary_2_t5698 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m34773(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t5698 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m34773_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m34775_gshared (Dictionary_2_t5698 * __this, KeyValuePair_2_t5678  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m34775(__this, ___pair, method) (( bool (*) (Dictionary_2_t5698 *, KeyValuePair_2_t5678 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m34775_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t5701  Dictionary_2_GetEnumerator_m34777_gshared (Dictionary_2_t5698 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m34777(__this, method) (( Enumerator_t5701  (*) (Dictionary_2_t5698 *, const MethodInfo*))Dictionary_2_GetEnumerator_m34777_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t660  Dictionary_2_U3CCopyToU3Em__0_m34779_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m34779(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m34779_gshared)(__this /* static, unused */, ___key, ___value, method)
