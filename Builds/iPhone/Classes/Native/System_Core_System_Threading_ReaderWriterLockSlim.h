#pragma once
#include <stdint.h>
// System.Threading.Thread
struct Thread_t628;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t3284;
// System.Threading.ReaderWriterLockSlim/LockDetails[]
struct LockDetailsU5BU5D_t3285;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.LockRecursionPolicy
#include "System_Core_System_Threading_LockRecursionPolicy.h"
// System.Threading.ReaderWriterLockSlim
struct  ReaderWriterLockSlim_t1860  : public Object_t
{
	// System.Int32 System.Threading.ReaderWriterLockSlim::myLock
	int32_t ___myLock_1;
	// System.Int32 System.Threading.ReaderWriterLockSlim::owners
	int32_t ___owners_2;
	// System.Threading.Thread System.Threading.ReaderWriterLockSlim::upgradable_thread
	Thread_t628 * ___upgradable_thread_3;
	// System.Threading.Thread System.Threading.ReaderWriterLockSlim::write_thread
	Thread_t628 * ___write_thread_4;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numWriteWaiters
	uint32_t ___numWriteWaiters_5;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numReadWaiters
	uint32_t ___numReadWaiters_6;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numUpgradeWaiters
	uint32_t ___numUpgradeWaiters_7;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::writeEvent
	EventWaitHandle_t3284 * ___writeEvent_8;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::readEvent
	EventWaitHandle_t3284 * ___readEvent_9;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::upgradeEvent
	EventWaitHandle_t3284 * ___upgradeEvent_10;
	// System.Threading.LockRecursionPolicy System.Threading.ReaderWriterLockSlim::recursionPolicy
	int32_t ___recursionPolicy_11;
	// System.Threading.ReaderWriterLockSlim/LockDetails[] System.Threading.ReaderWriterLockSlim::read_locks
	LockDetailsU5BU5D_t3285* ___read_locks_12;
};
struct ReaderWriterLockSlim_t1860_StaticFields{
	// System.Boolean System.Threading.ReaderWriterLockSlim::smp
	bool ___smp_0;
};
