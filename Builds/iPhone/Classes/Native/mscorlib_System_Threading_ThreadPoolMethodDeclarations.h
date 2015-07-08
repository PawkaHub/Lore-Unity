#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ThreadPool
struct ThreadPool_t5592;
// System.Threading.WaitCallback
struct WaitCallback_t653;
// System.Object
struct Object_t;

// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback)
extern "C" bool ThreadPool_QueueUserWorkItem_m9367 (Object_t * __this /* static, unused */, WaitCallback_t653 * ___callBack, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
extern "C" bool ThreadPool_QueueUserWorkItem_m2730 (Object_t * __this /* static, unused */, WaitCallback_t653 * ___callBack, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
