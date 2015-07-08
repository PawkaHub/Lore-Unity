#pragma once
#include <stdint.h>
// System.Threading.Tasks.Task
struct Task_t344;
// System.Object
struct Object_t;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t337;
// System.Object
#include "mscorlib_System_Object.h"
// Parse.Internal.TaskQueue
struct  TaskQueue_t1798  : public Object_t
{
	// System.Threading.Tasks.Task Parse.Internal.TaskQueue::tail
	Task_t344 * ___tail_0;
	// System.Object Parse.Internal.TaskQueue::mutex
	Object_t * ___mutex_1;
};
struct TaskQueue_t1798_StaticFields{
	// System.Action`1<System.Threading.Tasks.Task> Parse.Internal.TaskQueue::CS$<>9__CachedAnonymousMethodDelegate1
	Action_1_t337 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2;
};
