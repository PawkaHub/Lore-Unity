#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t1671;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t1670;
// System.Action
struct Action_t250;

// System.Void System.Threading.CancellationTokenRegistration::.ctor(System.Threading.CancellationTokenSource,System.Action)
extern "C" void CancellationTokenRegistration__ctor_m8366 (CancellationTokenRegistration_t1671 * __this, CancellationTokenSource_t1670 * ___source, Action_t250 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenRegistration::Dispose()
extern "C" void CancellationTokenRegistration_Dispose_m8367 (CancellationTokenRegistration_t1671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
