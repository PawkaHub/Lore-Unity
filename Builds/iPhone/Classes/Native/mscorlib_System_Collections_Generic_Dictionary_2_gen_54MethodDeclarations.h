#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t7013;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1809;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t10093;
// System.Collections.ICollection
struct ICollection_t749;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Single>
struct KeyCollection_t7016;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>
struct ValueCollection_t7020;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1775;
// System.Collections.Generic.IDictionary`2<System.Object,System.Single>
struct IDictionary_2_t10306;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t8956;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerator_1_t8338;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t4200;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_35.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__29.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
extern "C" void Dictionary_2__ctor_m37094_gshared (Dictionary_2_t7013 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m37094(__this, method) (( void (*) (Dictionary_2_t7013 *, const MethodInfo*))Dictionary_2__ctor_m37094_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m37096_gshared (Dictionary_2_t7013 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m37096(__this, ___comparer, method) (( void (*) (Dictionary_2_t7013 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m37096_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m37098_gshared (Dictionary_2_t7013 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m37098(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7013 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m37098_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m37100_gshared (Dictionary_2_t7013 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m37100(__this, ___capacity, method) (( void (*) (Dictionary_2_t7013 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m37100_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m37102_gshared (Dictionary_2_t7013 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m37102(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7013 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m37102_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m37104_gshared (Dictionary_2_t7013 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m37104(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7013 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2__ctor_m37104_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m37106_gshared (Dictionary_2_t7013 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m37106(__this, method) (( Object_t* (*) (Dictionary_2_t7013 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m37106_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m37108_gshared (Dictionary_2_t7013 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m37108(__this, method) (( Object_t* (*) (Dictionary_2_t7013 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m37108_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m37110_gshared (Dictionary_2_t7013 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m37110(__this, method) (( Object_t * (*) (Dictionary_2_t7013 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m37110_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m37112_gshared (Dictionary_2_t7013 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m37112(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7013 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m37112_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m37114_gshared (Dictionary_2_t7013 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m37114(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7013 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m37114_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m37116_gshared (Dictionary_2_t7013 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m37116(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7013 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m37116_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m37118_gshared (Dictionary_2_t7013 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m37118(__this, ___key, method) (( bool (*) (Dictionary_2_t7013 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m37118_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m37120_gshared (Dictionary_2_t7013 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m37120(__this, ___key, method) (( void (*) (Dictionary_2_t7013 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m37120_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m37122_gshared (Dictionary_2_t7013 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m37122(__this, method) (( bool (*) (Dictionary_2_t7013 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m37122_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m37124_gshared (Dictionary_2_t7013 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m37124(__this, method) (( Object_t * (*) (Dictionary_2_t7013 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m37124_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m37126_gshared (Dictionary_2_t7013 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m37126(__this, method) (( bool (*) (Dictionary_2_t7013 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m37126_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m37128_gshared (Dictionary_2_t7013 * __this, KeyValuePair_2_t7014  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m37128(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7013 *, KeyValuePair_2_t7014 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m37128_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m37130_gshared (Dictionary_2_t7013 * __this, KeyValuePair_2_t7014  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m37130(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7013 *, KeyValuePair_2_t7014 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m37130_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m37132_gshared (Dictionary_2_t7013 * __this, KeyValuePair_2U5BU5D_t8956* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m37132(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7013 *, KeyValuePair_2U5BU5D_t8956*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m37132_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m37134_gshared (Dictionary_2_t7013 * __this, KeyValuePair_2_t7014  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m37134(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7013 *, KeyValuePair_2_t7014 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m37134_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m37136_gshared (Dictionary_2_t7013 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m37136(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7013 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m37136_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m37138_gshared (Dictionary_2_t7013 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m37138(__this, method) (( Object_t * (*) (Dictionary_2_t7013 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m37138_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m37140_gshared (Dictionary_2_t7013 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m37140(__this, method) (( Object_t* (*) (Dictionary_2_t7013 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m37140_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m37142_gshared (Dictionary_2_t7013 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m37142(__this, method) (( Object_t * (*) (Dictionary_2_t7013 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m37142_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m37144_gshared (Dictionary_2_t7013 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m37144(__this, method) (( int32_t (*) (Dictionary_2_t7013 *, const MethodInfo*))Dictionary_2_get_Count_m37144_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Item(TKey)
extern "C" float Dictionary_2_get_Item_m37146_gshared (Dictionary_2_t7013 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m37146(__this, ___key, method) (( float (*) (Dictionary_2_t7013 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m37146_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m37148_gshared (Dictionary_2_t7013 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m37148(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7013 *, Object_t *, float, const MethodInfo*))Dictionary_2_set_Item_m37148_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m37150_gshared (Dictionary_2_t7013 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m37150(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7013 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m37150_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m37152_gshared (Dictionary_2_t7013 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m37152(__this, ___size, method) (( void (*) (Dictionary_2_t7013 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m37152_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m37154_gshared (Dictionary_2_t7013 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m37154(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7013 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m37154_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7014  Dictionary_2_make_pair_m37156_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m37156(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7014  (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_make_pair_m37156_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m37158_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m37158(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_pick_key_m37158_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_value(TKey,TValue)
extern "C" float Dictionary_2_pick_value_m37160_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m37160(__this /* static, unused */, ___key, ___value, method) (( float (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_pick_value_m37160_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m37162_gshared (Dictionary_2_t7013 * __this, KeyValuePair_2U5BU5D_t8956* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m37162(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7013 *, KeyValuePair_2U5BU5D_t8956*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m37162_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Resize()
extern "C" void Dictionary_2_Resize_m37164_gshared (Dictionary_2_t7013 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m37164(__this, method) (( void (*) (Dictionary_2_t7013 *, const MethodInfo*))Dictionary_2_Resize_m37164_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m37166_gshared (Dictionary_2_t7013 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_Add_m37166(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7013 *, Object_t *, float, const MethodInfo*))Dictionary_2_Add_m37166_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Clear()
extern "C" void Dictionary_2_Clear_m37168_gshared (Dictionary_2_t7013 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m37168(__this, method) (( void (*) (Dictionary_2_t7013 *, const MethodInfo*))Dictionary_2_Clear_m37168_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m37170_gshared (Dictionary_2_t7013 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m37170(__this, ___key, method) (( bool (*) (Dictionary_2_t7013 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m37170_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m37172_gshared (Dictionary_2_t7013 * __this, float ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m37172(__this, ___value, method) (( bool (*) (Dictionary_2_t7013 *, float, const MethodInfo*))Dictionary_2_ContainsValue_m37172_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m37174_gshared (Dictionary_2_t7013 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m37174(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7013 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2_GetObjectData_m37174_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m37176_gshared (Dictionary_2_t7013 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m37176(__this, ___sender, method) (( void (*) (Dictionary_2_t7013 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m37176_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m37178_gshared (Dictionary_2_t7013 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m37178(__this, ___key, method) (( bool (*) (Dictionary_2_t7013 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m37178_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m37180_gshared (Dictionary_2_t7013 * __this, Object_t * ___key, float* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m37180(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7013 *, Object_t *, float*, const MethodInfo*))Dictionary_2_TryGetValue_m37180_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Keys()
extern "C" KeyCollection_t7016 * Dictionary_2_get_Keys_m37182_gshared (Dictionary_2_t7013 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m37182(__this, method) (( KeyCollection_t7016 * (*) (Dictionary_2_t7013 *, const MethodInfo*))Dictionary_2_get_Keys_m37182_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Values()
extern "C" ValueCollection_t7020 * Dictionary_2_get_Values_m37184_gshared (Dictionary_2_t7013 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m37184(__this, method) (( ValueCollection_t7020 * (*) (Dictionary_2_t7013 *, const MethodInfo*))Dictionary_2_get_Values_m37184_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m37186_gshared (Dictionary_2_t7013 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m37186(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7013 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m37186_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTValue(System.Object)
extern "C" float Dictionary_2_ToTValue_m37188_gshared (Dictionary_2_t7013 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m37188(__this, ___value, method) (( float (*) (Dictionary_2_t7013 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m37188_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m37190_gshared (Dictionary_2_t7013 * __this, KeyValuePair_2_t7014  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m37190(__this, ___pair, method) (( bool (*) (Dictionary_2_t7013 *, KeyValuePair_2_t7014 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m37190_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetEnumerator()
extern "C" Enumerator_t7018  Dictionary_2_GetEnumerator_m37191_gshared (Dictionary_2_t7013 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m37191(__this, method) (( Enumerator_t7018  (*) (Dictionary_2_t7013 *, const MethodInfo*))Dictionary_2_GetEnumerator_m37191_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Single>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t748  Dictionary_2_U3CCopyToU3Em__0_m37193_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m37193(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m37193_gshared)(__this /* static, unused */, ___key, ___value, method)
