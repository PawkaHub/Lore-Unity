#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>
struct Dictionary_2_t8189;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1800;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t10478;
// System.Collections.ICollection
struct ICollection_t749;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseGeoPoint>
struct KeyCollection_t8191;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.ParseGeoPoint>
struct ValueCollection_t8192;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t6192;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseGeoPoint>
struct IDictionary_2_t8104;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t9074;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>
struct IEnumerator_1_t9057;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t4200;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__51.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_66MethodDeclarations.h"
#define Dictionary_2__ctor_m52533(__this, method) (( void (*) (Dictionary_2_t8189 *, const MethodInfo*))Dictionary_2__ctor_m52534_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m52535(__this, ___comparer, method) (( void (*) (Dictionary_2_t8189 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m52536_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m52537(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8189 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m52538_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::.ctor(System.Int32)
#define Dictionary_2__ctor_m52539(__this, ___capacity, method) (( void (*) (Dictionary_2_t8189 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m52540_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m52541(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8189 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m52542_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m52543(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8189 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2__ctor_m52544_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m52545(__this, method) (( Object_t* (*) (Dictionary_2_t8189 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m52546_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m52547(__this, method) (( Object_t* (*) (Dictionary_2_t8189 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m52548_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m52549(__this, method) (( Object_t * (*) (Dictionary_2_t8189 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m52550_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m52551(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8189 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m52552_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m52553(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8189 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m52554_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m52555(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8189 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m52556_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m52557(__this, ___key, method) (( bool (*) (Dictionary_2_t8189 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m52558_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m52559(__this, ___key, method) (( void (*) (Dictionary_2_t8189 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m52560_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m52561(__this, method) (( bool (*) (Dictionary_2_t8189 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m52562_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m52563(__this, method) (( Object_t * (*) (Dictionary_2_t8189 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m52564_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m52565(__this, method) (( bool (*) (Dictionary_2_t8189 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m52566_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m52567(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8189 *, KeyValuePair_2_t8190 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m52568_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m52569(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8189 *, KeyValuePair_2_t8190 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m52570_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m52571(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8189 *, KeyValuePair_2U5BU5D_t9074*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m52572_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m52573(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8189 *, KeyValuePair_2_t8190 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m52574_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m52575(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8189 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m52576_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m52577(__this, method) (( Object_t * (*) (Dictionary_2_t8189 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m52578_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m52579(__this, method) (( Object_t* (*) (Dictionary_2_t8189 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m52580_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m52581(__this, method) (( Object_t * (*) (Dictionary_2_t8189 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m52582_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::get_Count()
#define Dictionary_2_get_Count_m52583(__this, method) (( int32_t (*) (Dictionary_2_t8189 *, const MethodInfo*))Dictionary_2_get_Count_m52584_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::get_Item(TKey)
#define Dictionary_2_get_Item_m52585(__this, ___key, method) (( ParseGeoPoint_t935  (*) (Dictionary_2_t8189 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m52586_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m52587(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8189 *, String_t*, ParseGeoPoint_t935 , const MethodInfo*))Dictionary_2_set_Item_m52588_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m52589(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8189 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m52590_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m52591(__this, ___size, method) (( void (*) (Dictionary_2_t8189 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m52592_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m52593(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8189 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m52594_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m52595(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8190  (*) (Object_t * /* static, unused */, String_t*, ParseGeoPoint_t935 , const MethodInfo*))Dictionary_2_make_pair_m52596_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m52597(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, ParseGeoPoint_t935 , const MethodInfo*))Dictionary_2_pick_key_m52598_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m52599(__this /* static, unused */, ___key, ___value, method) (( ParseGeoPoint_t935  (*) (Object_t * /* static, unused */, String_t*, ParseGeoPoint_t935 , const MethodInfo*))Dictionary_2_pick_value_m52600_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m52601(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8189 *, KeyValuePair_2U5BU5D_t9074*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m52602_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::Resize()
#define Dictionary_2_Resize_m52603(__this, method) (( void (*) (Dictionary_2_t8189 *, const MethodInfo*))Dictionary_2_Resize_m52604_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::Add(TKey,TValue)
#define Dictionary_2_Add_m52605(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8189 *, String_t*, ParseGeoPoint_t935 , const MethodInfo*))Dictionary_2_Add_m52606_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::Clear()
#define Dictionary_2_Clear_m52607(__this, method) (( void (*) (Dictionary_2_t8189 *, const MethodInfo*))Dictionary_2_Clear_m52608_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m52609(__this, ___key, method) (( bool (*) (Dictionary_2_t8189 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m52610_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m52611(__this, ___value, method) (( bool (*) (Dictionary_2_t8189 *, ParseGeoPoint_t935 , const MethodInfo*))Dictionary_2_ContainsValue_m52612_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m52613(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8189 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2_GetObjectData_m52614_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m52615(__this, ___sender, method) (( void (*) (Dictionary_2_t8189 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m52616_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::Remove(TKey)
#define Dictionary_2_Remove_m52617(__this, ___key, method) (( bool (*) (Dictionary_2_t8189 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m52618_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m52619(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8189 *, String_t*, ParseGeoPoint_t935 *, const MethodInfo*))Dictionary_2_TryGetValue_m52620_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::get_Keys()
#define Dictionary_2_get_Keys_m52621(__this, method) (( KeyCollection_t8191 * (*) (Dictionary_2_t8189 *, const MethodInfo*))Dictionary_2_get_Keys_m52622_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::get_Values()
#define Dictionary_2_get_Values_m52623(__this, method) (( ValueCollection_t8192 * (*) (Dictionary_2_t8189 *, const MethodInfo*))Dictionary_2_get_Values_m52624_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m52625(__this, ___key, method) (( String_t* (*) (Dictionary_2_t8189 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m52626_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m52627(__this, ___value, method) (( ParseGeoPoint_t935  (*) (Dictionary_2_t8189 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m52628_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m52629(__this, ___pair, method) (( bool (*) (Dictionary_2_t8189 *, KeyValuePair_2_t8190 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m52630_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m52631(__this, method) (( Enumerator_t8193  (*) (Dictionary_2_t8189 *, const MethodInfo*))Dictionary_2_GetEnumerator_m52632_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m52633(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Object_t * /* static, unused */, String_t*, ParseGeoPoint_t935 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m52634_gshared)(__this /* static, unused */, ___key, ___value, method)
