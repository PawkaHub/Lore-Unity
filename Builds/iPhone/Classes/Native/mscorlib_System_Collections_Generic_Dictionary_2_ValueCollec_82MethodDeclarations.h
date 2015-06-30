#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>
struct ValueCollection_t6312;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t3230;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t1070;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.String[]
struct StringU5BU5D_t20;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_124.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_21MethodDeclarations.h"
#define ValueCollection__ctor_m44285(__this, ___dictionary, method) (( void (*) (ValueCollection_t6312 *, Dictionary_2_t3230 *, const MethodInfo*))ValueCollection__ctor_m26917_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m44286(__this, ___item, method) (( void (*) (ValueCollection_t6312 *, String_t*, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m26918_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m44287(__this, method) (( void (*) (ValueCollection_t6312 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m26919_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m44288(__this, ___item, method) (( bool (*) (ValueCollection_t6312 *, String_t*, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m26920_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m44289(__this, ___item, method) (( bool (*) (ValueCollection_t6312 *, String_t*, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m26921_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m44290(__this, method) (( Object_t* (*) (ValueCollection_t6312 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m26922_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m44291(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6312 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m26923_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m44292(__this, method) (( Object_t * (*) (ValueCollection_t6312 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m26924_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m44293(__this, method) (( bool (*) (ValueCollection_t6312 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m26925_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m44294(__this, method) (( bool (*) (ValueCollection_t6312 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m26926_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m44295(__this, method) (( Object_t * (*) (ValueCollection_t6312 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m26927_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m44296(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6312 *, StringU5BU5D_t20*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m26928_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::GetEnumerator()
#define ValueCollection_GetEnumerator_m44297(__this, method) (( Enumerator_t7205  (*) (ValueCollection_t6312 *, const MethodInfo*))ValueCollection_GetEnumerator_m26929_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::get_Count()
#define ValueCollection_get_Count_m44298(__this, method) (( int32_t (*) (ValueCollection_t6312 *, const MethodInfo*))ValueCollection_get_Count_m26930_gshared)(__this, method)
