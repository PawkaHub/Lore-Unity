#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6823;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t10056;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1554;
// System.Collections.ICollection
struct ICollection_t680;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_t6824;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>
struct ValueCollection_t6828;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t6821;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Object>
struct IDictionary_2_t6815;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>[]
struct KeyValuePair_2U5BU5D_t10057;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct IEnumerator_1_t10058;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3962;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_38.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__32.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m37481_gshared (Dictionary_2_t6823 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m37481(__this, method) (( void (*) (Dictionary_2_t6823 *, const MethodInfo*))Dictionary_2__ctor_m37481_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m37482_gshared (Dictionary_2_t6823 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m37482(__this, ___comparer, method) (( void (*) (Dictionary_2_t6823 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m37482_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m37483_gshared (Dictionary_2_t6823 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m37483(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6823 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m37483_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m37484_gshared (Dictionary_2_t6823 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m37484(__this, ___capacity, method) (( void (*) (Dictionary_2_t6823 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m37484_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m37485_gshared (Dictionary_2_t6823 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m37485(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6823 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m37485_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m37486_gshared (Dictionary_2_t6823 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m37486(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6823 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2__ctor_m37486_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m37487_gshared (Dictionary_2_t6823 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m37487(__this, method) (( Object_t* (*) (Dictionary_2_t6823 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m37487_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m37488_gshared (Dictionary_2_t6823 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m37488(__this, method) (( Object_t* (*) (Dictionary_2_t6823 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m37488_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m37489_gshared (Dictionary_2_t6823 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m37489(__this, method) (( Object_t * (*) (Dictionary_2_t6823 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m37489_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m37490_gshared (Dictionary_2_t6823 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m37490(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6823 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m37490_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m37491_gshared (Dictionary_2_t6823 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m37491(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6823 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m37491_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m37492_gshared (Dictionary_2_t6823 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m37492(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6823 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m37492_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m37493_gshared (Dictionary_2_t6823 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m37493(__this, ___key, method) (( bool (*) (Dictionary_2_t6823 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m37493_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m37494_gshared (Dictionary_2_t6823 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m37494(__this, ___key, method) (( void (*) (Dictionary_2_t6823 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m37494_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m37495_gshared (Dictionary_2_t6823 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m37495(__this, method) (( bool (*) (Dictionary_2_t6823 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m37495_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m37496_gshared (Dictionary_2_t6823 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m37496(__this, method) (( Object_t * (*) (Dictionary_2_t6823 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m37496_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m37497_gshared (Dictionary_2_t6823 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m37497(__this, method) (( bool (*) (Dictionary_2_t6823 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m37497_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m37498_gshared (Dictionary_2_t6823 * __this, KeyValuePair_2_t6818  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m37498(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6823 *, KeyValuePair_2_t6818 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m37498_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m37499_gshared (Dictionary_2_t6823 * __this, KeyValuePair_2_t6818  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m37499(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6823 *, KeyValuePair_2_t6818 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m37499_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m37500_gshared (Dictionary_2_t6823 * __this, KeyValuePair_2U5BU5D_t10057* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m37500(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6823 *, KeyValuePair_2U5BU5D_t10057*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m37500_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m37501_gshared (Dictionary_2_t6823 * __this, KeyValuePair_2_t6818  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m37501(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6823 *, KeyValuePair_2_t6818 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m37501_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m37502_gshared (Dictionary_2_t6823 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m37502(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6823 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m37502_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m37503_gshared (Dictionary_2_t6823 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m37503(__this, method) (( Object_t * (*) (Dictionary_2_t6823 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m37503_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m37504_gshared (Dictionary_2_t6823 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m37504(__this, method) (( Object_t* (*) (Dictionary_2_t6823 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m37504_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m37505_gshared (Dictionary_2_t6823 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m37505(__this, method) (( Object_t * (*) (Dictionary_2_t6823 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m37505_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m37506_gshared (Dictionary_2_t6823 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m37506(__this, method) (( int32_t (*) (Dictionary_2_t6823 *, const MethodInfo*))Dictionary_2_get_Count_m37506_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m37507_gshared (Dictionary_2_t6823 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m37507(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6823 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m37507_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m37508_gshared (Dictionary_2_t6823 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m37508(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6823 *, int64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m37508_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m37509_gshared (Dictionary_2_t6823 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m37509(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6823 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m37509_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m37510_gshared (Dictionary_2_t6823 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m37510(__this, ___size, method) (( void (*) (Dictionary_2_t6823 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m37510_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m37511_gshared (Dictionary_2_t6823 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m37511(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6823 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m37511_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6818  Dictionary_2_make_pair_m37512_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m37512(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6818  (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m37512_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m37513_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m37513(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m37513_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m37514_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m37514(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m37514_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m37515_gshared (Dictionary_2_t6823 * __this, KeyValuePair_2U5BU5D_t10057* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m37515(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6823 *, KeyValuePair_2U5BU5D_t10057*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m37515_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m37516_gshared (Dictionary_2_t6823 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m37516(__this, method) (( void (*) (Dictionary_2_t6823 *, const MethodInfo*))Dictionary_2_Resize_m37516_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m37517_gshared (Dictionary_2_t6823 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m37517(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6823 *, int64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m37517_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m37518_gshared (Dictionary_2_t6823 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m37518(__this, method) (( void (*) (Dictionary_2_t6823 *, const MethodInfo*))Dictionary_2_Clear_m37518_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m37519_gshared (Dictionary_2_t6823 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m37519(__this, ___key, method) (( bool (*) (Dictionary_2_t6823 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m37519_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m37520_gshared (Dictionary_2_t6823 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m37520(__this, ___value, method) (( bool (*) (Dictionary_2_t6823 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m37520_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m37521_gshared (Dictionary_2_t6823 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m37521(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6823 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2_GetObjectData_m37521_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m37522_gshared (Dictionary_2_t6823 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m37522(__this, ___sender, method) (( void (*) (Dictionary_2_t6823 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m37522_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m37523_gshared (Dictionary_2_t6823 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m37523(__this, ___key, method) (( bool (*) (Dictionary_2_t6823 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m37523_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m37524_gshared (Dictionary_2_t6823 * __this, int64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m37524(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6823 *, int64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m37524_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Keys()
extern "C" KeyCollection_t6824 * Dictionary_2_get_Keys_m37525_gshared (Dictionary_2_t6823 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m37525(__this, method) (( KeyCollection_t6824 * (*) (Dictionary_2_t6823 *, const MethodInfo*))Dictionary_2_get_Keys_m37525_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Values()
extern "C" ValueCollection_t6828 * Dictionary_2_get_Values_m37526_gshared (Dictionary_2_t6823 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m37526(__this, method) (( ValueCollection_t6828 * (*) (Dictionary_2_t6823 *, const MethodInfo*))Dictionary_2_get_Values_m37526_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m37527_gshared (Dictionary_2_t6823 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m37527(__this, ___key, method) (( int64_t (*) (Dictionary_2_t6823 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m37527_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m37528_gshared (Dictionary_2_t6823 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m37528(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t6823 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m37528_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m37529_gshared (Dictionary_2_t6823 * __this, KeyValuePair_2_t6818  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m37529(__this, ___pair, method) (( bool (*) (Dictionary_2_t6823 *, KeyValuePair_2_t6818 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m37529_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetEnumerator()
extern "C" Enumerator_t6826  Dictionary_2_GetEnumerator_m37530_gshared (Dictionary_2_t6823 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m37530(__this, method) (( Enumerator_t6826  (*) (Dictionary_2_t6823 *, const MethodInfo*))Dictionary_2_GetEnumerator_m37530_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t679  Dictionary_2_U3CCopyToU3Em__0_m37531_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m37531(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m37531_gshared)(__this /* static, unused */, ___key, ___value, method)
