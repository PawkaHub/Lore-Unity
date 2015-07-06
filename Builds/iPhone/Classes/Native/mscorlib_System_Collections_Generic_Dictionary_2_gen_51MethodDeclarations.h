#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>
struct Dictionary_2_t6018;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9598;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9603;
// System.Collections.ICollection
struct ICollection_t680;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Int32>
struct KeyCollection_t6021;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Int32>
struct ValueCollection_t6025;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t5998;
// System.Collections.Generic.IDictionary`2<System.Byte,System.Int32>
struct IDictionary_2_t9607;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>[]
struct KeyValuePair_2U5BU5D_t9608;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>>
struct IEnumerator_1_t9609;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3962;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m24505_gshared (Dictionary_2_t6018 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m24505(__this, method) (( void (*) (Dictionary_2_t6018 *, const MethodInfo*))Dictionary_2__ctor_m24505_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m24507_gshared (Dictionary_2_t6018 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m24507(__this, ___comparer, method) (( void (*) (Dictionary_2_t6018 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24507_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m24509_gshared (Dictionary_2_t6018 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m24509(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6018 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24509_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m24511_gshared (Dictionary_2_t6018 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m24511(__this, ___capacity, method) (( void (*) (Dictionary_2_t6018 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m24511_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m24513_gshared (Dictionary_2_t6018 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m24513(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6018 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24513_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m24515_gshared (Dictionary_2_t6018 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m24515(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6018 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2__ctor_m24515_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24517_gshared (Dictionary_2_t6018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24517(__this, method) (( Object_t* (*) (Dictionary_2_t6018 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24517_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24519_gshared (Dictionary_2_t6018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24519(__this, method) (( Object_t* (*) (Dictionary_2_t6018 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24519_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m24521_gshared (Dictionary_2_t6018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m24521(__this, method) (( Object_t * (*) (Dictionary_2_t6018 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m24521_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m24523_gshared (Dictionary_2_t6018 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m24523(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6018 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m24523_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m24525_gshared (Dictionary_2_t6018 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m24525(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6018 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m24525_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m24527_gshared (Dictionary_2_t6018 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m24527(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6018 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m24527_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m24529_gshared (Dictionary_2_t6018 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m24529(__this, ___key, method) (( bool (*) (Dictionary_2_t6018 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m24529_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m24531_gshared (Dictionary_2_t6018 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m24531(__this, ___key, method) (( void (*) (Dictionary_2_t6018 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m24531_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24533_gshared (Dictionary_2_t6018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24533(__this, method) (( bool (*) (Dictionary_2_t6018 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24533_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24535_gshared (Dictionary_2_t6018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24535(__this, method) (( Object_t * (*) (Dictionary_2_t6018 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24535_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24537_gshared (Dictionary_2_t6018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24537(__this, method) (( bool (*) (Dictionary_2_t6018 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24537_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24539_gshared (Dictionary_2_t6018 * __this, KeyValuePair_2_t6019  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24539(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6018 *, KeyValuePair_2_t6019 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24539_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24541_gshared (Dictionary_2_t6018 * __this, KeyValuePair_2_t6019  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24541(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6018 *, KeyValuePair_2_t6019 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24541_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24543_gshared (Dictionary_2_t6018 * __this, KeyValuePair_2U5BU5D_t9608* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24543(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6018 *, KeyValuePair_2U5BU5D_t9608*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24543_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24545_gshared (Dictionary_2_t6018 * __this, KeyValuePair_2_t6019  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24545(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6018 *, KeyValuePair_2_t6019 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24545_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m24547_gshared (Dictionary_2_t6018 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m24547(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6018 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m24547_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24549_gshared (Dictionary_2_t6018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24549(__this, method) (( Object_t * (*) (Dictionary_2_t6018 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24549_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24551_gshared (Dictionary_2_t6018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24551(__this, method) (( Object_t* (*) (Dictionary_2_t6018 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24551_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24553_gshared (Dictionary_2_t6018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24553(__this, method) (( Object_t * (*) (Dictionary_2_t6018 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24553_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m24555_gshared (Dictionary_2_t6018 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m24555(__this, method) (( int32_t (*) (Dictionary_2_t6018 *, const MethodInfo*))Dictionary_2_get_Count_m24555_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m24557_gshared (Dictionary_2_t6018 * __this, uint8_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m24557(__this, ___key, method) (( int32_t (*) (Dictionary_2_t6018 *, uint8_t, const MethodInfo*))Dictionary_2_get_Item_m24557_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m24559_gshared (Dictionary_2_t6018 * __this, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m24559(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6018 *, uint8_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m24559_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m24561_gshared (Dictionary_2_t6018 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m24561(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6018 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m24561_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m24563_gshared (Dictionary_2_t6018 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m24563(__this, ___size, method) (( void (*) (Dictionary_2_t6018 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m24563_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m24565_gshared (Dictionary_2_t6018 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m24565(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6018 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m24565_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6019  Dictionary_2_make_pair_m24567_gshared (Object_t * __this /* static, unused */, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m24567(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6019  (*) (Object_t * /* static, unused */, uint8_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m24567_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::pick_key(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_key_m24569_gshared (Object_t * __this /* static, unused */, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m24569(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, uint8_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m24569_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m24571_gshared (Object_t * __this /* static, unused */, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m24571(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, uint8_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m24571_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m24573_gshared (Dictionary_2_t6018 * __this, KeyValuePair_2U5BU5D_t9608* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m24573(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6018 *, KeyValuePair_2U5BU5D_t9608*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m24573_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m24575_gshared (Dictionary_2_t6018 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m24575(__this, method) (( void (*) (Dictionary_2_t6018 *, const MethodInfo*))Dictionary_2_Resize_m24575_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m24577_gshared (Dictionary_2_t6018 * __this, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m24577(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6018 *, uint8_t, int32_t, const MethodInfo*))Dictionary_2_Add_m24577_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m24579_gshared (Dictionary_2_t6018 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m24579(__this, method) (( void (*) (Dictionary_2_t6018 *, const MethodInfo*))Dictionary_2_Clear_m24579_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m24581_gshared (Dictionary_2_t6018 * __this, uint8_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m24581(__this, ___key, method) (( bool (*) (Dictionary_2_t6018 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsKey_m24581_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m24583_gshared (Dictionary_2_t6018 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m24583(__this, ___value, method) (( bool (*) (Dictionary_2_t6018 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m24583_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m24585_gshared (Dictionary_2_t6018 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m24585(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6018 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2_GetObjectData_m24585_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m24587_gshared (Dictionary_2_t6018 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m24587(__this, ___sender, method) (( void (*) (Dictionary_2_t6018 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m24587_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m24589_gshared (Dictionary_2_t6018 * __this, uint8_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m24589(__this, ___key, method) (( bool (*) (Dictionary_2_t6018 *, uint8_t, const MethodInfo*))Dictionary_2_Remove_m24589_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m24591_gshared (Dictionary_2_t6018 * __this, uint8_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m24591(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6018 *, uint8_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m24591_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::get_Keys()
extern "C" KeyCollection_t6021 * Dictionary_2_get_Keys_m24593_gshared (Dictionary_2_t6018 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m24593(__this, method) (( KeyCollection_t6021 * (*) (Dictionary_2_t6018 *, const MethodInfo*))Dictionary_2_get_Keys_m24593_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::get_Values()
extern "C" ValueCollection_t6025 * Dictionary_2_get_Values_m24595_gshared (Dictionary_2_t6018 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m24595(__this, method) (( ValueCollection_t6025 * (*) (Dictionary_2_t6018 *, const MethodInfo*))Dictionary_2_get_Values_m24595_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::ToTKey(System.Object)
extern "C" uint8_t Dictionary_2_ToTKey_m24597_gshared (Dictionary_2_t6018 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m24597(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t6018 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m24597_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m24599_gshared (Dictionary_2_t6018 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m24599(__this, ___value, method) (( int32_t (*) (Dictionary_2_t6018 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m24599_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m24601_gshared (Dictionary_2_t6018 * __this, KeyValuePair_2_t6019  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m24601(__this, ___pair, method) (( bool (*) (Dictionary_2_t6018 *, KeyValuePair_2_t6019 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m24601_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::GetEnumerator()
extern "C" Enumerator_t6023  Dictionary_2_GetEnumerator_m24603_gshared (Dictionary_2_t6018 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m24603(__this, method) (( Enumerator_t6023  (*) (Dictionary_2_t6018 *, const MethodInfo*))Dictionary_2_GetEnumerator_m24603_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t679  Dictionary_2_U3CCopyToU3Em__0_m24605_gshared (Object_t * __this /* static, unused */, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m24605(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Object_t * /* static, unused */, uint8_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m24605_gshared)(__this /* static, unused */, ___key, ___value, method)
