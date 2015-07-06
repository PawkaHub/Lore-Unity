#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>
struct Dictionary_2_t3577;
// System.Collections.Generic.ICollection`1<Language.Lua.LuaValue>
struct ICollection_1_t10589;
// System.Collections.ICollection
struct ICollection_t680;
// System.Object
struct Object_t;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// System.Collections.Generic.Dictionary`2/KeyCollection<Language.Lua.LuaValue,Language.Lua.LuaValue>
struct KeyCollection_t3602;
// System.Collections.Generic.Dictionary`2/ValueCollection<Language.Lua.LuaValue,Language.Lua.LuaValue>
struct ValueCollection_t9254;
// System.Collections.Generic.IEqualityComparer`1<Language.Lua.LuaValue>
struct IEqualityComparer_1_t9252;
// System.Collections.Generic.IDictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>
struct IDictionary_2_t10612;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Collections.Generic.KeyValuePair`2<Language.Lua.LuaValue,Language.Lua.LuaValue>[]
struct KeyValuePair_2U5BU5D_t10613;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Language.Lua.LuaValue,Language.Lua.LuaValue>>
struct IEnumerator_1_t1081;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3962;
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
#define Dictionary_2__ctor_m11003(__this, method) (( void (*) (Dictionary_2_t3577 *, const MethodInfo*))Dictionary_2__ctor_m18237_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m67873(__this, ___comparer, method) (( void (*) (Dictionary_2_t3577 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24136_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m67874(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3577 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24138_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::.ctor(System.Int32)
#define Dictionary_2__ctor_m67875(__this, ___capacity, method) (( void (*) (Dictionary_2_t3577 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18238_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m67876(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3577 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24141_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m67877(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3577 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2__ctor_m24143_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m67878(__this, method) (( Object_t* (*) (Dictionary_2_t3577 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18339_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m67879(__this, method) (( Object_t* (*) (Dictionary_2_t3577 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18340_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m67880(__this, method) (( Object_t * (*) (Dictionary_2_t3577 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m18343_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m67881(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3577 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18341_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m67882(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3577 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18342_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m67883(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3577 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18344_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m67884(__this, ___key, method) (( bool (*) (Dictionary_2_t3577 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18345_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m67885(__this, ___key, method) (( void (*) (Dictionary_2_t3577 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18347_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m67886(__this, method) (( bool (*) (Dictionary_2_t3577 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18325_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m67887(__this, method) (( Object_t * (*) (Dictionary_2_t3577 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18326_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m67888(__this, method) (( bool (*) (Dictionary_2_t3577 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18328_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m67889(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3577 *, KeyValuePair_2_t1083 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18329_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m67890(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3577 *, KeyValuePair_2_t1083 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18331_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m67891(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3577 *, KeyValuePair_2U5BU5D_t10613*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18332_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m67892(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3577 *, KeyValuePair_2_t1083 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18333_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m67893(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3577 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18327_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m67894(__this, method) (( Object_t * (*) (Dictionary_2_t3577 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18322_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m67895(__this, method) (( Object_t* (*) (Dictionary_2_t3577 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18334_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m67896(__this, method) (( Object_t * (*) (Dictionary_2_t3577 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18346_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::get_Count()
#define Dictionary_2_get_Count_m67897(__this, method) (( int32_t (*) (Dictionary_2_t3577 *, const MethodInfo*))Dictionary_2_get_Count_m18324_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::get_Item(TKey)
#define Dictionary_2_get_Item_m67898(__this, ___key, method) (( LuaValue_t1075 * (*) (Dictionary_2_t3577 *, LuaValue_t1075 *, const MethodInfo*))Dictionary_2_get_Item_m18338_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m67899(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3577 *, LuaValue_t1075 *, LuaValue_t1075 *, const MethodInfo*))Dictionary_2_set_Item_m18240_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m67900(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3577 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m24167_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m67901(__this, ___size, method) (( void (*) (Dictionary_2_t3577 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m24169_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m67902(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3577 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m24171_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m67903(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1083  (*) (Object_t * /* static, unused */, LuaValue_t1075 *, LuaValue_t1075 *, const MethodInfo*))Dictionary_2_make_pair_m24173_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m67904(__this /* static, unused */, ___key, ___value, method) (( LuaValue_t1075 * (*) (Object_t * /* static, unused */, LuaValue_t1075 *, LuaValue_t1075 *, const MethodInfo*))Dictionary_2_pick_key_m24175_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m67905(__this /* static, unused */, ___key, ___value, method) (( LuaValue_t1075 * (*) (Object_t * /* static, unused */, LuaValue_t1075 *, LuaValue_t1075 *, const MethodInfo*))Dictionary_2_pick_value_m24177_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m67906(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3577 *, KeyValuePair_2U5BU5D_t10613*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m24179_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::Resize()
#define Dictionary_2_Resize_m67907(__this, method) (( void (*) (Dictionary_2_t3577 *, const MethodInfo*))Dictionary_2_Resize_m24181_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::Add(TKey,TValue)
#define Dictionary_2_Add_m67908(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3577 *, LuaValue_t1075 *, LuaValue_t1075 *, const MethodInfo*))Dictionary_2_Add_m18335_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::Clear()
#define Dictionary_2_Clear_m67909(__this, method) (( void (*) (Dictionary_2_t3577 *, const MethodInfo*))Dictionary_2_Clear_m18330_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m67910(__this, ___key, method) (( bool (*) (Dictionary_2_t3577 *, LuaValue_t1075 *, const MethodInfo*))Dictionary_2_ContainsKey_m18336_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m67911(__this, ___value, method) (( bool (*) (Dictionary_2_t3577 *, LuaValue_t1075 *, const MethodInfo*))Dictionary_2_ContainsValue_m24186_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m67912(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3577 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2_GetObjectData_m18323_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m67913(__this, ___sender, method) (( void (*) (Dictionary_2_t3577 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18348_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::Remove(TKey)
#define Dictionary_2_Remove_m67914(__this, ___key, method) (( bool (*) (Dictionary_2_t3577 *, LuaValue_t1075 *, const MethodInfo*))Dictionary_2_Remove_m18337_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m67915(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3577 *, LuaValue_t1075 *, LuaValue_t1075 **, const MethodInfo*))Dictionary_2_TryGetValue_m18239_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::get_Keys()
#define Dictionary_2_get_Keys_m10997(__this, method) (( KeyCollection_t3602 * (*) (Dictionary_2_t3577 *, const MethodInfo*))Dictionary_2_get_Keys_m3211_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::get_Values()
#define Dictionary_2_get_Values_m67916(__this, method) (( ValueCollection_t9254 * (*) (Dictionary_2_t3577 *, const MethodInfo*))Dictionary_2_get_Values_m24192_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m67917(__this, ___key, method) (( LuaValue_t1075 * (*) (Dictionary_2_t3577 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m24194_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m67918(__this, ___value, method) (( LuaValue_t1075 * (*) (Dictionary_2_t3577 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m24196_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m67919(__this, ___pair, method) (( bool (*) (Dictionary_2_t3577 *, KeyValuePair_2_t1083 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m24198_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m67920(__this, method) (( Enumerator_t9255  (*) (Dictionary_2_t3577 *, const MethodInfo*))Dictionary_2_GetEnumerator_m24200_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m67921(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Object_t * /* static, unused */, LuaValue_t1075 *, LuaValue_t1075 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m24202_gshared)(__this /* static, unused */, ___key, ___value, method)
