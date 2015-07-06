#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Predicate_1_t8149;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_63.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m54221_gshared (Predicate_1_t8149 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m54221(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8149 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m54221_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m54222_gshared (Predicate_1_t8149 * __this, KeyValuePair_2_t7972  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m54222(__this, ___obj, method) (( bool (*) (Predicate_1_t8149 *, KeyValuePair_2_t7972 , const MethodInfo*))Predicate_1_Invoke_m54222_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m54223_gshared (Predicate_1_t8149 * __this, KeyValuePair_2_t7972  ___obj, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m54223(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8149 *, KeyValuePair_2_t7972 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m54223_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m54224_gshared (Predicate_1_t8149 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m54224(__this, ___result, method) (( bool (*) (Predicate_1_t8149 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m54224_gshared)(__this, ___result, method)
