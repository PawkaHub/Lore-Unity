#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>
struct ValueCollection_t9449;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t3299;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t1653;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.String[]
struct StringU5BU5D_t20;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_141.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_21MethodDeclarations.h"
#define ValueCollection__ctor_m67363(__this, ___dictionary, method) (( void (*) (ValueCollection_t9449 *, Dictionary_2_t3299 *, const MethodInfo*))ValueCollection__ctor_m29842_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m67364(__this, ___item, method) (( void (*) (ValueCollection_t9449 *, String_t*, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m29843_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m67365(__this, method) (( void (*) (ValueCollection_t9449 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m29844_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m67366(__this, ___item, method) (( bool (*) (ValueCollection_t9449 *, String_t*, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m29845_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m67367(__this, ___item, method) (( bool (*) (ValueCollection_t9449 *, String_t*, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m29846_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m67368(__this, method) (( Object_t* (*) (ValueCollection_t9449 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m29847_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m67369(__this, ___array, ___index, method) (( void (*) (ValueCollection_t9449 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m29848_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m67370(__this, method) (( Object_t * (*) (ValueCollection_t9449 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m29849_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m67371(__this, method) (( bool (*) (ValueCollection_t9449 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m29850_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m67372(__this, method) (( bool (*) (ValueCollection_t9449 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m29851_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m67373(__this, method) (( Object_t * (*) (ValueCollection_t9449 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m29852_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m67374(__this, ___array, ___index, method) (( void (*) (ValueCollection_t9449 *, StringU5BU5D_t20*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m29853_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::GetEnumerator()
#define ValueCollection_GetEnumerator_m67375(__this, method) (( Enumerator_t10858  (*) (ValueCollection_t9449 *, const MethodInfo*))ValueCollection_GetEnumerator_m29854_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>::get_Count()
#define ValueCollection_get_Count_m67376(__this, method) (( int32_t (*) (ValueCollection_t9449 *, const MethodInfo*))ValueCollection_get_Count_m29855_gshared)(__this, method)
