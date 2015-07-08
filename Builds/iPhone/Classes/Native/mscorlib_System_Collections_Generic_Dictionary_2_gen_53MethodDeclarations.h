#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>
struct Dictionary_2_t6720;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9885;
// System.Collections.Generic.ICollection`1<UnityEngine.Color>
struct ICollection_1_t10100;
// System.Collections.ICollection
struct ICollection_t749;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Color>
struct KeyCollection_t6723;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>
struct ValueCollection_t6727;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t6585;
// System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.Color>
struct IDictionary_2_t10104;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color>[]
struct KeyValuePair_2U5BU5D_t10105;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color>>
struct IEnumerator_1_t10106;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t4200;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__21.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::.ctor()
extern "C" void Dictionary_2__ctor_m31790_gshared (Dictionary_2_t6720 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m31790(__this, method) (( void (*) (Dictionary_2_t6720 *, const MethodInfo*))Dictionary_2__ctor_m31790_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m31792_gshared (Dictionary_2_t6720 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m31792(__this, ___comparer, method) (( void (*) (Dictionary_2_t6720 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m31792_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m31794_gshared (Dictionary_2_t6720 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m31794(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6720 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m31794_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m31796_gshared (Dictionary_2_t6720 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m31796(__this, ___capacity, method) (( void (*) (Dictionary_2_t6720 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m31796_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m31798_gshared (Dictionary_2_t6720 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m31798(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6720 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m31798_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m31800_gshared (Dictionary_2_t6720 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m31800(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6720 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2__ctor_m31800_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31802_gshared (Dictionary_2_t6720 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31802(__this, method) (( Object_t* (*) (Dictionary_2_t6720 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31802_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31804_gshared (Dictionary_2_t6720 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31804(__this, method) (( Object_t* (*) (Dictionary_2_t6720 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31804_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m31806_gshared (Dictionary_2_t6720 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m31806(__this, method) (( Object_t * (*) (Dictionary_2_t6720 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m31806_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m31808_gshared (Dictionary_2_t6720 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m31808(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6720 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m31808_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m31810_gshared (Dictionary_2_t6720 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m31810(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6720 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m31810_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m31812_gshared (Dictionary_2_t6720 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m31812(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6720 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m31812_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m31814_gshared (Dictionary_2_t6720 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m31814(__this, ___key, method) (( bool (*) (Dictionary_2_t6720 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m31814_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m31816_gshared (Dictionary_2_t6720 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m31816(__this, ___key, method) (( void (*) (Dictionary_2_t6720 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m31816_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31818_gshared (Dictionary_2_t6720 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31818(__this, method) (( bool (*) (Dictionary_2_t6720 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31818_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31820_gshared (Dictionary_2_t6720 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31820(__this, method) (( Object_t * (*) (Dictionary_2_t6720 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31820_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31822_gshared (Dictionary_2_t6720 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31822(__this, method) (( bool (*) (Dictionary_2_t6720 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31822_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31824_gshared (Dictionary_2_t6720 * __this, KeyValuePair_2_t6721  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31824(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6720 *, KeyValuePair_2_t6721 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31824_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31826_gshared (Dictionary_2_t6720 * __this, KeyValuePair_2_t6721  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31826(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6720 *, KeyValuePair_2_t6721 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31826_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31828_gshared (Dictionary_2_t6720 * __this, KeyValuePair_2U5BU5D_t10105* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31828(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6720 *, KeyValuePair_2U5BU5D_t10105*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31828_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31830_gshared (Dictionary_2_t6720 * __this, KeyValuePair_2_t6721  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31830(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6720 *, KeyValuePair_2_t6721 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31830_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m31832_gshared (Dictionary_2_t6720 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m31832(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6720 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m31832_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31834_gshared (Dictionary_2_t6720 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31834(__this, method) (( Object_t * (*) (Dictionary_2_t6720 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31834_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31836_gshared (Dictionary_2_t6720 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31836(__this, method) (( Object_t* (*) (Dictionary_2_t6720 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31836_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31838_gshared (Dictionary_2_t6720 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31838(__this, method) (( Object_t * (*) (Dictionary_2_t6720 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31838_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m31840_gshared (Dictionary_2_t6720 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m31840(__this, method) (( int32_t (*) (Dictionary_2_t6720 *, const MethodInfo*))Dictionary_2_get_Count_m31840_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::get_Item(TKey)
extern "C" Color_t121  Dictionary_2_get_Item_m31842_gshared (Dictionary_2_t6720 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m31842(__this, ___key, method) (( Color_t121  (*) (Dictionary_2_t6720 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m31842_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m31844_gshared (Dictionary_2_t6720 * __this, int32_t ___key, Color_t121  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m31844(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6720 *, int32_t, Color_t121 , const MethodInfo*))Dictionary_2_set_Item_m31844_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m31846_gshared (Dictionary_2_t6720 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m31846(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6720 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m31846_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m31848_gshared (Dictionary_2_t6720 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m31848(__this, ___size, method) (( void (*) (Dictionary_2_t6720 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m31848_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m31850_gshared (Dictionary_2_t6720 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m31850(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6720 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m31850_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6721  Dictionary_2_make_pair_m31852_gshared (Object_t * __this /* static, unused */, int32_t ___key, Color_t121  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m31852(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6721  (*) (Object_t * /* static, unused */, int32_t, Color_t121 , const MethodInfo*))Dictionary_2_make_pair_m31852_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m31854_gshared (Object_t * __this /* static, unused */, int32_t ___key, Color_t121  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m31854(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Color_t121 , const MethodInfo*))Dictionary_2_pick_key_m31854_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::pick_value(TKey,TValue)
extern "C" Color_t121  Dictionary_2_pick_value_m31856_gshared (Object_t * __this /* static, unused */, int32_t ___key, Color_t121  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m31856(__this /* static, unused */, ___key, ___value, method) (( Color_t121  (*) (Object_t * /* static, unused */, int32_t, Color_t121 , const MethodInfo*))Dictionary_2_pick_value_m31856_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m31858_gshared (Dictionary_2_t6720 * __this, KeyValuePair_2U5BU5D_t10105* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m31858(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6720 *, KeyValuePair_2U5BU5D_t10105*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m31858_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::Resize()
extern "C" void Dictionary_2_Resize_m31860_gshared (Dictionary_2_t6720 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m31860(__this, method) (( void (*) (Dictionary_2_t6720 *, const MethodInfo*))Dictionary_2_Resize_m31860_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m31862_gshared (Dictionary_2_t6720 * __this, int32_t ___key, Color_t121  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m31862(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6720 *, int32_t, Color_t121 , const MethodInfo*))Dictionary_2_Add_m31862_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::Clear()
extern "C" void Dictionary_2_Clear_m31864_gshared (Dictionary_2_t6720 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m31864(__this, method) (( void (*) (Dictionary_2_t6720 *, const MethodInfo*))Dictionary_2_Clear_m31864_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m31866_gshared (Dictionary_2_t6720 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m31866(__this, ___key, method) (( bool (*) (Dictionary_2_t6720 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m31866_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m31868_gshared (Dictionary_2_t6720 * __this, Color_t121  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m31868(__this, ___value, method) (( bool (*) (Dictionary_2_t6720 *, Color_t121 , const MethodInfo*))Dictionary_2_ContainsValue_m31868_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m31870_gshared (Dictionary_2_t6720 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m31870(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6720 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2_GetObjectData_m31870_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m31872_gshared (Dictionary_2_t6720 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m31872(__this, ___sender, method) (( void (*) (Dictionary_2_t6720 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m31872_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m31874_gshared (Dictionary_2_t6720 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m31874(__this, ___key, method) (( bool (*) (Dictionary_2_t6720 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m31874_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m31876_gshared (Dictionary_2_t6720 * __this, int32_t ___key, Color_t121 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m31876(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6720 *, int32_t, Color_t121 *, const MethodInfo*))Dictionary_2_TryGetValue_m31876_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::get_Keys()
extern "C" KeyCollection_t6723 * Dictionary_2_get_Keys_m31878_gshared (Dictionary_2_t6720 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m31878(__this, method) (( KeyCollection_t6723 * (*) (Dictionary_2_t6720 *, const MethodInfo*))Dictionary_2_get_Keys_m31878_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::get_Values()
extern "C" ValueCollection_t6727 * Dictionary_2_get_Values_m31880_gshared (Dictionary_2_t6720 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m31880(__this, method) (( ValueCollection_t6727 * (*) (Dictionary_2_t6720 *, const MethodInfo*))Dictionary_2_get_Values_m31880_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m31882_gshared (Dictionary_2_t6720 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m31882(__this, ___key, method) (( int32_t (*) (Dictionary_2_t6720 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m31882_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::ToTValue(System.Object)
extern "C" Color_t121  Dictionary_2_ToTValue_m31884_gshared (Dictionary_2_t6720 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m31884(__this, ___value, method) (( Color_t121  (*) (Dictionary_2_t6720 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m31884_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m31886_gshared (Dictionary_2_t6720 * __this, KeyValuePair_2_t6721  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m31886(__this, ___pair, method) (( bool (*) (Dictionary_2_t6720 *, KeyValuePair_2_t6721 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m31886_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::GetEnumerator()
extern "C" Enumerator_t6725  Dictionary_2_GetEnumerator_m31888_gshared (Dictionary_2_t6720 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m31888(__this, method) (( Enumerator_t6725  (*) (Dictionary_2_t6720 *, const MethodInfo*))Dictionary_2_GetEnumerator_m31888_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t748  Dictionary_2_U3CCopyToU3Em__0_m31890_gshared (Object_t * __this /* static, unused */, int32_t ___key, Color_t121  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m31890(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Object_t * /* static, unused */, int32_t, Color_t121 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m31890_gshared)(__this /* static, unused */, ___key, ___value, method)
