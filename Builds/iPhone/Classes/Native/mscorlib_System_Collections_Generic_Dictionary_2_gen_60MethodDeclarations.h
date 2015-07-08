#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t7308;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1809;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9880;
// System.Collections.ICollection
struct ICollection_t749;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t7309;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t7313;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1775;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t10410;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t8346;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t8248;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t4200;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_43.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__38.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m40841_gshared (Dictionary_2_t7308 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m40841(__this, method) (( void (*) (Dictionary_2_t7308 *, const MethodInfo*))Dictionary_2__ctor_m40841_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m40842_gshared (Dictionary_2_t7308 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m40842(__this, ___comparer, method) (( void (*) (Dictionary_2_t7308 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m40842_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m40844_gshared (Dictionary_2_t7308 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m40844(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7308 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m40844_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m40846_gshared (Dictionary_2_t7308 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m40846(__this, ___capacity, method) (( void (*) (Dictionary_2_t7308 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m40846_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m40848_gshared (Dictionary_2_t7308 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m40848(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7308 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m40848_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m40850_gshared (Dictionary_2_t7308 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m40850(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7308 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2__ctor_m40850_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m40852_gshared (Dictionary_2_t7308 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m40852(__this, method) (( Object_t* (*) (Dictionary_2_t7308 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m40852_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m40854_gshared (Dictionary_2_t7308 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m40854(__this, method) (( Object_t* (*) (Dictionary_2_t7308 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m40854_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m40856_gshared (Dictionary_2_t7308 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m40856(__this, method) (( Object_t * (*) (Dictionary_2_t7308 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m40856_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m40858_gshared (Dictionary_2_t7308 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m40858(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7308 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m40858_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m40860_gshared (Dictionary_2_t7308 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m40860(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7308 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m40860_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m40862_gshared (Dictionary_2_t7308 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m40862(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7308 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m40862_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m40864_gshared (Dictionary_2_t7308 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m40864(__this, ___key, method) (( bool (*) (Dictionary_2_t7308 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m40864_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m40866_gshared (Dictionary_2_t7308 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m40866(__this, ___key, method) (( void (*) (Dictionary_2_t7308 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m40866_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m40868_gshared (Dictionary_2_t7308 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m40868(__this, method) (( bool (*) (Dictionary_2_t7308 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m40868_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m40870_gshared (Dictionary_2_t7308 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m40870(__this, method) (( Object_t * (*) (Dictionary_2_t7308 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m40870_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m40872_gshared (Dictionary_2_t7308 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m40872(__this, method) (( bool (*) (Dictionary_2_t7308 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m40872_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m40874_gshared (Dictionary_2_t7308 * __this, KeyValuePair_2_t7288  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m40874(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7308 *, KeyValuePair_2_t7288 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m40874_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m40876_gshared (Dictionary_2_t7308 * __this, KeyValuePair_2_t7288  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m40876(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7308 *, KeyValuePair_2_t7288 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m40876_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m40878_gshared (Dictionary_2_t7308 * __this, KeyValuePair_2U5BU5D_t8346* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m40878(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7308 *, KeyValuePair_2U5BU5D_t8346*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m40878_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m40880_gshared (Dictionary_2_t7308 * __this, KeyValuePair_2_t7288  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m40880(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7308 *, KeyValuePair_2_t7288 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m40880_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m40882_gshared (Dictionary_2_t7308 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m40882(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7308 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m40882_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m40884_gshared (Dictionary_2_t7308 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m40884(__this, method) (( Object_t * (*) (Dictionary_2_t7308 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m40884_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m40886_gshared (Dictionary_2_t7308 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m40886(__this, method) (( Object_t* (*) (Dictionary_2_t7308 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m40886_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m40888_gshared (Dictionary_2_t7308 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m40888(__this, method) (( Object_t * (*) (Dictionary_2_t7308 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m40888_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m40890_gshared (Dictionary_2_t7308 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m40890(__this, method) (( int32_t (*) (Dictionary_2_t7308 *, const MethodInfo*))Dictionary_2_get_Count_m40890_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m40892_gshared (Dictionary_2_t7308 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m40892(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t7308 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m40892_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m40894_gshared (Dictionary_2_t7308 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m40894(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7308 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m40894_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m40896_gshared (Dictionary_2_t7308 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m40896(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7308 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m40896_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m40898_gshared (Dictionary_2_t7308 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m40898(__this, ___size, method) (( void (*) (Dictionary_2_t7308 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m40898_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m40900_gshared (Dictionary_2_t7308 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m40900(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7308 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m40900_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7288  Dictionary_2_make_pair_m40902_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m40902(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7288  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m40902_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m40904_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m40904(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m40904_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m40906_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m40906(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m40906_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m40908_gshared (Dictionary_2_t7308 * __this, KeyValuePair_2U5BU5D_t8346* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m40908(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7308 *, KeyValuePair_2U5BU5D_t8346*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m40908_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m40910_gshared (Dictionary_2_t7308 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m40910(__this, method) (( void (*) (Dictionary_2_t7308 *, const MethodInfo*))Dictionary_2_Resize_m40910_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m40912_gshared (Dictionary_2_t7308 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m40912(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7308 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m40912_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m40914_gshared (Dictionary_2_t7308 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m40914(__this, method) (( void (*) (Dictionary_2_t7308 *, const MethodInfo*))Dictionary_2_Clear_m40914_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m40916_gshared (Dictionary_2_t7308 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m40916(__this, ___key, method) (( bool (*) (Dictionary_2_t7308 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m40916_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m40918_gshared (Dictionary_2_t7308 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m40918(__this, ___value, method) (( bool (*) (Dictionary_2_t7308 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m40918_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m40920_gshared (Dictionary_2_t7308 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m40920(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7308 *, SerializationInfo_t3296 *, StreamingContext_t3297 , const MethodInfo*))Dictionary_2_GetObjectData_m40920_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m40922_gshared (Dictionary_2_t7308 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m40922(__this, ___sender, method) (( void (*) (Dictionary_2_t7308 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m40922_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m40924_gshared (Dictionary_2_t7308 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m40924(__this, ___key, method) (( bool (*) (Dictionary_2_t7308 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m40924_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m40926_gshared (Dictionary_2_t7308 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m40926(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7308 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m40926_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t7309 * Dictionary_2_get_Keys_m40928_gshared (Dictionary_2_t7308 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m40928(__this, method) (( KeyCollection_t7309 * (*) (Dictionary_2_t7308 *, const MethodInfo*))Dictionary_2_get_Keys_m40928_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t7313 * Dictionary_2_get_Values_m40930_gshared (Dictionary_2_t7308 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m40930(__this, method) (( ValueCollection_t7313 * (*) (Dictionary_2_t7308 *, const MethodInfo*))Dictionary_2_get_Values_m40930_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m40932_gshared (Dictionary_2_t7308 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m40932(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7308 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m40932_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m40934_gshared (Dictionary_2_t7308 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m40934(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t7308 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m40934_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m40936_gshared (Dictionary_2_t7308 * __this, KeyValuePair_2_t7288  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m40936(__this, ___pair, method) (( bool (*) (Dictionary_2_t7308 *, KeyValuePair_2_t7288 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m40936_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t7311  Dictionary_2_GetEnumerator_m40938_gshared (Dictionary_2_t7308 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m40938(__this, method) (( Enumerator_t7311  (*) (Dictionary_2_t7308 *, const MethodInfo*))Dictionary_2_GetEnumerator_m40938_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t748  Dictionary_2_U3CCopyToU3Em__0_m40940_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m40940(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m40940_gshared)(__this /* static, unused */, ___key, ___value, method)
