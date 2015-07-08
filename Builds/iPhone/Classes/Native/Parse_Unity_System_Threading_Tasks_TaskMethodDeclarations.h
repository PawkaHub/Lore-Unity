#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task
struct Task_t344;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t1946;
// System.AggregateException
struct AggregateException_t727;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t337;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1922;
// System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>
struct IEnumerable_1_t1989;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t1937;
// System.Action
struct Action_t250;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Threading.Tasks.Task::.ctor()
extern "C" void Task__ctor_m8829 (Task_t344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::get_Factory()
extern "C" TaskFactory_t1946 * Task_get_Factory_m8830 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
extern "C" AggregateException_t727 * Task_get_Exception_m3243 (Task_t344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
extern "C" bool Task_get_IsCanceled_m3245 (Task_t344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
extern "C" bool Task_get_IsCompleted_m8831 (Task_t344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
extern "C" bool Task_get_IsFaulted_m3242 (Task_t344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task::Wait()
extern "C" void Task_Wait_m8832 (Task_t344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>)
extern "C" Task_t344 * Task_ContinueWith_m3251 (Task_t344 * __this, Action_1_t337 * ___continuation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>,System.Threading.CancellationToken)
extern "C" Task_t344 * Task_ContinueWith_m8833 (Task_t344 * __this, Action_1_t337 * ___continuation, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::WhenAll(System.Threading.Tasks.Task[])
extern "C" Task_t344 * Task_WhenAll_m8834 (Object_t * __this /* static, unused */, TaskU5BU5D_t1922* ___tasks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::WhenAll(System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>)
extern "C" Task_t344 * Task_WhenAll_m8835 (Object_t * __this /* static, unused */, Object_t* ___tasks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::WhenAny(System.Threading.Tasks.Task[])
extern "C" Task_1_t1937 * Task_WhenAny_m8836 (Object_t * __this /* static, unused */, TaskU5BU5D_t1922* ___tasks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::WhenAny(System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>)
extern "C" Task_1_t1937 * Task_WhenAny_m8837 (Object_t * __this /* static, unused */, Object_t* ___tasks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
extern "C" Task_t344 * Task_Run_m8838 (Object_t * __this /* static, unused */, Action_t250 * ___toRun, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.TimeSpan)
extern "C" Task_t344 * Task_Delay_m8839 (Object_t * __this /* static, unused */, TimeSpan_t629  ___timespan, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task::.cctor()
extern "C" void Task__cctor_m8840 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Tasks.Task::<.cctor>b__22()
extern "C" int32_t Task_U3C_cctorU3Eb__22_m8841 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task::<.cctor>b__23(System.Action)
extern "C" void Task_U3C_cctorU3Eb__23_m8842 (Object_t * __this /* static, unused */, Action_t250 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
