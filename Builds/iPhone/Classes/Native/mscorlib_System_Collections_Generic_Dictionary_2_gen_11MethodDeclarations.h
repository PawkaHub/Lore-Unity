#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t421;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1544;
// System.Collections.Generic.ICollection`1<UnityEngine.GameObject>
struct ICollection_1_t9686;
// System.Collections.ICollection
struct ICollection_t680;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t49;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GameObject>
struct KeyCollection_t6293;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GameObject>
struct ValueCollection_t6294;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5954;
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.GameObject>
struct IDictionary_2_t9750;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>[]
struct KeyValuePair_2U5BU5D_t9751;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>>
struct IEnumerator_1_t9752;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3962;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
#define Dictionary_2__ctor_m3201(__this, method) (( void (*) (Dictionary_2_t421 *, const MethodInfo*))Dictionary_2__ctor_m18237_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m28776(__this, ___comparer, method) (( void (*) (Dictionary_2_t421 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24136_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m28777(__this, ___dictionary, method) (( void (*) (Dictionary_2_t421 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24138_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor(System.Int32)
#define Dictionary_2__ctor_m28778(__this, ___capacity, method) (( void (*) (Dictionary_2_t421 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18238_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m28779(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t421 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24141_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m28780(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t421 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2__ctor_m24143_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28781(__this, method) (( Object_t* (*) (Dictionary_2_t421 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18339_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28782(__this, method) (( Object_t* (*) (Dictionary_2_t421 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18340_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m28783(__this, method) (( Object_t * (*) (Dictionary_2_t421 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m18343_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m28784(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t421 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18341_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m28785(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t421 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18342_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m28786(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t421 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18344_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m28787(__this, ___key, method) (( bool (*) (Dictionary_2_t421 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18345_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m28788(__this, ___key, method) (( void (*) (Dictionary_2_t421 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18347_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28789(__this, method) (( bool (*) (Dictionary_2_t421 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18325_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28790(__this, method) (( Object_t * (*) (Dictionary_2_t421 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18326_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28791(__this, method) (( bool (*) (Dictionary_2_t421 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18328_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28792(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t421 *, KeyValuePair_2_t6292 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18329_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28793(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t421 *, KeyValuePair_2_t6292 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18331_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28794(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t421 *, KeyValuePair_2U5BU5D_t9751*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18332_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28795(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t421 *, KeyValuePair_2_t6292 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18333_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m28796(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t421 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18327_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28797(__this, method) (( Object_t * (*) (Dictionary_2_t421 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18322_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28798(__this, method) (( Object_t* (*) (Dictionary_2_t421 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18334_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28799(__this, method) (( Object_t * (*) (Dictionary_2_t421 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18346_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Count()
#define Dictionary_2_get_Count_m28800(__this, method) (( int32_t (*) (Dictionary_2_t421 *, const MethodInfo*))Dictionary_2_get_Count_m18324_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Item(TKey)
#define Dictionary_2_get_Item_m28801(__this, ___key, method) (( GameObject_t49 * (*) (Dictionary_2_t421 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m18338_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m28802(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t421 *, String_t*, GameObject_t49 *, const MethodInfo*))Dictionary_2_set_Item_m18240_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m28803(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t421 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m24167_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m28804(__this, ___size, method) (( void (*) (Dictionary_2_t421 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m24169_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m28805(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t421 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m24171_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m28806(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6292  (*) (Object_t * /* static, unused */, String_t*, GameObject_t49 *, const MethodInfo*))Dictionary_2_make_pair_m24173_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m28807(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, GameObject_t49 *, const MethodInfo*))Dictionary_2_pick_key_m24175_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m28808(__this /* static, unused */, ___key, ___value, method) (( GameObject_t49 * (*) (Object_t * /* static, unused */, String_t*, GameObject_t49 *, const MethodInfo*))Dictionary_2_pick_value_m24177_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m28809(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t421 *, KeyValuePair_2U5BU5D_t9751*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m24179_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Resize()
#define Dictionary_2_Resize_m28810(__this, method) (( void (*) (Dictionary_2_t421 *, const MethodInfo*))Dictionary_2_Resize_m24181_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Add(TKey,TValue)
#define Dictionary_2_Add_m28811(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t421 *, String_t*, GameObject_t49 *, const MethodInfo*))Dictionary_2_Add_m18335_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Clear()
#define Dictionary_2_Clear_m28812(__this, method) (( void (*) (Dictionary_2_t421 *, const MethodInfo*))Dictionary_2_Clear_m18330_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m28813(__this, ___key, method) (( bool (*) (Dictionary_2_t421 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m18336_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m28814(__this, ___value, method) (( bool (*) (Dictionary_2_t421 *, GameObject_t49 *, const MethodInfo*))Dictionary_2_ContainsValue_m24186_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m28815(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t421 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2_GetObjectData_m18323_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m28816(__this, ___sender, method) (( void (*) (Dictionary_2_t421 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18348_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Remove(TKey)
#define Dictionary_2_Remove_m28817(__this, ___key, method) (( bool (*) (Dictionary_2_t421 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m18337_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m28818(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t421 *, String_t*, GameObject_t49 **, const MethodInfo*))Dictionary_2_TryGetValue_m18239_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Keys()
#define Dictionary_2_get_Keys_m28819(__this, method) (( KeyCollection_t6293 * (*) (Dictionary_2_t421 *, const MethodInfo*))Dictionary_2_get_Keys_m3211_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Values()
#define Dictionary_2_get_Values_m28820(__this, method) (( ValueCollection_t6294 * (*) (Dictionary_2_t421 *, const MethodInfo*))Dictionary_2_get_Values_m24192_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m28821(__this, ___key, method) (( String_t* (*) (Dictionary_2_t421 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m24194_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m28822(__this, ___value, method) (( GameObject_t49 * (*) (Dictionary_2_t421 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m24196_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m28823(__this, ___pair, method) (( bool (*) (Dictionary_2_t421 *, KeyValuePair_2_t6292 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m24198_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m28824(__this, method) (( Enumerator_t6295  (*) (Dictionary_2_t421 *, const MethodInfo*))Dictionary_2_GetEnumerator_m24200_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m28825(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Object_t * /* static, unused */, String_t*, GameObject_t49 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m24202_gshared)(__this /* static, unused */, ___key, ___value, method)
