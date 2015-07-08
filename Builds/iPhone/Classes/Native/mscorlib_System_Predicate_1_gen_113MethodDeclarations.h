#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct Predicate_1_t8691;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m58276_gshared (Predicate_1_t8691 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m58276(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8691 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m58276_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m58277_gshared (Predicate_1_t8691 * __this, KeyValuePair_2_t8294  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m58277(__this, ___obj, method) (( bool (*) (Predicate_1_t8691 *, KeyValuePair_2_t8294 , const MethodInfo*))Predicate_1_Invoke_m58277_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m58278_gshared (Predicate_1_t8691 * __this, KeyValuePair_2_t8294  ___obj, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m58278(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8691 *, KeyValuePair_2_t8294 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m58278_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m58279_gshared (Predicate_1_t8691 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m58279(__this, ___result, method) (( bool (*) (Predicate_1_t8691 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m58279_gshared)(__this, ___result, method)
