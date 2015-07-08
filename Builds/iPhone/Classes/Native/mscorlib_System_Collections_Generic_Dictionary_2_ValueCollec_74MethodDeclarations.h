#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>
struct ValueCollection_t8200;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t8195;
// System.Collections.Generic.IEnumerator`1<Parse.ParseGeoPoint>
struct IEnumerator_1_t7935;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// Parse.ParseGeoPoint[]
struct ParseGeoPointU5BU5D_t7940;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_75.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m52478_gshared (ValueCollection_t8200 * __this, Dictionary_2_t8195 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m52478(__this, ___dictionary, method) (( void (*) (ValueCollection_t8200 *, Dictionary_2_t8195 *, const MethodInfo*))ValueCollection__ctor_m52478_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m52480_gshared (ValueCollection_t8200 * __this, ParseGeoPoint_t935  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m52480(__this, ___item, method) (( void (*) (ValueCollection_t8200 *, ParseGeoPoint_t935 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m52480_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m52482_gshared (ValueCollection_t8200 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m52482(__this, method) (( void (*) (ValueCollection_t8200 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m52482_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m52484_gshared (ValueCollection_t8200 * __this, ParseGeoPoint_t935  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m52484(__this, ___item, method) (( bool (*) (ValueCollection_t8200 *, ParseGeoPoint_t935 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m52484_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m52486_gshared (ValueCollection_t8200 * __this, ParseGeoPoint_t935  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m52486(__this, ___item, method) (( bool (*) (ValueCollection_t8200 *, ParseGeoPoint_t935 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m52486_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m52488_gshared (ValueCollection_t8200 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m52488(__this, method) (( Object_t* (*) (ValueCollection_t8200 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m52488_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m52490_gshared (ValueCollection_t8200 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m52490(__this, ___array, ___index, method) (( void (*) (ValueCollection_t8200 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m52490_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m52492_gshared (ValueCollection_t8200 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m52492(__this, method) (( Object_t * (*) (ValueCollection_t8200 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m52492_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m52494_gshared (ValueCollection_t8200 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m52494(__this, method) (( bool (*) (ValueCollection_t8200 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m52494_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m52496_gshared (ValueCollection_t8200 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m52496(__this, method) (( bool (*) (ValueCollection_t8200 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m52496_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m52498_gshared (ValueCollection_t8200 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m52498(__this, method) (( Object_t * (*) (ValueCollection_t8200 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m52498_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m52500_gshared (ValueCollection_t8200 * __this, ParseGeoPointU5BU5D_t7940* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m52500(__this, ___array, ___index, method) (( void (*) (ValueCollection_t8200 *, ParseGeoPointU5BU5D_t7940*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m52500_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Enumerator_t8201  ValueCollection_GetEnumerator_m52502_gshared (ValueCollection_t8200 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m52502(__this, method) (( Enumerator_t8201  (*) (ValueCollection_t8200 *, const MethodInfo*))ValueCollection_GetEnumerator_m52502_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m52504_gshared (ValueCollection_t8200 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m52504(__this, method) (( int32_t (*) (ValueCollection_t8200 *, const MethodInfo*))ValueCollection_get_Count_m52504_gshared)(__this, method)
