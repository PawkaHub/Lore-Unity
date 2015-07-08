#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t1860;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t3284;
// System.Threading.ReaderWriterLockSlim/LockDetails
struct LockDetails_t3283;

// System.Void System.Threading.ReaderWriterLockSlim::.ctor()
extern "C" void ReaderWriterLockSlim__ctor_m9220 (ReaderWriterLockSlim_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::.cctor()
extern "C" void ReaderWriterLockSlim__cctor_m10385 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterReadLock()
extern "C" void ReaderWriterLockSlim_EnterReadLock_m9207 (ReaderWriterLockSlim_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterReadLock(System.Int32)
extern "C" bool ReaderWriterLockSlim_TryEnterReadLock_m10386 (ReaderWriterLockSlim_t1860 * __this, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitReadLock()
extern "C" void ReaderWriterLockSlim_ExitReadLock_m9208 (ReaderWriterLockSlim_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterWriteLock()
extern "C" void ReaderWriterLockSlim_EnterWriteLock_m9210 (ReaderWriterLockSlim_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterWriteLock(System.Int32)
extern "C" bool ReaderWriterLockSlim_TryEnterWriteLock_m10387 (ReaderWriterLockSlim_t1860 * __this, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitWriteLock()
extern "C" void ReaderWriterLockSlim_ExitWriteLock_m9211 (ReaderWriterLockSlim_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterUpgradeableReadLock()
extern "C" void ReaderWriterLockSlim_EnterUpgradeableReadLock_m9209 (ReaderWriterLockSlim_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterUpgradeableReadLock(System.Int32)
extern "C" bool ReaderWriterLockSlim_TryEnterUpgradeableReadLock_m10388 (ReaderWriterLockSlim_t1860 * __this, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitUpgradeableReadLock()
extern "C" void ReaderWriterLockSlim_ExitUpgradeableReadLock_m9212 (ReaderWriterLockSlim_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::Dispose()
extern "C" void ReaderWriterLockSlim_Dispose_m10389 (ReaderWriterLockSlim_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsWriteLockHeld()
extern "C" bool ReaderWriterLockSlim_get_IsWriteLockHeld_m9357 (ReaderWriterLockSlim_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsUpgradeableReadLockHeld()
extern "C" bool ReaderWriterLockSlim_get_IsUpgradeableReadLockHeld_m10390 (ReaderWriterLockSlim_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveUpgradeCount()
extern "C" int32_t ReaderWriterLockSlim_get_RecursiveUpgradeCount_m10391 (ReaderWriterLockSlim_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveWriteCount()
extern "C" int32_t ReaderWriterLockSlim_get_RecursiveWriteCount_m10392 (ReaderWriterLockSlim_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterMyLock()
extern "C" void ReaderWriterLockSlim_EnterMyLock_m10393 (ReaderWriterLockSlim_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterMyLockSpin()
extern "C" void ReaderWriterLockSlim_EnterMyLockSpin_m10394 (ReaderWriterLockSlim_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitMyLock()
extern "C" void ReaderWriterLockSlim_ExitMyLock_m10395 (ReaderWriterLockSlim_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitAndWakeUpAppropriateWaiters()
extern "C" void ReaderWriterLockSlim_ExitAndWakeUpAppropriateWaiters_m10396 (ReaderWriterLockSlim_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::LazyCreateEvent(System.Threading.EventWaitHandle&,System.Boolean)
extern "C" void ReaderWriterLockSlim_LazyCreateEvent_m10397 (ReaderWriterLockSlim_t1860 * __this, EventWaitHandle_t3284 ** ___waitEvent, bool ___makeAutoResetEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::WaitOnEvent(System.Threading.EventWaitHandle,System.UInt32&,System.Int32)
extern "C" bool ReaderWriterLockSlim_WaitOnEvent_m10398 (ReaderWriterLockSlim_t1860 * __this, EventWaitHandle_t3284 * ___waitEvent, uint32_t* ___numWaiters, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ReaderWriterLockSlim/LockDetails System.Threading.ReaderWriterLockSlim::GetReadLockDetails(System.Int32,System.Boolean)
extern "C" LockDetails_t3283 * ReaderWriterLockSlim_GetReadLockDetails_m10399 (ReaderWriterLockSlim_t1860 * __this, int32_t ___threadId, bool ___create, const MethodInfo* method) IL2CPP_METHOD_ATTR;
