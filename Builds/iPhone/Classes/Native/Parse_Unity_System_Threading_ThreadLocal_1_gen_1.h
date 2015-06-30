#pragma once
#include <stdint.h>
// System.Collections.Generic.IDictionary`2<System.Int64,System.Object>
struct IDictionary_2_t5567;
// System.Collections.Generic.IList`1<System.WeakReference>
struct IList_1_t5568;
// System.Func`1<System.Object>
struct Func_1_t1576;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.ThreadLocal`1<System.Object>
struct  ThreadLocal_1_t5569  : public Object_t
{
	// System.Boolean System.Threading.ThreadLocal`1<System.Object>::disposed
	bool ___disposed_3;
	// System.Int64 System.Threading.ThreadLocal`1<System.Object>::id
	int64_t ___id_4;
	// System.Func`1<T> System.Threading.ThreadLocal`1<System.Object>::valueFactory
	Func_1_t1576 * ___valueFactory_5;
};
struct ThreadLocal_1_t5569_StaticFields{
	// System.Int64 System.Threading.ThreadLocal`1<System.Object>::lastId
	int64_t ___lastId_0;
	// System.Collections.Generic.IList`1<System.WeakReference> System.Threading.ThreadLocal`1<System.Object>::allDataDictionaries
	Object_t* ___allDataDictionaries_2;
};
struct ThreadLocal_1_t5569_ThreadStaticFields{
	// System.Collections.Generic.IDictionary`2<System.Int64,T> System.Threading.ThreadLocal`1<System.Object>::threadLocalData
	Object_t* ___threadLocalData_1;
};
