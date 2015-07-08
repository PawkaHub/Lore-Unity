#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_t5126;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Byte[]>
struct IEnumerator_1_t10944;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t4663;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Collections.Generic.Queue`1/Enumerator<System.Byte[]>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_6.h"

// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::.ctor()
// System.Collections.Generic.Queue`1<System.Object>
#include "System_System_Collections_Generic_Queue_1_gen_6MethodDeclarations.h"
#define Queue_1__ctor_m73069(__this, method) (( void (*) (Queue_1_t5126 *, const MethodInfo*))Queue_1__ctor_m37789_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::.ctor(System.Int32)
#define Queue_1__ctor_m18717(__this, ___count, method) (( void (*) (Queue_1_t5126 *, int32_t, const MethodInfo*))Queue_1__ctor_m37791_gshared)(__this, ___count, method)
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Queue_1_System_Collections_ICollection_CopyTo_m73070(__this, ___array, ___idx, method) (( void (*) (Queue_1_t5126 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m37793_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Byte[]>::System.Collections.ICollection.get_IsSynchronized()
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m73071(__this, method) (( bool (*) (Queue_1_t5126 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m37795_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Byte[]>::System.Collections.ICollection.get_SyncRoot()
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m73072(__this, method) (( Object_t * (*) (Queue_1_t5126 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m37797_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Byte[]>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m73073(__this, method) (( Object_t* (*) (Queue_1_t5126 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37799_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Byte[]>::System.Collections.IEnumerable.GetEnumerator()
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m73074(__this, method) (( Object_t * (*) (Queue_1_t5126 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m37801_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::Clear()
#define Queue_1_Clear_m18718(__this, method) (( void (*) (Queue_1_t5126 *, const MethodInfo*))Queue_1_Clear_m37803_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::CopyTo(T[],System.Int32)
#define Queue_1_CopyTo_m73075(__this, ___array, ___idx, method) (( void (*) (Queue_1_t5126 *, ByteU5BU5DU5BU5D_t4663*, int32_t, const MethodInfo*))Queue_1_CopyTo_m37805_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<System.Byte[]>::Dequeue()
#define Queue_1_Dequeue_m18720(__this, method) (( ByteU5BU5D_t25* (*) (Queue_1_t5126 *, const MethodInfo*))Queue_1_Dequeue_m37806_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<System.Byte[]>::Peek()
#define Queue_1_Peek_m73076(__this, method) (( ByteU5BU5D_t25* (*) (Queue_1_t5126 *, const MethodInfo*))Queue_1_Peek_m37808_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::Enqueue(T)
#define Queue_1_Enqueue_m18724(__this, ___item, method) (( void (*) (Queue_1_t5126 *, ByteU5BU5D_t25*, const MethodInfo*))Queue_1_Enqueue_m37809_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::SetCapacity(System.Int32)
#define Queue_1_SetCapacity_m73077(__this, ___new_size, method) (( void (*) (Queue_1_t5126 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m37811_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Byte[]>::get_Count()
#define Queue_1_get_Count_m73078(__this, method) (( int32_t (*) (Queue_1_t5126 *, const MethodInfo*))Queue_1_get_Count_m37813_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Byte[]>::GetEnumerator()
#define Queue_1_GetEnumerator_m73079(__this, method) (( Enumerator_t9820  (*) (Queue_1_t5126 *, const MethodInfo*))Queue_1_GetEnumerator_m37815_gshared)(__this, method)
