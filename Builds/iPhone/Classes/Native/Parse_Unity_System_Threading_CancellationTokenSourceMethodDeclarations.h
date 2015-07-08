#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t1919;
// System.Action
struct Action_t250;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Threading.CancellationTokenRegistration
#include "Parse_Unity_System_Threading_CancellationTokenRegistration.h"

// System.Threading.CancellationTokenRegistration System.Threading.CancellationTokenSource::Register(System.Action)
extern "C" CancellationTokenRegistration_t1920  CancellationTokenSource_Register_m8809 (CancellationTokenSource_t1919 * __this, Action_t250 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenSource::Unregister(System.Action)
extern "C" void CancellationTokenSource_Unregister_m8810 (CancellationTokenSource_t1919 * __this, Action_t250 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.CancellationTokenSource::get_IsCancellationRequested()
extern "C" bool CancellationTokenSource_get_IsCancellationRequested_m8811 (CancellationTokenSource_t1919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
extern "C" CancellationToken_t1753  CancellationTokenSource_get_Token_m8812 (CancellationTokenSource_t1919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenSource::Cancel()
extern "C" void CancellationTokenSource_Cancel_m8813 (CancellationTokenSource_t1919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenSource::Cancel(System.Boolean)
extern "C" void CancellationTokenSource_Cancel_m8814 (CancellationTokenSource_t1919 * __this, bool ___throwOnFirstException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenSource::.ctor()
extern "C" void CancellationTokenSource__ctor_m8815 (CancellationTokenSource_t1919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
