#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskFactory
struct TaskFactory_t1539;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1538;
// System.Threading.Tasks.Task
struct Task_t1418;
// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_3_t1571;
// System.Action`1<System.IAsyncResult>
struct Action_1_t1533;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1520;
// System.Action`1<System.Threading.Tasks.Task[]>
struct Action_1_t1536;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern "C" void TaskFactory__ctor_m7304 (TaskFactory_t1539 * __this, TaskScheduler_t1538 * ___scheduler, CancellationToken_t1398  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskFactory::.ctor()
extern "C" void TaskFactory__ctor_m7305 (TaskFactory_t1539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::get_Scheduler()
extern "C" TaskScheduler_t1538 * TaskFactory_get_Scheduler_m7306 (TaskFactory_t1539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,System.Object)
extern "C" Task_t1418 * TaskFactory_FromAsync_m7307 (TaskFactory_t1539 * __this, Func_3_t1571 * ___beginMethod, Action_1_t1533 * ___endMethod, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::ContinueWhenAll(System.Threading.Tasks.Task[],System.Action`1<System.Threading.Tasks.Task[]>)
extern "C" Task_t1418 * TaskFactory_ContinueWhenAll_m7308 (TaskFactory_t1539 * __this, TaskU5BU5D_t1520* ___tasks, Action_1_t1536 * ___continuationAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
