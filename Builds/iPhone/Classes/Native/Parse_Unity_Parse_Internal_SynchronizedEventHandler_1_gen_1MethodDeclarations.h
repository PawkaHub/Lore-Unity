#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.SynchronizedEventHandler`1<System.Object>
struct SynchronizedEventHandler_1_t5641;
// System.Threading.Tasks.Task
struct Task_t1418;
// System.Object
struct Object_t;

// System.Threading.Tasks.Task Parse.Internal.SynchronizedEventHandler`1<System.Object>::Invoke(System.Object,T)
extern "C" Task_t1418 * SynchronizedEventHandler_1_Invoke_m33887_gshared (SynchronizedEventHandler_1_t5641 * __this, Object_t * ___sender, Object_t * ___args, const MethodInfo* method);
#define SynchronizedEventHandler_1_Invoke_m33887(__this, ___sender, ___args, method) (( Task_t1418 * (*) (SynchronizedEventHandler_1_t5641 *, Object_t *, Object_t *, const MethodInfo*))SynchronizedEventHandler_1_Invoke_m33887_gshared)(__this, ___sender, ___args, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::.ctor()
extern "C" void SynchronizedEventHandler_1__ctor_m33888_gshared (SynchronizedEventHandler_1_t5641 * __this, const MethodInfo* method);
#define SynchronizedEventHandler_1__ctor_m33888(__this, method) (( void (*) (SynchronizedEventHandler_1_t5641 *, const MethodInfo*))SynchronizedEventHandler_1__ctor_m33888_gshared)(__this, method)
