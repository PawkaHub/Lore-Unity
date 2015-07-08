#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>
struct Dictionary_2_t6256;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9880;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9885;
// System.Collections.ICollection
struct ICollection_t749;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Int32>
struct KeyCollection_t6259;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Int32>
struct ValueCollection_t6263;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t6236;
// System.Collections.Generic.IDictionary`2<System.Byte,System.Int32>
struct IDictionary_2_t9889;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>[]
struct KeyValuePair_2U5BU5D_t9890;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>>
struct IEnumerator_1_t9891;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t4200;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m24922_gshared (Dictionary_2_t6256 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m24922(__this, method) (( void (*) (Dictionary_2_t6256 *, const MethodInfo*))Dictionary_2__ctor_m24922_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m24924_gshared (Dictionary_2_t6256 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m24924(__this, ___comparer, method) (( void (*) (Dictionary_2_t6256 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24924_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m24926_gshared (Dictionary_2_t6256 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m24926(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6256 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24926_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m24928_gshared (Dictionary_2_t6256 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m24928(__this, ___capacity, method) (( void (*) (Dictionary_2_t6256 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m24928_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m24930_gshared (Dictionary_2_t6256 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m24930(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6256 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24930_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m24932_gshared (Dictionary_2_t6256 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m24932(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6256 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2__ctor_m24932_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24934_gshared (Dictionary_2_t6256 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24934(__this, method) (( Object_t* (*) (Dictionary_2_t6256 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24934_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24936_gshared (Dictionary_2_t6256 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24936(__this, method) (( Object_t* (*) (Dictionary_2_t6256 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24936_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m24938_gshared (Dictionary_2_t6256 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m24938(__this, method) (( Object_t * (*) (Dictionary_2_t6256 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m24938_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m24940_gshared (Dictionary_2_t6256 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m24940(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6256 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m24940_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m24942_gshared (Dictionary_2_t6256 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m24942(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6256 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m24942_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m24944_gshared (Dictionary_2_t6256 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m24944(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6256 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m24944_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m24946_gshared (Dictionary_2_t6256 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m24946(__this, ___key, method) (( bool (*) (Dictionary_2_t6256 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m24946_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m24948_gshared (Dictionary_2_t6256 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m24948(__this, ___key, method) (( void (*) (Dictionary_2_t6256 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m24948_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24950_gshared (Dictionary_2_t6256 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24950(__this, method) (( bool (*) (Dictionary_2_t6256 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24950_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24952_gshared (Dictionary_2_t6256 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24952(__this, method) (( Object_t * (*) (Dictionary_2_t6256 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24952_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24954_gshared (Dictionary_2_t6256 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24954(__this, method) (( bool (*) (Dictionary_2_t6256 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24954_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24956_gshared (Dictionary_2_t6256 * __this, KeyValuePair_2_t6257  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24956(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6256 *, KeyValuePair_2_t6257 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24956_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24958_gshared (Dictionary_2_t6256 * __this, KeyValuePair_2_t6257  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24958(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6256 *, KeyValuePair_2_t6257 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24958_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24960_gshared (Dictionary_2_t6256 * __this, KeyValuePair_2U5BU5D_t9890* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24960(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6256 *, KeyValuePair_2U5BU5D_t9890*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24960_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24962_gshared (Dictionary_2_t6256 * __this, KeyValuePair_2_t6257  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24962(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6256 *, KeyValuePair_2_t6257 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24962_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m24964_gshared (Dictionary_2_t6256 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m24964(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6256 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m24964_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24966_gshared (Dictionary_2_t6256 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24966(__this, method) (( Object_t * (*) (Dictionary_2_t6256 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24966_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24968_gshared (Dictionary_2_t6256 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24968(__this, method) (( Object_t* (*) (Dictionary_2_t6256 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24968_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24970_gshared (Dictionary_2_t6256 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24970(__this, method) (( Object_t * (*) (Dictionary_2_t6256 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24970_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m24972_gshared (Dictionary_2_t6256 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m24972(__this, method) (( int32_t (*) (Dictionary_2_t6256 *, const MethodInfo*))Dictionary_2_get_Count_m24972_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m24974_gshared (Dictionary_2_t6256 * __this, uint8_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m24974(__this, ___key, method) (( int32_t (*) (Dictionary_2_t6256 *, uint8_t, const MethodInfo*))Dictionary_2_get_Item_m24974_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m24976_gshared (Dictionary_2_t6256 * __this, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m24976(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6256 *, uint8_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m24976_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m24978_gshared (Dictionary_2_t6256 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m24978(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6256 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m24978_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m24980_gshared (Dictionary_2_t6256 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m24980(__this, ___size, method) (( void (*) (Dictionary_2_t6256 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m24980_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m24982_gshared (Dictionary_2_t6256 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m24982(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6256 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m24982_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6257  Dictionary_2_make_pair_m24984_gshared (Object_t * __this /* static, unused */, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m24984(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6257  (*) (Object_t * /* static, unused */, uint8_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m24984_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::pick_key(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_key_m24986_gshared (Object_t * __this /* static, unused */, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m24986(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, uint8_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m24986_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m24988_gshared (Object_t * __this /* static, unused */, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m24988(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, uint8_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m24988_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m24990_gshared (Dictionary_2_t6256 * __this, KeyValuePair_2U5BU5D_t9890* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m24990(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6256 *, KeyValuePair_2U5BU5D_t9890*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m24990_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m24992_gshared (Dictionary_2_t6256 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m24992(__this, method) (( void (*) (Dictionary_2_t6256 *, const MethodInfo*))Dictionary_2_Resize_m24992_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m24994_gshared (Dictionary_2_t6256 * __this, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m24994(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6256 *, uint8_t, int32_t, const MethodInfo*))Dictionary_2_Add_m24994_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m24996_gshared (Dictionary_2_t6256 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m24996(__this, method) (( void (*) (Dictionary_2_t6256 *, const MethodInfo*))Dictionary_2_Clear_m24996_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m24998_gshared (Dictionary_2_t6256 * __this, uint8_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m24998(__this, ___key, method) (( bool (*) (Dictionary_2_t6256 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsKey_m24998_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m25000_gshared (Dictionary_2_t6256 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m25000(__this, ___value, method) (( bool (*) (Dictionary_2_t6256 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m25000_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m25002_gshared (Dictionary_2_t6256 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m25002(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6256 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2_GetObjectData_m25002_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m25004_gshared (Dictionary_2_t6256 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m25004(__this, ___sender, method) (( void (*) (Dictionary_2_t6256 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25004_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m25006_gshared (Dictionary_2_t6256 * __this, uint8_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m25006(__this, ___key, method) (( bool (*) (Dictionary_2_t6256 *, uint8_t, const MethodInfo*))Dictionary_2_Remove_m25006_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m25008_gshared (Dictionary_2_t6256 * __this, uint8_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m25008(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6256 *, uint8_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m25008_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::get_Keys()
extern "C" KeyCollection_t6259 * Dictionary_2_get_Keys_m25010_gshared (Dictionary_2_t6256 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m25010(__this, method) (( KeyCollection_t6259 * (*) (Dictionary_2_t6256 *, const MethodInfo*))Dictionary_2_get_Keys_m25010_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::get_Values()
extern "C" ValueCollection_t6263 * Dictionary_2_get_Values_m25012_gshared (Dictionary_2_t6256 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m25012(__this, method) (( ValueCollection_t6263 * (*) (Dictionary_2_t6256 *, const MethodInfo*))Dictionary_2_get_Values_m25012_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::ToTKey(System.Object)
extern "C" uint8_t Dictionary_2_ToTKey_m25014_gshared (Dictionary_2_t6256 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m25014(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t6256 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25014_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m25016_gshared (Dictionary_2_t6256 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m25016(__this, ___value, method) (( int32_t (*) (Dictionary_2_t6256 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25016_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m25018_gshared (Dictionary_2_t6256 * __this, KeyValuePair_2_t6257  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m25018(__this, ___pair, method) (( bool (*) (Dictionary_2_t6256 *, KeyValuePair_2_t6257 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25018_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::GetEnumerator()
extern "C" Enumerator_t6261  Dictionary_2_GetEnumerator_m25020_gshared (Dictionary_2_t6256 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m25020(__this, method) (( Enumerator_t6261  (*) (Dictionary_2_t6256 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25020_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t748  Dictionary_2_U3CCopyToU3Em__0_m25022_gshared (Object_t * __this /* static, unused */, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m25022(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Object_t * /* static, unused */, uint8_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m25022_gshared)(__this /* static, unused */, ___key, ___value, method)
