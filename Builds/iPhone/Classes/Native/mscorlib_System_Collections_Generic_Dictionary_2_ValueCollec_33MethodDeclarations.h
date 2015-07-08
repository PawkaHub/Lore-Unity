#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>
struct ValueCollection_t6727;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>
struct Dictionary_2_t6720;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Color>
struct IEnumerator_1_t10107;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// UnityEngine.Color[]
struct ColorU5BU5D_t413;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_34.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m31941_gshared (ValueCollection_t6727 * __this, Dictionary_2_t6720 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m31941(__this, ___dictionary, method) (( void (*) (ValueCollection_t6727 *, Dictionary_2_t6720 *, const MethodInfo*))ValueCollection__ctor_m31941_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m31942_gshared (ValueCollection_t6727 * __this, Color_t121  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m31942(__this, ___item, method) (( void (*) (ValueCollection_t6727 *, Color_t121 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m31942_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m31943_gshared (ValueCollection_t6727 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m31943(__this, method) (( void (*) (ValueCollection_t6727 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m31943_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m31944_gshared (ValueCollection_t6727 * __this, Color_t121  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m31944(__this, ___item, method) (( bool (*) (ValueCollection_t6727 *, Color_t121 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m31944_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m31945_gshared (ValueCollection_t6727 * __this, Color_t121  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m31945(__this, ___item, method) (( bool (*) (ValueCollection_t6727 *, Color_t121 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m31945_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m31946_gshared (ValueCollection_t6727 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m31946(__this, method) (( Object_t* (*) (ValueCollection_t6727 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m31946_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m31947_gshared (ValueCollection_t6727 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m31947(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6727 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m31947_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m31948_gshared (ValueCollection_t6727 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m31948(__this, method) (( Object_t * (*) (ValueCollection_t6727 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m31948_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m31949_gshared (ValueCollection_t6727 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m31949(__this, method) (( bool (*) (ValueCollection_t6727 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m31949_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m31950_gshared (ValueCollection_t6727 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m31950(__this, method) (( bool (*) (ValueCollection_t6727 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m31950_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m31951_gshared (ValueCollection_t6727 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m31951(__this, method) (( Object_t * (*) (ValueCollection_t6727 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m31951_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m31952_gshared (ValueCollection_t6727 * __this, ColorU5BU5D_t413* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m31952(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6727 *, ColorU5BU5D_t413*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m31952_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::GetEnumerator()
extern "C" Enumerator_t6728  ValueCollection_GetEnumerator_m31953_gshared (ValueCollection_t6727 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m31953(__this, method) (( Enumerator_t6728  (*) (ValueCollection_t6727 *, const MethodInfo*))ValueCollection_GetEnumerator_m31953_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m31954_gshared (ValueCollection_t6727 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m31954(__this, method) (( int32_t (*) (ValueCollection_t6727 *, const MethodInfo*))ValueCollection_get_Count_m31954_gshared)(__this, method)
