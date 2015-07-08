#pragma once
#include <stdint.h>
// System.Threading.ThreadLocal`1<System.Int32>
struct ThreadLocal_1_t1931;
// System.Action`1<System.Action>
struct Action_1_t1932;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Action`1<System.Threading.Tasks.Task>>
struct IList_1_t1933;
// System.AggregateException
struct AggregateException_t727;
// System.Func`1<System.Int32>
struct Func_1_t1934;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.Tasks.Task
struct  Task_t344  : public Object_t
{
	// System.Object System.Threading.Tasks.Task::mutex
	Object_t * ___mutex_2;
	// System.Collections.Generic.IList`1<System.Action`1<System.Threading.Tasks.Task>> System.Threading.Tasks.Task::continuations
	Object_t* ___continuations_3;
	// System.AggregateException System.Threading.Tasks.Task::exception
	AggregateException_t727 * ___exception_4;
	// System.Boolean System.Threading.Tasks.Task::isCanceled
	bool ___isCanceled_5;
	// System.Boolean System.Threading.Tasks.Task::isCompleted
	bool ___isCompleted_6;
};
struct Task_t344_StaticFields{
	// System.Threading.ThreadLocal`1<System.Int32> System.Threading.Tasks.Task::executionDepth
	ThreadLocal_1_t1931 * ___executionDepth_0;
	// System.Action`1<System.Action> System.Threading.Tasks.Task::immediateExecutor
	Action_1_t1932 * ___immediateExecutor_1;
	// System.Func`1<System.Int32> System.Threading.Tasks.Task::CS$<>9__CachedAnonymousMethodDelegate24
	Func_1_t1934 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate24_7;
	// System.Action`1<System.Action> System.Threading.Tasks.Task::CS$<>9__CachedAnonymousMethodDelegate25
	Action_1_t1932 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate25_8;
};
