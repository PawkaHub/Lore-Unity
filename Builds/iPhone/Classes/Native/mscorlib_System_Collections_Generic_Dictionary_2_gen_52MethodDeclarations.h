#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t6313;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1554;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9603;
// System.Collections.ICollection
struct ICollection_t680;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t6316;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t6320;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1519;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t9774;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8336;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t8006;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3962;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__17.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m29213_gshared (Dictionary_2_t6313 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m29213(__this, method) (( void (*) (Dictionary_2_t6313 *, const MethodInfo*))Dictionary_2__ctor_m29213_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m29215_gshared (Dictionary_2_t6313 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m29215(__this, ___comparer, method) (( void (*) (Dictionary_2_t6313 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m29215_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m29217_gshared (Dictionary_2_t6313 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m29217(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6313 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m29217_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m29218_gshared (Dictionary_2_t6313 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m29218(__this, ___capacity, method) (( void (*) (Dictionary_2_t6313 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m29218_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m29220_gshared (Dictionary_2_t6313 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m29220(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6313 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m29220_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m29222_gshared (Dictionary_2_t6313 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m29222(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6313 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2__ctor_m29222_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m29224_gshared (Dictionary_2_t6313 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m29224(__this, method) (( Object_t* (*) (Dictionary_2_t6313 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m29224_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m29226_gshared (Dictionary_2_t6313 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m29226(__this, method) (( Object_t* (*) (Dictionary_2_t6313 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m29226_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m29228_gshared (Dictionary_2_t6313 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m29228(__this, method) (( Object_t * (*) (Dictionary_2_t6313 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m29228_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m29230_gshared (Dictionary_2_t6313 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m29230(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6313 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m29230_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m29232_gshared (Dictionary_2_t6313 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m29232(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6313 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m29232_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m29234_gshared (Dictionary_2_t6313 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m29234(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6313 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m29234_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m29236_gshared (Dictionary_2_t6313 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m29236(__this, ___key, method) (( bool (*) (Dictionary_2_t6313 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m29236_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m29238_gshared (Dictionary_2_t6313 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m29238(__this, ___key, method) (( void (*) (Dictionary_2_t6313 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m29238_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m29240_gshared (Dictionary_2_t6313 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m29240(__this, method) (( bool (*) (Dictionary_2_t6313 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m29240_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m29242_gshared (Dictionary_2_t6313 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m29242(__this, method) (( Object_t * (*) (Dictionary_2_t6313 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m29242_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m29244_gshared (Dictionary_2_t6313 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m29244(__this, method) (( bool (*) (Dictionary_2_t6313 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m29244_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m29246_gshared (Dictionary_2_t6313 * __this, KeyValuePair_2_t6314  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m29246(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6313 *, KeyValuePair_2_t6314 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m29246_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m29248_gshared (Dictionary_2_t6313 * __this, KeyValuePair_2_t6314  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m29248(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6313 *, KeyValuePair_2_t6314 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m29248_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m29250_gshared (Dictionary_2_t6313 * __this, KeyValuePair_2U5BU5D_t8336* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m29250(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6313 *, KeyValuePair_2U5BU5D_t8336*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m29250_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m29252_gshared (Dictionary_2_t6313 * __this, KeyValuePair_2_t6314  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m29252(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6313 *, KeyValuePair_2_t6314 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m29252_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m29254_gshared (Dictionary_2_t6313 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m29254(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6313 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m29254_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m29256_gshared (Dictionary_2_t6313 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m29256(__this, method) (( Object_t * (*) (Dictionary_2_t6313 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m29256_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m29258_gshared (Dictionary_2_t6313 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m29258(__this, method) (( Object_t* (*) (Dictionary_2_t6313 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m29258_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m29260_gshared (Dictionary_2_t6313 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m29260(__this, method) (( Object_t * (*) (Dictionary_2_t6313 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m29260_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m29262_gshared (Dictionary_2_t6313 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m29262(__this, method) (( int32_t (*) (Dictionary_2_t6313 *, const MethodInfo*))Dictionary_2_get_Count_m29262_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m29264_gshared (Dictionary_2_t6313 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m29264(__this, ___key, method) (( int32_t (*) (Dictionary_2_t6313 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m29264_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m29266_gshared (Dictionary_2_t6313 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m29266(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6313 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m29266_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m29268_gshared (Dictionary_2_t6313 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m29268(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6313 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m29268_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m29270_gshared (Dictionary_2_t6313 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m29270(__this, ___size, method) (( void (*) (Dictionary_2_t6313 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m29270_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m29272_gshared (Dictionary_2_t6313 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m29272(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6313 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m29272_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6314  Dictionary_2_make_pair_m29274_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m29274(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6314  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m29274_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m29276_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m29276(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m29276_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m29278_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m29278(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m29278_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m29280_gshared (Dictionary_2_t6313 * __this, KeyValuePair_2U5BU5D_t8336* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m29280(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6313 *, KeyValuePair_2U5BU5D_t8336*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m29280_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m29282_gshared (Dictionary_2_t6313 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m29282(__this, method) (( void (*) (Dictionary_2_t6313 *, const MethodInfo*))Dictionary_2_Resize_m29282_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m29284_gshared (Dictionary_2_t6313 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m29284(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6313 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m29284_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m29286_gshared (Dictionary_2_t6313 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m29286(__this, method) (( void (*) (Dictionary_2_t6313 *, const MethodInfo*))Dictionary_2_Clear_m29286_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m29288_gshared (Dictionary_2_t6313 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m29288(__this, ___key, method) (( bool (*) (Dictionary_2_t6313 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m29288_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m29290_gshared (Dictionary_2_t6313 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m29290(__this, ___value, method) (( bool (*) (Dictionary_2_t6313 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m29290_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m29292_gshared (Dictionary_2_t6313 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m29292(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6313 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2_GetObjectData_m29292_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m29294_gshared (Dictionary_2_t6313 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m29294(__this, ___sender, method) (( void (*) (Dictionary_2_t6313 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m29294_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m29296_gshared (Dictionary_2_t6313 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m29296(__this, ___key, method) (( bool (*) (Dictionary_2_t6313 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m29296_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m29298_gshared (Dictionary_2_t6313 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m29298(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6313 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m29298_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t6316 * Dictionary_2_get_Keys_m29300_gshared (Dictionary_2_t6313 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m29300(__this, method) (( KeyCollection_t6316 * (*) (Dictionary_2_t6313 *, const MethodInfo*))Dictionary_2_get_Keys_m29300_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t6320 * Dictionary_2_get_Values_m29302_gshared (Dictionary_2_t6313 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m29302(__this, method) (( ValueCollection_t6320 * (*) (Dictionary_2_t6313 *, const MethodInfo*))Dictionary_2_get_Values_m29302_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m29304_gshared (Dictionary_2_t6313 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m29304(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6313 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m29304_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m29306_gshared (Dictionary_2_t6313 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m29306(__this, ___value, method) (( int32_t (*) (Dictionary_2_t6313 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m29306_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m29308_gshared (Dictionary_2_t6313 * __this, KeyValuePair_2_t6314  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m29308(__this, ___pair, method) (( bool (*) (Dictionary_2_t6313 *, KeyValuePair_2_t6314 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m29308_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t6318  Dictionary_2_GetEnumerator_m29310_gshared (Dictionary_2_t6313 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m29310(__this, method) (( Enumerator_t6318  (*) (Dictionary_2_t6313 *, const MethodInfo*))Dictionary_2_GetEnumerator_m29310_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t679  Dictionary_2_U3CCopyToU3Em__0_m29312_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m29312(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m29312_gshared)(__this /* static, unused */, ___key, ___value, method)
