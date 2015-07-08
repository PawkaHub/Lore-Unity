#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t7296;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t10355;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9880;
// System.Collections.ICollection
struct ICollection_t749;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>
struct KeyCollection_t7297;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>
struct ValueCollection_t7301;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t7138;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>
struct IDictionary_2_t7291;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>[]
struct KeyValuePair_2U5BU5D_t10405;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>
struct IEnumerator_1_t10406;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t4200;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__37.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m40694_gshared (Dictionary_2_t7296 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m40694(__this, method) (( void (*) (Dictionary_2_t7296 *, const MethodInfo*))Dictionary_2__ctor_m40694_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m40695_gshared (Dictionary_2_t7296 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m40695(__this, ___comparer, method) (( void (*) (Dictionary_2_t7296 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m40695_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m40696_gshared (Dictionary_2_t7296 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m40696(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7296 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m40696_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m40697_gshared (Dictionary_2_t7296 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m40697(__this, ___capacity, method) (( void (*) (Dictionary_2_t7296 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m40697_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m40698_gshared (Dictionary_2_t7296 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m40698(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7296 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m40698_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m40699_gshared (Dictionary_2_t7296 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m40699(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7296 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2__ctor_m40699_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m40700_gshared (Dictionary_2_t7296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m40700(__this, method) (( Object_t* (*) (Dictionary_2_t7296 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m40700_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m40701_gshared (Dictionary_2_t7296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m40701(__this, method) (( Object_t* (*) (Dictionary_2_t7296 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m40701_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m40702_gshared (Dictionary_2_t7296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m40702(__this, method) (( Object_t * (*) (Dictionary_2_t7296 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m40702_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m40703_gshared (Dictionary_2_t7296 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m40703(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7296 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m40703_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m40704_gshared (Dictionary_2_t7296 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m40704(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7296 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m40704_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m40705_gshared (Dictionary_2_t7296 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m40705(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7296 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m40705_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m40706_gshared (Dictionary_2_t7296 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m40706(__this, ___key, method) (( bool (*) (Dictionary_2_t7296 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m40706_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m40707_gshared (Dictionary_2_t7296 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m40707(__this, ___key, method) (( void (*) (Dictionary_2_t7296 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m40707_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m40708_gshared (Dictionary_2_t7296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m40708(__this, method) (( bool (*) (Dictionary_2_t7296 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m40708_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m40709_gshared (Dictionary_2_t7296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m40709(__this, method) (( Object_t * (*) (Dictionary_2_t7296 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m40709_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m40710_gshared (Dictionary_2_t7296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m40710(__this, method) (( bool (*) (Dictionary_2_t7296 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m40710_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m40711_gshared (Dictionary_2_t7296 * __this, KeyValuePair_2_t7293  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m40711(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7296 *, KeyValuePair_2_t7293 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m40711_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m40712_gshared (Dictionary_2_t7296 * __this, KeyValuePair_2_t7293  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m40712(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7296 *, KeyValuePair_2_t7293 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m40712_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m40713_gshared (Dictionary_2_t7296 * __this, KeyValuePair_2U5BU5D_t10405* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m40713(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7296 *, KeyValuePair_2U5BU5D_t10405*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m40713_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m40714_gshared (Dictionary_2_t7296 * __this, KeyValuePair_2_t7293  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m40714(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7296 *, KeyValuePair_2_t7293 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m40714_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m40715_gshared (Dictionary_2_t7296 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m40715(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7296 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m40715_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m40716_gshared (Dictionary_2_t7296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m40716(__this, method) (( Object_t * (*) (Dictionary_2_t7296 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m40716_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m40717_gshared (Dictionary_2_t7296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m40717(__this, method) (( Object_t* (*) (Dictionary_2_t7296 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m40717_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m40718_gshared (Dictionary_2_t7296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m40718(__this, method) (( Object_t * (*) (Dictionary_2_t7296 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m40718_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m40719_gshared (Dictionary_2_t7296 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m40719(__this, method) (( int32_t (*) (Dictionary_2_t7296 *, const MethodInfo*))Dictionary_2_get_Count_m40719_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m40720_gshared (Dictionary_2_t7296 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m40720(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t7296 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m40720_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m40721_gshared (Dictionary_2_t7296 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m40721(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7296 *, int64_t, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m40721_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m40722_gshared (Dictionary_2_t7296 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m40722(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7296 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m40722_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m40723_gshared (Dictionary_2_t7296 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m40723(__this, ___size, method) (( void (*) (Dictionary_2_t7296 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m40723_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m40724_gshared (Dictionary_2_t7296 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m40724(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7296 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m40724_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7293  Dictionary_2_make_pair_m40725_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m40725(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7293  (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m40725_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m40726_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m40726(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m40726_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m40727_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m40727(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m40727_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m40728_gshared (Dictionary_2_t7296 * __this, KeyValuePair_2U5BU5D_t10405* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m40728(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7296 *, KeyValuePair_2U5BU5D_t10405*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m40728_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m40729_gshared (Dictionary_2_t7296 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m40729(__this, method) (( void (*) (Dictionary_2_t7296 *, const MethodInfo*))Dictionary_2_Resize_m40729_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m40730_gshared (Dictionary_2_t7296 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m40730(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7296 *, int64_t, uint8_t, const MethodInfo*))Dictionary_2_Add_m40730_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m40731_gshared (Dictionary_2_t7296 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m40731(__this, method) (( void (*) (Dictionary_2_t7296 *, const MethodInfo*))Dictionary_2_Clear_m40731_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m40732_gshared (Dictionary_2_t7296 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m40732(__this, ___key, method) (( bool (*) (Dictionary_2_t7296 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m40732_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m40733_gshared (Dictionary_2_t7296 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m40733(__this, ___value, method) (( bool (*) (Dictionary_2_t7296 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m40733_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m40734_gshared (Dictionary_2_t7296 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m40734(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7296 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2_GetObjectData_m40734_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m40735_gshared (Dictionary_2_t7296 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m40735(__this, ___sender, method) (( void (*) (Dictionary_2_t7296 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m40735_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m40736_gshared (Dictionary_2_t7296 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m40736(__this, ___key, method) (( bool (*) (Dictionary_2_t7296 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m40736_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m40737_gshared (Dictionary_2_t7296 * __this, int64_t ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m40737(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7296 *, int64_t, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m40737_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Keys()
extern "C" KeyCollection_t7297 * Dictionary_2_get_Keys_m40738_gshared (Dictionary_2_t7296 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m40738(__this, method) (( KeyCollection_t7297 * (*) (Dictionary_2_t7296 *, const MethodInfo*))Dictionary_2_get_Keys_m40738_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Values()
extern "C" ValueCollection_t7301 * Dictionary_2_get_Values_m40739_gshared (Dictionary_2_t7296 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m40739(__this, method) (( ValueCollection_t7301 * (*) (Dictionary_2_t7296 *, const MethodInfo*))Dictionary_2_get_Values_m40739_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m40740_gshared (Dictionary_2_t7296 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m40740(__this, ___key, method) (( int64_t (*) (Dictionary_2_t7296 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m40740_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m40741_gshared (Dictionary_2_t7296 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m40741(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t7296 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m40741_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m40742_gshared (Dictionary_2_t7296 * __this, KeyValuePair_2_t7293  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m40742(__this, ___pair, method) (( bool (*) (Dictionary_2_t7296 *, KeyValuePair_2_t7293 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m40742_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetEnumerator()
extern "C" Enumerator_t7299  Dictionary_2_GetEnumerator_m40743_gshared (Dictionary_2_t7296 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m40743(__this, method) (( Enumerator_t7299  (*) (Dictionary_2_t7296 *, const MethodInfo*))Dictionary_2_GetEnumerator_m40743_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t748  Dictionary_2_U3CCopyToU3Em__0_m40744_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m40744(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m40744_gshared)(__this /* static, unused */, ___key, ___value, method)
