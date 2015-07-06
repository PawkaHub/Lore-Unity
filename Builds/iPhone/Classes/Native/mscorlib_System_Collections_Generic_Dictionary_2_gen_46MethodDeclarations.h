#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t4612;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9603;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1554;
// System.Collections.ICollection
struct ICollection_t680;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t6262;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t6266;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t6257;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t9731;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t9732;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t9733;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3962;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m17639_gshared (Dictionary_2_t4612 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17639(__this, method) (( void (*) (Dictionary_2_t4612 *, const MethodInfo*))Dictionary_2__ctor_m17639_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m28222_gshared (Dictionary_2_t4612 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m28222(__this, ___comparer, method) (( void (*) (Dictionary_2_t4612 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28222_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m28224_gshared (Dictionary_2_t4612 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m28224(__this, ___dictionary, method) (( void (*) (Dictionary_2_t4612 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28224_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m28226_gshared (Dictionary_2_t4612 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m28226(__this, ___capacity, method) (( void (*) (Dictionary_2_t4612 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m28226_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m28228_gshared (Dictionary_2_t4612 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m28228(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t4612 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28228_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m28230_gshared (Dictionary_2_t4612 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m28230(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4612 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2__ctor_m28230_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28232_gshared (Dictionary_2_t4612 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28232(__this, method) (( Object_t* (*) (Dictionary_2_t4612 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28232_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28234_gshared (Dictionary_2_t4612 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28234(__this, method) (( Object_t* (*) (Dictionary_2_t4612 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28234_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m28236_gshared (Dictionary_2_t4612 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m28236(__this, method) (( Object_t * (*) (Dictionary_2_t4612 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m28236_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m28238_gshared (Dictionary_2_t4612 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m28238(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4612 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m28238_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m28240_gshared (Dictionary_2_t4612 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m28240(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4612 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m28240_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m28242_gshared (Dictionary_2_t4612 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m28242(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4612 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m28242_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m28244_gshared (Dictionary_2_t4612 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m28244(__this, ___key, method) (( bool (*) (Dictionary_2_t4612 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m28244_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m28246_gshared (Dictionary_2_t4612 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m28246(__this, ___key, method) (( void (*) (Dictionary_2_t4612 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m28246_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28248_gshared (Dictionary_2_t4612 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28248(__this, method) (( bool (*) (Dictionary_2_t4612 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28248_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28250_gshared (Dictionary_2_t4612 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28250(__this, method) (( Object_t * (*) (Dictionary_2_t4612 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28250_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28252_gshared (Dictionary_2_t4612 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28252(__this, method) (( bool (*) (Dictionary_2_t4612 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28252_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28254_gshared (Dictionary_2_t4612 * __this, KeyValuePair_2_t6260  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28254(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4612 *, KeyValuePair_2_t6260 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28254_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28256_gshared (Dictionary_2_t4612 * __this, KeyValuePair_2_t6260  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28256(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4612 *, KeyValuePair_2_t6260 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28256_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28258_gshared (Dictionary_2_t4612 * __this, KeyValuePair_2U5BU5D_t9732* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28258(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4612 *, KeyValuePair_2U5BU5D_t9732*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28258_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28260_gshared (Dictionary_2_t4612 * __this, KeyValuePair_2_t6260  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28260(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4612 *, KeyValuePair_2_t6260 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28260_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m28262_gshared (Dictionary_2_t4612 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m28262(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4612 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m28262_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28264_gshared (Dictionary_2_t4612 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28264(__this, method) (( Object_t * (*) (Dictionary_2_t4612 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28264_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28266_gshared (Dictionary_2_t4612 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28266(__this, method) (( Object_t* (*) (Dictionary_2_t4612 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28266_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28268_gshared (Dictionary_2_t4612 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28268(__this, method) (( Object_t * (*) (Dictionary_2_t4612 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28268_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m28270_gshared (Dictionary_2_t4612 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m28270(__this, method) (( int32_t (*) (Dictionary_2_t4612 *, const MethodInfo*))Dictionary_2_get_Count_m28270_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m28272_gshared (Dictionary_2_t4612 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m28272(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4612 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m28272_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m28274_gshared (Dictionary_2_t4612 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m28274(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4612 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m28274_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m28276_gshared (Dictionary_2_t4612 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m28276(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4612 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m28276_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m28278_gshared (Dictionary_2_t4612 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m28278(__this, ___size, method) (( void (*) (Dictionary_2_t4612 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m28278_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m28280_gshared (Dictionary_2_t4612 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m28280(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4612 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m28280_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6260  Dictionary_2_make_pair_m28282_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m28282(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6260  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m28282_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m28284_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m28284(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m28284_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m28286_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m28286(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m28286_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m28288_gshared (Dictionary_2_t4612 * __this, KeyValuePair_2U5BU5D_t9732* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m28288(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4612 *, KeyValuePair_2U5BU5D_t9732*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m28288_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m28290_gshared (Dictionary_2_t4612 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m28290(__this, method) (( void (*) (Dictionary_2_t4612 *, const MethodInfo*))Dictionary_2_Resize_m28290_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m28292_gshared (Dictionary_2_t4612 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m28292(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4612 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m28292_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m28294_gshared (Dictionary_2_t4612 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m28294(__this, method) (( void (*) (Dictionary_2_t4612 *, const MethodInfo*))Dictionary_2_Clear_m28294_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m28296_gshared (Dictionary_2_t4612 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m28296(__this, ___key, method) (( bool (*) (Dictionary_2_t4612 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m28296_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m28298_gshared (Dictionary_2_t4612 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m28298(__this, ___value, method) (( bool (*) (Dictionary_2_t4612 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m28298_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m28300_gshared (Dictionary_2_t4612 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m28300(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4612 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2_GetObjectData_m28300_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m28302_gshared (Dictionary_2_t4612 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m28302(__this, ___sender, method) (( void (*) (Dictionary_2_t4612 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m28302_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m28304_gshared (Dictionary_2_t4612 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m28304(__this, ___key, method) (( bool (*) (Dictionary_2_t4612 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m28304_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m28306_gshared (Dictionary_2_t4612 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m28306(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4612 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m28306_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t6262 * Dictionary_2_get_Keys_m28307_gshared (Dictionary_2_t4612 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m28307(__this, method) (( KeyCollection_t6262 * (*) (Dictionary_2_t4612 *, const MethodInfo*))Dictionary_2_get_Keys_m28307_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t6266 * Dictionary_2_get_Values_m28308_gshared (Dictionary_2_t4612 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m28308(__this, method) (( ValueCollection_t6266 * (*) (Dictionary_2_t4612 *, const MethodInfo*))Dictionary_2_get_Values_m28308_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m28310_gshared (Dictionary_2_t4612 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m28310(__this, ___key, method) (( int32_t (*) (Dictionary_2_t4612 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m28310_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m28312_gshared (Dictionary_2_t4612 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m28312(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t4612 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m28312_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m28314_gshared (Dictionary_2_t4612 * __this, KeyValuePair_2_t6260  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m28314(__this, ___pair, method) (( bool (*) (Dictionary_2_t4612 *, KeyValuePair_2_t6260 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m28314_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t6264  Dictionary_2_GetEnumerator_m28316_gshared (Dictionary_2_t4612 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m28316(__this, method) (( Enumerator_t6264  (*) (Dictionary_2_t4612 *, const MethodInfo*))Dictionary_2_GetEnumerator_m28316_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t679  Dictionary_2_U3CCopyToU3Em__0_m28318_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m28318(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m28318_gshared)(__this /* static, unused */, ___key, ___value, method)
