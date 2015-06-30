#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task
struct Task_t1418;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t1539;
// System.AggregateException
struct AggregateException_t1516;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t1401;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1520;
// System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>
struct IEnumerable_1_t1569;
// System.Action
struct Action_t250;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void System.Threading.Tasks.Task::.ctor()
extern "C" void Task__ctor_m7280 (Task_t1418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::get_Factory()
extern "C" TaskFactory_t1539 * Task_get_Factory_m7281 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
extern "C" AggregateException_t1516 * Task_get_Exception_m7282 (Task_t1418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
extern "C" bool Task_get_IsCanceled_m7283 (Task_t1418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
extern "C" bool Task_get_IsCompleted_m7284 (Task_t1418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
extern "C" bool Task_get_IsFaulted_m7285 (Task_t1418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task::Wait()
extern "C" void Task_Wait_m7286 (Task_t1418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>)
extern "C" Task_t1418 * Task_ContinueWith_m7287 (Task_t1418 * __this, Action_1_t1401 * ___continuation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>,System.Threading.CancellationToken)
extern "C" Task_t1418 * Task_ContinueWith_m7288 (Task_t1418 * __this, Action_1_t1401 * ___continuation, CancellationToken_t1398  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::WhenAll(System.Threading.Tasks.Task[])
extern "C" Task_t1418 * Task_WhenAll_m7289 (Object_t * __this /* static, unused */, TaskU5BU5D_t1520* ___tasks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::WhenAll(System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>)
extern "C" Task_t1418 * Task_WhenAll_m7290 (Object_t * __this /* static, unused */, Object_t* ___tasks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
extern "C" Task_t1418 * Task_Run_m7291 (Object_t * __this /* static, unused */, Action_t250 * ___toRun, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task::.cctor()
extern "C" void Task__cctor_m7292 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Tasks.Task::<.cctor>b__22()
extern "C" int32_t Task_U3C_cctorU3Eb__22_m7293 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task::<.cctor>b__23(System.Action)
extern "C" void Task_U3C_cctorU3Eb__23_m7294 (Object_t * __this /* static, unused */, Action_t250 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
