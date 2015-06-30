#pragma once
#include <stdint.h>
// System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>
struct IDictionary_2_t5785;
// System.Collections.Generic.IList`1<System.WeakReference>
struct IList_1_t5568;
// System.Func`1<System.Int32>
struct Func_1_t1529;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.ThreadLocal`1<System.Int32>
struct  ThreadLocal_1_t1526  : public Object_t
{
	// System.Boolean System.Threading.ThreadLocal`1<System.Int32>::disposed
	bool ___disposed_3;
	// System.Int64 System.Threading.ThreadLocal`1<System.Int32>::id
	int64_t ___id_4;
	// System.Func`1<T> System.Threading.ThreadLocal`1<System.Int32>::valueFactory
	Func_1_t1529 * ___valueFactory_5;
};
struct ThreadLocal_1_t1526_StaticFields{
	// System.Int64 System.Threading.ThreadLocal`1<System.Int32>::lastId
	int64_t ___lastId_0;
	// System.Collections.Generic.IList`1<System.WeakReference> System.Threading.ThreadLocal`1<System.Int32>::allDataDictionaries
	Object_t* ___allDataDictionaries_2;
};
struct ThreadLocal_1_t1526_ThreadStaticFields{
	// System.Collections.Generic.IDictionary`2<System.Int64,T> System.Threading.ThreadLocal`1<System.Int32>::threadLocalData
	Object_t* ___threadLocalData_1;
};
