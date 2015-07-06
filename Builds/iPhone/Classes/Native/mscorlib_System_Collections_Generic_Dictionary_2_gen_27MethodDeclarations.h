#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1838;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1544;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t10113;
// System.Collections.ICollection
struct ICollection_t680;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t7032;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t7033;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5954;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t1611;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t10114;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct IEnumerator_1_t10115;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3962;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__39.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_60MethodDeclarations.h"
#define Dictionary_2__ctor_m8730(__this, method) (( void (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2__ctor_m39853_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m14953(__this, ___comparer, method) (( void (*) (Dictionary_2_t1838 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m39854_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m39855(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1838 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m39856_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Int32)
#define Dictionary_2__ctor_m39857(__this, ___capacity, method) (( void (*) (Dictionary_2_t1838 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m39858_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m39859(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1838 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m39860_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m39861(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1838 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2__ctor_m39862_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m39863(__this, method) (( Object_t* (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m39864_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m39865(__this, method) (( Object_t* (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m39866_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m39867(__this, method) (( Object_t * (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m39868_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m39869(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1838 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m39870_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m39871(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1838 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m39872_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m39873(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1838 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m39874_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m39875(__this, ___key, method) (( bool (*) (Dictionary_2_t1838 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m39876_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m39877(__this, ___key, method) (( void (*) (Dictionary_2_t1838 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m39878_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m39879(__this, method) (( bool (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m39880_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m39881(__this, method) (( Object_t * (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m39882_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m39883(__this, method) (( bool (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m39884_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m39885(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1838 *, KeyValuePair_2_t7031 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m39886_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m39887(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1838 *, KeyValuePair_2_t7031 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m39888_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m39889(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1838 *, KeyValuePair_2U5BU5D_t10114*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m39890_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m39891(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1838 *, KeyValuePair_2_t7031 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m39892_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m39893(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1838 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m39894_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m39895(__this, method) (( Object_t * (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m39896_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m39897(__this, method) (( Object_t* (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m39898_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m39899(__this, method) (( Object_t * (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m39900_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Count()
#define Dictionary_2_get_Count_m39901(__this, method) (( int32_t (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_get_Count_m39902_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Item(TKey)
#define Dictionary_2_get_Item_m39903(__this, ___key, method) (( bool (*) (Dictionary_2_t1838 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m39904_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m39905(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1838 *, String_t*, bool, const MethodInfo*))Dictionary_2_set_Item_m39906_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m39907(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1838 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m39908_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m39909(__this, ___size, method) (( void (*) (Dictionary_2_t1838 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m39910_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m39911(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1838 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m39912_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m39913(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7031  (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_make_pair_m39914_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m39915(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_pick_key_m39916_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m39917(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_pick_value_m39918_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m39919(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1838 *, KeyValuePair_2U5BU5D_t10114*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m39920_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Resize()
#define Dictionary_2_Resize_m39921(__this, method) (( void (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_Resize_m39922_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Add(TKey,TValue)
#define Dictionary_2_Add_m39923(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1838 *, String_t*, bool, const MethodInfo*))Dictionary_2_Add_m39924_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Clear()
#define Dictionary_2_Clear_m39925(__this, method) (( void (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_Clear_m39926_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m39927(__this, ___key, method) (( bool (*) (Dictionary_2_t1838 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m39928_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m39929(__this, ___value, method) (( bool (*) (Dictionary_2_t1838 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m39930_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m39931(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1838 *, SerializationInfo_t3058 *, StreamingContext_t3059 , const MethodInfo*))Dictionary_2_GetObjectData_m39932_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m39933(__this, ___sender, method) (( void (*) (Dictionary_2_t1838 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m39934_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Remove(TKey)
#define Dictionary_2_Remove_m39935(__this, ___key, method) (( bool (*) (Dictionary_2_t1838 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m39936_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m39937(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1838 *, String_t*, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m39938_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Keys()
#define Dictionary_2_get_Keys_m39939(__this, method) (( KeyCollection_t7032 * (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_get_Keys_m39940_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Values()
#define Dictionary_2_get_Values_m39941(__this, method) (( ValueCollection_t7033 * (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_get_Values_m39942_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m39943(__this, ___key, method) (( String_t* (*) (Dictionary_2_t1838 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m39944_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m39945(__this, ___value, method) (( bool (*) (Dictionary_2_t1838 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m39946_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m39947(__this, ___pair, method) (( bool (*) (Dictionary_2_t1838 *, KeyValuePair_2_t7031 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m39948_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m39949(__this, method) (( Enumerator_t7034  (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_GetEnumerator_m39950_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m39951(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m39952_gshared)(__this /* static, unused */, ___key, ___value, method)
