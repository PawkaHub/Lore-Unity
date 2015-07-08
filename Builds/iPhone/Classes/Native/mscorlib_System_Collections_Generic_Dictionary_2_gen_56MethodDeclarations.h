#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t7140;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t10355;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1809;
// System.Collections.ICollection
struct ICollection_t749;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_t7141;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>
struct ValueCollection_t7145;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t7138;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Object>
struct IDictionary_2_t7132;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>[]
struct KeyValuePair_2U5BU5D_t10356;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct IEnumerator_1_t10357;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t4200;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_38.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__32.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m38798_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m38798(__this, method) (( void (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2__ctor_m38798_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m38799_gshared (Dictionary_2_t7140 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m38799(__this, ___comparer, method) (( void (*) (Dictionary_2_t7140 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m38799_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m38800_gshared (Dictionary_2_t7140 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m38800(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7140 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m38800_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m38801_gshared (Dictionary_2_t7140 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m38801(__this, ___capacity, method) (( void (*) (Dictionary_2_t7140 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m38801_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m38802_gshared (Dictionary_2_t7140 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m38802(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7140 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m38802_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m38803_gshared (Dictionary_2_t7140 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m38803(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7140 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2__ctor_m38803_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m38804_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m38804(__this, method) (( Object_t* (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m38804_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m38805_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m38805(__this, method) (( Object_t* (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m38805_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m38806_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m38806(__this, method) (( Object_t * (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m38806_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m38807_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m38807(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7140 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m38807_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m38808_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m38808(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7140 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m38808_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m38809_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m38809(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7140 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m38809_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m38810_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m38810(__this, ___key, method) (( bool (*) (Dictionary_2_t7140 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m38810_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m38811_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m38811(__this, ___key, method) (( void (*) (Dictionary_2_t7140 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m38811_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m38812_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m38812(__this, method) (( bool (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m38812_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m38813_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m38813(__this, method) (( Object_t * (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m38813_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m38814_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m38814(__this, method) (( bool (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m38814_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m38815_gshared (Dictionary_2_t7140 * __this, KeyValuePair_2_t7135  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m38815(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7140 *, KeyValuePair_2_t7135 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m38815_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m38816_gshared (Dictionary_2_t7140 * __this, KeyValuePair_2_t7135  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m38816(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7140 *, KeyValuePair_2_t7135 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m38816_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m38817_gshared (Dictionary_2_t7140 * __this, KeyValuePair_2U5BU5D_t10356* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m38817(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7140 *, KeyValuePair_2U5BU5D_t10356*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m38817_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m38818_gshared (Dictionary_2_t7140 * __this, KeyValuePair_2_t7135  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m38818(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7140 *, KeyValuePair_2_t7135 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m38818_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m38819_gshared (Dictionary_2_t7140 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m38819(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7140 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m38819_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m38820_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m38820(__this, method) (( Object_t * (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m38820_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m38821_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m38821(__this, method) (( Object_t* (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m38821_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m38822_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m38822(__this, method) (( Object_t * (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m38822_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m38823_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m38823(__this, method) (( int32_t (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_get_Count_m38823_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m38824_gshared (Dictionary_2_t7140 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m38824(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7140 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m38824_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m38825_gshared (Dictionary_2_t7140 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m38825(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7140 *, int64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m38825_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m38826_gshared (Dictionary_2_t7140 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m38826(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7140 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m38826_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m38827_gshared (Dictionary_2_t7140 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m38827(__this, ___size, method) (( void (*) (Dictionary_2_t7140 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m38827_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m38828_gshared (Dictionary_2_t7140 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m38828(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7140 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m38828_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7135  Dictionary_2_make_pair_m38829_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m38829(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7135  (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m38829_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m38830_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m38830(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m38830_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m38831_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m38831(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m38831_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m38832_gshared (Dictionary_2_t7140 * __this, KeyValuePair_2U5BU5D_t10356* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m38832(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7140 *, KeyValuePair_2U5BU5D_t10356*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m38832_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m38833_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m38833(__this, method) (( void (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_Resize_m38833_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m38834_gshared (Dictionary_2_t7140 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m38834(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7140 *, int64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m38834_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m38835_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m38835(__this, method) (( void (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_Clear_m38835_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m38836_gshared (Dictionary_2_t7140 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m38836(__this, ___key, method) (( bool (*) (Dictionary_2_t7140 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m38836_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m38837_gshared (Dictionary_2_t7140 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m38837(__this, ___value, method) (( bool (*) (Dictionary_2_t7140 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m38837_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m38838_gshared (Dictionary_2_t7140 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m38838(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7140 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2_GetObjectData_m38838_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m38839_gshared (Dictionary_2_t7140 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m38839(__this, ___sender, method) (( void (*) (Dictionary_2_t7140 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m38839_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m38840_gshared (Dictionary_2_t7140 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m38840(__this, ___key, method) (( bool (*) (Dictionary_2_t7140 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m38840_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m38841_gshared (Dictionary_2_t7140 * __this, int64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m38841(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7140 *, int64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m38841_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Keys()
extern "C" KeyCollection_t7141 * Dictionary_2_get_Keys_m38842_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m38842(__this, method) (( KeyCollection_t7141 * (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_get_Keys_m38842_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Values()
extern "C" ValueCollection_t7145 * Dictionary_2_get_Values_m38843_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m38843(__this, method) (( ValueCollection_t7145 * (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_get_Values_m38843_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m38844_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m38844(__this, ___key, method) (( int64_t (*) (Dictionary_2_t7140 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m38844_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m38845_gshared (Dictionary_2_t7140 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m38845(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t7140 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m38845_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m38846_gshared (Dictionary_2_t7140 * __this, KeyValuePair_2_t7135  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m38846(__this, ___pair, method) (( bool (*) (Dictionary_2_t7140 *, KeyValuePair_2_t7135 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m38846_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetEnumerator()
extern "C" Enumerator_t7143  Dictionary_2_GetEnumerator_m38847_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m38847(__this, method) (( Enumerator_t7143  (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_GetEnumerator_m38847_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t748  Dictionary_2_U3CCopyToU3Em__0_m38848_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m38848(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m38848_gshared)(__this /* static, unused */, ___key, ___value, method)
