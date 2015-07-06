#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>
struct ValueCollection_t7891;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7886;
// System.Collections.Generic.IEnumerator`1<System.DateTime>
struct IEnumerator_1_t7633;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.DateTime[]
struct DateTimeU5BU5D_t5474;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_71.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m51200_gshared (ValueCollection_t7891 * __this, Dictionary_2_t7886 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m51200(__this, ___dictionary, method) (( void (*) (ValueCollection_t7891 *, Dictionary_2_t7886 *, const MethodInfo*))ValueCollection__ctor_m51200_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m51202_gshared (ValueCollection_t7891 * __this, DateTime_t1705  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m51202(__this, ___item, method) (( void (*) (ValueCollection_t7891 *, DateTime_t1705 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m51202_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m51204_gshared (ValueCollection_t7891 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m51204(__this, method) (( void (*) (ValueCollection_t7891 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m51204_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m51206_gshared (ValueCollection_t7891 * __this, DateTime_t1705  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m51206(__this, ___item, method) (( bool (*) (ValueCollection_t7891 *, DateTime_t1705 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m51206_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m51208_gshared (ValueCollection_t7891 * __this, DateTime_t1705  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m51208(__this, ___item, method) (( bool (*) (ValueCollection_t7891 *, DateTime_t1705 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m51208_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m51210_gshared (ValueCollection_t7891 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m51210(__this, method) (( Object_t* (*) (ValueCollection_t7891 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m51210_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m51212_gshared (ValueCollection_t7891 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m51212(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7891 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m51212_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m51214_gshared (ValueCollection_t7891 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m51214(__this, method) (( Object_t * (*) (ValueCollection_t7891 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m51214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m51216_gshared (ValueCollection_t7891 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m51216(__this, method) (( bool (*) (ValueCollection_t7891 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m51216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m51218_gshared (ValueCollection_t7891 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m51218(__this, method) (( bool (*) (ValueCollection_t7891 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m51218_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m51220_gshared (ValueCollection_t7891 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m51220(__this, method) (( Object_t * (*) (ValueCollection_t7891 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m51220_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m51222_gshared (ValueCollection_t7891 * __this, DateTimeU5BU5D_t5474* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m51222(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7891 *, DateTimeU5BU5D_t5474*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m51222_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::GetEnumerator()
extern "C" Enumerator_t7892  ValueCollection_GetEnumerator_m51224_gshared (ValueCollection_t7891 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m51224(__this, method) (( Enumerator_t7892  (*) (ValueCollection_t7891 *, const MethodInfo*))ValueCollection_GetEnumerator_m51224_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m51226_gshared (ValueCollection_t7891 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m51226(__this, method) (( int32_t (*) (ValueCollection_t7891 *, const MethodInfo*))ValueCollection_get_Count_m51226_gshared)(__this, method)
