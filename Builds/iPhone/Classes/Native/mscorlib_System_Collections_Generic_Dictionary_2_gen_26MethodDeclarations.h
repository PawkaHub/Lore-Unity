#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>
struct Dictionary_2_t1813;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Type,System.Type>>
struct ICollection_1_t10364;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t10037;
// System.Collections.ICollection
struct ICollection_t749;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t2016;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Type>
struct KeyCollection_t7224;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>
struct ValueCollection_t7225;
// System.Collections.Generic.IEqualityComparer`1<System.Tuple`2<System.Type,System.Type>>
struct IEqualityComparer_1_t7201;
// System.Collections.Generic.IDictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>
struct IDictionary_2_t10373;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Type>[]
struct KeyValuePair_2U5BU5D_t10374;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Type>>
struct IEnumerator_1_t10375;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t4200;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Type>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Type>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__34.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
#define Dictionary_2__ctor_m9044(__this, method) (( void (*) (Dictionary_2_t1813 *, const MethodInfo*))Dictionary_2__ctor_m18655_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m39826(__this, ___comparer, method) (( void (*) (Dictionary_2_t1813 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24553_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m39827(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1813 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24555_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Int32)
#define Dictionary_2__ctor_m39828(__this, ___capacity, method) (( void (*) (Dictionary_2_t1813 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18656_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m39829(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1813 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24558_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m39830(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1813 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2__ctor_m24560_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m39831(__this, method) (( Object_t* (*) (Dictionary_2_t1813 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18757_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m39832(__this, method) (( Object_t* (*) (Dictionary_2_t1813 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18758_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m39833(__this, method) (( Object_t * (*) (Dictionary_2_t1813 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m18761_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m39834(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1813 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18759_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m39835(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1813 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18760_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m39836(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1813 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18762_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m39837(__this, ___key, method) (( bool (*) (Dictionary_2_t1813 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18763_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m39838(__this, ___key, method) (( void (*) (Dictionary_2_t1813 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18765_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m39839(__this, method) (( bool (*) (Dictionary_2_t1813 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18743_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m39840(__this, method) (( Object_t * (*) (Dictionary_2_t1813 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18744_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m39841(__this, method) (( bool (*) (Dictionary_2_t1813 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18746_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m39842(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1813 *, KeyValuePair_2_t7223 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18747_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m39843(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1813 *, KeyValuePair_2_t7223 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18749_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m39844(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1813 *, KeyValuePair_2U5BU5D_t10374*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18750_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m39845(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1813 *, KeyValuePair_2_t7223 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18751_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m39846(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1813 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18745_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m39847(__this, method) (( Object_t * (*) (Dictionary_2_t1813 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18740_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m39848(__this, method) (( Object_t* (*) (Dictionary_2_t1813 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18752_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m39849(__this, method) (( Object_t * (*) (Dictionary_2_t1813 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18764_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::get_Count()
#define Dictionary_2_get_Count_m39850(__this, method) (( int32_t (*) (Dictionary_2_t1813 *, const MethodInfo*))Dictionary_2_get_Count_m18742_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::get_Item(TKey)
#define Dictionary_2_get_Item_m39851(__this, ___key, method) (( Type_t * (*) (Dictionary_2_t1813 *, Tuple_2_t2016 *, const MethodInfo*))Dictionary_2_get_Item_m18756_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m39852(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1813 *, Tuple_2_t2016 *, Type_t *, const MethodInfo*))Dictionary_2_set_Item_m18658_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m39853(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1813 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m24584_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m39854(__this, ___size, method) (( void (*) (Dictionary_2_t1813 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m24586_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m39855(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1813 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m24588_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m39856(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7223  (*) (Object_t * /* static, unused */, Tuple_2_t2016 *, Type_t *, const MethodInfo*))Dictionary_2_make_pair_m24590_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m39857(__this /* static, unused */, ___key, ___value, method) (( Tuple_2_t2016 * (*) (Object_t * /* static, unused */, Tuple_2_t2016 *, Type_t *, const MethodInfo*))Dictionary_2_pick_key_m24592_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m39858(__this /* static, unused */, ___key, ___value, method) (( Type_t * (*) (Object_t * /* static, unused */, Tuple_2_t2016 *, Type_t *, const MethodInfo*))Dictionary_2_pick_value_m24594_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m39859(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1813 *, KeyValuePair_2U5BU5D_t10374*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m24596_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Resize()
#define Dictionary_2_Resize_m39860(__this, method) (( void (*) (Dictionary_2_t1813 *, const MethodInfo*))Dictionary_2_Resize_m24598_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Add(TKey,TValue)
#define Dictionary_2_Add_m39861(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1813 *, Tuple_2_t2016 *, Type_t *, const MethodInfo*))Dictionary_2_Add_m18753_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Clear()
#define Dictionary_2_Clear_m39862(__this, method) (( void (*) (Dictionary_2_t1813 *, const MethodInfo*))Dictionary_2_Clear_m18748_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m39863(__this, ___key, method) (( bool (*) (Dictionary_2_t1813 *, Tuple_2_t2016 *, const MethodInfo*))Dictionary_2_ContainsKey_m18754_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m39864(__this, ___value, method) (( bool (*) (Dictionary_2_t1813 *, Type_t *, const MethodInfo*))Dictionary_2_ContainsValue_m24603_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m39865(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1813 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2_GetObjectData_m18741_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m39866(__this, ___sender, method) (( void (*) (Dictionary_2_t1813 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18766_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Remove(TKey)
#define Dictionary_2_Remove_m39867(__this, ___key, method) (( bool (*) (Dictionary_2_t1813 *, Tuple_2_t2016 *, const MethodInfo*))Dictionary_2_Remove_m18755_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m39868(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1813 *, Tuple_2_t2016 *, Type_t **, const MethodInfo*))Dictionary_2_TryGetValue_m18657_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::get_Keys()
#define Dictionary_2_get_Keys_m39869(__this, method) (( KeyCollection_t7224 * (*) (Dictionary_2_t1813 *, const MethodInfo*))Dictionary_2_get_Keys_m3440_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::get_Values()
#define Dictionary_2_get_Values_m39870(__this, method) (( ValueCollection_t7225 * (*) (Dictionary_2_t1813 *, const MethodInfo*))Dictionary_2_get_Values_m24609_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m39871(__this, ___key, method) (( Tuple_2_t2016 * (*) (Dictionary_2_t1813 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m24611_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m39872(__this, ___value, method) (( Type_t * (*) (Dictionary_2_t1813 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m24613_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m39873(__this, ___pair, method) (( bool (*) (Dictionary_2_t1813 *, KeyValuePair_2_t7223 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m24615_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m39874(__this, method) (( Enumerator_t7226  (*) (Dictionary_2_t1813 *, const MethodInfo*))Dictionary_2_GetEnumerator_m24617_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m39875(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Object_t * /* static, unused */, Tuple_2_t2016 *, Type_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m24619_gshared)(__this /* static, unused */, ___key, ___value, method)
