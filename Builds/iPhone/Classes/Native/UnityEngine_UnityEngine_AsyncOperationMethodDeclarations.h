#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t946;
struct AsyncOperation_t946_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m12894 (AsyncOperation_t946 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m12895 (AsyncOperation_t946 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m12896 (AsyncOperation_t946 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
extern "C" bool AsyncOperation_get_isDone_m5538 (AsyncOperation_t946 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t946_marshal(const AsyncOperation_t946& unmarshaled, AsyncOperation_t946_marshaled& marshaled);
void AsyncOperation_t946_marshal_back(const AsyncOperation_t946_marshaled& marshaled, AsyncOperation_t946& unmarshaled);
void AsyncOperation_t946_marshal_cleanup(AsyncOperation_t946_marshaled& marshaled);
