#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct Dictionary_2_t1826;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1544;
// System.Collections.Generic.ICollection`1<Parse.Internal.IParseFieldOperation>
struct ICollection_1_t10126;
// System.Collections.ICollection
struct ICollection_t680;
// System.Object
struct Object_t;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1707;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.Internal.IParseFieldOperation>
struct KeyCollection_t7043;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.Internal.IParseFieldOperation>
struct ValueCollection_t7044;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5954;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct IDictionary_2_t1584;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>[]
struct KeyValuePair_2U5BU5D_t10127;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>>
struct IEnumerator_1_t1844;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3962;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Parse.Internal.IParseFieldOperation>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__41.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
#define Dictionary_2__ctor_m8735(__this, method) (( void (*) (Dictionary_2_t1826 *, const MethodInfo*))Dictionary_2__ctor_m18237_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m40184(__this, ___comparer, method) (( void (*) (Dictionary_2_t1826 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24136_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m40185(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1826 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24138_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor(System.Int32)
#define Dictionary_2__ctor_m40186(__this, ___capacity, method) (( void (*) (Dictionary_2_t1826 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18238_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m40187(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1826 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24141_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m40188(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1826 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2__ctor_m24143_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m40189(__this, method) (( Object_t* (*) (Dictionary_2_t1826 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18339_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m40190(__this, method) (( Object_t* (*) (Dictionary_2_t1826 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18340_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m40191(__this, method) (( Object_t * (*) (Dictionary_2_t1826 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m18343_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m40192(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1826 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18341_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m40193(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1826 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18342_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m40194(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1826 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18344_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m40195(__this, ___key, method) (( bool (*) (Dictionary_2_t1826 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18345_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m40196(__this, ___key, method) (( void (*) (Dictionary_2_t1826 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18347_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m40197(__this, method) (( bool (*) (Dictionary_2_t1826 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18325_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m40198(__this, method) (( Object_t * (*) (Dictionary_2_t1826 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18326_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m40199(__this, method) (( bool (*) (Dictionary_2_t1826 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18328_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m40200(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1826 *, KeyValuePair_2_t1732 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18329_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m40201(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1826 *, KeyValuePair_2_t1732 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18331_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m40202(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1826 *, KeyValuePair_2U5BU5D_t10127*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18332_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m40203(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1826 *, KeyValuePair_2_t1732 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18333_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m40204(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1826 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18327_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m40205(__this, method) (( Object_t * (*) (Dictionary_2_t1826 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18322_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m40206(__this, method) (( Object_t* (*) (Dictionary_2_t1826 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18334_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m40207(__this, method) (( Object_t * (*) (Dictionary_2_t1826 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18346_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::get_Count()
#define Dictionary_2_get_Count_m40208(__this, method) (( int32_t (*) (Dictionary_2_t1826 *, const MethodInfo*))Dictionary_2_get_Count_m18324_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::get_Item(TKey)
#define Dictionary_2_get_Item_m40209(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1826 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m18338_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m40210(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1826 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m18240_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m40211(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1826 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m24167_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m40212(__this, ___size, method) (( void (*) (Dictionary_2_t1826 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m24169_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m40213(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1826 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m24171_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m40214(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1732  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m24173_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m40215(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m24175_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m40216(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m24177_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m40217(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1826 *, KeyValuePair_2U5BU5D_t10127*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m24179_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::Resize()
#define Dictionary_2_Resize_m40218(__this, method) (( void (*) (Dictionary_2_t1826 *, const MethodInfo*))Dictionary_2_Resize_m24181_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::Add(TKey,TValue)
#define Dictionary_2_Add_m40219(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1826 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_Add_m18335_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::Clear()
#define Dictionary_2_Clear_m40220(__this, method) (( void (*) (Dictionary_2_t1826 *, const MethodInfo*))Dictionary_2_Clear_m18330_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m40221(__this, ___key, method) (( bool (*) (Dictionary_2_t1826 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m18336_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m40222(__this, ___value, method) (( bool (*) (Dictionary_2_t1826 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m24186_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m40223(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1826 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2_GetObjectData_m18323_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m40224(__this, ___sender, method) (( void (*) (Dictionary_2_t1826 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18348_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::Remove(TKey)
#define Dictionary_2_Remove_m40225(__this, ___key, method) (( bool (*) (Dictionary_2_t1826 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m18337_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m40226(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1826 *, String_t*, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m18239_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::get_Keys()
#define Dictionary_2_get_Keys_m40227(__this, method) (( KeyCollection_t7043 * (*) (Dictionary_2_t1826 *, const MethodInfo*))Dictionary_2_get_Keys_m3211_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::get_Values()
#define Dictionary_2_get_Values_m40228(__this, method) (( ValueCollection_t7044 * (*) (Dictionary_2_t1826 *, const MethodInfo*))Dictionary_2_get_Values_m24192_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m40229(__this, ___key, method) (( String_t* (*) (Dictionary_2_t1826 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m24194_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m40230(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1826 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m24196_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m40231(__this, ___pair, method) (( bool (*) (Dictionary_2_t1826 *, KeyValuePair_2_t1732 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m24198_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m40232(__this, method) (( Enumerator_t7045  (*) (Dictionary_2_t1826 *, const MethodInfo*))Dictionary_2_GetEnumerator_m24200_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m40233(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m24202_gshared)(__this /* static, unused */, ___key, ___value, method)
