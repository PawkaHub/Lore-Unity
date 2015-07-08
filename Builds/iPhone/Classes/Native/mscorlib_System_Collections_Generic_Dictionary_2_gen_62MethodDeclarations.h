#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t8142;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1809;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t10474;
// System.Collections.ICollection
struct ICollection_t749;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Double>
struct KeyCollection_t8143;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>
struct ValueCollection_t8147;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1775;
// System.Collections.Generic.IDictionary`2<System.Object,System.Double>
struct IDictionary_2_t10575;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>[]
struct KeyValuePair_2U5BU5D_t8891;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerator_1_t8331;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t4200;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_51.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__47.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor()
extern "C" void Dictionary_2__ctor_m51820_gshared (Dictionary_2_t8142 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m51820(__this, method) (( void (*) (Dictionary_2_t8142 *, const MethodInfo*))Dictionary_2__ctor_m51820_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m51822_gshared (Dictionary_2_t8142 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m51822(__this, ___comparer, method) (( void (*) (Dictionary_2_t8142 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m51822_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m51824_gshared (Dictionary_2_t8142 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m51824(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8142 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m51824_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m51826_gshared (Dictionary_2_t8142 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m51826(__this, ___capacity, method) (( void (*) (Dictionary_2_t8142 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m51826_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m51828_gshared (Dictionary_2_t8142 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m51828(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8142 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m51828_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m51830_gshared (Dictionary_2_t8142 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m51830(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8142 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2__ctor_m51830_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m51832_gshared (Dictionary_2_t8142 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m51832(__this, method) (( Object_t* (*) (Dictionary_2_t8142 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m51832_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m51834_gshared (Dictionary_2_t8142 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m51834(__this, method) (( Object_t* (*) (Dictionary_2_t8142 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m51834_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m51836_gshared (Dictionary_2_t8142 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m51836(__this, method) (( Object_t * (*) (Dictionary_2_t8142 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m51836_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m51838_gshared (Dictionary_2_t8142 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m51838(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8142 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m51838_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m51840_gshared (Dictionary_2_t8142 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m51840(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8142 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m51840_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m51842_gshared (Dictionary_2_t8142 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m51842(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8142 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m51842_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m51844_gshared (Dictionary_2_t8142 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m51844(__this, ___key, method) (( bool (*) (Dictionary_2_t8142 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m51844_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m51846_gshared (Dictionary_2_t8142 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m51846(__this, ___key, method) (( void (*) (Dictionary_2_t8142 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m51846_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m51848_gshared (Dictionary_2_t8142 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m51848(__this, method) (( bool (*) (Dictionary_2_t8142 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m51848_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m51850_gshared (Dictionary_2_t8142 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m51850(__this, method) (( Object_t * (*) (Dictionary_2_t8142 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m51850_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m51852_gshared (Dictionary_2_t8142 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m51852(__this, method) (( bool (*) (Dictionary_2_t8142 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m51852_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m51854_gshared (Dictionary_2_t8142 * __this, KeyValuePair_2_t8085  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m51854(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8142 *, KeyValuePair_2_t8085 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m51854_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m51856_gshared (Dictionary_2_t8142 * __this, KeyValuePair_2_t8085  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m51856(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8142 *, KeyValuePair_2_t8085 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m51856_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m51858_gshared (Dictionary_2_t8142 * __this, KeyValuePair_2U5BU5D_t8891* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m51858(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8142 *, KeyValuePair_2U5BU5D_t8891*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m51858_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m51860_gshared (Dictionary_2_t8142 * __this, KeyValuePair_2_t8085  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m51860(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8142 *, KeyValuePair_2_t8085 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m51860_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m51862_gshared (Dictionary_2_t8142 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m51862(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8142 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m51862_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m51864_gshared (Dictionary_2_t8142 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m51864(__this, method) (( Object_t * (*) (Dictionary_2_t8142 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m51864_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m51866_gshared (Dictionary_2_t8142 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m51866(__this, method) (( Object_t* (*) (Dictionary_2_t8142 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m51866_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m51868_gshared (Dictionary_2_t8142 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m51868(__this, method) (( Object_t * (*) (Dictionary_2_t8142 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m51868_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m51870_gshared (Dictionary_2_t8142 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m51870(__this, method) (( int32_t (*) (Dictionary_2_t8142 *, const MethodInfo*))Dictionary_2_get_Count_m51870_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Item(TKey)
extern "C" double Dictionary_2_get_Item_m51872_gshared (Dictionary_2_t8142 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m51872(__this, ___key, method) (( double (*) (Dictionary_2_t8142 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m51872_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m51874_gshared (Dictionary_2_t8142 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m51874(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8142 *, Object_t *, double, const MethodInfo*))Dictionary_2_set_Item_m51874_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m51876_gshared (Dictionary_2_t8142 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m51876(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8142 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m51876_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m51878_gshared (Dictionary_2_t8142 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m51878(__this, ___size, method) (( void (*) (Dictionary_2_t8142 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m51878_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m51880_gshared (Dictionary_2_t8142 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m51880(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8142 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m51880_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8085  Dictionary_2_make_pair_m51882_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m51882(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8085  (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_make_pair_m51882_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m51884_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m51884(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_pick_key_m51884_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_value(TKey,TValue)
extern "C" double Dictionary_2_pick_value_m51886_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m51886(__this /* static, unused */, ___key, ___value, method) (( double (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_pick_value_m51886_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m51888_gshared (Dictionary_2_t8142 * __this, KeyValuePair_2U5BU5D_t8891* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m51888(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8142 *, KeyValuePair_2U5BU5D_t8891*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m51888_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Resize()
extern "C" void Dictionary_2_Resize_m51890_gshared (Dictionary_2_t8142 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m51890(__this, method) (( void (*) (Dictionary_2_t8142 *, const MethodInfo*))Dictionary_2_Resize_m51890_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m51892_gshared (Dictionary_2_t8142 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_Add_m51892(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8142 *, Object_t *, double, const MethodInfo*))Dictionary_2_Add_m51892_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Clear()
extern "C" void Dictionary_2_Clear_m51894_gshared (Dictionary_2_t8142 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m51894(__this, method) (( void (*) (Dictionary_2_t8142 *, const MethodInfo*))Dictionary_2_Clear_m51894_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m51896_gshared (Dictionary_2_t8142 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m51896(__this, ___key, method) (( bool (*) (Dictionary_2_t8142 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m51896_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m51898_gshared (Dictionary_2_t8142 * __this, double ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m51898(__this, ___value, method) (( bool (*) (Dictionary_2_t8142 *, double, const MethodInfo*))Dictionary_2_ContainsValue_m51898_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m51900_gshared (Dictionary_2_t8142 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m51900(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8142 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2_GetObjectData_m51900_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m51902_gshared (Dictionary_2_t8142 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m51902(__this, ___sender, method) (( void (*) (Dictionary_2_t8142 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m51902_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m51904_gshared (Dictionary_2_t8142 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m51904(__this, ___key, method) (( bool (*) (Dictionary_2_t8142 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m51904_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m51906_gshared (Dictionary_2_t8142 * __this, Object_t * ___key, double* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m51906(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8142 *, Object_t *, double*, const MethodInfo*))Dictionary_2_TryGetValue_m51906_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Keys()
extern "C" KeyCollection_t8143 * Dictionary_2_get_Keys_m51908_gshared (Dictionary_2_t8142 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m51908(__this, method) (( KeyCollection_t8143 * (*) (Dictionary_2_t8142 *, const MethodInfo*))Dictionary_2_get_Keys_m51908_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Values()
extern "C" ValueCollection_t8147 * Dictionary_2_get_Values_m51910_gshared (Dictionary_2_t8142 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m51910(__this, method) (( ValueCollection_t8147 * (*) (Dictionary_2_t8142 *, const MethodInfo*))Dictionary_2_get_Values_m51910_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m51912_gshared (Dictionary_2_t8142 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m51912(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8142 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m51912_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTValue(System.Object)
extern "C" double Dictionary_2_ToTValue_m51914_gshared (Dictionary_2_t8142 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m51914(__this, ___value, method) (( double (*) (Dictionary_2_t8142 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m51914_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m51916_gshared (Dictionary_2_t8142 * __this, KeyValuePair_2_t8085  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m51916(__this, ___pair, method) (( bool (*) (Dictionary_2_t8142 *, KeyValuePair_2_t8085 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m51916_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetEnumerator()
extern "C" Enumerator_t8145  Dictionary_2_GetEnumerator_m51918_gshared (Dictionary_2_t8142 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m51918(__this, method) (( Enumerator_t8145  (*) (Dictionary_2_t8142 *, const MethodInfo*))Dictionary_2_GetEnumerator_m51918_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Double>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t748  Dictionary_2_U3CCopyToU3Em__0_m51920_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m51920(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m51920_gshared)(__this /* static, unused */, ___key, ___value, method)
