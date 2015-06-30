#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>
struct Dictionary_2_t5306;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t6431;
// System.Collections.Generic.ICollection`1<UnityEngine.Color>
struct ICollection_1_t6639;
// System.Collections.ICollection
struct ICollection_t661;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Color>
struct KeyCollection_t5309;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>
struct ValueCollection_t5313;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5169;
// System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.Color>
struct IDictionary_2_t6643;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color>[]
struct KeyValuePair_2U5BU5D_t6644;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color>>
struct IEnumerator_1_t6645;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3115;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__21.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::.ctor()
extern "C" void Dictionary_2__ctor_m28919_gshared (Dictionary_2_t5306 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m28919(__this, method) (( void (*) (Dictionary_2_t5306 *, const MethodInfo*))Dictionary_2__ctor_m28919_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m28921_gshared (Dictionary_2_t5306 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m28921(__this, ___comparer, method) (( void (*) (Dictionary_2_t5306 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28921_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m28923_gshared (Dictionary_2_t5306 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m28923(__this, ___dictionary, method) (( void (*) (Dictionary_2_t5306 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28923_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m28925_gshared (Dictionary_2_t5306 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m28925(__this, ___capacity, method) (( void (*) (Dictionary_2_t5306 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m28925_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m28927_gshared (Dictionary_2_t5306 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m28927(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t5306 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28927_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m28929_gshared (Dictionary_2_t5306 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m28929(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5306 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2__ctor_m28929_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28931_gshared (Dictionary_2_t5306 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28931(__this, method) (( Object_t* (*) (Dictionary_2_t5306 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28931_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28933_gshared (Dictionary_2_t5306 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28933(__this, method) (( Object_t* (*) (Dictionary_2_t5306 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28933_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m28935_gshared (Dictionary_2_t5306 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m28935(__this, method) (( Object_t * (*) (Dictionary_2_t5306 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m28935_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m28937_gshared (Dictionary_2_t5306 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m28937(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5306 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m28937_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m28939_gshared (Dictionary_2_t5306 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m28939(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5306 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m28939_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m28941_gshared (Dictionary_2_t5306 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m28941(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5306 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m28941_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m28943_gshared (Dictionary_2_t5306 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m28943(__this, ___key, method) (( bool (*) (Dictionary_2_t5306 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m28943_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m28945_gshared (Dictionary_2_t5306 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m28945(__this, ___key, method) (( void (*) (Dictionary_2_t5306 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m28945_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28947_gshared (Dictionary_2_t5306 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28947(__this, method) (( bool (*) (Dictionary_2_t5306 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28947_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28949_gshared (Dictionary_2_t5306 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28949(__this, method) (( Object_t * (*) (Dictionary_2_t5306 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28949_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28951_gshared (Dictionary_2_t5306 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28951(__this, method) (( bool (*) (Dictionary_2_t5306 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28951_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28953_gshared (Dictionary_2_t5306 * __this, KeyValuePair_2_t5307  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28953(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t5306 *, KeyValuePair_2_t5307 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28953_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28955_gshared (Dictionary_2_t5306 * __this, KeyValuePair_2_t5307  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28955(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5306 *, KeyValuePair_2_t5307 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28955_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28957_gshared (Dictionary_2_t5306 * __this, KeyValuePair_2U5BU5D_t6644* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28957(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5306 *, KeyValuePair_2U5BU5D_t6644*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28957_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28959_gshared (Dictionary_2_t5306 * __this, KeyValuePair_2_t5307  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28959(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5306 *, KeyValuePair_2_t5307 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28959_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m28961_gshared (Dictionary_2_t5306 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m28961(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5306 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m28961_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28963_gshared (Dictionary_2_t5306 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28963(__this, method) (( Object_t * (*) (Dictionary_2_t5306 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28963_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28965_gshared (Dictionary_2_t5306 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28965(__this, method) (( Object_t* (*) (Dictionary_2_t5306 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28965_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28967_gshared (Dictionary_2_t5306 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28967(__this, method) (( Object_t * (*) (Dictionary_2_t5306 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28967_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m28969_gshared (Dictionary_2_t5306 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m28969(__this, method) (( int32_t (*) (Dictionary_2_t5306 *, const MethodInfo*))Dictionary_2_get_Count_m28969_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::get_Item(TKey)
extern "C" Color_t121  Dictionary_2_get_Item_m28971_gshared (Dictionary_2_t5306 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m28971(__this, ___key, method) (( Color_t121  (*) (Dictionary_2_t5306 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m28971_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m28973_gshared (Dictionary_2_t5306 * __this, int32_t ___key, Color_t121  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m28973(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5306 *, int32_t, Color_t121 , const MethodInfo*))Dictionary_2_set_Item_m28973_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m28975_gshared (Dictionary_2_t5306 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m28975(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t5306 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m28975_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m28977_gshared (Dictionary_2_t5306 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m28977(__this, ___size, method) (( void (*) (Dictionary_2_t5306 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m28977_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m28979_gshared (Dictionary_2_t5306 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m28979(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5306 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m28979_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5307  Dictionary_2_make_pair_m28981_gshared (Object_t * __this /* static, unused */, int32_t ___key, Color_t121  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m28981(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5307  (*) (Object_t * /* static, unused */, int32_t, Color_t121 , const MethodInfo*))Dictionary_2_make_pair_m28981_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m28983_gshared (Object_t * __this /* static, unused */, int32_t ___key, Color_t121  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m28983(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Color_t121 , const MethodInfo*))Dictionary_2_pick_key_m28983_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::pick_value(TKey,TValue)
extern "C" Color_t121  Dictionary_2_pick_value_m28985_gshared (Object_t * __this /* static, unused */, int32_t ___key, Color_t121  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m28985(__this /* static, unused */, ___key, ___value, method) (( Color_t121  (*) (Object_t * /* static, unused */, int32_t, Color_t121 , const MethodInfo*))Dictionary_2_pick_value_m28985_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m28987_gshared (Dictionary_2_t5306 * __this, KeyValuePair_2U5BU5D_t6644* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m28987(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5306 *, KeyValuePair_2U5BU5D_t6644*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m28987_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::Resize()
extern "C" void Dictionary_2_Resize_m28989_gshared (Dictionary_2_t5306 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m28989(__this, method) (( void (*) (Dictionary_2_t5306 *, const MethodInfo*))Dictionary_2_Resize_m28989_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m28991_gshared (Dictionary_2_t5306 * __this, int32_t ___key, Color_t121  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m28991(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5306 *, int32_t, Color_t121 , const MethodInfo*))Dictionary_2_Add_m28991_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::Clear()
extern "C" void Dictionary_2_Clear_m28993_gshared (Dictionary_2_t5306 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m28993(__this, method) (( void (*) (Dictionary_2_t5306 *, const MethodInfo*))Dictionary_2_Clear_m28993_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m28995_gshared (Dictionary_2_t5306 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m28995(__this, ___key, method) (( bool (*) (Dictionary_2_t5306 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m28995_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m28997_gshared (Dictionary_2_t5306 * __this, Color_t121  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m28997(__this, ___value, method) (( bool (*) (Dictionary_2_t5306 *, Color_t121 , const MethodInfo*))Dictionary_2_ContainsValue_m28997_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m28999_gshared (Dictionary_2_t5306 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m28999(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5306 *, SerializationInfo_t1322 *, StreamingContext_t1323 , const MethodInfo*))Dictionary_2_GetObjectData_m28999_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m29001_gshared (Dictionary_2_t5306 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m29001(__this, ___sender, method) (( void (*) (Dictionary_2_t5306 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m29001_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m29003_gshared (Dictionary_2_t5306 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m29003(__this, ___key, method) (( bool (*) (Dictionary_2_t5306 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m29003_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m29005_gshared (Dictionary_2_t5306 * __this, int32_t ___key, Color_t121 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m29005(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t5306 *, int32_t, Color_t121 *, const MethodInfo*))Dictionary_2_TryGetValue_m29005_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::get_Keys()
extern "C" KeyCollection_t5309 * Dictionary_2_get_Keys_m29007_gshared (Dictionary_2_t5306 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m29007(__this, method) (( KeyCollection_t5309 * (*) (Dictionary_2_t5306 *, const MethodInfo*))Dictionary_2_get_Keys_m29007_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::get_Values()
extern "C" ValueCollection_t5313 * Dictionary_2_get_Values_m29009_gshared (Dictionary_2_t5306 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m29009(__this, method) (( ValueCollection_t5313 * (*) (Dictionary_2_t5306 *, const MethodInfo*))Dictionary_2_get_Values_m29009_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m29011_gshared (Dictionary_2_t5306 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m29011(__this, ___key, method) (( int32_t (*) (Dictionary_2_t5306 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m29011_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::ToTValue(System.Object)
extern "C" Color_t121  Dictionary_2_ToTValue_m29013_gshared (Dictionary_2_t5306 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m29013(__this, ___value, method) (( Color_t121  (*) (Dictionary_2_t5306 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m29013_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m29015_gshared (Dictionary_2_t5306 * __this, KeyValuePair_2_t5307  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m29015(__this, ___pair, method) (( bool (*) (Dictionary_2_t5306 *, KeyValuePair_2_t5307 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m29015_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::GetEnumerator()
extern "C" Enumerator_t5311  Dictionary_2_GetEnumerator_m29017_gshared (Dictionary_2_t5306 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m29017(__this, method) (( Enumerator_t5311  (*) (Dictionary_2_t5306 *, const MethodInfo*))Dictionary_2_GetEnumerator_m29017_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t660  Dictionary_2_U3CCopyToU3Em__0_m29019_gshared (Object_t * __this /* static, unused */, int32_t ___key, Color_t121  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m29019(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Object_t * /* static, unused */, int32_t, Color_t121 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m29019_gshared)(__this /* static, unused */, ___key, ___value, method)
