#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<PhotonPlayer>
struct Predicate_1_t6573;
// System.Object
struct Object_t;
// PhotonPlayer
struct PhotonPlayer_t460;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<PhotonPlayer>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_17MethodDeclarations.h"
#define Predicate_1__ctor_m29498(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6573 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m24416_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<PhotonPlayer>::Invoke(T)
#define Predicate_1_Invoke_m29499(__this, ___obj, method) (( bool (*) (Predicate_1_t6573 *, PhotonPlayer_t460 *, const MethodInfo*))Predicate_1_Invoke_m24417_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<PhotonPlayer>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m29500(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6573 *, PhotonPlayer_t460 *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m24418_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<PhotonPlayer>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m29501(__this, ___result, method) (( bool (*) (Predicate_1_t6573 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m24419_gshared)(__this, ___result, method)
