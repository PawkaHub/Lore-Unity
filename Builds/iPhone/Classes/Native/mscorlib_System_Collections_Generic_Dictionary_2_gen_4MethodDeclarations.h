#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2067;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1809;
// System.Collections.ICollection
struct ICollection_t749;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t755;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t6228;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1775;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t2096;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t7165;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t7163;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t4200;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m18655_gshared (Dictionary_2_t2067 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18655(__this, method) (( void (*) (Dictionary_2_t2067 *, const MethodInfo*))Dictionary_2__ctor_m18655_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m24553_gshared (Dictionary_2_t2067 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m24553(__this, ___comparer, method) (( void (*) (Dictionary_2_t2067 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24553_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m24555_gshared (Dictionary_2_t2067 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m24555(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2067 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24555_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18656_gshared (Dictionary_2_t2067 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18656(__this, ___capacity, method) (( void (*) (Dictionary_2_t2067 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18656_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m24558_gshared (Dictionary_2_t2067 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m24558(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2067 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24558_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m24560_gshared (Dictionary_2_t2067 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m24560(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2067 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2__ctor_m24560_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18757_gshared (Dictionary_2_t2067 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18757(__this, method) (( Object_t* (*) (Dictionary_2_t2067 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18757_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18758_gshared (Dictionary_2_t2067 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18758(__this, method) (( Object_t* (*) (Dictionary_2_t2067 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18758_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m18761_gshared (Dictionary_2_t2067 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m18761(__this, method) (( Object_t * (*) (Dictionary_2_t2067 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m18761_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18759_gshared (Dictionary_2_t2067 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18759(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2067 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18759_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18760_gshared (Dictionary_2_t2067 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18760(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2067 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18760_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18762_gshared (Dictionary_2_t2067 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18762(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2067 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18762_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18763_gshared (Dictionary_2_t2067 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18763(__this, ___key, method) (( bool (*) (Dictionary_2_t2067 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18763_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18765_gshared (Dictionary_2_t2067 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18765(__this, ___key, method) (( void (*) (Dictionary_2_t2067 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18765_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18743_gshared (Dictionary_2_t2067 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18743(__this, method) (( bool (*) (Dictionary_2_t2067 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18743_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18744_gshared (Dictionary_2_t2067 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18744(__this, method) (( Object_t * (*) (Dictionary_2_t2067 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18744_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18746_gshared (Dictionary_2_t2067 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18746(__this, method) (( bool (*) (Dictionary_2_t2067 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18746_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18747_gshared (Dictionary_2_t2067 * __this, KeyValuePair_2_t2037  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18747(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2067 *, KeyValuePair_2_t2037 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18747_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18749_gshared (Dictionary_2_t2067 * __this, KeyValuePair_2_t2037  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18749(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2067 *, KeyValuePair_2_t2037 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18749_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18750_gshared (Dictionary_2_t2067 * __this, KeyValuePair_2U5BU5D_t7165* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18750(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2067 *, KeyValuePair_2U5BU5D_t7165*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18750_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18751_gshared (Dictionary_2_t2067 * __this, KeyValuePair_2_t2037  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18751(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2067 *, KeyValuePair_2_t2037 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18751_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18745_gshared (Dictionary_2_t2067 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18745(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2067 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18745_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18740_gshared (Dictionary_2_t2067 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18740(__this, method) (( Object_t * (*) (Dictionary_2_t2067 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18740_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18752_gshared (Dictionary_2_t2067 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18752(__this, method) (( Object_t* (*) (Dictionary_2_t2067 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18752_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18764_gshared (Dictionary_2_t2067 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18764(__this, method) (( Object_t * (*) (Dictionary_2_t2067 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18764_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18742_gshared (Dictionary_2_t2067 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18742(__this, method) (( int32_t (*) (Dictionary_2_t2067 *, const MethodInfo*))Dictionary_2_get_Count_m18742_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m18756_gshared (Dictionary_2_t2067 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18756(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2067 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18756_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18658_gshared (Dictionary_2_t2067 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18658(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2067 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m18658_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m24584_gshared (Dictionary_2_t2067 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m24584(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2067 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m24584_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m24586_gshared (Dictionary_2_t2067 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m24586(__this, ___size, method) (( void (*) (Dictionary_2_t2067 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m24586_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m24588_gshared (Dictionary_2_t2067 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m24588(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2067 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m24588_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2037  Dictionary_2_make_pair_m24590_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m24590(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2037  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m24590_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m24592_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m24592(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m24592_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m24594_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m24594(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m24594_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m24596_gshared (Dictionary_2_t2067 * __this, KeyValuePair_2U5BU5D_t7165* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m24596(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2067 *, KeyValuePair_2U5BU5D_t7165*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m24596_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m24598_gshared (Dictionary_2_t2067 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m24598(__this, method) (( void (*) (Dictionary_2_t2067 *, const MethodInfo*))Dictionary_2_Resize_m24598_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18753_gshared (Dictionary_2_t2067 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18753(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2067 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m18753_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m18748_gshared (Dictionary_2_t2067 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18748(__this, method) (( void (*) (Dictionary_2_t2067 *, const MethodInfo*))Dictionary_2_Clear_m18748_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18754_gshared (Dictionary_2_t2067 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18754(__this, ___key, method) (( bool (*) (Dictionary_2_t2067 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18754_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m24603_gshared (Dictionary_2_t2067 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m24603(__this, ___value, method) (( bool (*) (Dictionary_2_t2067 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m24603_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18741_gshared (Dictionary_2_t2067 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18741(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2067 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2_GetObjectData_m18741_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18766_gshared (Dictionary_2_t2067 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18766(__this, ___sender, method) (( void (*) (Dictionary_2_t2067 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18766_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18755_gshared (Dictionary_2_t2067 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18755(__this, ___key, method) (( bool (*) (Dictionary_2_t2067 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18755_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18657_gshared (Dictionary_2_t2067 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18657(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2067 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m18657_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t755 * Dictionary_2_get_Keys_m3440_gshared (Dictionary_2_t2067 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m3440(__this, method) (( KeyCollection_t755 * (*) (Dictionary_2_t2067 *, const MethodInfo*))Dictionary_2_get_Keys_m3440_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t6228 * Dictionary_2_get_Values_m24609_gshared (Dictionary_2_t2067 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m24609(__this, method) (( ValueCollection_t6228 * (*) (Dictionary_2_t2067 *, const MethodInfo*))Dictionary_2_get_Values_m24609_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m24611_gshared (Dictionary_2_t2067 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m24611(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2067 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m24611_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m24613_gshared (Dictionary_2_t2067 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m24613(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2067 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m24613_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m24615_gshared (Dictionary_2_t2067 * __this, KeyValuePair_2_t2037  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m24615(__this, ___pair, method) (( bool (*) (Dictionary_2_t2067 *, KeyValuePair_2_t2037 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m24615_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t6226  Dictionary_2_GetEnumerator_m24617_gshared (Dictionary_2_t2067 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m24617(__this, method) (( Enumerator_t6226  (*) (Dictionary_2_t2067 *, const MethodInfo*))Dictionary_2_GetEnumerator_m24617_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t748  Dictionary_2_U3CCopyToU3Em__0_m24619_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m24619(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m24619_gshared)(__this /* static, unused */, ___key, ___value, method)
