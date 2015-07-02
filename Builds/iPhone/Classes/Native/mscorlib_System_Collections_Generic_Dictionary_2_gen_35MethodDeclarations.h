﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>
struct Dictionary_2_t2647;
// System.Collections.Generic.ICollection`1<Language.Lua.LuaValue>
struct ICollection_1_t6999;
// System.Collections.ICollection
struct ICollection_t661;
// System.Object
struct Object_t;
// Language.Lua.LuaValue
struct LuaValue_t748;
// System.Collections.Generic.Dictionary`2/KeyCollection<Language.Lua.LuaValue,Language.Lua.LuaValue>
struct KeyCollection_t2674;
// System.Collections.Generic.Dictionary`2/ValueCollection<Language.Lua.LuaValue,Language.Lua.LuaValue>
struct ValueCollection_t6047;
// System.Collections.Generic.IEqualityComparer`1<Language.Lua.LuaValue>
struct IEqualityComparer_1_t6045;
// System.Collections.Generic.IDictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>
struct IDictionary_2_t7027;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.KeyValuePair`2<Language.Lua.LuaValue,Language.Lua.LuaValue>[]
struct KeyValuePair_2U5BU5D_t7028;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Language.Lua.LuaValue,Language.Lua.LuaValue>>
struct IEnumerator_1_t754;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3115;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<Language.Lua.LuaValue,Language.Lua.LuaValue>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Generic.Dictionary`2/Enumerator<Language.Lua.LuaValue,Language.Lua.LuaValue>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__44.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
#define Dictionary_2__ctor_m12213(__this, method) (( void (*) (Dictionary_2_t2647 *, const MethodInfo*))Dictionary_2__ctor_m14361_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m40125(__this, ___comparer, method) (( void (*) (Dictionary_2_t2647 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22789_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m40126(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2647 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22791_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::.ctor(System.Int32)
#define Dictionary_2__ctor_m40127(__this, ___capacity, method) (( void (*) (Dictionary_2_t2647 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14362_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m40128(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2647 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22794_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m40129(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2647 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2__ctor_m22796_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m40130(__this, method) (( Object_t* (*) (Dictionary_2_t2647 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14458_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m40131(__this, method) (( Object_t* (*) (Dictionary_2_t2647 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14459_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m40132(__this, method) (( Object_t * (*) (Dictionary_2_t2647 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m14462_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m40133(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2647 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14460_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m40134(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2647 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14461_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m40135(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2647 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14463_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m40136(__this, ___key, method) (( bool (*) (Dictionary_2_t2647 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14464_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m40137(__this, ___key, method) (( void (*) (Dictionary_2_t2647 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14466_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m40138(__this, method) (( bool (*) (Dictionary_2_t2647 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14444_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m40139(__this, method) (( Object_t * (*) (Dictionary_2_t2647 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14445_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m40140(__this, method) (( bool (*) (Dictionary_2_t2647 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14447_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m40141(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2647 *, KeyValuePair_2_t756 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14448_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m40142(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2647 *, KeyValuePair_2_t756 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14450_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m40143(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2647 *, KeyValuePair_2U5BU5D_t7028*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14451_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m40144(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2647 *, KeyValuePair_2_t756 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14452_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m40145(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2647 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14446_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m40146(__this, method) (( Object_t * (*) (Dictionary_2_t2647 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14441_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m40147(__this, method) (( Object_t* (*) (Dictionary_2_t2647 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14453_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m40148(__this, method) (( Object_t * (*) (Dictionary_2_t2647 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14465_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::get_Count()
#define Dictionary_2_get_Count_m40149(__this, method) (( int32_t (*) (Dictionary_2_t2647 *, const MethodInfo*))Dictionary_2_get_Count_m14443_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::get_Item(TKey)
#define Dictionary_2_get_Item_m40150(__this, ___key, method) (( LuaValue_t748 * (*) (Dictionary_2_t2647 *, LuaValue_t748 *, const MethodInfo*))Dictionary_2_get_Item_m14457_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m40151(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2647 *, LuaValue_t748 *, LuaValue_t748 *, const MethodInfo*))Dictionary_2_set_Item_m14364_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m40152(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2647 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m22820_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m40153(__this, ___size, method) (( void (*) (Dictionary_2_t2647 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m22822_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m40154(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2647 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m22824_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m40155(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t756  (*) (Object_t * /* static, unused */, LuaValue_t748 *, LuaValue_t748 *, const MethodInfo*))Dictionary_2_make_pair_m22826_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m40156(__this /* static, unused */, ___key, ___value, method) (( LuaValue_t748 * (*) (Object_t * /* static, unused */, LuaValue_t748 *, LuaValue_t748 *, const MethodInfo*))Dictionary_2_pick_key_m22828_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m40157(__this /* static, unused */, ___key, ___value, method) (( LuaValue_t748 * (*) (Object_t * /* static, unused */, LuaValue_t748 *, LuaValue_t748 *, const MethodInfo*))Dictionary_2_pick_value_m22830_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m40158(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2647 *, KeyValuePair_2U5BU5D_t7028*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m22832_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::Resize()
#define Dictionary_2_Resize_m40159(__this, method) (( void (*) (Dictionary_2_t2647 *, const MethodInfo*))Dictionary_2_Resize_m22834_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::Add(TKey,TValue)
#define Dictionary_2_Add_m40160(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2647 *, LuaValue_t748 *, LuaValue_t748 *, const MethodInfo*))Dictionary_2_Add_m14454_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::Clear()
#define Dictionary_2_Clear_m40161(__this, method) (( void (*) (Dictionary_2_t2647 *, const MethodInfo*))Dictionary_2_Clear_m14449_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m40162(__this, ___key, method) (( bool (*) (Dictionary_2_t2647 *, LuaValue_t748 *, const MethodInfo*))Dictionary_2_ContainsKey_m14455_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m40163(__this, ___value, method) (( bool (*) (Dictionary_2_t2647 *, LuaValue_t748 *, const MethodInfo*))Dictionary_2_ContainsValue_m22839_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m40164(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2647 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2_GetObjectData_m14442_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m40165(__this, ___sender, method) (( void (*) (Dictionary_2_t2647 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14467_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::Remove(TKey)
#define Dictionary_2_Remove_m40166(__this, ___key, method) (( bool (*) (Dictionary_2_t2647 *, LuaValue_t748 *, const MethodInfo*))Dictionary_2_Remove_m14456_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m40167(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2647 *, LuaValue_t748 *, LuaValue_t748 **, const MethodInfo*))Dictionary_2_TryGetValue_m14363_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::get_Keys()
#define Dictionary_2_get_Keys_m12207(__this, method) (( KeyCollection_t2674 * (*) (Dictionary_2_t2647 *, const MethodInfo*))Dictionary_2_get_Keys_m3126_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::get_Values()
#define Dictionary_2_get_Values_m40168(__this, method) (( ValueCollection_t6047 * (*) (Dictionary_2_t2647 *, const MethodInfo*))Dictionary_2_get_Values_m22845_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m40169(__this, ___key, method) (( LuaValue_t748 * (*) (Dictionary_2_t2647 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m22847_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m40170(__this, ___value, method) (( LuaValue_t748 * (*) (Dictionary_2_t2647 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m22849_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m40171(__this, ___pair, method) (( bool (*) (Dictionary_2_t2647 *, KeyValuePair_2_t756 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m22851_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m40172(__this, method) (( Enumerator_t6048  (*) (Dictionary_2_t2647 *, const MethodInfo*))Dictionary_2_GetEnumerator_m22853_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m40173(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Object_t * /* static, unused */, LuaValue_t748 *, LuaValue_t748 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m22855_gshared)(__this /* static, unused */, ___key, ___value, method)