#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.SynchronizedEventHandler`1<System.Object>
struct SynchronizedEventHandler_1_t6793;
// System.Delegate
struct Delegate_t593;
// System.Threading.Tasks.Task
struct Task_t723;
// System.Object
struct Object_t;

// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Add(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Add_m37162_gshared (SynchronizedEventHandler_1_t6793 * __this, Delegate_t593 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Add_m37162(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t6793 *, Delegate_t593 *, const MethodInfo*))SynchronizedEventHandler_1_Add_m37162_gshared)(__this, ___del, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Remove(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Remove_m37163_gshared (SynchronizedEventHandler_1_t6793 * __this, Delegate_t593 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Remove_m37163(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t6793 *, Delegate_t593 *, const MethodInfo*))SynchronizedEventHandler_1_Remove_m37163_gshared)(__this, ___del, method)
// System.Threading.Tasks.Task Parse.Internal.SynchronizedEventHandler`1<System.Object>::Invoke(System.Object,T)
extern "C" Task_t723 * SynchronizedEventHandler_1_Invoke_m37164_gshared (SynchronizedEventHandler_1_t6793 * __this, Object_t * ___sender, Object_t * ___args, const MethodInfo* method);
#define SynchronizedEventHandler_1_Invoke_m37164(__this, ___sender, ___args, method) (( Task_t723 * (*) (SynchronizedEventHandler_1_t6793 *, Object_t *, Object_t *, const MethodInfo*))SynchronizedEventHandler_1_Invoke_m37164_gshared)(__this, ___sender, ___args, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::.ctor()
extern "C" void SynchronizedEventHandler_1__ctor_m37165_gshared (SynchronizedEventHandler_1_t6793 * __this, const MethodInfo* method);
#define SynchronizedEventHandler_1__ctor_m37165(__this, method) (( void (*) (SynchronizedEventHandler_1_t6793 *, const MethodInfo*))SynchronizedEventHandler_1__ctor_m37165_gshared)(__this, method)
