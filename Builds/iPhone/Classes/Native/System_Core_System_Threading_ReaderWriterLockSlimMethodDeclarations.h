#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t1609;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t3046;
// System.Threading.ReaderWriterLockSlim/LockDetails
struct LockDetails_t3045;

// System.Void System.Threading.ReaderWriterLockSlim::.ctor()
extern "C" void ReaderWriterLockSlim__ctor_m8788 (ReaderWriterLockSlim_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::.cctor()
extern "C" void ReaderWriterLockSlim__cctor_m9965 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterReadLock()
extern "C" void ReaderWriterLockSlim_EnterReadLock_m8775 (ReaderWriterLockSlim_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterReadLock(System.Int32)
extern "C" bool ReaderWriterLockSlim_TryEnterReadLock_m9966 (ReaderWriterLockSlim_t1609 * __this, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitReadLock()
extern "C" void ReaderWriterLockSlim_ExitReadLock_m8776 (ReaderWriterLockSlim_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterWriteLock()
extern "C" void ReaderWriterLockSlim_EnterWriteLock_m8778 (ReaderWriterLockSlim_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterWriteLock(System.Int32)
extern "C" bool ReaderWriterLockSlim_TryEnterWriteLock_m9967 (ReaderWriterLockSlim_t1609 * __this, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitWriteLock()
extern "C" void ReaderWriterLockSlim_ExitWriteLock_m8779 (ReaderWriterLockSlim_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterUpgradeableReadLock()
extern "C" void ReaderWriterLockSlim_EnterUpgradeableReadLock_m8777 (ReaderWriterLockSlim_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterUpgradeableReadLock(System.Int32)
extern "C" bool ReaderWriterLockSlim_TryEnterUpgradeableReadLock_m9968 (ReaderWriterLockSlim_t1609 * __this, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitUpgradeableReadLock()
extern "C" void ReaderWriterLockSlim_ExitUpgradeableReadLock_m8780 (ReaderWriterLockSlim_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::Dispose()
extern "C" void ReaderWriterLockSlim_Dispose_m9969 (ReaderWriterLockSlim_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsWriteLockHeld()
extern "C" bool ReaderWriterLockSlim_get_IsWriteLockHeld_m8928 (ReaderWriterLockSlim_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsUpgradeableReadLockHeld()
extern "C" bool ReaderWriterLockSlim_get_IsUpgradeableReadLockHeld_m9970 (ReaderWriterLockSlim_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveUpgradeCount()
extern "C" int32_t ReaderWriterLockSlim_get_RecursiveUpgradeCount_m9971 (ReaderWriterLockSlim_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveWriteCount()
extern "C" int32_t ReaderWriterLockSlim_get_RecursiveWriteCount_m9972 (ReaderWriterLockSlim_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterMyLock()
extern "C" void ReaderWriterLockSlim_EnterMyLock_m9973 (ReaderWriterLockSlim_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterMyLockSpin()
extern "C" void ReaderWriterLockSlim_EnterMyLockSpin_m9974 (ReaderWriterLockSlim_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitMyLock()
extern "C" void ReaderWriterLockSlim_ExitMyLock_m9975 (ReaderWriterLockSlim_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitAndWakeUpAppropriateWaiters()
extern "C" void ReaderWriterLockSlim_ExitAndWakeUpAppropriateWaiters_m9976 (ReaderWriterLockSlim_t1609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::LazyCreateEvent(System.Threading.EventWaitHandle&,System.Boolean)
extern "C" void ReaderWriterLockSlim_LazyCreateEvent_m9977 (ReaderWriterLockSlim_t1609 * __this, EventWaitHandle_t3046 ** ___waitEvent, bool ___makeAutoResetEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::WaitOnEvent(System.Threading.EventWaitHandle,System.UInt32&,System.Int32)
extern "C" bool ReaderWriterLockSlim_WaitOnEvent_m9978 (ReaderWriterLockSlim_t1609 * __this, EventWaitHandle_t3046 * ___waitEvent, uint32_t* ___numWaiters, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ReaderWriterLockSlim/LockDetails System.Threading.ReaderWriterLockSlim::GetReadLockDetails(System.Int32,System.Boolean)
extern "C" LockDetails_t3045 * ReaderWriterLockSlim_GetReadLockDetails_m9979 (ReaderWriterLockSlim_t1609 * __this, int32_t ___threadId, bool ___create, const MethodInfo* method) IL2CPP_METHOD_ATTR;
