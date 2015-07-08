#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t1529;
struct AsyncOperation_t1529_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m17193 (AsyncOperation_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m17194 (AsyncOperation_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m17195 (AsyncOperation_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
extern "C" bool AsyncOperation_get_isDone_m7834 (AsyncOperation_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t1529_marshal(const AsyncOperation_t1529& unmarshaled, AsyncOperation_t1529_marshaled& marshaled);
void AsyncOperation_t1529_marshal_back(const AsyncOperation_t1529_marshaled& marshaled, AsyncOperation_t1529& unmarshaled);
void AsyncOperation_t1529_marshal_cleanup(AsyncOperation_t1529_marshaled& marshaled);
