#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Int32>
struct ValueCollection_t4937;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>
struct Dictionary_2_t4930;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3228;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Byte,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_18.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m23287_gshared (ValueCollection_t4937 * __this, Dictionary_2_t4930 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m23287(__this, ___dictionary, method) (( void (*) (ValueCollection_t4937 *, Dictionary_2_t4930 *, const MethodInfo*))ValueCollection__ctor_m23287_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m23288_gshared (ValueCollection_t4937 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m23288(__this, ___item, method) (( void (*) (ValueCollection_t4937 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m23288_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m23289_gshared (ValueCollection_t4937 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m23289(__this, method) (( void (*) (ValueCollection_t4937 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m23289_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m23290_gshared (ValueCollection_t4937 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m23290(__this, ___item, method) (( bool (*) (ValueCollection_t4937 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m23290_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m23291_gshared (ValueCollection_t4937 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m23291(__this, ___item, method) (( bool (*) (ValueCollection_t4937 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m23291_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m23292_gshared (ValueCollection_t4937 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m23292(__this, method) (( Object_t* (*) (ValueCollection_t4937 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m23292_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m23293_gshared (ValueCollection_t4937 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m23293(__this, ___array, ___index, method) (( void (*) (ValueCollection_t4937 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m23293_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m23294_gshared (ValueCollection_t4937 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m23294(__this, method) (( Object_t * (*) (ValueCollection_t4937 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m23294_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m23295_gshared (ValueCollection_t4937 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m23295(__this, method) (( bool (*) (ValueCollection_t4937 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m23295_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m23296_gshared (ValueCollection_t4937 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m23296(__this, method) (( bool (*) (ValueCollection_t4937 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m23296_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m23297_gshared (ValueCollection_t4937 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m23297(__this, method) (( Object_t * (*) (ValueCollection_t4937 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m23297_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Int32>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m23298_gshared (ValueCollection_t4937 * __this, Int32U5BU5D_t119* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m23298(__this, ___array, ___index, method) (( void (*) (ValueCollection_t4937 *, Int32U5BU5D_t119*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m23298_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Int32>::GetEnumerator()
extern "C" Enumerator_t4938  ValueCollection_GetEnumerator_m23299_gshared (ValueCollection_t4937 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m23299(__this, method) (( Enumerator_t4938  (*) (ValueCollection_t4937 *, const MethodInfo*))ValueCollection_GetEnumerator_m23299_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Int32>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m23300_gshared (ValueCollection_t4937 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m23300(__this, method) (( int32_t (*) (ValueCollection_t4937 *, const MethodInfo*))ValueCollection_get_Count_m23300_gshared)(__this, method)
