#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>
struct ValueCollection_t6401;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color>
struct Dictionary_2_t6394;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Color>
struct IEnumerator_1_t9810;
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
extern "C" void ValueCollection__ctor_m30569_gshared (ValueCollection_t6401 * __this, Dictionary_2_t6394 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m30569(__this, ___dictionary, method) (( void (*) (ValueCollection_t6401 *, Dictionary_2_t6394 *, const MethodInfo*))ValueCollection__ctor_m30569_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m30570_gshared (ValueCollection_t6401 * __this, Color_t121  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m30570(__this, ___item, method) (( void (*) (ValueCollection_t6401 *, Color_t121 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m30570_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m30571_gshared (ValueCollection_t6401 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m30571(__this, method) (( void (*) (ValueCollection_t6401 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m30571_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m30572_gshared (ValueCollection_t6401 * __this, Color_t121  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m30572(__this, ___item, method) (( bool (*) (ValueCollection_t6401 *, Color_t121 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m30572_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m30573_gshared (ValueCollection_t6401 * __this, Color_t121  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m30573(__this, ___item, method) (( bool (*) (ValueCollection_t6401 *, Color_t121 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m30573_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m30574_gshared (ValueCollection_t6401 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m30574(__this, method) (( Object_t* (*) (ValueCollection_t6401 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m30574_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m30575_gshared (ValueCollection_t6401 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m30575(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6401 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m30575_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m30576_gshared (ValueCollection_t6401 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m30576(__this, method) (( Object_t * (*) (ValueCollection_t6401 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m30576_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m30577_gshared (ValueCollection_t6401 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m30577(__this, method) (( bool (*) (ValueCollection_t6401 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m30577_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m30578_gshared (ValueCollection_t6401 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m30578(__this, method) (( bool (*) (ValueCollection_t6401 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m30578_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m30579_gshared (ValueCollection_t6401 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m30579(__this, method) (( Object_t * (*) (ValueCollection_t6401 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m30579_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m30580_gshared (ValueCollection_t6401 * __this, ColorU5BU5D_t385* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m30580(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6401 *, ColorU5BU5D_t385*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m30580_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::GetEnumerator()
extern "C" Enumerator_t6402  ValueCollection_GetEnumerator_m30581_gshared (ValueCollection_t6401 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m30581(__this, method) (( Enumerator_t6402  (*) (ValueCollection_t6401 *, const MethodInfo*))ValueCollection_GetEnumerator_m30581_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Color>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m30582_gshared (ValueCollection_t6401 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m30582(__this, method) (( int32_t (*) (ValueCollection_t6401 *, const MethodInfo*))ValueCollection_get_Count_m30582_gshared)(__this, method)
