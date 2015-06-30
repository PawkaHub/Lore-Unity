#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Color>
struct KeyCollection_t5309;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>
struct Dictionary_2_t5306;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3228;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_29.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Color>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m29031_gshared (KeyCollection_t5309 * __this, Dictionary_2_t5306 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m29031(__this, ___dictionary, method) (( void (*) (KeyCollection_t5309 *, Dictionary_2_t5306 *, const MethodInfo*))KeyCollection__ctor_m29031_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m29032_gshared (KeyCollection_t5309 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m29032(__this, ___item, method) (( void (*) (KeyCollection_t5309 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m29032_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m29033_gshared (KeyCollection_t5309 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m29033(__this, method) (( void (*) (KeyCollection_t5309 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m29033_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m29034_gshared (KeyCollection_t5309 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m29034(__this, ___item, method) (( bool (*) (KeyCollection_t5309 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m29034_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m29035_gshared (KeyCollection_t5309 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m29035(__this, ___item, method) (( bool (*) (KeyCollection_t5309 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m29035_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m29036_gshared (KeyCollection_t5309 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m29036(__this, method) (( Object_t* (*) (KeyCollection_t5309 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m29036_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Color>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m29037_gshared (KeyCollection_t5309 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m29037(__this, ___array, ___index, method) (( void (*) (KeyCollection_t5309 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m29037_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Color>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m29038_gshared (KeyCollection_t5309 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m29038(__this, method) (( Object_t * (*) (KeyCollection_t5309 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m29038_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m29039_gshared (KeyCollection_t5309 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m29039(__this, method) (( bool (*) (KeyCollection_t5309 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m29039_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Color>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m29040_gshared (KeyCollection_t5309 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m29040(__this, method) (( bool (*) (KeyCollection_t5309 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m29040_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Color>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m29041_gshared (KeyCollection_t5309 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m29041(__this, method) (( Object_t * (*) (KeyCollection_t5309 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m29041_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Color>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m29042_gshared (KeyCollection_t5309 * __this, Int32U5BU5D_t119* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m29042(__this, ___array, ___index, method) (( void (*) (KeyCollection_t5309 *, Int32U5BU5D_t119*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m29042_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Color>::GetEnumerator()
extern "C" Enumerator_t5310  KeyCollection_GetEnumerator_m29043_gshared (KeyCollection_t5309 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m29043(__this, method) (( Enumerator_t5310  (*) (KeyCollection_t5309 *, const MethodInfo*))KeyCollection_GetEnumerator_m29043_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Color>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m29044_gshared (KeyCollection_t5309 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m29044(__this, method) (( int32_t (*) (KeyCollection_t5309 *, const MethodInfo*))KeyCollection_get_Count_m29044_gshared)(__this, method)
