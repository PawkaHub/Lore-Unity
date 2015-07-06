#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7860;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1554;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t10183;
// System.Collections.ICollection
struct ICollection_t680;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Double>
struct KeyCollection_t7861;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>
struct ValueCollection_t7865;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1519;
// System.Collections.Generic.IDictionary`2<System.Object,System.Double>
struct IDictionary_2_t10284;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>[]
struct KeyValuePair_2U5BU5D_t8609;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerator_1_t8049;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3962;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_51.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__47.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor()
extern "C" void Dictionary_2__ctor_m50905_gshared (Dictionary_2_t7860 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m50905(__this, method) (( void (*) (Dictionary_2_t7860 *, const MethodInfo*))Dictionary_2__ctor_m50905_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m50907_gshared (Dictionary_2_t7860 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m50907(__this, ___comparer, method) (( void (*) (Dictionary_2_t7860 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m50907_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m50909_gshared (Dictionary_2_t7860 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m50909(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7860 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m50909_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m50911_gshared (Dictionary_2_t7860 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m50911(__this, ___capacity, method) (( void (*) (Dictionary_2_t7860 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m50911_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m50913_gshared (Dictionary_2_t7860 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m50913(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7860 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m50913_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m50915_gshared (Dictionary_2_t7860 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m50915(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7860 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2__ctor_m50915_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m50917_gshared (Dictionary_2_t7860 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m50917(__this, method) (( Object_t* (*) (Dictionary_2_t7860 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m50917_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m50919_gshared (Dictionary_2_t7860 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m50919(__this, method) (( Object_t* (*) (Dictionary_2_t7860 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m50919_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m50921_gshared (Dictionary_2_t7860 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m50921(__this, method) (( Object_t * (*) (Dictionary_2_t7860 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m50921_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m50923_gshared (Dictionary_2_t7860 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m50923(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7860 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m50923_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m50925_gshared (Dictionary_2_t7860 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m50925(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7860 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m50925_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m50927_gshared (Dictionary_2_t7860 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m50927(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7860 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m50927_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m50929_gshared (Dictionary_2_t7860 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m50929(__this, ___key, method) (( bool (*) (Dictionary_2_t7860 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m50929_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m50931_gshared (Dictionary_2_t7860 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m50931(__this, ___key, method) (( void (*) (Dictionary_2_t7860 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m50931_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m50933_gshared (Dictionary_2_t7860 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m50933(__this, method) (( bool (*) (Dictionary_2_t7860 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m50933_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m50935_gshared (Dictionary_2_t7860 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m50935(__this, method) (( Object_t * (*) (Dictionary_2_t7860 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m50935_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m50937_gshared (Dictionary_2_t7860 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m50937(__this, method) (( bool (*) (Dictionary_2_t7860 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m50937_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m50939_gshared (Dictionary_2_t7860 * __this, KeyValuePair_2_t7803  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m50939(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7860 *, KeyValuePair_2_t7803 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m50939_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m50941_gshared (Dictionary_2_t7860 * __this, KeyValuePair_2_t7803  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m50941(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7860 *, KeyValuePair_2_t7803 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m50941_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m50943_gshared (Dictionary_2_t7860 * __this, KeyValuePair_2U5BU5D_t8609* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m50943(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7860 *, KeyValuePair_2U5BU5D_t8609*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m50943_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m50945_gshared (Dictionary_2_t7860 * __this, KeyValuePair_2_t7803  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m50945(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7860 *, KeyValuePair_2_t7803 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m50945_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m50947_gshared (Dictionary_2_t7860 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m50947(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7860 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m50947_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m50949_gshared (Dictionary_2_t7860 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m50949(__this, method) (( Object_t * (*) (Dictionary_2_t7860 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m50949_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m50951_gshared (Dictionary_2_t7860 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m50951(__this, method) (( Object_t* (*) (Dictionary_2_t7860 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m50951_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m50953_gshared (Dictionary_2_t7860 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m50953(__this, method) (( Object_t * (*) (Dictionary_2_t7860 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m50953_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m50955_gshared (Dictionary_2_t7860 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m50955(__this, method) (( int32_t (*) (Dictionary_2_t7860 *, const MethodInfo*))Dictionary_2_get_Count_m50955_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Item(TKey)
extern "C" double Dictionary_2_get_Item_m50957_gshared (Dictionary_2_t7860 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m50957(__this, ___key, method) (( double (*) (Dictionary_2_t7860 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m50957_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m50959_gshared (Dictionary_2_t7860 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m50959(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7860 *, Object_t *, double, const MethodInfo*))Dictionary_2_set_Item_m50959_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m50961_gshared (Dictionary_2_t7860 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m50961(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7860 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m50961_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m50963_gshared (Dictionary_2_t7860 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m50963(__this, ___size, method) (( void (*) (Dictionary_2_t7860 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m50963_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m50965_gshared (Dictionary_2_t7860 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m50965(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7860 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m50965_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7803  Dictionary_2_make_pair_m50967_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m50967(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7803  (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_make_pair_m50967_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m50969_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m50969(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_pick_key_m50969_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_value(TKey,TValue)
extern "C" double Dictionary_2_pick_value_m50971_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m50971(__this /* static, unused */, ___key, ___value, method) (( double (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_pick_value_m50971_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m50973_gshared (Dictionary_2_t7860 * __this, KeyValuePair_2U5BU5D_t8609* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m50973(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7860 *, KeyValuePair_2U5BU5D_t8609*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m50973_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Resize()
extern "C" void Dictionary_2_Resize_m50975_gshared (Dictionary_2_t7860 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m50975(__this, method) (( void (*) (Dictionary_2_t7860 *, const MethodInfo*))Dictionary_2_Resize_m50975_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m50977_gshared (Dictionary_2_t7860 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_Add_m50977(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7860 *, Object_t *, double, const MethodInfo*))Dictionary_2_Add_m50977_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Clear()
extern "C" void Dictionary_2_Clear_m50979_gshared (Dictionary_2_t7860 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m50979(__this, method) (( void (*) (Dictionary_2_t7860 *, const MethodInfo*))Dictionary_2_Clear_m50979_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m50981_gshared (Dictionary_2_t7860 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m50981(__this, ___key, method) (( bool (*) (Dictionary_2_t7860 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m50981_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m50983_gshared (Dictionary_2_t7860 * __this, double ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m50983(__this, ___value, method) (( bool (*) (Dictionary_2_t7860 *, double, const MethodInfo*))Dictionary_2_ContainsValue_m50983_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m50985_gshared (Dictionary_2_t7860 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m50985(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7860 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2_GetObjectData_m50985_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m50987_gshared (Dictionary_2_t7860 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m50987(__this, ___sender, method) (( void (*) (Dictionary_2_t7860 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m50987_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m50989_gshared (Dictionary_2_t7860 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m50989(__this, ___key, method) (( bool (*) (Dictionary_2_t7860 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m50989_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m50991_gshared (Dictionary_2_t7860 * __this, Object_t * ___key, double* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m50991(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7860 *, Object_t *, double*, const MethodInfo*))Dictionary_2_TryGetValue_m50991_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Keys()
extern "C" KeyCollection_t7861 * Dictionary_2_get_Keys_m50993_gshared (Dictionary_2_t7860 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m50993(__this, method) (( KeyCollection_t7861 * (*) (Dictionary_2_t7860 *, const MethodInfo*))Dictionary_2_get_Keys_m50993_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Values()
extern "C" ValueCollection_t7865 * Dictionary_2_get_Values_m50995_gshared (Dictionary_2_t7860 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m50995(__this, method) (( ValueCollection_t7865 * (*) (Dictionary_2_t7860 *, const MethodInfo*))Dictionary_2_get_Values_m50995_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m50997_gshared (Dictionary_2_t7860 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m50997(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7860 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m50997_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTValue(System.Object)
extern "C" double Dictionary_2_ToTValue_m50999_gshared (Dictionary_2_t7860 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m50999(__this, ___value, method) (( double (*) (Dictionary_2_t7860 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m50999_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m51001_gshared (Dictionary_2_t7860 * __this, KeyValuePair_2_t7803  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m51001(__this, ___pair, method) (( bool (*) (Dictionary_2_t7860 *, KeyValuePair_2_t7803 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m51001_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetEnumerator()
extern "C" Enumerator_t7863  Dictionary_2_GetEnumerator_m51003_gshared (Dictionary_2_t7860 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m51003(__this, method) (( Enumerator_t7863  (*) (Dictionary_2_t7860 *, const MethodInfo*))Dictionary_2_GetEnumerator_m51003_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Double>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t679  Dictionary_2_U3CCopyToU3Em__0_m51005_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m51005(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m51005_gshared)(__this /* static, unused */, ___key, ___value, method)
