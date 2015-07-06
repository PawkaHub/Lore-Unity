#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<Region>
struct Comparison_1_t6278;
// System.Object
struct Object_t;
// Region
struct Region_t443;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<Region>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_5MethodDeclarations.h"
#define Comparison_1__ctor_m28564(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6278 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m24033_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<Region>::Invoke(T,T)
#define Comparison_1_Invoke_m28565(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6278 *, Region_t443 *, Region_t443 *, const MethodInfo*))Comparison_1_Invoke_m24034_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<Region>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m28566(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6278 *, Region_t443 *, Region_t443 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m24035_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<Region>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m28567(__this, ___result, method) (( int32_t (*) (Comparison_1_t6278 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m24036_gshared)(__this, ___result, method)
