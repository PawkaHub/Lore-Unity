﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>
struct ValueCollection_t5313;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>
struct Dictionary_2_t5306;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Color>
struct IEnumerator_1_t6646;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// UnityEngine.Color[]
struct ColorU5BU5D_t385;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_34.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m29066_gshared (ValueCollection_t5313 * __this, Dictionary_2_t5306 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m29066(__this, ___dictionary, method) (( void (*) (ValueCollection_t5313 *, Dictionary_2_t5306 *, const MethodInfo*))ValueCollection__ctor_m29066_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m29067_gshared (ValueCollection_t5313 * __this, Color_t121  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m29067(__this, ___item, method) (( void (*) (ValueCollection_t5313 *, Color_t121 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m29067_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m29068_gshared (ValueCollection_t5313 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m29068(__this, method) (( void (*) (ValueCollection_t5313 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m29068_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m29069_gshared (ValueCollection_t5313 * __this, Color_t121  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m29069(__this, ___item, method) (( bool (*) (ValueCollection_t5313 *, Color_t121 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m29069_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m29070_gshared (ValueCollection_t5313 * __this, Color_t121  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m29070(__this, ___item, method) (( bool (*) (ValueCollection_t5313 *, Color_t121 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m29070_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m29071_gshared (ValueCollection_t5313 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m29071(__this, method) (( Object_t* (*) (ValueCollection_t5313 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m29071_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m29072_gshared (ValueCollection_t5313 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m29072(__this, ___array, ___index, method) (( void (*) (ValueCollection_t5313 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m29072_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m29073_gshared (ValueCollection_t5313 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m29073(__this, method) (( Object_t * (*) (ValueCollection_t5313 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m29073_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m29074_gshared (ValueCollection_t5313 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m29074(__this, method) (( bool (*) (ValueCollection_t5313 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m29074_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m29075_gshared (ValueCollection_t5313 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m29075(__this, method) (( bool (*) (ValueCollection_t5313 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m29075_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m29076_gshared (ValueCollection_t5313 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m29076(__this, method) (( Object_t * (*) (ValueCollection_t5313 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m29076_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m29077_gshared (ValueCollection_t5313 * __this, ColorU5BU5D_t385* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m29077(__this, ___array, ___index, method) (( void (*) (ValueCollection_t5313 *, ColorU5BU5D_t385*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m29077_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::GetEnumerator()
extern "C" Enumerator_t5314  ValueCollection_GetEnumerator_m29078_gshared (ValueCollection_t5313 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m29078(__this, method) (( Enumerator_t5314  (*) (ValueCollection_t5313 *, const MethodInfo*))ValueCollection_GetEnumerator_m29078_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m29079_gshared (ValueCollection_t5313 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m29079(__this, method) (( int32_t (*) (ValueCollection_t5313 *, const MethodInfo*))ValueCollection_get_Count_m29079_gshared)(__this, method)
