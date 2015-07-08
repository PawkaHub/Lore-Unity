#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>
struct ValueCollection_t8173;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t8168;
// System.Collections.Generic.IEnumerator`1<System.DateTime>
struct IEnumerator_1_t7915;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.DateTime[]
struct DateTimeU5BU5D_t5712;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_71.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m52115_gshared (ValueCollection_t8173 * __this, Dictionary_2_t8168 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m52115(__this, ___dictionary, method) (( void (*) (ValueCollection_t8173 *, Dictionary_2_t8168 *, const MethodInfo*))ValueCollection__ctor_m52115_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m52117_gshared (ValueCollection_t8173 * __this, DateTime_t1953  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m52117(__this, ___item, method) (( void (*) (ValueCollection_t8173 *, DateTime_t1953 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m52117_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m52119_gshared (ValueCollection_t8173 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m52119(__this, method) (( void (*) (ValueCollection_t8173 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m52119_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m52121_gshared (ValueCollection_t8173 * __this, DateTime_t1953  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m52121(__this, ___item, method) (( bool (*) (ValueCollection_t8173 *, DateTime_t1953 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m52121_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m52123_gshared (ValueCollection_t8173 * __this, DateTime_t1953  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m52123(__this, ___item, method) (( bool (*) (ValueCollection_t8173 *, DateTime_t1953 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m52123_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m52125_gshared (ValueCollection_t8173 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m52125(__this, method) (( Object_t* (*) (ValueCollection_t8173 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m52125_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m52127_gshared (ValueCollection_t8173 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m52127(__this, ___array, ___index, method) (( void (*) (ValueCollection_t8173 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m52127_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m52129_gshared (ValueCollection_t8173 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m52129(__this, method) (( Object_t * (*) (ValueCollection_t8173 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m52129_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m52131_gshared (ValueCollection_t8173 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m52131(__this, method) (( bool (*) (ValueCollection_t8173 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m52131_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m52133_gshared (ValueCollection_t8173 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m52133(__this, method) (( bool (*) (ValueCollection_t8173 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m52133_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m52135_gshared (ValueCollection_t8173 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m52135(__this, method) (( Object_t * (*) (ValueCollection_t8173 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m52135_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m52137_gshared (ValueCollection_t8173 * __this, DateTimeU5BU5D_t5712* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m52137(__this, ___array, ___index, method) (( void (*) (ValueCollection_t8173 *, DateTimeU5BU5D_t5712*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m52137_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::GetEnumerator()
extern "C" Enumerator_t8174  ValueCollection_GetEnumerator_m52139_gshared (ValueCollection_t8173 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m52139(__this, method) (( Enumerator_t8174  (*) (ValueCollection_t8173 *, const MethodInfo*))ValueCollection_GetEnumerator_m52139_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m52141_gshared (ValueCollection_t8173 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m52141(__this, method) (( int32_t (*) (ValueCollection_t8173 *, const MethodInfo*))ValueCollection_get_Count_m52141_gshared)(__this, method)
