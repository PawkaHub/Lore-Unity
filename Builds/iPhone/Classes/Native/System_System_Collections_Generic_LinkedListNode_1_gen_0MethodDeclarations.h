#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t2661;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t2611;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m33938_gshared (LinkedListNode_1_t2661 * __this, LinkedList_1_t2611 * ___list, Object_t * ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m33938(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t2661 *, LinkedList_1_t2611 *, Object_t *, const MethodInfo*))LinkedListNode_1__ctor_m33938_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m33939_gshared (LinkedListNode_1_t2661 * __this, LinkedList_1_t2611 * ___list, Object_t * ___value, LinkedListNode_1_t2661 * ___previousNode, LinkedListNode_1_t2661 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m33939(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t2661 *, LinkedList_1_t2611 *, Object_t *, LinkedListNode_1_t2661 *, LinkedListNode_1_t2661 *, const MethodInfo*))LinkedListNode_1__ctor_m33939_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::Detach()
extern "C" void LinkedListNode_1_Detach_m33940_gshared (LinkedListNode_1_t2661 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m33940(__this, method) (( void (*) (LinkedListNode_1_t2661 *, const MethodInfo*))LinkedListNode_1_Detach_m33940_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_List()
extern "C" LinkedList_1_t2611 * LinkedListNode_1_get_List_m33941_gshared (LinkedListNode_1_t2661 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m33941(__this, method) (( LinkedList_1_t2611 * (*) (LinkedListNode_1_t2661 *, const MethodInfo*))LinkedListNode_1_get_List_m33941_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Next()
extern "C" LinkedListNode_1_t2661 * LinkedListNode_1_get_Next_m12160_gshared (LinkedListNode_1_t2661 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Next_m12160(__this, method) (( LinkedListNode_1_t2661 * (*) (LinkedListNode_1_t2661 *, const MethodInfo*))LinkedListNode_1_get_Next_m12160_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
extern "C" Object_t * LinkedListNode_1_get_Value_m12159_gshared (LinkedListNode_1_t2661 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m12159(__this, method) (( Object_t * (*) (LinkedListNode_1_t2661 *, const MethodInfo*))LinkedListNode_1_get_Value_m12159_gshared)(__this, method)
