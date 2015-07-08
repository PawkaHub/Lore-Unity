#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>
struct KeyCollection_t6240;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t28;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t7402;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_12.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m24830_gshared (KeyCollection_t6240 * __this, Dictionary_2_t28 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m24830(__this, ___dictionary, method) (( void (*) (KeyCollection_t6240 *, Dictionary_2_t28 *, const MethodInfo*))KeyCollection__ctor_m24830_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m24831_gshared (KeyCollection_t6240 * __this, uint8_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m24831(__this, ___item, method) (( void (*) (KeyCollection_t6240 *, uint8_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m24831_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m24832_gshared (KeyCollection_t6240 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m24832(__this, method) (( void (*) (KeyCollection_t6240 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m24832_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m24833_gshared (KeyCollection_t6240 * __this, uint8_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m24833(__this, ___item, method) (( bool (*) (KeyCollection_t6240 *, uint8_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m24833_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m24834_gshared (KeyCollection_t6240 * __this, uint8_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m24834(__this, ___item, method) (( bool (*) (KeyCollection_t6240 *, uint8_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m24834_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m24835_gshared (KeyCollection_t6240 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m24835(__this, method) (( Object_t* (*) (KeyCollection_t6240 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m24835_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m24836_gshared (KeyCollection_t6240 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m24836(__this, ___array, ___index, method) (( void (*) (KeyCollection_t6240 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m24836_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m24837_gshared (KeyCollection_t6240 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m24837(__this, method) (( Object_t * (*) (KeyCollection_t6240 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m24837_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m24838_gshared (KeyCollection_t6240 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m24838(__this, method) (( bool (*) (KeyCollection_t6240 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m24838_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m24839_gshared (KeyCollection_t6240 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m24839(__this, method) (( bool (*) (KeyCollection_t6240 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m24839_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m24840_gshared (KeyCollection_t6240 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m24840(__this, method) (( Object_t * (*) (KeyCollection_t6240 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m24840_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m24841_gshared (KeyCollection_t6240 * __this, ByteU5BU5D_t25* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m24841(__this, ___array, ___index, method) (( void (*) (KeyCollection_t6240 *, ByteU5BU5D_t25*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m24841_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::GetEnumerator()
extern "C" Enumerator_t6241  KeyCollection_GetEnumerator_m24842_gshared (KeyCollection_t6240 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m24842(__this, method) (( Enumerator_t6241  (*) (KeyCollection_t6240 *, const MethodInfo*))KeyCollection_GetEnumerator_m24842_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m24843_gshared (KeyCollection_t6240 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m24843(__this, method) (( int32_t (*) (KeyCollection_t6240 *, const MethodInfo*))KeyCollection_get_Count_m24843_gshared)(__this, method)
