#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>
struct KeyCollection_t4914;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t28;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t6429;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_12.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m23054_gshared (KeyCollection_t4914 * __this, Dictionary_2_t28 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m23054(__this, ___dictionary, method) (( void (*) (KeyCollection_t4914 *, Dictionary_2_t28 *, const MethodInfo*))KeyCollection__ctor_m23054_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m23055_gshared (KeyCollection_t4914 * __this, uint8_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m23055(__this, ___item, method) (( void (*) (KeyCollection_t4914 *, uint8_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m23055_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m23056_gshared (KeyCollection_t4914 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m23056(__this, method) (( void (*) (KeyCollection_t4914 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m23056_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m23057_gshared (KeyCollection_t4914 * __this, uint8_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m23057(__this, ___item, method) (( bool (*) (KeyCollection_t4914 *, uint8_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m23057_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m23058_gshared (KeyCollection_t4914 * __this, uint8_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m23058(__this, ___item, method) (( bool (*) (KeyCollection_t4914 *, uint8_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m23058_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m23059_gshared (KeyCollection_t4914 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m23059(__this, method) (( Object_t* (*) (KeyCollection_t4914 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m23059_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m23060_gshared (KeyCollection_t4914 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m23060(__this, ___array, ___index, method) (( void (*) (KeyCollection_t4914 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m23060_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m23061_gshared (KeyCollection_t4914 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m23061(__this, method) (( Object_t * (*) (KeyCollection_t4914 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m23061_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m23062_gshared (KeyCollection_t4914 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m23062(__this, method) (( bool (*) (KeyCollection_t4914 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m23062_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m23063_gshared (KeyCollection_t4914 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m23063(__this, method) (( bool (*) (KeyCollection_t4914 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m23063_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m23064_gshared (KeyCollection_t4914 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m23064(__this, method) (( Object_t * (*) (KeyCollection_t4914 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m23064_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m23065_gshared (KeyCollection_t4914 * __this, ByteU5BU5D_t25* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m23065(__this, ___array, ___index, method) (( void (*) (KeyCollection_t4914 *, ByteU5BU5D_t25*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m23065_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::GetEnumerator()
extern "C" Enumerator_t4915  KeyCollection_GetEnumerator_m23066_gshared (KeyCollection_t4914 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m23066(__this, method) (( Enumerator_t4915  (*) (KeyCollection_t4914 *, const MethodInfo*))KeyCollection_GetEnumerator_m23066_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m23067_gshared (KeyCollection_t4914 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m23067(__this, method) (( int32_t (*) (KeyCollection_t4914 *, const MethodInfo*))KeyCollection_get_Count_m23067_gshared)(__this, method)
