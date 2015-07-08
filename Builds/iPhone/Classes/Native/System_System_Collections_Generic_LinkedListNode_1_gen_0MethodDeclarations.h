#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t3828;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t3777;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m38540_gshared (LinkedListNode_1_t3828 * __this, LinkedList_1_t3777 * ___list, Object_t * ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m38540(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t3828 *, LinkedList_1_t3777 *, Object_t *, const MethodInfo*))LinkedListNode_1__ctor_m38540_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m38541_gshared (LinkedListNode_1_t3828 * __this, LinkedList_1_t3777 * ___list, Object_t * ___value, LinkedListNode_1_t3828 * ___previousNode, LinkedListNode_1_t3828 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m38541(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t3828 *, LinkedList_1_t3777 *, Object_t *, LinkedListNode_1_t3828 *, LinkedListNode_1_t3828 *, const MethodInfo*))LinkedListNode_1__ctor_m38541_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::Detach()
extern "C" void LinkedListNode_1_Detach_m38542_gshared (LinkedListNode_1_t3828 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m38542(__this, method) (( void (*) (LinkedListNode_1_t3828 *, const MethodInfo*))LinkedListNode_1_Detach_m38542_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_List()
extern "C" LinkedList_1_t3777 * LinkedListNode_1_get_List_m38543_gshared (LinkedListNode_1_t3828 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m38543(__this, method) (( LinkedList_1_t3777 * (*) (LinkedListNode_1_t3828 *, const MethodInfo*))LinkedListNode_1_get_List_m38543_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Next()
extern "C" LinkedListNode_1_t3828 * LinkedListNode_1_get_Next_m11371_gshared (LinkedListNode_1_t3828 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Next_m11371(__this, method) (( LinkedListNode_1_t3828 * (*) (LinkedListNode_1_t3828 *, const MethodInfo*))LinkedListNode_1_get_Next_m11371_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
extern "C" Object_t * LinkedListNode_1_get_Value_m11370_gshared (LinkedListNode_1_t3828 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m11370(__this, method) (( Object_t * (*) (LinkedListNode_1_t3828 *, const MethodInfo*))LinkedListNode_1_get_Value_m11370_gshared)(__this, method)
