#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Predicate_1_t8474;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m58146_gshared (Predicate_1_t8474 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m58146(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8474 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m58146_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m58147_gshared (Predicate_1_t8474 * __this, KeyValuePair_2_t8023  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m58147(__this, ___obj, method) (( bool (*) (Predicate_1_t8474 *, KeyValuePair_2_t8023 , const MethodInfo*))Predicate_1_Invoke_m58147_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m58148_gshared (Predicate_1_t8474 * __this, KeyValuePair_2_t8023  ___obj, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m58148(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8474 *, KeyValuePair_2_t8023 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m58148_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m58149_gshared (Predicate_1_t8474 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m58149(__this, ___result, method) (( bool (*) (Predicate_1_t8474 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m58149_gshared)(__this, ___result, method)
