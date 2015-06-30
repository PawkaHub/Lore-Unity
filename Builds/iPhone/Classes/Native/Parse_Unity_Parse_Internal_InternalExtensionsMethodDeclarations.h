#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.InternalExtensions
struct InternalExtensions_t1406;
// System.Threading.Tasks.Task
struct Task_t1418;
// System.Object
struct Object_t;
// Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>
struct PartialAccessor_1_t1483;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t1401;
// System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_1_t1404;
// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t1403;

// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::Safe(System.Threading.Tasks.Task)
extern "C" Task_t1418 * InternalExtensions_Safe_m6829 (Object_t * __this /* static, unused */, Task_t1418 * ___task, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::PartialAsync(System.Object,Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>)
extern "C" Task_t1418 * InternalExtensions_PartialAsync_m6830 (Object_t * __this /* static, unused */, Object_t * ___self, PartialAccessor_1_t1483 * ___partial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::PartialAsync(Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>)
extern "C" Task_t1418 * InternalExtensions_PartialAsync_m6831 (Object_t * __this /* static, unused */, PartialAccessor_1_t1483 * ___partial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::OnSuccess(System.Threading.Tasks.Task,System.Action`1<System.Threading.Tasks.Task>)
extern "C" Task_t1418 * InternalExtensions_OnSuccess_m6832 (Object_t * __this /* static, unused */, Task_t1418 * ___task, Action_1_t1401 * ___continuation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::WhileAsync(System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>,System.Func`1<System.Threading.Tasks.Task>)
extern "C" Task_t1418 * InternalExtensions_WhileAsync_m6833 (Object_t * __this /* static, unused */, Func_1_t1404 * ___predicate, Func_1_t1403 * ___body, const MethodInfo* method) IL2CPP_METHOD_ATTR;
