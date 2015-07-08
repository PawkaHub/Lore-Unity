#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1945;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t1948;
// System.Action
struct Action_t250;

// System.Void System.Threading.Tasks.TaskScheduler::.ctor(System.Threading.SynchronizationContext)
extern "C" void TaskScheduler__ctor_m8862 (TaskScheduler_t1945 * __this, SynchronizationContext_t1948 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskScheduler::Post(System.Action)
extern "C" void TaskScheduler_Post_m8863 (TaskScheduler_t1945 * __this, Action_t250 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::FromCurrentSynchronizationContext()
extern "C" TaskScheduler_t1945 * TaskScheduler_FromCurrentSynchronizationContext_m8864 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskScheduler::.cctor()
extern "C" void TaskScheduler__cctor_m8865 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
