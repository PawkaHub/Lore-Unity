﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t9430;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void ThreadSafeDictionaryValueFactory_2__ctor_m70463_gshared (ThreadSafeDictionaryValueFactory_2_t9430 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2__ctor_m70463(__this, ___object, ___method, method) (( void (*) (ThreadSafeDictionaryValueFactory_2_t9430 *, Object_t *, IntPtr_t, const MethodInfo*))ThreadSafeDictionaryValueFactory_2__ctor_m70463_gshared)(__this, ___object, ___method, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::Invoke(TKey)
extern "C" Object_t * ThreadSafeDictionaryValueFactory_2_Invoke_m70465_gshared (ThreadSafeDictionaryValueFactory_2_t9430 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2_Invoke_m70465(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionaryValueFactory_2_t9430 *, Object_t *, const MethodInfo*))ThreadSafeDictionaryValueFactory_2_Invoke_m70465_gshared)(__this, ___key, method)
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::BeginInvoke(TKey,System.AsyncCallback,System.Object)
extern "C" Object_t * ThreadSafeDictionaryValueFactory_2_BeginInvoke_m70467_gshared (ThreadSafeDictionaryValueFactory_2_t9430 * __this, Object_t * ___key, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2_BeginInvoke_m70467(__this, ___key, ___callback, ___object, method) (( Object_t * (*) (ThreadSafeDictionaryValueFactory_2_t9430 *, Object_t *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))ThreadSafeDictionaryValueFactory_2_BeginInvoke_m70467_gshared)(__this, ___key, ___callback, ___object, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * ThreadSafeDictionaryValueFactory_2_EndInvoke_m70469_gshared (ThreadSafeDictionaryValueFactory_2_t9430 * __this, Object_t * ___result, const MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2_EndInvoke_m70469(__this, ___result, method) (( Object_t * (*) (ThreadSafeDictionaryValueFactory_2_t9430 *, Object_t *, const MethodInfo*))ThreadSafeDictionaryValueFactory_2_EndInvoke_m70469_gshared)(__this, ___result, method)
