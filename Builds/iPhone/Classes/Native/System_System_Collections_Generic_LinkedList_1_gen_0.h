#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t2661;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.LinkedList`1<System.Object>
struct  LinkedList_1_t2611  : public Object_t
{
	// System.UInt32 System.Collections.Generic.LinkedList`1<System.Object>::count
	uint32_t ___count_2;
	// System.UInt32 System.Collections.Generic.LinkedList`1<System.Object>::version
	uint32_t ___version_3;
	// System.Object System.Collections.Generic.LinkedList`1<System.Object>::syncRoot
	Object_t * ___syncRoot_4;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::first
	LinkedListNode_1_t2661 * ___first_5;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1<System.Object>::si
	SerializationInfo_t1322 * ___si_6;
};
