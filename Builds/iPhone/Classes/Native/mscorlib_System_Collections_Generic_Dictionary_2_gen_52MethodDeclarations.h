#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t6641;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1809;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9885;
// System.Collections.ICollection
struct ICollection_t749;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t6644;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t6648;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1775;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t10073;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8618;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t8288;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t4200;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__17.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m30686_gshared (Dictionary_2_t6641 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m30686(__this, method) (( void (*) (Dictionary_2_t6641 *, const MethodInfo*))Dictionary_2__ctor_m30686_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m30688_gshared (Dictionary_2_t6641 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m30688(__this, ___comparer, method) (( void (*) (Dictionary_2_t6641 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m30688_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m30690_gshared (Dictionary_2_t6641 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m30690(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6641 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m30690_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m30691_gshared (Dictionary_2_t6641 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m30691(__this, ___capacity, method) (( void (*) (Dictionary_2_t6641 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m30691_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m30693_gshared (Dictionary_2_t6641 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m30693(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6641 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m30693_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m30695_gshared (Dictionary_2_t6641 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m30695(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6641 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2__ctor_m30695_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m30697_gshared (Dictionary_2_t6641 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m30697(__this, method) (( Object_t* (*) (Dictionary_2_t6641 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m30697_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m30699_gshared (Dictionary_2_t6641 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m30699(__this, method) (( Object_t* (*) (Dictionary_2_t6641 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m30699_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m30701_gshared (Dictionary_2_t6641 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m30701(__this, method) (( Object_t * (*) (Dictionary_2_t6641 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m30701_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m30703_gshared (Dictionary_2_t6641 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m30703(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6641 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m30703_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m30705_gshared (Dictionary_2_t6641 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m30705(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6641 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m30705_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m30707_gshared (Dictionary_2_t6641 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m30707(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6641 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m30707_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m30709_gshared (Dictionary_2_t6641 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m30709(__this, ___key, method) (( bool (*) (Dictionary_2_t6641 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m30709_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m30711_gshared (Dictionary_2_t6641 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m30711(__this, ___key, method) (( void (*) (Dictionary_2_t6641 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m30711_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m30713_gshared (Dictionary_2_t6641 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m30713(__this, method) (( bool (*) (Dictionary_2_t6641 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m30713_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m30715_gshared (Dictionary_2_t6641 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m30715(__this, method) (( Object_t * (*) (Dictionary_2_t6641 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m30715_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m30717_gshared (Dictionary_2_t6641 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m30717(__this, method) (( bool (*) (Dictionary_2_t6641 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m30717_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m30719_gshared (Dictionary_2_t6641 * __this, KeyValuePair_2_t6642  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m30719(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6641 *, KeyValuePair_2_t6642 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m30719_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m30721_gshared (Dictionary_2_t6641 * __this, KeyValuePair_2_t6642  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m30721(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6641 *, KeyValuePair_2_t6642 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m30721_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m30723_gshared (Dictionary_2_t6641 * __this, KeyValuePair_2U5BU5D_t8618* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m30723(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6641 *, KeyValuePair_2U5BU5D_t8618*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m30723_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m30725_gshared (Dictionary_2_t6641 * __this, KeyValuePair_2_t6642  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m30725(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6641 *, KeyValuePair_2_t6642 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m30725_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m30727_gshared (Dictionary_2_t6641 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m30727(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6641 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m30727_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m30729_gshared (Dictionary_2_t6641 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m30729(__this, method) (( Object_t * (*) (Dictionary_2_t6641 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m30729_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m30731_gshared (Dictionary_2_t6641 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m30731(__this, method) (( Object_t* (*) (Dictionary_2_t6641 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m30731_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m30733_gshared (Dictionary_2_t6641 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m30733(__this, method) (( Object_t * (*) (Dictionary_2_t6641 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m30733_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m30735_gshared (Dictionary_2_t6641 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m30735(__this, method) (( int32_t (*) (Dictionary_2_t6641 *, const MethodInfo*))Dictionary_2_get_Count_m30735_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m30737_gshared (Dictionary_2_t6641 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m30737(__this, ___key, method) (( int32_t (*) (Dictionary_2_t6641 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m30737_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m30739_gshared (Dictionary_2_t6641 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m30739(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6641 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m30739_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m30741_gshared (Dictionary_2_t6641 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m30741(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6641 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m30741_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m30743_gshared (Dictionary_2_t6641 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m30743(__this, ___size, method) (( void (*) (Dictionary_2_t6641 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m30743_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m30745_gshared (Dictionary_2_t6641 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m30745(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6641 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m30745_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6642  Dictionary_2_make_pair_m30747_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m30747(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6642  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m30747_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m30749_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m30749(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m30749_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m30751_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m30751(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m30751_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m30753_gshared (Dictionary_2_t6641 * __this, KeyValuePair_2U5BU5D_t8618* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m30753(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6641 *, KeyValuePair_2U5BU5D_t8618*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m30753_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m30755_gshared (Dictionary_2_t6641 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m30755(__this, method) (( void (*) (Dictionary_2_t6641 *, const MethodInfo*))Dictionary_2_Resize_m30755_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m30757_gshared (Dictionary_2_t6641 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m30757(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6641 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m30757_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m30759_gshared (Dictionary_2_t6641 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m30759(__this, method) (( void (*) (Dictionary_2_t6641 *, const MethodInfo*))Dictionary_2_Clear_m30759_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m30761_gshared (Dictionary_2_t6641 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m30761(__this, ___key, method) (( bool (*) (Dictionary_2_t6641 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m30761_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m30763_gshared (Dictionary_2_t6641 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m30763(__this, ___value, method) (( bool (*) (Dictionary_2_t6641 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m30763_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m30765_gshared (Dictionary_2_t6641 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m30765(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6641 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2_GetObjectData_m30765_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m30767_gshared (Dictionary_2_t6641 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m30767(__this, ___sender, method) (( void (*) (Dictionary_2_t6641 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m30767_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m30769_gshared (Dictionary_2_t6641 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m30769(__this, ___key, method) (( bool (*) (Dictionary_2_t6641 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m30769_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m30771_gshared (Dictionary_2_t6641 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m30771(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6641 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m30771_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t6644 * Dictionary_2_get_Keys_m30773_gshared (Dictionary_2_t6641 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m30773(__this, method) (( KeyCollection_t6644 * (*) (Dictionary_2_t6641 *, const MethodInfo*))Dictionary_2_get_Keys_m30773_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t6648 * Dictionary_2_get_Values_m30775_gshared (Dictionary_2_t6641 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m30775(__this, method) (( ValueCollection_t6648 * (*) (Dictionary_2_t6641 *, const MethodInfo*))Dictionary_2_get_Values_m30775_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m30777_gshared (Dictionary_2_t6641 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m30777(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6641 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m30777_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m30779_gshared (Dictionary_2_t6641 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m30779(__this, ___value, method) (( int32_t (*) (Dictionary_2_t6641 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m30779_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m30781_gshared (Dictionary_2_t6641 * __this, KeyValuePair_2_t6642  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m30781(__this, ___pair, method) (( bool (*) (Dictionary_2_t6641 *, KeyValuePair_2_t6642 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m30781_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t6646  Dictionary_2_GetEnumerator_m30783_gshared (Dictionary_2_t6641 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m30783(__this, method) (( Enumerator_t6646  (*) (Dictionary_2_t6641 *, const MethodInfo*))Dictionary_2_GetEnumerator_m30783_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t748  Dictionary_2_U3CCopyToU3Em__0_m30785_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m30785(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m30785_gshared)(__this /* static, unused */, ___key, ___value, method)
