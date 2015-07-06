#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>
struct Queue_1_t4847;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<ExitGames.Client.Photon.NCommand>
struct IEnumerator_1_t10748;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// ExitGames.Client.Photon.NCommand[]
struct NCommandU5BU5D_t9509;
// ExitGames.Client.Photon.NCommand
struct NCommand_t4856;
// System.Collections.Generic.Queue`1/Enumerator<ExitGames.Client.Photon.NCommand>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::.ctor()
// System.Collections.Generic.Queue`1<System.Object>
#include "System_System_Collections_Generic_Queue_1_gen_6MethodDeclarations.h"
#define Queue_1__ctor_m18259(__this, method) (( void (*) (Queue_1_t4847 *, const MethodInfo*))Queue_1__ctor_m36340_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::.ctor(System.Int32)
#define Queue_1__ctor_m18245(__this, ___count, method) (( void (*) (Queue_1_t4847 *, int32_t, const MethodInfo*))Queue_1__ctor_m36342_gshared)(__this, ___count, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Queue_1_System_Collections_ICollection_CopyTo_m71661(__this, ___array, ___idx, method) (( void (*) (Queue_1_t4847 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m36344_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::System.Collections.ICollection.get_IsSynchronized()
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m71662(__this, method) (( bool (*) (Queue_1_t4847 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m36346_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::System.Collections.ICollection.get_SyncRoot()
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m71663(__this, method) (( Object_t * (*) (Queue_1_t4847 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m36348_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m71664(__this, method) (( Object_t* (*) (Queue_1_t4847 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36350_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::System.Collections.IEnumerable.GetEnumerator()
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m71665(__this, method) (( Object_t * (*) (Queue_1_t4847 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m36352_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::Clear()
#define Queue_1_Clear_m18246(__this, method) (( void (*) (Queue_1_t4847 *, const MethodInfo*))Queue_1_Clear_m36354_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::CopyTo(T[],System.Int32)
#define Queue_1_CopyTo_m71666(__this, ___array, ___idx, method) (( void (*) (Queue_1_t4847 *, NCommandU5BU5D_t9509*, int32_t, const MethodInfo*))Queue_1_CopyTo_m36356_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::Dequeue()
#define Queue_1_Dequeue_m18278(__this, method) (( NCommand_t4856 * (*) (Queue_1_t4847 *, const MethodInfo*))Queue_1_Dequeue_m36357_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::Peek()
#define Queue_1_Peek_m18279(__this, method) (( NCommand_t4856 * (*) (Queue_1_t4847 *, const MethodInfo*))Queue_1_Peek_m36359_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::Enqueue(T)
#define Queue_1_Enqueue_m18277(__this, ___item, method) (( void (*) (Queue_1_t4847 *, NCommand_t4856 *, const MethodInfo*))Queue_1_Enqueue_m36360_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::SetCapacity(System.Int32)
#define Queue_1_SetCapacity_m71667(__this, ___new_size, method) (( void (*) (Queue_1_t4847 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m36362_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::get_Count()
#define Queue_1_get_Count_m71668(__this, method) (( int32_t (*) (Queue_1_t4847 *, const MethodInfo*))Queue_1_get_Count_m36364_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>::GetEnumerator()
#define Queue_1_GetEnumerator_m71669(__this, method) (( Enumerator_t9514  (*) (Queue_1_t4847 *, const MethodInfo*))Queue_1_GetEnumerator_m36366_gshared)(__this, method)
