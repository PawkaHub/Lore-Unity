#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>
struct Dictionary_2_t6394;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9603;
// System.Collections.Generic.ICollection`1<UnityEngine.Color>
struct ICollection_1_t9803;
// System.Collections.ICollection
struct ICollection_t680;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Color>
struct KeyCollection_t6397;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>
struct ValueCollection_t6401;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t6257;
// System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.Color>
struct IDictionary_2_t9807;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color>[]
struct KeyValuePair_2U5BU5D_t9808;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color>>
struct IEnumerator_1_t9809;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3962;
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
extern "C" void Dictionary_2__ctor_m30418_gshared (Dictionary_2_t6394 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m30418(__this, method) (( void (*) (Dictionary_2_t6394 *, const MethodInfo*))Dictionary_2__ctor_m30418_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m30420_gshared (Dictionary_2_t6394 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m30420(__this, ___comparer, method) (( void (*) (Dictionary_2_t6394 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m30420_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m30422_gshared (Dictionary_2_t6394 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m30422(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6394 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m30422_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m30424_gshared (Dictionary_2_t6394 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m30424(__this, ___capacity, method) (( void (*) (Dictionary_2_t6394 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m30424_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m30426_gshared (Dictionary_2_t6394 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m30426(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6394 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m30426_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m30428_gshared (Dictionary_2_t6394 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m30428(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6394 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2__ctor_m30428_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m30430_gshared (Dictionary_2_t6394 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m30430(__this, method) (( Object_t* (*) (Dictionary_2_t6394 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m30430_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m30432_gshared (Dictionary_2_t6394 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m30432(__this, method) (( Object_t* (*) (Dictionary_2_t6394 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m30432_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m30434_gshared (Dictionary_2_t6394 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m30434(__this, method) (( Object_t * (*) (Dictionary_2_t6394 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m30434_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m30436_gshared (Dictionary_2_t6394 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m30436(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6394 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m30436_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m30438_gshared (Dictionary_2_t6394 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m30438(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6394 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m30438_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m30440_gshared (Dictionary_2_t6394 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m30440(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6394 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m30440_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m30442_gshared (Dictionary_2_t6394 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m30442(__this, ___key, method) (( bool (*) (Dictionary_2_t6394 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m30442_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m30444_gshared (Dictionary_2_t6394 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m30444(__this, ___key, method) (( void (*) (Dictionary_2_t6394 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m30444_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m30446_gshared (Dictionary_2_t6394 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m30446(__this, method) (( bool (*) (Dictionary_2_t6394 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m30446_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m30448_gshared (Dictionary_2_t6394 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m30448(__this, method) (( Object_t * (*) (Dictionary_2_t6394 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m30448_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m30450_gshared (Dictionary_2_t6394 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m30450(__this, method) (( bool (*) (Dictionary_2_t6394 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m30450_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m30452_gshared (Dictionary_2_t6394 * __this, KeyValuePair_2_t6395  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m30452(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6394 *, KeyValuePair_2_t6395 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m30452_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m30454_gshared (Dictionary_2_t6394 * __this, KeyValuePair_2_t6395  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m30454(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6394 *, KeyValuePair_2_t6395 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m30454_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m30456_gshared (Dictionary_2_t6394 * __this, KeyValuePair_2U5BU5D_t9808* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m30456(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6394 *, KeyValuePair_2U5BU5D_t9808*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m30456_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m30458_gshared (Dictionary_2_t6394 * __this, KeyValuePair_2_t6395  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m30458(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6394 *, KeyValuePair_2_t6395 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m30458_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m30460_gshared (Dictionary_2_t6394 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m30460(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6394 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m30460_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m30462_gshared (Dictionary_2_t6394 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m30462(__this, method) (( Object_t * (*) (Dictionary_2_t6394 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m30462_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m30464_gshared (Dictionary_2_t6394 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m30464(__this, method) (( Object_t* (*) (Dictionary_2_t6394 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m30464_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m30466_gshared (Dictionary_2_t6394 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m30466(__this, method) (( Object_t * (*) (Dictionary_2_t6394 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m30466_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m30468_gshared (Dictionary_2_t6394 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m30468(__this, method) (( int32_t (*) (Dictionary_2_t6394 *, const MethodInfo*))Dictionary_2_get_Count_m30468_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::get_Item(TKey)
extern "C" Color_t121  Dictionary_2_get_Item_m30470_gshared (Dictionary_2_t6394 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m30470(__this, ___key, method) (( Color_t121  (*) (Dictionary_2_t6394 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m30470_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m30472_gshared (Dictionary_2_t6394 * __this, int32_t ___key, Color_t121  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m30472(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6394 *, int32_t, Color_t121 , const MethodInfo*))Dictionary_2_set_Item_m30472_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m30474_gshared (Dictionary_2_t6394 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m30474(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6394 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m30474_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m30476_gshared (Dictionary_2_t6394 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m30476(__this, ___size, method) (( void (*) (Dictionary_2_t6394 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m30476_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m30478_gshared (Dictionary_2_t6394 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m30478(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6394 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m30478_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6395  Dictionary_2_make_pair_m30480_gshared (Object_t * __this /* static, unused */, int32_t ___key, Color_t121  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m30480(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6395  (*) (Object_t * /* static, unused */, int32_t, Color_t121 , const MethodInfo*))Dictionary_2_make_pair_m30480_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m30482_gshared (Object_t * __this /* static, unused */, int32_t ___key, Color_t121  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m30482(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Color_t121 , const MethodInfo*))Dictionary_2_pick_key_m30482_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::pick_value(TKey,TValue)
extern "C" Color_t121  Dictionary_2_pick_value_m30484_gshared (Object_t * __this /* static, unused */, int32_t ___key, Color_t121  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m30484(__this /* static, unused */, ___key, ___value, method) (( Color_t121  (*) (Object_t * /* static, unused */, int32_t, Color_t121 , const MethodInfo*))Dictionary_2_pick_value_m30484_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m30486_gshared (Dictionary_2_t6394 * __this, KeyValuePair_2U5BU5D_t9808* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m30486(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6394 *, KeyValuePair_2U5BU5D_t9808*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m30486_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::Resize()
extern "C" void Dictionary_2_Resize_m30488_gshared (Dictionary_2_t6394 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m30488(__this, method) (( void (*) (Dictionary_2_t6394 *, const MethodInfo*))Dictionary_2_Resize_m30488_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m30490_gshared (Dictionary_2_t6394 * __this, int32_t ___key, Color_t121  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m30490(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6394 *, int32_t, Color_t121 , const MethodInfo*))Dictionary_2_Add_m30490_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::Clear()
extern "C" void Dictionary_2_Clear_m30492_gshared (Dictionary_2_t6394 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m30492(__this, method) (( void (*) (Dictionary_2_t6394 *, const MethodInfo*))Dictionary_2_Clear_m30492_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m30494_gshared (Dictionary_2_t6394 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m30494(__this, ___key, method) (( bool (*) (Dictionary_2_t6394 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m30494_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m30496_gshared (Dictionary_2_t6394 * __this, Color_t121  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m30496(__this, ___value, method) (( bool (*) (Dictionary_2_t6394 *, Color_t121 , const MethodInfo*))Dictionary_2_ContainsValue_m30496_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m30498_gshared (Dictionary_2_t6394 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m30498(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6394 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2_GetObjectData_m30498_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m30500_gshared (Dictionary_2_t6394 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m30500(__this, ___sender, method) (( void (*) (Dictionary_2_t6394 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m30500_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m30502_gshared (Dictionary_2_t6394 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m30502(__this, ___key, method) (( bool (*) (Dictionary_2_t6394 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m30502_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m30504_gshared (Dictionary_2_t6394 * __this, int32_t ___key, Color_t121 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m30504(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6394 *, int32_t, Color_t121 *, const MethodInfo*))Dictionary_2_TryGetValue_m30504_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::get_Keys()
extern "C" KeyCollection_t6397 * Dictionary_2_get_Keys_m30506_gshared (Dictionary_2_t6394 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m30506(__this, method) (( KeyCollection_t6397 * (*) (Dictionary_2_t6394 *, const MethodInfo*))Dictionary_2_get_Keys_m30506_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::get_Values()
extern "C" ValueCollection_t6401 * Dictionary_2_get_Values_m30508_gshared (Dictionary_2_t6394 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m30508(__this, method) (( ValueCollection_t6401 * (*) (Dictionary_2_t6394 *, const MethodInfo*))Dictionary_2_get_Values_m30508_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m30510_gshared (Dictionary_2_t6394 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m30510(__this, ___key, method) (( int32_t (*) (Dictionary_2_t6394 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m30510_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::ToTValue(System.Object)
extern "C" Color_t121  Dictionary_2_ToTValue_m30512_gshared (Dictionary_2_t6394 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m30512(__this, ___value, method) (( Color_t121  (*) (Dictionary_2_t6394 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m30512_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m30514_gshared (Dictionary_2_t6394 * __this, KeyValuePair_2_t6395  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m30514(__this, ___pair, method) (( bool (*) (Dictionary_2_t6394 *, KeyValuePair_2_t6395 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m30514_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::GetEnumerator()
extern "C" Enumerator_t6399  Dictionary_2_GetEnumerator_m30516_gshared (Dictionary_2_t6394 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m30516(__this, method) (( Enumerator_t6399  (*) (Dictionary_2_t6394 *, const MethodInfo*))Dictionary_2_GetEnumerator_m30516_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t679  Dictionary_2_U3CCopyToU3Em__0_m30518_gshared (Object_t * __this /* static, unused */, int32_t ___key, Color_t121  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m30518(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Object_t * /* static, unused */, int32_t, Color_t121 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m30518_gshared)(__this /* static, unused */, ___key, ___value, method)
