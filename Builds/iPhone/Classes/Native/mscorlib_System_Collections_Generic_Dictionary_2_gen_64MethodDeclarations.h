#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7886;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1554;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t10185;
// System.Collections.ICollection
struct ICollection_t680;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>
struct KeyCollection_t7887;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>
struct ValueCollection_t7891;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1519;
// System.Collections.Generic.IDictionary`2<System.Object,System.DateTime>
struct IDictionary_2_t10292;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t8748;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerator_1_t8741;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3962;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__49.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor()
extern "C" void Dictionary_2__ctor_m51256_gshared (Dictionary_2_t7886 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m51256(__this, method) (( void (*) (Dictionary_2_t7886 *, const MethodInfo*))Dictionary_2__ctor_m51256_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m51258_gshared (Dictionary_2_t7886 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m51258(__this, ___comparer, method) (( void (*) (Dictionary_2_t7886 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m51258_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m51260_gshared (Dictionary_2_t7886 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m51260(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7886 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m51260_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m51262_gshared (Dictionary_2_t7886 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m51262(__this, ___capacity, method) (( void (*) (Dictionary_2_t7886 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m51262_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m51264_gshared (Dictionary_2_t7886 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m51264(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7886 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m51264_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m51266_gshared (Dictionary_2_t7886 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m51266(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7886 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2__ctor_m51266_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m51268_gshared (Dictionary_2_t7886 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m51268(__this, method) (( Object_t* (*) (Dictionary_2_t7886 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m51268_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m51270_gshared (Dictionary_2_t7886 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m51270(__this, method) (( Object_t* (*) (Dictionary_2_t7886 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m51270_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m51272_gshared (Dictionary_2_t7886 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m51272(__this, method) (( Object_t * (*) (Dictionary_2_t7886 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m51272_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m51274_gshared (Dictionary_2_t7886 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m51274(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7886 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m51274_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m51276_gshared (Dictionary_2_t7886 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m51276(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7886 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m51276_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m51278_gshared (Dictionary_2_t7886 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m51278(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7886 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m51278_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m51280_gshared (Dictionary_2_t7886 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m51280(__this, ___key, method) (( bool (*) (Dictionary_2_t7886 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m51280_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m51282_gshared (Dictionary_2_t7886 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m51282(__this, ___key, method) (( void (*) (Dictionary_2_t7886 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m51282_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m51284_gshared (Dictionary_2_t7886 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m51284(__this, method) (( bool (*) (Dictionary_2_t7886 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m51284_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m51286_gshared (Dictionary_2_t7886 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m51286(__this, method) (( Object_t * (*) (Dictionary_2_t7886 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m51286_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m51288_gshared (Dictionary_2_t7886 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m51288(__this, method) (( bool (*) (Dictionary_2_t7886 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m51288_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m51290_gshared (Dictionary_2_t7886 * __this, KeyValuePair_2_t7814  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m51290(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7886 *, KeyValuePair_2_t7814 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m51290_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m51292_gshared (Dictionary_2_t7886 * __this, KeyValuePair_2_t7814  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m51292(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7886 *, KeyValuePair_2_t7814 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m51292_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m51294_gshared (Dictionary_2_t7886 * __this, KeyValuePair_2U5BU5D_t8748* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m51294(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7886 *, KeyValuePair_2U5BU5D_t8748*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m51294_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m51296_gshared (Dictionary_2_t7886 * __this, KeyValuePair_2_t7814  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m51296(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7886 *, KeyValuePair_2_t7814 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m51296_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m51298_gshared (Dictionary_2_t7886 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m51298(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7886 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m51298_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m51300_gshared (Dictionary_2_t7886 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m51300(__this, method) (( Object_t * (*) (Dictionary_2_t7886 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m51300_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m51302_gshared (Dictionary_2_t7886 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m51302(__this, method) (( Object_t* (*) (Dictionary_2_t7886 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m51302_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m51304_gshared (Dictionary_2_t7886 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m51304(__this, method) (( Object_t * (*) (Dictionary_2_t7886 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m51304_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m51306_gshared (Dictionary_2_t7886 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m51306(__this, method) (( int32_t (*) (Dictionary_2_t7886 *, const MethodInfo*))Dictionary_2_get_Count_m51306_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Item(TKey)
extern "C" DateTime_t1705  Dictionary_2_get_Item_m51308_gshared (Dictionary_2_t7886 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m51308(__this, ___key, method) (( DateTime_t1705  (*) (Dictionary_2_t7886 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m51308_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m51310_gshared (Dictionary_2_t7886 * __this, Object_t * ___key, DateTime_t1705  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m51310(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7886 *, Object_t *, DateTime_t1705 , const MethodInfo*))Dictionary_2_set_Item_m51310_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m51312_gshared (Dictionary_2_t7886 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m51312(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7886 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m51312_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m51314_gshared (Dictionary_2_t7886 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m51314(__this, ___size, method) (( void (*) (Dictionary_2_t7886 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m51314_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m51316_gshared (Dictionary_2_t7886 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m51316(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7886 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m51316_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7814  Dictionary_2_make_pair_m51318_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t1705  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m51318(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7814  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t1705 , const MethodInfo*))Dictionary_2_make_pair_m51318_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m51320_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t1705  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m51320(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, DateTime_t1705 , const MethodInfo*))Dictionary_2_pick_key_m51320_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::pick_value(TKey,TValue)
extern "C" DateTime_t1705  Dictionary_2_pick_value_m51322_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t1705  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m51322(__this /* static, unused */, ___key, ___value, method) (( DateTime_t1705  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t1705 , const MethodInfo*))Dictionary_2_pick_value_m51322_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m51324_gshared (Dictionary_2_t7886 * __this, KeyValuePair_2U5BU5D_t8748* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m51324(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7886 *, KeyValuePair_2U5BU5D_t8748*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m51324_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Resize()
extern "C" void Dictionary_2_Resize_m51326_gshared (Dictionary_2_t7886 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m51326(__this, method) (( void (*) (Dictionary_2_t7886 *, const MethodInfo*))Dictionary_2_Resize_m51326_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m51328_gshared (Dictionary_2_t7886 * __this, Object_t * ___key, DateTime_t1705  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m51328(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7886 *, Object_t *, DateTime_t1705 , const MethodInfo*))Dictionary_2_Add_m51328_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Clear()
extern "C" void Dictionary_2_Clear_m51330_gshared (Dictionary_2_t7886 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m51330(__this, method) (( void (*) (Dictionary_2_t7886 *, const MethodInfo*))Dictionary_2_Clear_m51330_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m51332_gshared (Dictionary_2_t7886 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m51332(__this, ___key, method) (( bool (*) (Dictionary_2_t7886 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m51332_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m51334_gshared (Dictionary_2_t7886 * __this, DateTime_t1705  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m51334(__this, ___value, method) (( bool (*) (Dictionary_2_t7886 *, DateTime_t1705 , const MethodInfo*))Dictionary_2_ContainsValue_m51334_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m51336_gshared (Dictionary_2_t7886 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m51336(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7886 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2_GetObjectData_m51336_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m51338_gshared (Dictionary_2_t7886 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m51338(__this, ___sender, method) (( void (*) (Dictionary_2_t7886 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m51338_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m51340_gshared (Dictionary_2_t7886 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m51340(__this, ___key, method) (( bool (*) (Dictionary_2_t7886 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m51340_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m51342_gshared (Dictionary_2_t7886 * __this, Object_t * ___key, DateTime_t1705 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m51342(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7886 *, Object_t *, DateTime_t1705 *, const MethodInfo*))Dictionary_2_TryGetValue_m51342_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Keys()
extern "C" KeyCollection_t7887 * Dictionary_2_get_Keys_m51344_gshared (Dictionary_2_t7886 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m51344(__this, method) (( KeyCollection_t7887 * (*) (Dictionary_2_t7886 *, const MethodInfo*))Dictionary_2_get_Keys_m51344_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Values()
extern "C" ValueCollection_t7891 * Dictionary_2_get_Values_m51346_gshared (Dictionary_2_t7886 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m51346(__this, method) (( ValueCollection_t7891 * (*) (Dictionary_2_t7886 *, const MethodInfo*))Dictionary_2_get_Values_m51346_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m51348_gshared (Dictionary_2_t7886 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m51348(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7886 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m51348_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ToTValue(System.Object)
extern "C" DateTime_t1705  Dictionary_2_ToTValue_m51350_gshared (Dictionary_2_t7886 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m51350(__this, ___value, method) (( DateTime_t1705  (*) (Dictionary_2_t7886 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m51350_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m51352_gshared (Dictionary_2_t7886 * __this, KeyValuePair_2_t7814  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m51352(__this, ___pair, method) (( bool (*) (Dictionary_2_t7886 *, KeyValuePair_2_t7814 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m51352_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::GetEnumerator()
extern "C" Enumerator_t7889  Dictionary_2_GetEnumerator_m51354_gshared (Dictionary_2_t7886 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m51354(__this, method) (( Enumerator_t7889  (*) (Dictionary_2_t7886 *, const MethodInfo*))Dictionary_2_GetEnumerator_m51354_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t679  Dictionary_2_U3CCopyToU3Em__0_m51356_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t1705  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m51356(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t1705 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m51356_gshared)(__this /* static, unused */, ___key, ___value, method)
