#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t6682;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1554;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t9796;
// System.Collections.ICollection
struct ICollection_t680;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Single>
struct KeyCollection_t6685;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>
struct ValueCollection_t6689;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1519;
// System.Collections.Generic.IDictionary`2<System.Object,System.Single>
struct IDictionary_2_t10007;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t8674;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerator_1_t8056;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3962;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_35.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__29.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
extern "C" void Dictionary_2__ctor_m35645_gshared (Dictionary_2_t6682 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m35645(__this, method) (( void (*) (Dictionary_2_t6682 *, const MethodInfo*))Dictionary_2__ctor_m35645_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m35647_gshared (Dictionary_2_t6682 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m35647(__this, ___comparer, method) (( void (*) (Dictionary_2_t6682 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m35647_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m35649_gshared (Dictionary_2_t6682 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m35649(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6682 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m35649_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m35651_gshared (Dictionary_2_t6682 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m35651(__this, ___capacity, method) (( void (*) (Dictionary_2_t6682 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m35651_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m35653_gshared (Dictionary_2_t6682 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m35653(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6682 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m35653_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m35655_gshared (Dictionary_2_t6682 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m35655(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6682 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2__ctor_m35655_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m35657_gshared (Dictionary_2_t6682 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m35657(__this, method) (( Object_t* (*) (Dictionary_2_t6682 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m35657_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m35659_gshared (Dictionary_2_t6682 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m35659(__this, method) (( Object_t* (*) (Dictionary_2_t6682 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m35659_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m35661_gshared (Dictionary_2_t6682 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m35661(__this, method) (( Object_t * (*) (Dictionary_2_t6682 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m35661_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m35663_gshared (Dictionary_2_t6682 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m35663(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6682 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m35663_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m35665_gshared (Dictionary_2_t6682 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m35665(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6682 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m35665_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m35667_gshared (Dictionary_2_t6682 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m35667(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6682 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m35667_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m35669_gshared (Dictionary_2_t6682 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m35669(__this, ___key, method) (( bool (*) (Dictionary_2_t6682 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m35669_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m35671_gshared (Dictionary_2_t6682 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m35671(__this, ___key, method) (( void (*) (Dictionary_2_t6682 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m35671_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m35673_gshared (Dictionary_2_t6682 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m35673(__this, method) (( bool (*) (Dictionary_2_t6682 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m35673_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m35675_gshared (Dictionary_2_t6682 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m35675(__this, method) (( Object_t * (*) (Dictionary_2_t6682 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m35675_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m35677_gshared (Dictionary_2_t6682 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m35677(__this, method) (( bool (*) (Dictionary_2_t6682 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m35677_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m35679_gshared (Dictionary_2_t6682 * __this, KeyValuePair_2_t6683  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m35679(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6682 *, KeyValuePair_2_t6683 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m35679_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m35681_gshared (Dictionary_2_t6682 * __this, KeyValuePair_2_t6683  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m35681(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6682 *, KeyValuePair_2_t6683 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m35681_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m35683_gshared (Dictionary_2_t6682 * __this, KeyValuePair_2U5BU5D_t8674* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m35683(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6682 *, KeyValuePair_2U5BU5D_t8674*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m35683_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m35685_gshared (Dictionary_2_t6682 * __this, KeyValuePair_2_t6683  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m35685(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6682 *, KeyValuePair_2_t6683 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m35685_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m35687_gshared (Dictionary_2_t6682 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m35687(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6682 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m35687_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m35689_gshared (Dictionary_2_t6682 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m35689(__this, method) (( Object_t * (*) (Dictionary_2_t6682 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m35689_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m35691_gshared (Dictionary_2_t6682 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m35691(__this, method) (( Object_t* (*) (Dictionary_2_t6682 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m35691_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m35693_gshared (Dictionary_2_t6682 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m35693(__this, method) (( Object_t * (*) (Dictionary_2_t6682 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m35693_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m35695_gshared (Dictionary_2_t6682 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m35695(__this, method) (( int32_t (*) (Dictionary_2_t6682 *, const MethodInfo*))Dictionary_2_get_Count_m35695_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Item(TKey)
extern "C" float Dictionary_2_get_Item_m35697_gshared (Dictionary_2_t6682 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m35697(__this, ___key, method) (( float (*) (Dictionary_2_t6682 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m35697_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m35699_gshared (Dictionary_2_t6682 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m35699(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6682 *, Object_t *, float, const MethodInfo*))Dictionary_2_set_Item_m35699_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m35701_gshared (Dictionary_2_t6682 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m35701(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6682 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m35701_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m35703_gshared (Dictionary_2_t6682 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m35703(__this, ___size, method) (( void (*) (Dictionary_2_t6682 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m35703_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m35705_gshared (Dictionary_2_t6682 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m35705(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6682 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m35705_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6683  Dictionary_2_make_pair_m35707_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m35707(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6683  (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_make_pair_m35707_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m35709_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m35709(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_pick_key_m35709_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_value(TKey,TValue)
extern "C" float Dictionary_2_pick_value_m35711_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m35711(__this /* static, unused */, ___key, ___value, method) (( float (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_pick_value_m35711_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m35713_gshared (Dictionary_2_t6682 * __this, KeyValuePair_2U5BU5D_t8674* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m35713(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6682 *, KeyValuePair_2U5BU5D_t8674*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m35713_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Resize()
extern "C" void Dictionary_2_Resize_m35715_gshared (Dictionary_2_t6682 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m35715(__this, method) (( void (*) (Dictionary_2_t6682 *, const MethodInfo*))Dictionary_2_Resize_m35715_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m35717_gshared (Dictionary_2_t6682 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_Add_m35717(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6682 *, Object_t *, float, const MethodInfo*))Dictionary_2_Add_m35717_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Clear()
extern "C" void Dictionary_2_Clear_m35719_gshared (Dictionary_2_t6682 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m35719(__this, method) (( void (*) (Dictionary_2_t6682 *, const MethodInfo*))Dictionary_2_Clear_m35719_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m35721_gshared (Dictionary_2_t6682 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m35721(__this, ___key, method) (( bool (*) (Dictionary_2_t6682 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m35721_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m35723_gshared (Dictionary_2_t6682 * __this, float ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m35723(__this, ___value, method) (( bool (*) (Dictionary_2_t6682 *, float, const MethodInfo*))Dictionary_2_ContainsValue_m35723_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m35725_gshared (Dictionary_2_t6682 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m35725(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6682 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2_GetObjectData_m35725_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m35727_gshared (Dictionary_2_t6682 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m35727(__this, ___sender, method) (( void (*) (Dictionary_2_t6682 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m35727_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m35729_gshared (Dictionary_2_t6682 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m35729(__this, ___key, method) (( bool (*) (Dictionary_2_t6682 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m35729_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m35731_gshared (Dictionary_2_t6682 * __this, Object_t * ___key, float* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m35731(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6682 *, Object_t *, float*, const MethodInfo*))Dictionary_2_TryGetValue_m35731_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Keys()
extern "C" KeyCollection_t6685 * Dictionary_2_get_Keys_m35733_gshared (Dictionary_2_t6682 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m35733(__this, method) (( KeyCollection_t6685 * (*) (Dictionary_2_t6682 *, const MethodInfo*))Dictionary_2_get_Keys_m35733_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Values()
extern "C" ValueCollection_t6689 * Dictionary_2_get_Values_m35735_gshared (Dictionary_2_t6682 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m35735(__this, method) (( ValueCollection_t6689 * (*) (Dictionary_2_t6682 *, const MethodInfo*))Dictionary_2_get_Values_m35735_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m35737_gshared (Dictionary_2_t6682 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m35737(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6682 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m35737_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTValue(System.Object)
extern "C" float Dictionary_2_ToTValue_m35739_gshared (Dictionary_2_t6682 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m35739(__this, ___value, method) (( float (*) (Dictionary_2_t6682 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m35739_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m35741_gshared (Dictionary_2_t6682 * __this, KeyValuePair_2_t6683  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m35741(__this, ___pair, method) (( bool (*) (Dictionary_2_t6682 *, KeyValuePair_2_t6683 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m35741_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetEnumerator()
extern "C" Enumerator_t6687  Dictionary_2_GetEnumerator_m35742_gshared (Dictionary_2_t6682 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m35742(__this, method) (( Enumerator_t6687  (*) (Dictionary_2_t6682 *, const MethodInfo*))Dictionary_2_GetEnumerator_m35742_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Single>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t679  Dictionary_2_U3CCopyToU3Em__0_m35744_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m35744(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m35744_gshared)(__this /* static, unused */, ___key, ___value, method)
