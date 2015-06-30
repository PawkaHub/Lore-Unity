#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t1517;
// System.Action
struct Action_t250;
// System.Threading.CancellationTokenRegistration
#include "Parse_Unity_System_Threading_CancellationTokenRegistration.h"

// System.Threading.CancellationTokenRegistration System.Threading.CancellationTokenSource::Register(System.Action)
extern "C" CancellationTokenRegistration_t1518  CancellationTokenSource_Register_m7268 (CancellationTokenSource_t1517 * __this, Action_t250 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenSource::Unregister(System.Action)
extern "C" void CancellationTokenSource_Unregister_m7269 (CancellationTokenSource_t1517 * __this, Action_t250 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.CancellationTokenSource::get_IsCancellationRequested()
extern "C" bool CancellationTokenSource_get_IsCancellationRequested_m7270 (CancellationTokenSource_t1517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
