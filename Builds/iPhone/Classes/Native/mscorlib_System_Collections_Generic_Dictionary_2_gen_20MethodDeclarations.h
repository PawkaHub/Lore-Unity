#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1433;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9885;
// System.Collections.ICollection
struct ICollection_t749;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t6990;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t6994;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t6585;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t10291;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t10292;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t10293;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t4200;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_33.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__27.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m7677_gshared (Dictionary_2_t1433 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m7677(__this, method) (( void (*) (Dictionary_2_t1433 *, const MethodInfo*))Dictionary_2__ctor_m7677_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m36655_gshared (Dictionary_2_t1433 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m36655(__this, ___comparer, method) (( void (*) (Dictionary_2_t1433 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m36655_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m36656_gshared (Dictionary_2_t1433 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m36656(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1433 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m36656_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m36657_gshared (Dictionary_2_t1433 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m36657(__this, ___capacity, method) (( void (*) (Dictionary_2_t1433 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m36657_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m36658_gshared (Dictionary_2_t1433 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m36658(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1433 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m36658_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m36659_gshared (Dictionary_2_t1433 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m36659(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1433 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2__ctor_m36659_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m36660_gshared (Dictionary_2_t1433 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m36660(__this, method) (( Object_t* (*) (Dictionary_2_t1433 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m36660_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m36661_gshared (Dictionary_2_t1433 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m36661(__this, method) (( Object_t* (*) (Dictionary_2_t1433 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m36661_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m36662_gshared (Dictionary_2_t1433 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m36662(__this, method) (( Object_t * (*) (Dictionary_2_t1433 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m36662_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m36663_gshared (Dictionary_2_t1433 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m36663(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1433 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m36663_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m36664_gshared (Dictionary_2_t1433 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m36664(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1433 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m36664_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m36665_gshared (Dictionary_2_t1433 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m36665(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1433 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m36665_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m36666_gshared (Dictionary_2_t1433 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m36666(__this, ___key, method) (( bool (*) (Dictionary_2_t1433 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m36666_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m36667_gshared (Dictionary_2_t1433 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m36667(__this, ___key, method) (( void (*) (Dictionary_2_t1433 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m36667_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m36668_gshared (Dictionary_2_t1433 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m36668(__this, method) (( bool (*) (Dictionary_2_t1433 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m36668_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m36669_gshared (Dictionary_2_t1433 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m36669(__this, method) (( Object_t * (*) (Dictionary_2_t1433 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m36669_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m36670_gshared (Dictionary_2_t1433 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m36670(__this, method) (( bool (*) (Dictionary_2_t1433 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m36670_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m36671_gshared (Dictionary_2_t1433 * __this, KeyValuePair_2_t6988  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m36671(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1433 *, KeyValuePair_2_t6988 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m36671_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m36672_gshared (Dictionary_2_t1433 * __this, KeyValuePair_2_t6988  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m36672(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1433 *, KeyValuePair_2_t6988 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m36672_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m36673_gshared (Dictionary_2_t1433 * __this, KeyValuePair_2U5BU5D_t10292* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m36673(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1433 *, KeyValuePair_2U5BU5D_t10292*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m36673_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m36674_gshared (Dictionary_2_t1433 * __this, KeyValuePair_2_t6988  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m36674(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1433 *, KeyValuePair_2_t6988 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m36674_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m36675_gshared (Dictionary_2_t1433 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m36675(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1433 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m36675_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m36676_gshared (Dictionary_2_t1433 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m36676(__this, method) (( Object_t * (*) (Dictionary_2_t1433 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m36676_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m36677_gshared (Dictionary_2_t1433 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m36677(__this, method) (( Object_t* (*) (Dictionary_2_t1433 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m36677_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m36678_gshared (Dictionary_2_t1433 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m36678(__this, method) (( Object_t * (*) (Dictionary_2_t1433 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m36678_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m36679_gshared (Dictionary_2_t1433 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m36679(__this, method) (( int32_t (*) (Dictionary_2_t1433 *, const MethodInfo*))Dictionary_2_get_Count_m36679_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m36680_gshared (Dictionary_2_t1433 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m36680(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1433 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m36680_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m36681_gshared (Dictionary_2_t1433 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m36681(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1433 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m36681_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m36682_gshared (Dictionary_2_t1433 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m36682(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1433 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m36682_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m36683_gshared (Dictionary_2_t1433 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m36683(__this, ___size, method) (( void (*) (Dictionary_2_t1433 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m36683_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m36684_gshared (Dictionary_2_t1433 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m36684(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1433 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m36684_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6988  Dictionary_2_make_pair_m36685_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m36685(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6988  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m36685_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m36686_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m36686(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m36686_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m36687_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m36687(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m36687_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m36688_gshared (Dictionary_2_t1433 * __this, KeyValuePair_2U5BU5D_t10292* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m36688(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1433 *, KeyValuePair_2U5BU5D_t10292*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m36688_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m36689_gshared (Dictionary_2_t1433 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m36689(__this, method) (( void (*) (Dictionary_2_t1433 *, const MethodInfo*))Dictionary_2_Resize_m36689_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m36690_gshared (Dictionary_2_t1433 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m36690(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1433 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m36690_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m36691_gshared (Dictionary_2_t1433 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m36691(__this, method) (( void (*) (Dictionary_2_t1433 *, const MethodInfo*))Dictionary_2_Clear_m36691_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m36692_gshared (Dictionary_2_t1433 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m36692(__this, ___key, method) (( bool (*) (Dictionary_2_t1433 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m36692_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m36693_gshared (Dictionary_2_t1433 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m36693(__this, ___value, method) (( bool (*) (Dictionary_2_t1433 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m36693_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m36694_gshared (Dictionary_2_t1433 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m36694(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1433 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2_GetObjectData_m36694_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m36695_gshared (Dictionary_2_t1433 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m36695(__this, ___sender, method) (( void (*) (Dictionary_2_t1433 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m36695_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m36696_gshared (Dictionary_2_t1433 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m36696(__this, ___key, method) (( bool (*) (Dictionary_2_t1433 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m36696_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m36697_gshared (Dictionary_2_t1433 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m36697(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1433 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m36697_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t6990 * Dictionary_2_get_Keys_m36698_gshared (Dictionary_2_t1433 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m36698(__this, method) (( KeyCollection_t6990 * (*) (Dictionary_2_t1433 *, const MethodInfo*))Dictionary_2_get_Keys_m36698_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t6994 * Dictionary_2_get_Values_m36699_gshared (Dictionary_2_t1433 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m36699(__this, method) (( ValueCollection_t6994 * (*) (Dictionary_2_t1433 *, const MethodInfo*))Dictionary_2_get_Values_m36699_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m36700_gshared (Dictionary_2_t1433 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m36700(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1433 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m36700_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m36701_gshared (Dictionary_2_t1433 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m36701(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1433 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m36701_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m36702_gshared (Dictionary_2_t1433 * __this, KeyValuePair_2_t6988  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m36702(__this, ___pair, method) (( bool (*) (Dictionary_2_t1433 *, KeyValuePair_2_t6988 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m36702_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t6992  Dictionary_2_GetEnumerator_m36703_gshared (Dictionary_2_t1433 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m36703(__this, method) (( Enumerator_t6992  (*) (Dictionary_2_t1433 *, const MethodInfo*))Dictionary_2_GetEnumerator_m36703_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t748  Dictionary_2_U3CCopyToU3Em__0_m36704_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m36704(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m36704_gshared)(__this /* static, unused */, ___key, ___value, method)
