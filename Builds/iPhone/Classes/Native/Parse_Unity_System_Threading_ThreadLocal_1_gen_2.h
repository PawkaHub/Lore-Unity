﻿#pragma once
#include <stdint.h>
// System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>
struct IDictionary_2_t5681;
// System.Collections.Generic.IList`1<System.WeakReference>
struct IList_1_t5568;
// System.Func`1<System.Byte>
struct Func_1_t5263;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.ThreadLocal`1<System.Byte>
struct  ThreadLocal_1_t5682  : public Object_t
{
	// System.Boolean System.Threading.ThreadLocal`1<System.Byte>::disposed
	bool ___disposed_3;
	// System.Int64 System.Threading.ThreadLocal`1<System.Byte>::id
	int64_t ___id_4;
	// System.Func`1<T> System.Threading.ThreadLocal`1<System.Byte>::valueFactory
	Func_1_t5263 * ___valueFactory_5;
};
struct ThreadLocal_1_t5682_StaticFields{
	// System.Int64 System.Threading.ThreadLocal`1<System.Byte>::lastId
	int64_t ___lastId_0;
	// System.Collections.Generic.IList`1<System.WeakReference> System.Threading.ThreadLocal`1<System.Byte>::allDataDictionaries
	Object_t* ___allDataDictionaries_2;
};
struct ThreadLocal_1_t5682_ThreadStaticFields{
	// System.Collections.Generic.IDictionary`2<System.Int64,T> System.Threading.ThreadLocal`1<System.Byte>::threadLocalData
	Object_t* ___threadLocalData_1;
};