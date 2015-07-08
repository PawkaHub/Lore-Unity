#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>
struct ValueCollection_t7026;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t1445;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t7456;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Single[]
struct SingleU5BU5D_t168;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_118.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_43MethodDeclarations.h"
#define ValueCollection__ctor_m37305(__this, ___dictionary, method) (( void (*) (ValueCollection_t7026 *, Dictionary_2_t1445 *, const MethodInfo*))ValueCollection__ctor_m37244_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m37306(__this, ___item, method) (( void (*) (ValueCollection_t7026 *, float, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m37245_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m37307(__this, method) (( void (*) (ValueCollection_t7026 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m37246_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m37308(__this, ___item, method) (( bool (*) (ValueCollection_t7026 *, float, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m37247_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m37309(__this, ___item, method) (( bool (*) (ValueCollection_t7026 *, float, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m37248_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m37310(__this, method) (( Object_t* (*) (ValueCollection_t7026 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m37249_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m37311(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7026 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m37250_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m37312(__this, method) (( Object_t * (*) (ValueCollection_t7026 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m37251_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m37313(__this, method) (( bool (*) (ValueCollection_t7026 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m37252_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m37314(__this, method) (( bool (*) (ValueCollection_t7026 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m37253_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m37315(__this, method) (( Object_t * (*) (ValueCollection_t7026 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m37254_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m37316(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7026 *, SingleU5BU5D_t168*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m37255_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::GetEnumerator()
#define ValueCollection_GetEnumerator_m37317(__this, method) (( Enumerator_t10308  (*) (ValueCollection_t7026 *, const MethodInfo*))ValueCollection_GetEnumerator_m37256_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::get_Count()
#define ValueCollection_get_Count_m37318(__this, method) (( int32_t (*) (ValueCollection_t7026 *, const MethodInfo*))ValueCollection_get_Count_m37257_gshared)(__this, method)
