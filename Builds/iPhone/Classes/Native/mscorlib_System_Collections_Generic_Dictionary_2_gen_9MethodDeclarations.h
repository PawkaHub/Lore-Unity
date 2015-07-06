#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>
struct Dictionary_2_t428;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9603;
// System.Collections.Generic.ICollection`1<System.Object[]>
struct ICollection_1_t9777;
// System.Collections.ICollection
struct ICollection_t680;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object[]>
struct KeyCollection_t6332;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object[]>
struct ValueCollection_t6333;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t6257;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object[]>
struct IDictionary_2_t9778;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object[]>[]
struct KeyValuePair_2U5BU5D_t9779;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object[]>>
struct IEnumerator_1_t9780;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3962;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object[]>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object[]>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_46MethodDeclarations.h"
#define Dictionary_2__ctor_m3197(__this, method) (( void (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2__ctor_m17639_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m29454(__this, ___comparer, method) (( void (*) (Dictionary_2_t428 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28222_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m29455(__this, ___dictionary, method) (( void (*) (Dictionary_2_t428 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28224_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::.ctor(System.Int32)
#define Dictionary_2__ctor_m29456(__this, ___capacity, method) (( void (*) (Dictionary_2_t428 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m28226_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m29457(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t428 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28228_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m29458(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t428 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2__ctor_m28230_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m29459(__this, method) (( Object_t* (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28232_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m29460(__this, method) (( Object_t* (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28234_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m29461(__this, method) (( Object_t * (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m28236_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m29462(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t428 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m28238_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m29463(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t428 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m28240_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m29464(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t428 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m28242_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m29465(__this, ___key, method) (( bool (*) (Dictionary_2_t428 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m28244_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m29466(__this, ___key, method) (( void (*) (Dictionary_2_t428 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m28246_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m29467(__this, method) (( bool (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28248_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m29468(__this, method) (( Object_t * (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28250_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m29469(__this, method) (( bool (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28252_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m29470(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t428 *, KeyValuePair_2_t6331 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28254_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m29471(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t428 *, KeyValuePair_2_t6331 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28256_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m29472(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t428 *, KeyValuePair_2U5BU5D_t9779*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28258_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m29473(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t428 *, KeyValuePair_2_t6331 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28260_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m29474(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t428 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m28262_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m29475(__this, method) (( Object_t * (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28264_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m29476(__this, method) (( Object_t* (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28266_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m29477(__this, method) (( Object_t * (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28268_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::get_Count()
#define Dictionary_2_get_Count_m29478(__this, method) (( int32_t (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_get_Count_m28270_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::get_Item(TKey)
#define Dictionary_2_get_Item_m29479(__this, ___key, method) (( ObjectU5BU5D_t21* (*) (Dictionary_2_t428 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m28272_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m29480(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t428 *, int32_t, ObjectU5BU5D_t21*, const MethodInfo*))Dictionary_2_set_Item_m28274_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m29481(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t428 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m28276_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m29482(__this, ___size, method) (( void (*) (Dictionary_2_t428 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m28278_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m29483(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t428 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m28280_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m29484(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6331  (*) (Object_t * /* static, unused */, int32_t, ObjectU5BU5D_t21*, const MethodInfo*))Dictionary_2_make_pair_m28282_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m29485(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, ObjectU5BU5D_t21*, const MethodInfo*))Dictionary_2_pick_key_m28284_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m29486(__this /* static, unused */, ___key, ___value, method) (( ObjectU5BU5D_t21* (*) (Object_t * /* static, unused */, int32_t, ObjectU5BU5D_t21*, const MethodInfo*))Dictionary_2_pick_value_m28286_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m29487(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t428 *, KeyValuePair_2U5BU5D_t9779*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m28288_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::Resize()
#define Dictionary_2_Resize_m29488(__this, method) (( void (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_Resize_m28290_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::Add(TKey,TValue)
#define Dictionary_2_Add_m29489(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t428 *, int32_t, ObjectU5BU5D_t21*, const MethodInfo*))Dictionary_2_Add_m28292_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::Clear()
#define Dictionary_2_Clear_m29490(__this, method) (( void (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_Clear_m28294_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m29491(__this, ___key, method) (( bool (*) (Dictionary_2_t428 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m28296_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m29492(__this, ___value, method) (( bool (*) (Dictionary_2_t428 *, ObjectU5BU5D_t21*, const MethodInfo*))Dictionary_2_ContainsValue_m28298_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m29493(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t428 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2_GetObjectData_m28300_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m29494(__this, ___sender, method) (( void (*) (Dictionary_2_t428 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m28302_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::Remove(TKey)
#define Dictionary_2_Remove_m29495(__this, ___key, method) (( bool (*) (Dictionary_2_t428 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m28304_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m29496(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t428 *, int32_t, ObjectU5BU5D_t21**, const MethodInfo*))Dictionary_2_TryGetValue_m28306_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::get_Keys()
#define Dictionary_2_get_Keys_m29497(__this, method) (( KeyCollection_t6332 * (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_get_Keys_m28307_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::get_Values()
#define Dictionary_2_get_Values_m29498(__this, method) (( ValueCollection_t6333 * (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_get_Values_m28308_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m29499(__this, ___key, method) (( int32_t (*) (Dictionary_2_t428 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m28310_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m29500(__this, ___value, method) (( ObjectU5BU5D_t21* (*) (Dictionary_2_t428 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m28312_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m29501(__this, ___pair, method) (( bool (*) (Dictionary_2_t428 *, KeyValuePair_2_t6331 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m28314_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m29502(__this, method) (( Enumerator_t6334  (*) (Dictionary_2_t428 *, const MethodInfo*))Dictionary_2_GetEnumerator_m28316_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m29503(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Object_t * /* static, unused */, int32_t, ObjectU5BU5D_t21*, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m28318_gshared)(__this /* static, unused */, ___key, ___value, method)
