#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Dictionary_2_t1864;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1544;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct ICollection_1_t10093;
// System.Collections.ICollection
struct ICollection_t680;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1555;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct KeyCollection_t7106;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct ValueCollection_t7107;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5954;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IDictionary_2_t1741;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>[]
struct KeyValuePair_2U5BU5D_t10165;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct IEnumerator_1_t1876;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3962;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
#define Dictionary_2__ctor_m8850(__this, method) (( void (*) (Dictionary_2_t1864 *, const MethodInfo*))Dictionary_2__ctor_m18237_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m41347(__this, ___comparer, method) (( void (*) (Dictionary_2_t1864 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24136_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m8869(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1864 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24138_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m41348(__this, ___capacity, method) (( void (*) (Dictionary_2_t1864 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18238_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m41349(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1864 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24141_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m41350(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1864 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2__ctor_m24143_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m41351(__this, method) (( Object_t* (*) (Dictionary_2_t1864 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18339_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m41352(__this, method) (( Object_t* (*) (Dictionary_2_t1864 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18340_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m41353(__this, method) (( Object_t * (*) (Dictionary_2_t1864 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m18343_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m41354(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1864 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18341_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m41355(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1864 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18342_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m41356(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1864 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18344_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m41357(__this, ___key, method) (( bool (*) (Dictionary_2_t1864 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18345_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m41358(__this, ___key, method) (( void (*) (Dictionary_2_t1864 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18347_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m41359(__this, method) (( bool (*) (Dictionary_2_t1864 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18325_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m41360(__this, method) (( Object_t * (*) (Dictionary_2_t1864 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18326_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m41361(__this, method) (( bool (*) (Dictionary_2_t1864 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18328_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m41362(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1864 *, KeyValuePair_2_t1873 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18329_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m41363(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1864 *, KeyValuePair_2_t1873 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18331_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m41364(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1864 *, KeyValuePair_2U5BU5D_t10165*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18332_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m41365(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1864 *, KeyValuePair_2_t1873 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18333_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m41366(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1864 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18327_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m41367(__this, method) (( Object_t * (*) (Dictionary_2_t1864 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18322_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m41368(__this, method) (( Object_t* (*) (Dictionary_2_t1864 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18334_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m41369(__this, method) (( Object_t * (*) (Dictionary_2_t1864 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18346_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Count()
#define Dictionary_2_get_Count_m41370(__this, method) (( int32_t (*) (Dictionary_2_t1864 *, const MethodInfo*))Dictionary_2_get_Count_m18324_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Item(TKey)
#define Dictionary_2_get_Item_m41371(__this, ___key, method) (( Object_t* (*) (Dictionary_2_t1864 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m18338_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m41372(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1864 *, String_t*, Object_t*, const MethodInfo*))Dictionary_2_set_Item_m18240_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m41373(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1864 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m24167_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m41374(__this, ___size, method) (( void (*) (Dictionary_2_t1864 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m24169_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m41375(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1864 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m24171_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m41376(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1873  (*) (Object_t * /* static, unused */, String_t*, Object_t*, const MethodInfo*))Dictionary_2_make_pair_m24173_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m41377(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, Object_t*, const MethodInfo*))Dictionary_2_pick_key_m24175_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m41378(__this /* static, unused */, ___key, ___value, method) (( Object_t* (*) (Object_t * /* static, unused */, String_t*, Object_t*, const MethodInfo*))Dictionary_2_pick_value_m24177_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m41379(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1864 *, KeyValuePair_2U5BU5D_t10165*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m24179_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Resize()
#define Dictionary_2_Resize_m41380(__this, method) (( void (*) (Dictionary_2_t1864 *, const MethodInfo*))Dictionary_2_Resize_m24181_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Add(TKey,TValue)
#define Dictionary_2_Add_m41381(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1864 *, String_t*, Object_t*, const MethodInfo*))Dictionary_2_Add_m18335_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Clear()
#define Dictionary_2_Clear_m41382(__this, method) (( void (*) (Dictionary_2_t1864 *, const MethodInfo*))Dictionary_2_Clear_m18330_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m41383(__this, ___key, method) (( bool (*) (Dictionary_2_t1864 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m18336_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m41384(__this, ___value, method) (( bool (*) (Dictionary_2_t1864 *, Object_t*, const MethodInfo*))Dictionary_2_ContainsValue_m24186_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m41385(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1864 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2_GetObjectData_m18323_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m41386(__this, ___sender, method) (( void (*) (Dictionary_2_t1864 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18348_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Remove(TKey)
#define Dictionary_2_Remove_m41387(__this, ___key, method) (( bool (*) (Dictionary_2_t1864 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m18337_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m41388(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1864 *, String_t*, Object_t**, const MethodInfo*))Dictionary_2_TryGetValue_m18239_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Keys()
#define Dictionary_2_get_Keys_m41389(__this, method) (( KeyCollection_t7106 * (*) (Dictionary_2_t1864 *, const MethodInfo*))Dictionary_2_get_Keys_m3211_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Values()
#define Dictionary_2_get_Values_m41390(__this, method) (( ValueCollection_t7107 * (*) (Dictionary_2_t1864 *, const MethodInfo*))Dictionary_2_get_Values_m24192_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m41391(__this, ___key, method) (( String_t* (*) (Dictionary_2_t1864 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m24194_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m41392(__this, ___value, method) (( Object_t* (*) (Dictionary_2_t1864 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m24196_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m41393(__this, ___pair, method) (( bool (*) (Dictionary_2_t1864 *, KeyValuePair_2_t1873 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m24198_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m8870(__this, method) (( Enumerator_t1874  (*) (Dictionary_2_t1864 *, const MethodInfo*))Dictionary_2_GetEnumerator_m24200_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m41394(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Object_t * /* static, unused */, String_t*, Object_t*, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m24202_gshared)(__this /* static, unused */, ___key, ___value, method)
