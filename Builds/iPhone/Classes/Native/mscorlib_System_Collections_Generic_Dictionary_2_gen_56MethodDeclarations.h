#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t5686;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t6790;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t6425;
// System.Collections.ICollection
struct ICollection_t661;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>
struct KeyCollection_t5687;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>
struct ValueCollection_t5691;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t5573;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>
struct IDictionary_2_t5681;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>[]
struct KeyValuePair_2U5BU5D_t6821;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>
struct IEnumerator_1_t6822;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3115;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_37.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__30.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m34545_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m34545(__this, method) (( void (*) (Dictionary_2_t5686 *, const MethodInfo*))Dictionary_2__ctor_m34545_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m34546_gshared (Dictionary_2_t5686 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m34546(__this, ___comparer, method) (( void (*) (Dictionary_2_t5686 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m34546_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m34547_gshared (Dictionary_2_t5686 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m34547(__this, ___dictionary, method) (( void (*) (Dictionary_2_t5686 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m34547_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m34548_gshared (Dictionary_2_t5686 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m34548(__this, ___capacity, method) (( void (*) (Dictionary_2_t5686 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m34548_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m34549_gshared (Dictionary_2_t5686 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m34549(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t5686 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m34549_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m34550_gshared (Dictionary_2_t5686 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m34550(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5686 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2__ctor_m34550_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m34551_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m34551(__this, method) (( Object_t* (*) (Dictionary_2_t5686 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m34551_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m34552_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m34552(__this, method) (( Object_t* (*) (Dictionary_2_t5686 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m34552_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m34553_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m34553(__this, method) (( Object_t * (*) (Dictionary_2_t5686 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m34553_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m34554_gshared (Dictionary_2_t5686 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m34554(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5686 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m34554_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m34555_gshared (Dictionary_2_t5686 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m34555(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5686 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m34555_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m34556_gshared (Dictionary_2_t5686 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m34556(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5686 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m34556_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m34557_gshared (Dictionary_2_t5686 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m34557(__this, ___key, method) (( bool (*) (Dictionary_2_t5686 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m34557_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m34558_gshared (Dictionary_2_t5686 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m34558(__this, ___key, method) (( void (*) (Dictionary_2_t5686 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m34558_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m34559_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m34559(__this, method) (( bool (*) (Dictionary_2_t5686 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m34559_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m34560_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m34560(__this, method) (( Object_t * (*) (Dictionary_2_t5686 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m34560_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m34561_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m34561(__this, method) (( bool (*) (Dictionary_2_t5686 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m34561_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m34562_gshared (Dictionary_2_t5686 * __this, KeyValuePair_2_t5683  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m34562(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t5686 *, KeyValuePair_2_t5683 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m34562_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m34563_gshared (Dictionary_2_t5686 * __this, KeyValuePair_2_t5683  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m34563(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5686 *, KeyValuePair_2_t5683 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m34563_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m34564_gshared (Dictionary_2_t5686 * __this, KeyValuePair_2U5BU5D_t6821* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m34564(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5686 *, KeyValuePair_2U5BU5D_t6821*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m34564_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m34565_gshared (Dictionary_2_t5686 * __this, KeyValuePair_2_t5683  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m34565(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5686 *, KeyValuePair_2_t5683 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m34565_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m34566_gshared (Dictionary_2_t5686 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m34566(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5686 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m34566_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m34567_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m34567(__this, method) (( Object_t * (*) (Dictionary_2_t5686 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m34567_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m34568_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m34568(__this, method) (( Object_t* (*) (Dictionary_2_t5686 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m34568_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m34569_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m34569(__this, method) (( Object_t * (*) (Dictionary_2_t5686 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m34569_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m34570_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m34570(__this, method) (( int32_t (*) (Dictionary_2_t5686 *, const MethodInfo*))Dictionary_2_get_Count_m34570_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m34571_gshared (Dictionary_2_t5686 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m34571(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t5686 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m34571_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m34572_gshared (Dictionary_2_t5686 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m34572(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5686 *, int64_t, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m34572_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m34573_gshared (Dictionary_2_t5686 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m34573(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t5686 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m34573_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m34574_gshared (Dictionary_2_t5686 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m34574(__this, ___size, method) (( void (*) (Dictionary_2_t5686 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m34574_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m34575_gshared (Dictionary_2_t5686 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m34575(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5686 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m34575_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5683  Dictionary_2_make_pair_m34576_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m34576(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5683  (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m34576_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m34577_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m34577(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m34577_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m34578_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m34578(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m34578_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m34579_gshared (Dictionary_2_t5686 * __this, KeyValuePair_2U5BU5D_t6821* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m34579(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5686 *, KeyValuePair_2U5BU5D_t6821*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m34579_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m34580_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m34580(__this, method) (( void (*) (Dictionary_2_t5686 *, const MethodInfo*))Dictionary_2_Resize_m34580_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m34581_gshared (Dictionary_2_t5686 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m34581(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5686 *, int64_t, uint8_t, const MethodInfo*))Dictionary_2_Add_m34581_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m34582_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m34582(__this, method) (( void (*) (Dictionary_2_t5686 *, const MethodInfo*))Dictionary_2_Clear_m34582_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m34583_gshared (Dictionary_2_t5686 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m34583(__this, ___key, method) (( bool (*) (Dictionary_2_t5686 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m34583_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m34584_gshared (Dictionary_2_t5686 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m34584(__this, ___value, method) (( bool (*) (Dictionary_2_t5686 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m34584_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m34585_gshared (Dictionary_2_t5686 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m34585(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5686 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2_GetObjectData_m34585_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m34586_gshared (Dictionary_2_t5686 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m34586(__this, ___sender, method) (( void (*) (Dictionary_2_t5686 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m34586_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m34587_gshared (Dictionary_2_t5686 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m34587(__this, ___key, method) (( bool (*) (Dictionary_2_t5686 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m34587_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m34588_gshared (Dictionary_2_t5686 * __this, int64_t ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m34588(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t5686 *, int64_t, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m34588_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Keys()
extern "C" KeyCollection_t5687 * Dictionary_2_get_Keys_m34589_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m34589(__this, method) (( KeyCollection_t5687 * (*) (Dictionary_2_t5686 *, const MethodInfo*))Dictionary_2_get_Keys_m34589_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Values()
extern "C" ValueCollection_t5691 * Dictionary_2_get_Values_m34590_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m34590(__this, method) (( ValueCollection_t5691 * (*) (Dictionary_2_t5686 *, const MethodInfo*))Dictionary_2_get_Values_m34590_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m34591_gshared (Dictionary_2_t5686 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m34591(__this, ___key, method) (( int64_t (*) (Dictionary_2_t5686 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m34591_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m34592_gshared (Dictionary_2_t5686 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m34592(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t5686 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m34592_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m34593_gshared (Dictionary_2_t5686 * __this, KeyValuePair_2_t5683  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m34593(__this, ___pair, method) (( bool (*) (Dictionary_2_t5686 *, KeyValuePair_2_t5683 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m34593_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetEnumerator()
extern "C" Enumerator_t5689  Dictionary_2_GetEnumerator_m34594_gshared (Dictionary_2_t5686 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m34594(__this, method) (( Enumerator_t5689  (*) (Dictionary_2_t5686 *, const MethodInfo*))Dictionary_2_GetEnumerator_m34594_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t660  Dictionary_2_U3CCopyToU3Em__0_m34595_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m34595(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m34595_gshared)(__this /* static, unused */, ___key, ___value, method)
