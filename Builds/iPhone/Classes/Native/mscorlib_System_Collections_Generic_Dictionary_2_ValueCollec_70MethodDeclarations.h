﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>
struct ValueCollection_t6151;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t2821;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6793;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Int64[]
struct Int64U5BU5D_t2413;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_116.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_68MethodDeclarations.h"
#define ValueCollection__ctor_m41802(__this, ___dictionary, method) (( void (*) (ValueCollection_t6151 *, Dictionary_2_t2821 *, const MethodInfo*))ValueCollection__ctor_m41741_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m41803(__this, ___item, method) (( void (*) (ValueCollection_t6151 *, int64_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m41742_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m41804(__this, method) (( void (*) (ValueCollection_t6151 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m41743_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m41805(__this, ___item, method) (( bool (*) (ValueCollection_t6151 *, int64_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m41744_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m41806(__this, ___item, method) (( bool (*) (ValueCollection_t6151 *, int64_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m41745_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m41807(__this, method) (( Object_t* (*) (ValueCollection_t6151 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m41746_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m41808(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6151 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m41747_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m41809(__this, method) (( Object_t * (*) (ValueCollection_t6151 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m41748_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m41810(__this, method) (( bool (*) (ValueCollection_t6151 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m41749_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m41811(__this, method) (( bool (*) (ValueCollection_t6151 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m41750_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m41812(__this, method) (( Object_t * (*) (ValueCollection_t6151 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m41751_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m41813(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6151 *, Int64U5BU5D_t2413*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m41752_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::GetEnumerator()
#define ValueCollection_GetEnumerator_m41814(__this, method) (( Enumerator_t7088  (*) (ValueCollection_t6151 *, const MethodInfo*))ValueCollection_GetEnumerator_m41753_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::get_Count()
#define ValueCollection_get_Count_m41815(__this, method) (( int32_t (*) (ValueCollection_t6151 *, const MethodInfo*))ValueCollection_get_Count_m41754_gshared)(__this, method)
