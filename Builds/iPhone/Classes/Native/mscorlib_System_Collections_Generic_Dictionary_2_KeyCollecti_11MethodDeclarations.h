#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>
struct KeyCollection_t6002;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t28;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t7120;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_12.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m24413_gshared (KeyCollection_t6002 * __this, Dictionary_2_t28 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m24413(__this, ___dictionary, method) (( void (*) (KeyCollection_t6002 *, Dictionary_2_t28 *, const MethodInfo*))KeyCollection__ctor_m24413_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m24414_gshared (KeyCollection_t6002 * __this, uint8_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m24414(__this, ___item, method) (( void (*) (KeyCollection_t6002 *, uint8_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m24414_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m24415_gshared (KeyCollection_t6002 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m24415(__this, method) (( void (*) (KeyCollection_t6002 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m24415_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m24416_gshared (KeyCollection_t6002 * __this, uint8_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m24416(__this, ___item, method) (( bool (*) (KeyCollection_t6002 *, uint8_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m24416_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m24417_gshared (KeyCollection_t6002 * __this, uint8_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m24417(__this, ___item, method) (( bool (*) (KeyCollection_t6002 *, uint8_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m24417_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m24418_gshared (KeyCollection_t6002 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m24418(__this, method) (( Object_t* (*) (KeyCollection_t6002 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m24418_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m24419_gshared (KeyCollection_t6002 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m24419(__this, ___array, ___index, method) (( void (*) (KeyCollection_t6002 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m24419_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m24420_gshared (KeyCollection_t6002 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m24420(__this, method) (( Object_t * (*) (KeyCollection_t6002 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m24420_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m24421_gshared (KeyCollection_t6002 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m24421(__this, method) (( bool (*) (KeyCollection_t6002 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m24421_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m24422_gshared (KeyCollection_t6002 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m24422(__this, method) (( bool (*) (KeyCollection_t6002 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m24422_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m24423_gshared (KeyCollection_t6002 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m24423(__this, method) (( Object_t * (*) (KeyCollection_t6002 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m24423_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m24424_gshared (KeyCollection_t6002 * __this, ByteU5BU5D_t25* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m24424(__this, ___array, ___index, method) (( void (*) (KeyCollection_t6002 *, ByteU5BU5D_t25*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m24424_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::GetEnumerator()
extern "C" Enumerator_t6003  KeyCollection_GetEnumerator_m24425_gshared (KeyCollection_t6002 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m24425(__this, method) (( Enumerator_t6003  (*) (KeyCollection_t6002 *, const MethodInfo*))KeyCollection_GetEnumerator_m24425_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m24426_gshared (KeyCollection_t6002 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m24426(__this, method) (( int32_t (*) (KeyCollection_t6002 *, const MethodInfo*))KeyCollection_get_Count_m24426_gshared)(__this, method)
