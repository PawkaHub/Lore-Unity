#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t1920;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t1919;
// System.Action
struct Action_t250;

// System.Void System.Threading.CancellationTokenRegistration::.ctor(System.Threading.CancellationTokenSource,System.Action)
extern "C" void CancellationTokenRegistration__ctor_m8807 (CancellationTokenRegistration_t1920 * __this, CancellationTokenSource_t1919 * ___source, Action_t250 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenRegistration::Dispose()
extern "C" void CancellationTokenRegistration_Dispose_m8808 (CancellationTokenRegistration_t1920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
