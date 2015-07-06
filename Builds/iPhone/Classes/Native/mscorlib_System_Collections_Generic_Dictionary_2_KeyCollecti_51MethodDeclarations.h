#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>
struct KeyCollection_t7010;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t7009;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t7154;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Int64[]
struct Int64U5BU5D_t3799;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_52.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m39757_gshared (KeyCollection_t7010 * __this, Dictionary_2_t7009 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m39757(__this, ___dictionary, method) (( void (*) (KeyCollection_t7010 *, Dictionary_2_t7009 *, const MethodInfo*))KeyCollection__ctor_m39757_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m39758_gshared (KeyCollection_t7010 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m39758(__this, ___item, method) (( void (*) (KeyCollection_t7010 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m39758_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m39759_gshared (KeyCollection_t7010 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m39759(__this, method) (( void (*) (KeyCollection_t7010 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m39759_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m39760_gshared (KeyCollection_t7010 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m39760(__this, ___item, method) (( bool (*) (KeyCollection_t7010 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m39760_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m39761_gshared (KeyCollection_t7010 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m39761(__this, ___item, method) (( bool (*) (KeyCollection_t7010 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m39761_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m39762_gshared (KeyCollection_t7010 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m39762(__this, method) (( Object_t* (*) (KeyCollection_t7010 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m39762_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m39763_gshared (KeyCollection_t7010 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m39763(__this, ___array, ___index, method) (( void (*) (KeyCollection_t7010 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m39763_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m39764_gshared (KeyCollection_t7010 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m39764(__this, method) (( Object_t * (*) (KeyCollection_t7010 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m39764_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m39765_gshared (KeyCollection_t7010 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m39765(__this, method) (( bool (*) (KeyCollection_t7010 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m39765_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m39766_gshared (KeyCollection_t7010 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m39766(__this, method) (( bool (*) (KeyCollection_t7010 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m39766_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m39767_gshared (KeyCollection_t7010 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m39767(__this, method) (( Object_t * (*) (KeyCollection_t7010 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m39767_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m39768_gshared (KeyCollection_t7010 * __this, Int64U5BU5D_t3799* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m39768(__this, ___array, ___index, method) (( void (*) (KeyCollection_t7010 *, Int64U5BU5D_t3799*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m39768_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::GetEnumerator()
extern "C" Enumerator_t7011  KeyCollection_GetEnumerator_m39769_gshared (KeyCollection_t7010 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m39769(__this, method) (( Enumerator_t7011  (*) (KeyCollection_t7010 *, const MethodInfo*))KeyCollection_GetEnumerator_m39769_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m39770_gshared (KeyCollection_t7010 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m39770(__this, method) (( int32_t (*) (KeyCollection_t7010 *, const MethodInfo*))KeyCollection_get_Count_m39770_gshared)(__this, method)
