#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1174;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9603;
// System.Collections.ICollection
struct ICollection_t680;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t6659;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t6663;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t6257;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t9992;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t9993;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t9994;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3962;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_33.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__27.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m7230_gshared (Dictionary_2_t1174 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m7230(__this, method) (( void (*) (Dictionary_2_t1174 *, const MethodInfo*))Dictionary_2__ctor_m7230_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m35206_gshared (Dictionary_2_t1174 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m35206(__this, ___comparer, method) (( void (*) (Dictionary_2_t1174 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m35206_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m35207_gshared (Dictionary_2_t1174 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m35207(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1174 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m35207_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m35208_gshared (Dictionary_2_t1174 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m35208(__this, ___capacity, method) (( void (*) (Dictionary_2_t1174 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m35208_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m35209_gshared (Dictionary_2_t1174 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m35209(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1174 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m35209_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m35210_gshared (Dictionary_2_t1174 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m35210(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1174 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2__ctor_m35210_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m35211_gshared (Dictionary_2_t1174 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m35211(__this, method) (( Object_t* (*) (Dictionary_2_t1174 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m35211_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m35212_gshared (Dictionary_2_t1174 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m35212(__this, method) (( Object_t* (*) (Dictionary_2_t1174 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m35212_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m35213_gshared (Dictionary_2_t1174 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m35213(__this, method) (( Object_t * (*) (Dictionary_2_t1174 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m35213_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m35214_gshared (Dictionary_2_t1174 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m35214(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1174 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m35214_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m35215_gshared (Dictionary_2_t1174 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m35215(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1174 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m35215_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m35216_gshared (Dictionary_2_t1174 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m35216(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1174 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m35216_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m35217_gshared (Dictionary_2_t1174 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m35217(__this, ___key, method) (( bool (*) (Dictionary_2_t1174 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m35217_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m35218_gshared (Dictionary_2_t1174 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m35218(__this, ___key, method) (( void (*) (Dictionary_2_t1174 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m35218_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m35219_gshared (Dictionary_2_t1174 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m35219(__this, method) (( bool (*) (Dictionary_2_t1174 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m35219_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m35220_gshared (Dictionary_2_t1174 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m35220(__this, method) (( Object_t * (*) (Dictionary_2_t1174 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m35220_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m35221_gshared (Dictionary_2_t1174 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m35221(__this, method) (( bool (*) (Dictionary_2_t1174 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m35221_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m35222_gshared (Dictionary_2_t1174 * __this, KeyValuePair_2_t6657  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m35222(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1174 *, KeyValuePair_2_t6657 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m35222_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m35223_gshared (Dictionary_2_t1174 * __this, KeyValuePair_2_t6657  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m35223(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1174 *, KeyValuePair_2_t6657 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m35223_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m35224_gshared (Dictionary_2_t1174 * __this, KeyValuePair_2U5BU5D_t9993* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m35224(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1174 *, KeyValuePair_2U5BU5D_t9993*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m35224_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m35225_gshared (Dictionary_2_t1174 * __this, KeyValuePair_2_t6657  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m35225(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1174 *, KeyValuePair_2_t6657 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m35225_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m35226_gshared (Dictionary_2_t1174 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m35226(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1174 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m35226_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m35227_gshared (Dictionary_2_t1174 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m35227(__this, method) (( Object_t * (*) (Dictionary_2_t1174 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m35227_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m35228_gshared (Dictionary_2_t1174 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m35228(__this, method) (( Object_t* (*) (Dictionary_2_t1174 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m35228_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m35229_gshared (Dictionary_2_t1174 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m35229(__this, method) (( Object_t * (*) (Dictionary_2_t1174 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m35229_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m35230_gshared (Dictionary_2_t1174 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m35230(__this, method) (( int32_t (*) (Dictionary_2_t1174 *, const MethodInfo*))Dictionary_2_get_Count_m35230_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m35231_gshared (Dictionary_2_t1174 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m35231(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1174 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m35231_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m35232_gshared (Dictionary_2_t1174 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m35232(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1174 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m35232_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m35233_gshared (Dictionary_2_t1174 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m35233(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1174 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m35233_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m35234_gshared (Dictionary_2_t1174 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m35234(__this, ___size, method) (( void (*) (Dictionary_2_t1174 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m35234_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m35235_gshared (Dictionary_2_t1174 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m35235(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1174 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m35235_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6657  Dictionary_2_make_pair_m35236_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m35236(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6657  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m35236_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m35237_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m35237(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m35237_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m35238_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m35238(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m35238_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m35239_gshared (Dictionary_2_t1174 * __this, KeyValuePair_2U5BU5D_t9993* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m35239(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1174 *, KeyValuePair_2U5BU5D_t9993*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m35239_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m35240_gshared (Dictionary_2_t1174 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m35240(__this, method) (( void (*) (Dictionary_2_t1174 *, const MethodInfo*))Dictionary_2_Resize_m35240_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m35241_gshared (Dictionary_2_t1174 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m35241(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1174 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m35241_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m35242_gshared (Dictionary_2_t1174 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m35242(__this, method) (( void (*) (Dictionary_2_t1174 *, const MethodInfo*))Dictionary_2_Clear_m35242_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m35243_gshared (Dictionary_2_t1174 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m35243(__this, ___key, method) (( bool (*) (Dictionary_2_t1174 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m35243_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m35244_gshared (Dictionary_2_t1174 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m35244(__this, ___value, method) (( bool (*) (Dictionary_2_t1174 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m35244_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m35245_gshared (Dictionary_2_t1174 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m35245(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1174 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2_GetObjectData_m35245_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m35246_gshared (Dictionary_2_t1174 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m35246(__this, ___sender, method) (( void (*) (Dictionary_2_t1174 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m35246_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m35247_gshared (Dictionary_2_t1174 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m35247(__this, ___key, method) (( bool (*) (Dictionary_2_t1174 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m35247_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m35248_gshared (Dictionary_2_t1174 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m35248(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1174 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m35248_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t6659 * Dictionary_2_get_Keys_m35249_gshared (Dictionary_2_t1174 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m35249(__this, method) (( KeyCollection_t6659 * (*) (Dictionary_2_t1174 *, const MethodInfo*))Dictionary_2_get_Keys_m35249_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t6663 * Dictionary_2_get_Values_m35250_gshared (Dictionary_2_t1174 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m35250(__this, method) (( ValueCollection_t6663 * (*) (Dictionary_2_t1174 *, const MethodInfo*))Dictionary_2_get_Values_m35250_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m35251_gshared (Dictionary_2_t1174 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m35251(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1174 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m35251_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m35252_gshared (Dictionary_2_t1174 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m35252(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1174 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m35252_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m35253_gshared (Dictionary_2_t1174 * __this, KeyValuePair_2_t6657  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m35253(__this, ___pair, method) (( bool (*) (Dictionary_2_t1174 *, KeyValuePair_2_t6657 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m35253_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t6661  Dictionary_2_GetEnumerator_m35254_gshared (Dictionary_2_t1174 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m35254(__this, method) (( Enumerator_t6661  (*) (Dictionary_2_t1174 *, const MethodInfo*))Dictionary_2_GetEnumerator_m35254_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t679  Dictionary_2_U3CCopyToU3Em__0_m35255_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m35255(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m35255_gshared)(__this /* static, unused */, ___key, ___value, method)
