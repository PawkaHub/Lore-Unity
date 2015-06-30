#pragma once
#include <stdint.h>
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1430;
// System.String
struct String_t;
// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t1470;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t1511;
// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t1512;
// System.Func`2<System.Reflection.MethodInfo,System.Boolean>
struct Func_2_t1513;
// System.Object
#include "mscorlib_System_Object.h"
// Parse.PlatformHooks
struct  PlatformHooks_t1514  : public Object_t
{
};
struct PlatformHooks_t1514_StaticFields{
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.PlatformHooks::settings
	Object_t* ___settings_0;
	// System.String Parse.PlatformHooks::settingsPath
	String_t* ___settingsPath_1;
	// System.Boolean Parse.PlatformHooks::isCompiledByIL2CPP
	bool ___isCompiledByIL2CPP_2;
	// System.Boolean Parse.PlatformHooks::isWebPlayer
	bool ___isWebPlayer_3;
	// System.Threading.ReaderWriterLockSlim Parse.PlatformHooks::dispatchQueueLock
	ReaderWriterLockSlim_t1470 * ___dispatchQueueLock_4;
	// System.Collections.Generic.Queue`1<System.Action> Parse.PlatformHooks::dispatchQueue
	Queue_1_t1511 * ___dispatchQueue_5;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>,System.Threading.Tasks.Task`1<System.Object>> Parse.PlatformHooks::CS$<>9__CachedAnonymousMethodDelegate37
	Func_2_t1512 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate37_6;
	// System.Func`2<System.Reflection.MethodInfo,System.Boolean> Parse.PlatformHooks::CS$<>9__CachedAnonymousMethodDelegate48
	Func_2_t1513 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate48_7;
	// System.Func`2<System.Reflection.MethodInfo,System.Boolean> Parse.PlatformHooks::CS$<>9__CachedAnonymousMethodDelegate49
	Func_2_t1513 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate49_8;
};
