#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t3138;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3228;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.Queue`1/Enumerator<System.Int32>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor()
extern "C" void Queue_1__ctor_m14386_gshared (Queue_1_t3138 * __this, const MethodInfo* method);
#define Queue_1__ctor_m14386(__this, method) (( void (*) (Queue_1_t3138 *, const MethodInfo*))Queue_1__ctor_m14386_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor(System.Int32)
extern "C" void Queue_1__ctor_m43770_gshared (Queue_1_t3138 * __this, int32_t ___count, const MethodInfo* method);
#define Queue_1__ctor_m43770(__this, ___count, method) (( void (*) (Queue_1_t3138 *, int32_t, const MethodInfo*))Queue_1__ctor_m43770_gshared)(__this, ___count, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m43771_gshared (Queue_1_t3138 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m43771(__this, ___array, ___idx, method) (( void (*) (Queue_1_t3138 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m43771_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m43772_gshared (Queue_1_t3138 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m43772(__this, method) (( bool (*) (Queue_1_t3138 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m43772_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m43773_gshared (Queue_1_t3138 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m43773(__this, method) (( Object_t * (*) (Queue_1_t3138 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m43773_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43774_gshared (Queue_1_t3138 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43774(__this, method) (( Object_t* (*) (Queue_1_t3138 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43774_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m43775_gshared (Queue_1_t3138 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m43775(__this, method) (( Object_t * (*) (Queue_1_t3138 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m43775_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Clear()
extern "C" void Queue_1_Clear_m43776_gshared (Queue_1_t3138 * __this, const MethodInfo* method);
#define Queue_1_Clear_m43776(__this, method) (( void (*) (Queue_1_t3138 *, const MethodInfo*))Queue_1_Clear_m43776_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m43777_gshared (Queue_1_t3138 * __this, Int32U5BU5D_t119* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m43777(__this, ___array, ___idx, method) (( void (*) (Queue_1_t3138 *, Int32U5BU5D_t119*, int32_t, const MethodInfo*))Queue_1_CopyTo_m43777_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<System.Int32>::Dequeue()
extern "C" int32_t Queue_1_Dequeue_m14398_gshared (Queue_1_t3138 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m14398(__this, method) (( int32_t (*) (Queue_1_t3138 *, const MethodInfo*))Queue_1_Dequeue_m14398_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<System.Int32>::Peek()
extern "C" int32_t Queue_1_Peek_m43778_gshared (Queue_1_t3138 * __this, const MethodInfo* method);
#define Queue_1_Peek_m43778(__this, method) (( int32_t (*) (Queue_1_t3138 *, const MethodInfo*))Queue_1_Peek_m43778_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m14396_gshared (Queue_1_t3138 * __this, int32_t ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m14396(__this, ___item, method) (( void (*) (Queue_1_t3138 *, int32_t, const MethodInfo*))Queue_1_Enqueue_m14396_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m43779_gshared (Queue_1_t3138 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m43779(__this, ___new_size, method) (( void (*) (Queue_1_t3138 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m43779_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count()
extern "C" int32_t Queue_1_get_Count_m43780_gshared (Queue_1_t3138 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m43780(__this, method) (( int32_t (*) (Queue_1_t3138 *, const MethodInfo*))Queue_1_get_Count_m43780_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t6291  Queue_1_GetEnumerator_m43781_gshared (Queue_1_t3138 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m43781(__this, method) (( Enumerator_t6291  (*) (Queue_1_t3138 *, const MethodInfo*))Queue_1_GetEnumerator_m43781_gshared)(__this, method)
