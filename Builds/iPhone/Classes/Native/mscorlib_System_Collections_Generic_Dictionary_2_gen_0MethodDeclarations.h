#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t28;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9880;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1809;
// System.Collections.ICollection
struct ICollection_t749;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>
struct KeyCollection_t6240;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Object>
struct ValueCollection_t6243;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t6236;
// System.Collections.Generic.IDictionary`2<System.Byte,System.Object>
struct IDictionary_2_t9881;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>[]
struct KeyValuePair_2U5BU5D_t9882;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>>
struct IEnumerator_1_t9883;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t4200;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m97_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m97(__this, method) (( void (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2__ctor_m97_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m24766_gshared (Dictionary_2_t28 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m24766(__this, ___comparer, method) (( void (*) (Dictionary_2_t28 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24766_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m24767_gshared (Dictionary_2_t28 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m24767(__this, ___dictionary, method) (( void (*) (Dictionary_2_t28 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24767_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18665_gshared (Dictionary_2_t28 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18665(__this, ___capacity, method) (( void (*) (Dictionary_2_t28 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18665_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m24768_gshared (Dictionary_2_t28 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m24768(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t28 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24768_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m24769_gshared (Dictionary_2_t28 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m24769(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t28 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2__ctor_m24769_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24770_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24770(__this, method) (( Object_t* (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24770_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24771_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24771(__this, method) (( Object_t* (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24771_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m24772_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m24772(__this, method) (( Object_t * (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m24772_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m24773_gshared (Dictionary_2_t28 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m24773(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t28 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m24773_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m24774_gshared (Dictionary_2_t28 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m24774(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t28 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m24774_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m24775_gshared (Dictionary_2_t28 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m24775(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t28 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m24775_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m24776_gshared (Dictionary_2_t28 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m24776(__this, ___key, method) (( bool (*) (Dictionary_2_t28 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m24776_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m24777_gshared (Dictionary_2_t28 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m24777(__this, ___key, method) (( void (*) (Dictionary_2_t28 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m24777_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24778_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24778(__this, method) (( bool (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24778_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24779_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24779(__this, method) (( Object_t * (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24779_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24780_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24780(__this, method) (( bool (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24780_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24781_gshared (Dictionary_2_t28 * __this, KeyValuePair_2_t5144  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24781(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t28 *, KeyValuePair_2_t5144 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24781_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24782_gshared (Dictionary_2_t28 * __this, KeyValuePair_2_t5144  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24782(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t28 *, KeyValuePair_2_t5144 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24782_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24783_gshared (Dictionary_2_t28 * __this, KeyValuePair_2U5BU5D_t9882* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24783(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t28 *, KeyValuePair_2U5BU5D_t9882*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24783_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24784_gshared (Dictionary_2_t28 * __this, KeyValuePair_2_t5144  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24784(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t28 *, KeyValuePair_2_t5144 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24784_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m24785_gshared (Dictionary_2_t28 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m24785(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t28 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m24785_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24786_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24786(__this, method) (( Object_t * (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24786_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24787_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24787(__this, method) (( Object_t* (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24787_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24788_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24788(__this, method) (( Object_t * (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24788_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m24789_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m24789(__this, method) (( int32_t (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_get_Count_m24789_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m24790_gshared (Dictionary_2_t28 * __this, uint8_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m24790(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t28 *, uint8_t, const MethodInfo*))Dictionary_2_get_Item_m24790_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m24791_gshared (Dictionary_2_t28 * __this, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m24791(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t28 *, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m24791_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m24792_gshared (Dictionary_2_t28 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m24792(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t28 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m24792_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m24793_gshared (Dictionary_2_t28 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m24793(__this, ___size, method) (( void (*) (Dictionary_2_t28 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m24793_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m24794_gshared (Dictionary_2_t28 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m24794(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t28 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m24794_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5144  Dictionary_2_make_pair_m24795_gshared (Object_t * __this /* static, unused */, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m24795(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5144  (*) (Object_t * /* static, unused */, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m24795_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::pick_key(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_key_m24796_gshared (Object_t * __this /* static, unused */, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m24796(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m24796_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m24797_gshared (Object_t * __this /* static, unused */, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m24797(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m24797_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m24798_gshared (Dictionary_2_t28 * __this, KeyValuePair_2U5BU5D_t9882* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m24798(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t28 *, KeyValuePair_2U5BU5D_t9882*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m24798_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m24799_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m24799(__this, method) (( void (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_Resize_m24799_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m24800_gshared (Dictionary_2_t28 * __this, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m24800(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t28 *, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m24800_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m24801_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m24801(__this, method) (( void (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_Clear_m24801_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m24802_gshared (Dictionary_2_t28 * __this, uint8_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m24802(__this, ___key, method) (( bool (*) (Dictionary_2_t28 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsKey_m24802_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m24803_gshared (Dictionary_2_t28 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m24803(__this, ___value, method) (( bool (*) (Dictionary_2_t28 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m24803_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m24804_gshared (Dictionary_2_t28 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m24804(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t28 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2_GetObjectData_m24804_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m24805_gshared (Dictionary_2_t28 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m24805(__this, ___sender, method) (( void (*) (Dictionary_2_t28 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m24805_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m24806_gshared (Dictionary_2_t28 * __this, uint8_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m24806(__this, ___key, method) (( bool (*) (Dictionary_2_t28 *, uint8_t, const MethodInfo*))Dictionary_2_Remove_m24806_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m24807_gshared (Dictionary_2_t28 * __this, uint8_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m24807(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t28 *, uint8_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m24807_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Keys()
extern "C" KeyCollection_t6240 * Dictionary_2_get_Keys_m24808_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m24808(__this, method) (( KeyCollection_t6240 * (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_get_Keys_m24808_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Values()
extern "C" ValueCollection_t6243 * Dictionary_2_get_Values_m24809_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m24809(__this, method) (( ValueCollection_t6243 * (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_get_Values_m24809_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ToTKey(System.Object)
extern "C" uint8_t Dictionary_2_ToTKey_m24810_gshared (Dictionary_2_t28 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m24810(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t28 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m24810_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m24811_gshared (Dictionary_2_t28 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m24811(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t28 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m24811_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m24812_gshared (Dictionary_2_t28 * __this, KeyValuePair_2_t5144  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m24812(__this, ___pair, method) (( bool (*) (Dictionary_2_t28 *, KeyValuePair_2_t5144 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m24812_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::GetEnumerator()
extern "C" Enumerator_t5145  Dictionary_2_GetEnumerator_m18706_gshared (Dictionary_2_t28 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18706(__this, method) (( Enumerator_t5145  (*) (Dictionary_2_t28 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18706_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t748  Dictionary_2_U3CCopyToU3Em__0_m24813_gshared (Object_t * __this /* static, unused */, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m24813(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Object_t * /* static, unused */, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m24813_gshared)(__this /* static, unused */, ___key, ___value, method)
