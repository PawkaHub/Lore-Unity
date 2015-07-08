#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.SynchronizedEventHandler`1<System.Object>
struct SynchronizedEventHandler_1_t7111;
// System.Delegate
struct Delegate_t651;
// System.Threading.Tasks.Task
struct Task_t344;
// System.Object
struct Object_t;

// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Add(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Add_m38487_gshared (SynchronizedEventHandler_1_t7111 * __this, Delegate_t651 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Add_m38487(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t7111 *, Delegate_t651 *, const MethodInfo*))SynchronizedEventHandler_1_Add_m38487_gshared)(__this, ___del, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Remove(System.Delegate)
extern "C" void SynchronizedEventHandler_1_Remove_m38488_gshared (SynchronizedEventHandler_1_t7111 * __this, Delegate_t651 * ___del, const MethodInfo* method);
#define SynchronizedEventHandler_1_Remove_m38488(__this, ___del, method) (( void (*) (SynchronizedEventHandler_1_t7111 *, Delegate_t651 *, const MethodInfo*))SynchronizedEventHandler_1_Remove_m38488_gshared)(__this, ___del, method)
// System.Threading.Tasks.Task Parse.Internal.SynchronizedEventHandler`1<System.Object>::Invoke(System.Object,T)
extern "C" Task_t344 * SynchronizedEventHandler_1_Invoke_m38489_gshared (SynchronizedEventHandler_1_t7111 * __this, Object_t * ___sender, Object_t * ___args, const MethodInfo* method);
#define SynchronizedEventHandler_1_Invoke_m38489(__this, ___sender, ___args, method) (( Task_t344 * (*) (SynchronizedEventHandler_1_t7111 *, Object_t *, Object_t *, const MethodInfo*))SynchronizedEventHandler_1_Invoke_m38489_gshared)(__this, ___sender, ___args, method)
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::.ctor()
extern "C" void SynchronizedEventHandler_1__ctor_m38490_gshared (SynchronizedEventHandler_1_t7111 * __this, const MethodInfo* method);
#define SynchronizedEventHandler_1__ctor_m38490(__this, method) (( void (*) (SynchronizedEventHandler_1_t7111 *, const MethodInfo*))SynchronizedEventHandler_1__ctor_m38490_gshared)(__this, method)
