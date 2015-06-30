#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t5789;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t6790;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t6431;
// System.Collections.ICollection
struct ICollection_t661;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>
struct KeyCollection_t5790;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>
struct ValueCollection_t5794;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t5573;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>
struct IDictionary_2_t5785;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>[]
struct KeyValuePair_2U5BU5D_t6886;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>
struct IEnumerator_1_t6887;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3115;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__39.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m36139_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m36139(__this, method) (( void (*) (Dictionary_2_t5789 *, const MethodInfo*))Dictionary_2__ctor_m36139_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m36140_gshared (Dictionary_2_t5789 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m36140(__this, ___comparer, method) (( void (*) (Dictionary_2_t5789 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m36140_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m36141_gshared (Dictionary_2_t5789 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m36141(__this, ___dictionary, method) (( void (*) (Dictionary_2_t5789 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m36141_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m36142_gshared (Dictionary_2_t5789 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m36142(__this, ___capacity, method) (( void (*) (Dictionary_2_t5789 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m36142_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m36143_gshared (Dictionary_2_t5789 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m36143(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t5789 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m36143_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m36144_gshared (Dictionary_2_t5789 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m36144(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5789 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2__ctor_m36144_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m36145_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m36145(__this, method) (( Object_t* (*) (Dictionary_2_t5789 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m36145_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m36146_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m36146(__this, method) (( Object_t* (*) (Dictionary_2_t5789 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m36146_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m36147_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m36147(__this, method) (( Object_t * (*) (Dictionary_2_t5789 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m36147_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m36148_gshared (Dictionary_2_t5789 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m36148(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5789 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m36148_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m36149_gshared (Dictionary_2_t5789 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m36149(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5789 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m36149_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m36150_gshared (Dictionary_2_t5789 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m36150(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5789 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m36150_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m36151_gshared (Dictionary_2_t5789 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m36151(__this, ___key, method) (( bool (*) (Dictionary_2_t5789 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m36151_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m36152_gshared (Dictionary_2_t5789 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m36152(__this, ___key, method) (( void (*) (Dictionary_2_t5789 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m36152_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m36153_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m36153(__this, method) (( bool (*) (Dictionary_2_t5789 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m36153_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m36154_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m36154(__this, method) (( Object_t * (*) (Dictionary_2_t5789 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m36154_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m36155_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m36155(__this, method) (( bool (*) (Dictionary_2_t5789 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m36155_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m36156_gshared (Dictionary_2_t5789 * __this, KeyValuePair_2_t5786  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m36156(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t5789 *, KeyValuePair_2_t5786 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m36156_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m36157_gshared (Dictionary_2_t5789 * __this, KeyValuePair_2_t5786  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m36157(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5789 *, KeyValuePair_2_t5786 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m36157_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m36158_gshared (Dictionary_2_t5789 * __this, KeyValuePair_2U5BU5D_t6886* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m36158(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5789 *, KeyValuePair_2U5BU5D_t6886*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m36158_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m36159_gshared (Dictionary_2_t5789 * __this, KeyValuePair_2_t5786  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m36159(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5789 *, KeyValuePair_2_t5786 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m36159_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m36160_gshared (Dictionary_2_t5789 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m36160(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5789 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m36160_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m36161_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m36161(__this, method) (( Object_t * (*) (Dictionary_2_t5789 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m36161_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m36162_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m36162(__this, method) (( Object_t* (*) (Dictionary_2_t5789 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m36162_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m36163_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m36163(__this, method) (( Object_t * (*) (Dictionary_2_t5789 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m36163_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m36164_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m36164(__this, method) (( int32_t (*) (Dictionary_2_t5789 *, const MethodInfo*))Dictionary_2_get_Count_m36164_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m36165_gshared (Dictionary_2_t5789 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m36165(__this, ___key, method) (( int32_t (*) (Dictionary_2_t5789 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m36165_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m36166_gshared (Dictionary_2_t5789 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m36166(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5789 *, int64_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m36166_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m36167_gshared (Dictionary_2_t5789 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m36167(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t5789 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m36167_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m36168_gshared (Dictionary_2_t5789 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m36168(__this, ___size, method) (( void (*) (Dictionary_2_t5789 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m36168_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m36169_gshared (Dictionary_2_t5789 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m36169(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5789 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m36169_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5786  Dictionary_2_make_pair_m36170_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m36170(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5786  (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m36170_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m36171_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m36171(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m36171_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m36172_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m36172(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m36172_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m36173_gshared (Dictionary_2_t5789 * __this, KeyValuePair_2U5BU5D_t6886* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m36173(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5789 *, KeyValuePair_2U5BU5D_t6886*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m36173_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m36174_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m36174(__this, method) (( void (*) (Dictionary_2_t5789 *, const MethodInfo*))Dictionary_2_Resize_m36174_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m36175_gshared (Dictionary_2_t5789 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m36175(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5789 *, int64_t, int32_t, const MethodInfo*))Dictionary_2_Add_m36175_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m36176_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m36176(__this, method) (( void (*) (Dictionary_2_t5789 *, const MethodInfo*))Dictionary_2_Clear_m36176_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m36177_gshared (Dictionary_2_t5789 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m36177(__this, ___key, method) (( bool (*) (Dictionary_2_t5789 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m36177_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m36178_gshared (Dictionary_2_t5789 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m36178(__this, ___value, method) (( bool (*) (Dictionary_2_t5789 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m36178_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m36179_gshared (Dictionary_2_t5789 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m36179(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5789 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2_GetObjectData_m36179_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m36180_gshared (Dictionary_2_t5789 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m36180(__this, ___sender, method) (( void (*) (Dictionary_2_t5789 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m36180_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m36181_gshared (Dictionary_2_t5789 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m36181(__this, ___key, method) (( bool (*) (Dictionary_2_t5789 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m36181_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m36182_gshared (Dictionary_2_t5789 * __this, int64_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m36182(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t5789 *, int64_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m36182_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Keys()
extern "C" KeyCollection_t5790 * Dictionary_2_get_Keys_m36183_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m36183(__this, method) (( KeyCollection_t5790 * (*) (Dictionary_2_t5789 *, const MethodInfo*))Dictionary_2_get_Keys_m36183_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Values()
extern "C" ValueCollection_t5794 * Dictionary_2_get_Values_m36184_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m36184(__this, method) (( ValueCollection_t5794 * (*) (Dictionary_2_t5789 *, const MethodInfo*))Dictionary_2_get_Values_m36184_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m36185_gshared (Dictionary_2_t5789 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m36185(__this, ___key, method) (( int64_t (*) (Dictionary_2_t5789 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m36185_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m36186_gshared (Dictionary_2_t5789 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m36186(__this, ___value, method) (( int32_t (*) (Dictionary_2_t5789 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m36186_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m36187_gshared (Dictionary_2_t5789 * __this, KeyValuePair_2_t5786  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m36187(__this, ___pair, method) (( bool (*) (Dictionary_2_t5789 *, KeyValuePair_2_t5786 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m36187_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::GetEnumerator()
extern "C" Enumerator_t5792  Dictionary_2_GetEnumerator_m36188_gshared (Dictionary_2_t5789 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m36188(__this, method) (( Enumerator_t5792  (*) (Dictionary_2_t5789 *, const MethodInfo*))Dictionary_2_GetEnumerator_m36188_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t660  Dictionary_2_U3CCopyToU3Em__0_m36189_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m36189(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m36189_gshared)(__this /* static, unused */, ___key, ___value, method)
