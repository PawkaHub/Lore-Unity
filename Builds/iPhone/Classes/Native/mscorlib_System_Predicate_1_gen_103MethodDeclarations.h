#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Predicate_1_t8354;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_43.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m54059_gshared (Predicate_1_t8354 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m54059(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8354 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m54059_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m54060_gshared (Predicate_1_t8354 * __this, KeyValuePair_2_t7288  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m54060(__this, ___obj, method) (( bool (*) (Predicate_1_t8354 *, KeyValuePair_2_t7288 , const MethodInfo*))Predicate_1_Invoke_m54060_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m54061_gshared (Predicate_1_t8354 * __this, KeyValuePair_2_t7288  ___obj, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m54061(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8354 *, KeyValuePair_2_t7288 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m54061_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m54062_gshared (Predicate_1_t8354 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m54062(__this, ___result, method) (( bool (*) (Predicate_1_t8354 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m54062_gshared)(__this, ___result, method)
