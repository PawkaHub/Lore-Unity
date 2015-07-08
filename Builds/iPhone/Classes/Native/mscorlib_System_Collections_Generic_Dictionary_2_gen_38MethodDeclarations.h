#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>
struct Dictionary_2_t3815;
// System.Collections.Generic.ICollection`1<Language.Lua.LuaValue>
struct ICollection_1_t10880;
// System.Collections.ICollection
struct ICollection_t749;
// System.Object
struct Object_t;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// System.Collections.Generic.Dictionary`2/KeyCollection<Language.Lua.LuaValue,Language.Lua.LuaValue>
struct KeyCollection_t3840;
// System.Collections.Generic.Dictionary`2/ValueCollection<Language.Lua.LuaValue,Language.Lua.LuaValue>
struct ValueCollection_t9536;
// System.Collections.Generic.IEqualityComparer`1<Language.Lua.LuaValue>
struct IEqualityComparer_1_t9534;
// System.Collections.Generic.IDictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>
struct IDictionary_2_t10903;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.KeyValuePair`2<Language.Lua.LuaValue,Language.Lua.LuaValue>[]
struct KeyValuePair_2U5BU5D_t10904;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Language.Lua.LuaValue,Language.Lua.LuaValue>>
struct IEnumerator_1_t1340;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t4200;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<Language.Lua.LuaValue,Language.Lua.LuaValue>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.LuaValue,Language.Lua.LuaValue>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__60.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
#define Dictionary_2__ctor_m11422(__this, method) (( void (*) (Dictionary_2_t3815 *, const MethodInfo*))Dictionary_2__ctor_m18655_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m68788(__this, ___comparer, method) (( void (*) (Dictionary_2_t3815 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24553_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m68789(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3815 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24555_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::.ctor(System.Int32)
#define Dictionary_2__ctor_m68790(__this, ___capacity, method) (( void (*) (Dictionary_2_t3815 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18656_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m68791(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3815 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24558_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m68792(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3815 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2__ctor_m24560_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m68793(__this, method) (( Object_t* (*) (Dictionary_2_t3815 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18757_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m68794(__this, method) (( Object_t* (*) (Dictionary_2_t3815 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18758_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m68795(__this, method) (( Object_t * (*) (Dictionary_2_t3815 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m18761_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m68796(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3815 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18759_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m68797(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3815 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18760_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m68798(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3815 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18762_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m68799(__this, ___key, method) (( bool (*) (Dictionary_2_t3815 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18763_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m68800(__this, ___key, method) (( void (*) (Dictionary_2_t3815 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18765_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m68801(__this, method) (( bool (*) (Dictionary_2_t3815 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18743_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m68802(__this, method) (( Object_t * (*) (Dictionary_2_t3815 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18744_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m68803(__this, method) (( bool (*) (Dictionary_2_t3815 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18746_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m68804(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3815 *, KeyValuePair_2_t1342 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18747_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m68805(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3815 *, KeyValuePair_2_t1342 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18749_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m68806(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3815 *, KeyValuePair_2U5BU5D_t10904*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18750_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m68807(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3815 *, KeyValuePair_2_t1342 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18751_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m68808(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3815 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18745_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m68809(__this, method) (( Object_t * (*) (Dictionary_2_t3815 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18740_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m68810(__this, method) (( Object_t* (*) (Dictionary_2_t3815 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18752_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m68811(__this, method) (( Object_t * (*) (Dictionary_2_t3815 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18764_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::get_Count()
#define Dictionary_2_get_Count_m68812(__this, method) (( int32_t (*) (Dictionary_2_t3815 *, const MethodInfo*))Dictionary_2_get_Count_m18742_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::get_Item(TKey)
#define Dictionary_2_get_Item_m68813(__this, ___key, method) (( LuaValue_t1334 * (*) (Dictionary_2_t3815 *, LuaValue_t1334 *, const MethodInfo*))Dictionary_2_get_Item_m18756_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m68814(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3815 *, LuaValue_t1334 *, LuaValue_t1334 *, const MethodInfo*))Dictionary_2_set_Item_m18658_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m68815(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3815 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m24584_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m68816(__this, ___size, method) (( void (*) (Dictionary_2_t3815 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m24586_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m68817(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3815 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m24588_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m68818(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1342  (*) (Object_t * /* static, unused */, LuaValue_t1334 *, LuaValue_t1334 *, const MethodInfo*))Dictionary_2_make_pair_m24590_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m68819(__this /* static, unused */, ___key, ___value, method) (( LuaValue_t1334 * (*) (Object_t * /* static, unused */, LuaValue_t1334 *, LuaValue_t1334 *, const MethodInfo*))Dictionary_2_pick_key_m24592_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m68820(__this /* static, unused */, ___key, ___value, method) (( LuaValue_t1334 * (*) (Object_t * /* static, unused */, LuaValue_t1334 *, LuaValue_t1334 *, const MethodInfo*))Dictionary_2_pick_value_m24594_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m68821(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3815 *, KeyValuePair_2U5BU5D_t10904*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m24596_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::Resize()
#define Dictionary_2_Resize_m68822(__this, method) (( void (*) (Dictionary_2_t3815 *, const MethodInfo*))Dictionary_2_Resize_m24598_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::Add(TKey,TValue)
#define Dictionary_2_Add_m68823(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3815 *, LuaValue_t1334 *, LuaValue_t1334 *, const MethodInfo*))Dictionary_2_Add_m18753_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::Clear()
#define Dictionary_2_Clear_m68824(__this, method) (( void (*) (Dictionary_2_t3815 *, const MethodInfo*))Dictionary_2_Clear_m18748_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m68825(__this, ___key, method) (( bool (*) (Dictionary_2_t3815 *, LuaValue_t1334 *, const MethodInfo*))Dictionary_2_ContainsKey_m18754_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m68826(__this, ___value, method) (( bool (*) (Dictionary_2_t3815 *, LuaValue_t1334 *, const MethodInfo*))Dictionary_2_ContainsValue_m24603_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m68827(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3815 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2_GetObjectData_m18741_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m68828(__this, ___sender, method) (( void (*) (Dictionary_2_t3815 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18766_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::Remove(TKey)
#define Dictionary_2_Remove_m68829(__this, ___key, method) (( bool (*) (Dictionary_2_t3815 *, LuaValue_t1334 *, const MethodInfo*))Dictionary_2_Remove_m18755_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m68830(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3815 *, LuaValue_t1334 *, LuaValue_t1334 **, const MethodInfo*))Dictionary_2_TryGetValue_m18657_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::get_Keys()
#define Dictionary_2_get_Keys_m11416(__this, method) (( KeyCollection_t3840 * (*) (Dictionary_2_t3815 *, const MethodInfo*))Dictionary_2_get_Keys_m3440_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::get_Values()
#define Dictionary_2_get_Values_m68831(__this, method) (( ValueCollection_t9536 * (*) (Dictionary_2_t3815 *, const MethodInfo*))Dictionary_2_get_Values_m24609_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m68832(__this, ___key, method) (( LuaValue_t1334 * (*) (Dictionary_2_t3815 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m24611_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m68833(__this, ___value, method) (( LuaValue_t1334 * (*) (Dictionary_2_t3815 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m24613_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m68834(__this, ___pair, method) (( bool (*) (Dictionary_2_t3815 *, KeyValuePair_2_t1342 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m24615_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m68835(__this, method) (( Enumerator_t9537  (*) (Dictionary_2_t3815 *, const MethodInfo*))Dictionary_2_GetEnumerator_m24617_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m68836(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Object_t * /* static, unused */, LuaValue_t1334 *, LuaValue_t1334 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m24619_gshared)(__this /* static, unused */, ___key, ___value, method)
