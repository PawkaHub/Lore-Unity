#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t1472;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1800;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t10037;
// System.Collections.ICollection
struct ICollection_t749;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Type>
struct KeyCollection_t7047;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Type>
struct ValueCollection_t7048;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t6192;
// System.Collections.Generic.IDictionary`2<System.String,System.Type>
struct IDictionary_2_t10321;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Type>[]
struct KeyValuePair_2U5BU5D_t10322;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Type>>
struct IEnumerator_1_t10323;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t4200;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Type>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_36.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Type>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__30.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
#define Dictionary_2__ctor_m7733(__this, method) (( void (*) (Dictionary_2_t1472 *, const MethodInfo*))Dictionary_2__ctor_m18655_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m37687(__this, ___comparer, method) (( void (*) (Dictionary_2_t1472 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24553_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m37688(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1472 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24555_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::.ctor(System.Int32)
#define Dictionary_2__ctor_m37689(__this, ___capacity, method) (( void (*) (Dictionary_2_t1472 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18656_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m37690(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1472 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24558_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m37691(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1472 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2__ctor_m24560_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Type>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m37692(__this, method) (( Object_t* (*) (Dictionary_2_t1472 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18757_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Type>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m37693(__this, method) (( Object_t* (*) (Dictionary_2_t1472 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18758_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Type>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m37694(__this, method) (( Object_t * (*) (Dictionary_2_t1472 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m18761_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Type>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m37695(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1472 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18759_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m37696(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1472 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18760_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m37697(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1472 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18762_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Type>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m37698(__this, ___key, method) (( bool (*) (Dictionary_2_t1472 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18763_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m37699(__this, ___key, method) (( void (*) (Dictionary_2_t1472 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18765_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m37700(__this, method) (( bool (*) (Dictionary_2_t1472 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18743_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Type>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m37701(__this, method) (( Object_t * (*) (Dictionary_2_t1472 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18744_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m37702(__this, method) (( bool (*) (Dictionary_2_t1472 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18746_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m37703(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1472 *, KeyValuePair_2_t7046 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18747_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m37704(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1472 *, KeyValuePair_2_t7046 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18749_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m37705(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1472 *, KeyValuePair_2U5BU5D_t10322*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18750_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m37706(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1472 *, KeyValuePair_2_t7046 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18751_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m37707(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1472 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18745_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m37708(__this, method) (( Object_t * (*) (Dictionary_2_t1472 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18740_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Type>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m37709(__this, method) (( Object_t* (*) (Dictionary_2_t1472 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18752_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Type>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m37710(__this, method) (( Object_t * (*) (Dictionary_2_t1472 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18764_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Type>::get_Count()
#define Dictionary_2_get_Count_m37711(__this, method) (( int32_t (*) (Dictionary_2_t1472 *, const MethodInfo*))Dictionary_2_get_Count_m18742_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Type>::get_Item(TKey)
#define Dictionary_2_get_Item_m37712(__this, ___key, method) (( Type_t * (*) (Dictionary_2_t1472 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m18756_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m37713(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1472 *, String_t*, Type_t *, const MethodInfo*))Dictionary_2_set_Item_m18658_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m37714(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1472 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m24584_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m37715(__this, ___size, method) (( void (*) (Dictionary_2_t1472 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m24586_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m37716(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1472 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m24588_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Type>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m37717(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7046  (*) (Object_t * /* static, unused */, String_t*, Type_t *, const MethodInfo*))Dictionary_2_make_pair_m24590_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Type>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m37718(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, Type_t *, const MethodInfo*))Dictionary_2_pick_key_m24592_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Type>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m37719(__this /* static, unused */, ___key, ___value, method) (( Type_t * (*) (Object_t * /* static, unused */, String_t*, Type_t *, const MethodInfo*))Dictionary_2_pick_value_m24594_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m37720(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1472 *, KeyValuePair_2U5BU5D_t10322*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m24596_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::Resize()
#define Dictionary_2_Resize_m37721(__this, method) (( void (*) (Dictionary_2_t1472 *, const MethodInfo*))Dictionary_2_Resize_m24598_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::Add(TKey,TValue)
#define Dictionary_2_Add_m37722(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1472 *, String_t*, Type_t *, const MethodInfo*))Dictionary_2_Add_m18753_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::Clear()
#define Dictionary_2_Clear_m37723(__this, method) (( void (*) (Dictionary_2_t1472 *, const MethodInfo*))Dictionary_2_Clear_m18748_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Type>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m37724(__this, ___key, method) (( bool (*) (Dictionary_2_t1472 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m18754_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Type>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m37725(__this, ___value, method) (( bool (*) (Dictionary_2_t1472 *, Type_t *, const MethodInfo*))Dictionary_2_ContainsValue_m24603_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m37726(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1472 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2_GetObjectData_m18741_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m37727(__this, ___sender, method) (( void (*) (Dictionary_2_t1472 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18766_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Type>::Remove(TKey)
#define Dictionary_2_Remove_m37728(__this, ___key, method) (( bool (*) (Dictionary_2_t1472 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m18755_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Type>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m37729(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1472 *, String_t*, Type_t **, const MethodInfo*))Dictionary_2_TryGetValue_m18657_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Type>::get_Keys()
#define Dictionary_2_get_Keys_m37730(__this, method) (( KeyCollection_t7047 * (*) (Dictionary_2_t1472 *, const MethodInfo*))Dictionary_2_get_Keys_m3440_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Type>::get_Values()
#define Dictionary_2_get_Values_m37731(__this, method) (( ValueCollection_t7048 * (*) (Dictionary_2_t1472 *, const MethodInfo*))Dictionary_2_get_Values_m24609_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Type>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m37732(__this, ___key, method) (( String_t* (*) (Dictionary_2_t1472 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m24611_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Type>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m37733(__this, ___value, method) (( Type_t * (*) (Dictionary_2_t1472 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m24613_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Type>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m37734(__this, ___pair, method) (( bool (*) (Dictionary_2_t1472 *, KeyValuePair_2_t7046 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m24615_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Type>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m37735(__this, method) (( Enumerator_t7049  (*) (Dictionary_2_t1472 *, const MethodInfo*))Dictionary_2_GetEnumerator_m24617_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Type>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m37736(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Object_t * /* static, unused */, String_t*, Type_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m24619_gshared)(__this /* static, unused */, ___key, ___value, method)
